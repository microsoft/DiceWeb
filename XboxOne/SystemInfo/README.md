---
page_type: sample
languages:
- cpp
products:
- xbox
description: "This sample demonstrates a number of Xbox One APIs for querying system information and hardware capabilities."
---

# SystemInfo

This is a copy of XDKSample project SystemInfo from the [Xbox-ATG-Samples](https://github.com/microsoft/Xbox-ATG-Samples/blob/master/XDKSamples/System/SystemInfo) repository.

It has been modified to allow you to vary the output size and the number of included languages based on a configuration file. This is helpful for producing test content for uploading to Partner Center.

For more information about the orignal sample, see this [Word document](https://github.com/microsoft/Xbox-ATG-Samples/blob/master/XDKSamples/System/SystemInfo/Readme.docx).

## Requirements
* Xbox One Development Kit
* Xbox One XDK (specific version requirements covered in each sample's readme)
* Visual Studio 2015 or Visual Studio 2017 (_via upgrade in place_)
  * Windows 10 SDK (10.0.17134.0)

## Setup

- Open the **DiceWebSampleApps.sln** in Visual Studio
- Update the /XboxOne/SystemInfo/Package.appxmanifest file with the appropriate store settings.
  - /Package/Idendity/@Name
  - /Package/Idendity/@Publisher
  - /Package/Idendity/@Version
  - /Package/Properties/DisplayName
  - /Package/Properties/PublisherDisplayName
  - /Package/Applications/Application[@Id='App']/VisualElements/@DisplayName
- Configure /XboxOne/SystemInfo/DiceSettings.json
  - TargetPackageSizeInMB - Set to size in MB that you want the final package to be
  - Languages - Add all the languages to be included into the package into this array

## License

[MIT](../../LICENSE)

## Contributing

This project welcomes contributions and suggestions.  Most contributions require you to agree to a
Contributor License Agreement (CLA) declaring that you have the right to, and actually do, grant us
the rights to use your contribution. For details, visit https://cla.opensource.microsoft.com.

When you submit a pull request, a CLA bot will automatically determine whether you need to provide
a CLA and decorate the PR appropriately (e.g., status check, comment). Simply follow the instructions
provided by the bot. You will only need to do this once across all repos using our CLA.

This project has adopted the [Microsoft Open Source Code of Conduct](https://opensource.microsoft.com/codeofconduct/).
For more information see the [Code of Conduct FAQ](https://opensource.microsoft.com/codeofconduct/faq/) or
contact [opencode@microsoft.com](mailto:opencode@microsoft.com) with any additional questions or comments.

## Privacy Statement

For more information about Microsoft's privacy policies in general, see the [Microsoft Privacy Statement](https://privacy.microsoft.com/en-us/privacystatement/).