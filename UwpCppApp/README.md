---
page_type: sample
languages:
- cpp
products:
- dotnet
- windows-uwp
description: "Sample C++ app for use in testing the Microsoft Partner Center."
urlFragment: "sample-partner-center-apps-uwp-cpp"
---

# Sample C++ Project for Partner Center

<!-- 
Guidelines on README format: https://review.docs.microsoft.com/help/onboard/admin/samples/concepts/readme-template?branch=master

Guidance on onboarding samples to docs.microsoft.com/samples: https://review.docs.microsoft.com/help/onboard/admin/samples/process/onboarding?branch=master

Taxonomies for products and languages: https://review.docs.microsoft.com/new-hope/information-architecture/metadata/taxonomies?branch=master
-->

The UwpCppApp project is a sample C++ app that can be uploaded to Microsoft Partner Center.

## Prerequisites

- [Visual Studio](https://visualstudio.microsoft.com/downloads/)
- [Microsoft Partner Center account](https://partner.microsoft.com/en-us/dashboard/home)

## Setup

- Open the **DiceWebSampleApps.sln** in Visual Studio
- Associate the **UwpCppApp** project with your store account
  - Select the project in the Solution Explorer
  - Select menu Project -> Publish -> Associate app with the store ...
    - Make sure to log in under the account where the package will be uploaded.
    - If the app has not already been created in Partner Center, you can reserve the name first.
- Configure **DiceSettings.json**
  - TargetPackageSizeInMB - Set to size in MB that you want the final package to be
  - Languages - Add all the languages to be included into the package into this array

## Runnning the sample

- Open the **DiceWebSampleApps.sln** in Visual Studio
- Complete the Setup
- Create packages for upload to Partner Center
  - Select the **UwpCppApp** project in the Solution Explorer
  - Select menu Project -> Publish -> Create app packages ...
  - Choose "Microsoft Store as \{AppName\} by \{AppPublisher\}". Do not choose side-loading
  - When finished, visit the output location for the packages.

## License

[MIT](../LICENSE)

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
