---
page_type: sample
languages:
- cpp
products:
- dotnet
- windows-uwp
description: "Sample AddOn package for use in testing the Microsoft Partner Center."
urlFragment: "sample-partner-center-apps-uwp-addon"
---

# Sample AddOn Project for Partner Center

<!-- 
Guidelines on README format: https://review.docs.microsoft.com/help/onboard/admin/samples/concepts/readme-template?branch=master

Guidance on onboarding samples to docs.microsoft.com/samples: https://review.docs.microsoft.com/help/onboard/admin/samples/process/onboarding?branch=master

Taxonomies for products and languages: https://review.docs.microsoft.com/new-hope/information-architecture/metadata/taxonomies?branch=master
-->

The UwpAddOn project is a sample app to use as a package for an AddOn for an App or Game in Microsoft Partner Center.

## Prerequisites

- [Visual Studio](https://visualstudio.microsoft.com/downloads/)
- [Microsoft Partner Center account](https://partner.microsoft.com/en-us/dashboard/home)

## Setup

- Open the UwpAddOn.vcxproj in Visual Studio
- Associate the project with your store account
  - Select the project in the Solution Explorer
  - Select menu Project -> Publish -> Associate app with the store ...
    - Make sure to log in under the account where the package will be uploaded.
    - Addons will not be in the list, so pick any app you want.
- [Manually update the store association](#manually-update-store-association) for your AddOn.

## Runnning the sample

- Open the UwpAddOn.vcxproj in Visual Studio
- Complete the Setup including manual configuration of the store association
- Create packages for upload to Partner Center
  - Select the project in the Solution Explorer
  - Select menu Project -> Publish -> Create app packages ...
  - Choose "Microsoft Store as \{AppName\} by \{AppPublisher\}". Do not choose side-loading
  - When finished, visit the output location for the packages.

## <a name="manually-update-store-association"></a>Manually Update Store Association
Visual Studio does not provide a way to associate your sample app to an AddOn, 
so you can associate it with any app under the account.  By associating the project with an
app, you are still getting the benefits of having all the publishing information correctly
populated for you by Visual Studio. This includes any certificates that might need created 
or installed to sign your package.

Once the inital association is done, you'll have to perform the following manual steps to correctly configure the AddOn.

- Open **Package.StoreAssociation.xml**
- Update the ProductReservedInfo section to include the Identity and Reserved Name of your AddOn.

```xml
<ProductReservedInfo>
    <MainPackageIdentityName>Put.AddOn.Identity.Here</MainPackageIdentityName>
    <ReservedNames>
        <ReservedName>Put.AddOn.Reserved.Name.Here</ReservedName>
    </ReservedNames>
</ProductReservedInfo>
```

- Open **Package.appxmanifest** with the XML editor (use Open With)
- Update the AddOn Identity Name

```xml
  <Identity Name="Put.AddOn.Identity.Here" . . . />
```
- Update the Addon DiplayName or Reserved Name.

```xml
  <Properties>
    <DisplayName>Put.AddOn.Reserved.Name.Here</DisplayName>
    . . .
  </Properties>
```

- Update the MainPackageDependency.  This will be the Identity of the parent app.

```xml
  <Dependencies>
    . . .
    <uap3:MainPackageDependency Name="Put.Parent.App.Identity.Here" />
  </Dependencies>
```

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
