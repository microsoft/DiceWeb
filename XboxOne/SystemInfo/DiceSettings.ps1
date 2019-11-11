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
InflateDataFile ".\Data\Data.dat" $inflationSize

# Create the list of language resources and add them to the manifest
CreateLanguageResources ".\Strings" $settings.Languages
UpdateManifestLanguages ".\Package.appxmanifest" $settings.Languages