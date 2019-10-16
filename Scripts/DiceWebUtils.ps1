# Copyright (c) Microsoft Corporation.
# Licensed under the MIT License.

function InflateDataFile([string] $filePath, [float] $sizeInMB) {

    if ([string]::IsNullOrWhiteSpace($filePath)) {
        throw [ArgumentException] "$filePath cannot be null or white space"
    }

    if ($sizeInMB -lt 0) {
        Write-Output "sizeInMB ($sizeInMB) is less than zero. Resetting to zero."
        $sizeInMB = 0
    }

    $fullPath = [System.IO.Path]::GetFullPath($filePath)

    $workingDrive = [System.IO.DriveInfo]::new(@([System.IO.Path]::GetPathRoot($fullPath)))
    if ($workingDrive.AvailableFreeSpace -lt ($sizeInMB * [Math]::Pow(1024, 2)) * 3)
    {
        throw "Not enough space on drive to create data file"
    }

    $stream = [System.IO.FileStream]::new($fullPath, [System.IO.FileMode]::Create, [System.IO.FileAccess]::ReadWrite)
    try {
        # Do not fail, just do not inflate
        if ($sizeInMB -eq 0) {
            return;
        }

        # Block that is used to generate random data
        $blockSize = 1024*8;
        $data = [System.Byte[]]::new($blockSize)

        # The number of blocks required to accomodate for 1Mb
        $blocksPerMb = [Math]::Pow(1024, 2)/$blockSize

        # Fill with randomly generated data
        $randomGenerator = [System.Random]::new()

        for ($i = 0; $i -lt $sizeInMB*$blocksPerMb; $i++) {
            $randomGenerator.NextBytes($data)
            $stream.Write($data, 0, $data.Length)
        }
    } finally {
        $stream.Close();
    }
}

function CreateLanguageResources([string] $stringsPath, $languages, [string] $defaultLang = "en-us") {
    # assume there will be a resource for en-us
    $defaultPath = [System.IO.Path]::GetFullPath((Join-Path (Join-Path $stringsPath $defaultLang) "Resources.resw"))
    if (-not (Test-Path $defaultPath)) {
        throw "Cannot find $defaultPath"
    }

    # create a copy of the default resource for other languages
    $defaultContent = Get-Content -Raw -Path $defaultPath
    foreach ($lang in $languages) {
        if ($lang -ine $defaultLang) {
            $langContent = $defaultContent.Replace($defaultLang, $lang);
            $langPath = Join-Path $stringsPath $lang
            mkdir $langPath -Force | Out-Null
            Set-Content -Value $langContent -Path (Join-Path $langPath "Resources.resw") -Force
        }
    }
}

function CreateLanguageResourcesForBridge([string] $stringsPath, $languages, [string] $defaultLang = "en-us") {
    # assume there will be a default resource
    $defaultPath = [System.IO.Path]::GetFullPath((Join-Path $stringsPath "Resources.resx"))
    if (-not (Test-Path $defaultPath)) {
        throw "Cannot find $defaultPath"
    }

    # create a copy of the default resource for other languages
    $defaultContent = Get-Content -Raw -Path $defaultPath
    foreach ($lang in $languages) {
        if ($lang -ine $defaultLang) {
            $langContent = $defaultContent.Replace($defaultLang, $lang);
            Set-Content -Value $langContent -Path (Join-Path $stringsPath "Resources.$($lang).resx") -Force
        }
    }
}


