---
page_type: sample
products:
- xbox
description: "This sample demonstrates how to pack an AddOn for upload to Parnter Center as a durable good package"
---

# EraAddOnPackage

This project uses the XboxOne XDK to create an package for a durable good Addon in Partner Center.

## Setup

- Open the **DiceWebSampleApps.sln** in Visual Studio
- Update the /XboxOne/EraAddonPackage/Durable1/AppxManifest.xml file with the appropriate store settings.
  - /Package/Identity/@Name
  - /Package/Identity/@Publisher
  - /Package/Identity/@Version
  - /Package/Properties/DisplayName
  - /Package/Properties/PublisherDisplayName
  - /Package/Extensions/mx:PackageExtension/mx:ContentPackage/mx:AllowedProduct/@Id

## Building

Building the EraAddOnPackage project will use the installed XDK to pack a durable good.

Set the Platform to "Durango" before building.

Tips:
- **Always save your changes before building.** The PowerShell scripts will work with the content saved to disk and not what is viewed in the IDE.

## Output

Files will be created in the "out" subfolder of this project. The two files needed for uploading to Partner Center are the XVC and the EKB.
- /XboxOne/EraAddOnPackage/out

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