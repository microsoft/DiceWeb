# Copyright (c) Microsoft Corporation.
# Licensed under the MIT License.

# set directory, import utility functions
Set-Location $PSScriptRoot
[System.Environment]::CurrentDirectory = $PSScriptRoot
.(Join-Path $PSScriptRoot "..\..\Scripts\DiceWebUtils.ps1")

# make sure there is a clean output folder
Remove-Item -Path ".\out" -Force -Recurse -ErrorAction SilentlyContinue
mkdir ".\out" -Force -ErrorAction SilentlyContinue

# use the XDK to pack the Durango loose images folder
$makePkgPath = GetXdkMakePkgPath
& $makePkgPath pack /l /v /f ".\chunks.xml" /d "..\SystemInfo\Durango\Layout\Image\Loose" /pd ".\out"

# get the largest file from the output folder
$xvcFile = (Get-ChildItem -Path ".\out" | Sort-Object -Descending -Property "Length")[0]
Write-Output "Attempt to set the extension to XVC for $($xvcFile.FullName)"
Rename-Item -Path $xvcFile.FullName -NewName ($xvcFile.FullName + ".xvc")
