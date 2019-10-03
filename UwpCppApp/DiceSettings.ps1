# Copyright (c) Microsoft Corporation.
# Licensed under the MIT License.

# set directory, import utility functions, and load settings
Set-Location $PSScriptRoot
[System.Environment]::CurrentDirectory = $PSScriptRoot
.(Join-Path $PSScriptRoot "..\Scripts\DiceWebUtils.ps1")
$settings = ConvertFrom-Json (Get-Content ".\DiceSettings.json" -Raw)

# find out the number of architectures included in each file
$project = [Xml](Get-Content ".\UwpCppApp.vcxproj" -Raw)
$appxBundle = ($project.Project.PropertyGroup.AppxBundle | Out-String).Trim()
$appxBundlePlatforms = ($project.Project.PropertyGroup.AppxBundlePlatforms | Out-String).Trim()
Write-Output "AppxBundle: $appxBundle"
Write-Output "AppxBundlePlatforms: $appxBundlePlatforms"
# only adjust the data file size if the bundle settings are available
if ((-not [string]::IsNullOrEmpty($appxBundle)) -and (-not [string]::IsNullOrEmpty($appxBundlePlatforms))) {
	$isBundle = $appxBundle -ieq "Always"
	if ($isBundle) {
		$numArchitectures = $appxBundlePlatforms.Split("|").Count
	} else {
		$numArchitectures = 1
	}
	# calculate the inflation size
	$inflationSize = ($settings.PackageSize.TargetPackageSizeInMB - ($numArchitectures * $settings.PackageSize.InitialPackageSizeInMB)) / $numArchitectures

	# Set the size of the data file so the final package will be the desired size
	InflateDataFile ".\Data\Data.dat" $inflationSize
}

# Create the list of language resources
CreateLanguageResources ".\Strings" $settings.Languages