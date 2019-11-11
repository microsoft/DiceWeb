# Copyright (c) Microsoft Corporation.
# Licensed under the MIT License.

# set directory, import utility functions, and load settings
Set-Location $PSScriptRoot
[System.Environment]::CurrentDirectory = $PSScriptRoot
.(Join-Path $PSScriptRoot "..\..\..\Scripts\DiceWebUtils.ps1")
$settings = ConvertFrom-Json (Get-Content ".\DiceSettings.json" -Raw)

# make sure there is a clean output folder
Remove-Item -Path "..\out" -Force -Recurse -ErrorAction SilentlyContinue
mkdir "..\out" -Force -ErrorAction SilentlyContinue

# use the XDK to pack the Durango loose images folder
$makePkgPath = GetXdkMakePkgPath
& $makePkgPath pack /l /v /f "..\chunks.xml" /d ".\Durango\Layout\Image\Loose" /pd "..\out"

# get the largest file from the output folder
$xvcFile = (Get-ChildItem -Path "..\out")[0]
Write-Output "Attempt to set the extension to XVC for $($xvcFile.FullName)"
Rename-Item -Path $xvcFile.FullName -NewName ($xvcFile.FullName + ".xvc")

Write-Output "LastError = $LASTEXITCODE "