---
page_type: sample
languages:
- csharp
- cpp
products:
- dotnet
- windows-uwp
- xbox
description: "Sample apps, games and other content for use in testing the Microsoft Partner Center."
urlFragment: "sample-partner-center-apps"
---

# Sample Projects for Partner Center

<!-- 
Guidelines on README format: https://review.docs.microsoft.com/help/onboard/admin/samples/concepts/readme-template?branch=master

Guidance on onboarding samples to docs.microsoft.com/samples: https://review.docs.microsoft.com/help/onboard/admin/samples/process/onboarding?branch=master

Taxonomies for products and languages: https://review.docs.microsoft.com/new-hope/information-architecture/metadata/taxonomies?branch=master
-->

This repository contains sample projects to generate apps, games and other content for the Microsoft Partner Center.

## Requirements

#### UWP apps
- [Visual Studio](https://visualstudio.microsoft.com/downloads/)
- [Microsoft Partner Center account](https://partner.microsoft.com/en-us/dashboard/home)

#### XDK apps
* [Visual Studio 2015 or Visual Studio 2017](https://visualstudio.microsoft.com/downloads/) (higher versions not supported)
* [Xbox One XDK](https://www.microsoft.com/en-us/software-download/devcenter) ([installation tips](XboxOne/XDK_Installation_Tips.md))



## Setup

- Open the **DiceWebSampleApps.sln** in Visual Studio
- Review specific setup steps for each project
  - [EraPackage](XboxOne/EraPackage/README.md)
  - [EraAddOnPackage](XboxOne/EraAddOnPackage/README.md)
  - [CentennialApp](CentennialApp/README.md)
  - [UwpCppApp](UwpCppApp/README.md)
  - [UwpNetNativeApp](UwpNetNativeApp/README.md)
  - [UwpAddOn](UwpAddOn/README.md)

## Running the sample

- Open the **DiceWebSampleApps.sln** in Visual Studio
- Verify all setup tasks have been completed
- Review specific steps to run each project
  - [EraPackage](XboxOne/EraPackage/README.md)
  - [EraAddOnPackage](XboxOne/EraAddOnPackage/README.md)
  - [CentennialApp](CentennialApp/README.md)
  - [UwpCppApp](UwpCppApp/README.md)
  - [UwpNetNativeApp](UwpNetNativeApp/README.md)
  - [UwpAddOn](UwpAddOn/README.md)

## Contents

Outline the file contents of the repository. It helps users navigate the codebase, build configuration and any related assets.

| File/folder       | Description                                |
|-------------------|--------------------------------------------|
| `CentennialApp` | Sample C# Desktop bridge app.                  |
| `CentennialPackaging` | Packaging project for sample Desktop bridge app. |
| `UwpCppApp`       | Sample UWP app using C++.                  |
| `UwpNetNativeApp` | Sample UWP app using CSharp.               |
| `UwpAddOn`       | Sample UWP AddOn app using C++.            |
| `.gitignore`      | Define what to ignore at commit time.      |
| `CHANGELOG.md`    | List of changes to the sample.             |
| `CONTRIBUTING.md` | Guidelines for contributing to the sample. |
| `README.md`       | This README file.                          |
| `LICENSE`         | The license for the sample.                |
| XboxOne/EraPackage | Sample package for XboxOne game. |
| XboxOne/EraAddOnPackage | Sample package for XboxOne durable with packages addon. |

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
