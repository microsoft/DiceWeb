---
page_type: sample
languages:
- csharp
- cpp
products:
- dotnet
- windows-uwp
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

## Prerequisites

- [Visual Studio](https://visualstudio.microsoft.com/downloads/)

## Setup

- Open the DiceWebSampleApps.sln in Visual Studio
- Associate the project with your store account
  - Select the project in the Solution Explorer
  - Select menu Project -> Publish -> Associate app with the store ...

## Running the sample

- Open the DiceWebSampleApps.sln in Visual Studio
- Create packages for upload to Partner Center
  - Select the project in the Solution Explorer
  - Select menu Project -> Publish -> Create app packages ...
  - Choose "Microsoft Store as {AppName} by {AppPublisher}". Do not choose side-loading
  - When finished, visit the output location for the packages.

## Contents

Outline the file contents of the repository. It helps users navigate the codebase, build configuration and any related assets.

| File/folder       | Description                                |
|-------------------|--------------------------------------------|
| `UwpCppApp`       | Sample UWP app using C++.                  |
| `UwpNetNativeApp` | Sample UWP app using CSharp.               |
| `.gitignore`      | Define what to ignore at commit time.      |
| `CHANGELOG.md`    | List of changes to the sample.             |
| `CONTRIBUTING.md` | Guidelines for contributing to the sample. |
| `README.md`       | This README file.                          |
| `LICENSE`         | The license for the sample.                |

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
