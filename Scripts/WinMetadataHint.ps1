# Copyright (c) Microsoft Corporation.
# Licensed under the MIT License.

# Check default location of \System32\WinMetadata
if (Test-Path ($env:windir + "\System32\WinMeta data")) {
    return $env:windir + "\System32\WinMetadata"
}

# If the path was found and remembered, return that value. This saves time on repeated calls
$hintPath = Join-Path $PsScriptRoot "WinMetadata.hint"
$winmetadatahint = $null
if (Test-Path $hintPath) {
    $winmetadatahint = (Get-Content -Raw -Path $hintPath).Trim()
    if (Test-Path $winmetadatahint) {
        return $winmetadatahint
    }
}

# If still not found, look in WinSxS folders
$winmetadatahint = [System.IO.Path]::GetDirectoryName($env:windir + '\WinSxS\' + (,(Get-ChildItem -Path ($env:windir + '\WinSxs\') -Name Windows.System.winmd -Recurse | ?{ -not ($_.Contains('\f\')) -and -not ($_.Contains('\r\')) })[0]))

# If found, save it for later
if (Test-Path $winmetadatahint) {
    Set-Content -Path $hintPath -Value $winmetadatahint
}

return $winmetadatahint