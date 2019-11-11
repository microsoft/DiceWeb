# Copyright (c) Microsoft Corporation.
# Licensed under the MIT License.

# set directory, import utility functions, and load settings
Set-Location $PSScriptRoot
[System.Environment]::CurrentDirectory = $PSScriptRoot
.(Join-Path $PSScriptRoot "..\..\Scripts\DiceWebUtils.ps1")
$settings = ConvertFrom-Json (Get-Content ".\DiceSettings.json" -Raw)

# calculate the inflation size
$numArchitectures = 1
$inflationSize = ($settings.PackageSize.TargetPackageSizeInMB - ($numArchitectures * $settings.PackageSize.InitialPackageSizeInMB)) / $numArchitectures

# Set the size of the data file so the final package will be the desired size
InflateDataFile ".\Durable1\Data\Data.dat" $inflationSize

# Add the languages to the AppxManifest.xml
UpdateManifestLanguages ".\Durable1\AppxManifest.xml" $settings.Languages