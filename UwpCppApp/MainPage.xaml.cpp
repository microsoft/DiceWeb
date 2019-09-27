// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace UwpCppApp;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
	RefreshAppInfo();
}

void UwpCppApp::MainPage::ShowOptionalPackages(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	auto currentAppPackage = Windows::ApplicationModel::Package::Current;
	auto dependencies = currentAppPackage->Dependencies;

	std::vector< Windows::ApplicationModel::Package^ > optionalPackages;

	optionalPackagesListBox->Items->Clear();

	for (auto package : dependencies)
	{
		if (package->IsOptional) {
			optionalPackagesListBox->Items->Append(package->Id->FullName);
		}
	}
}

void UwpCppApp::MainPage::RefreshAppInfo()
{
	auto currentPackage = Windows::ApplicationModel::Package::Current;
	auto version = currentPackage->Id->Version;

	versionTextBlock->Text = version.Major.ToString() + "." + version.Minor.ToString() + "."
		+ version.Build.ToString() + "." + version.Revision.ToString();

	architectureTextBlock->Text = currentPackage->Id->Architecture.ToString();
	appNameTextBlock->Text = currentPackage->Id->Name;
	packageFamilyNameTextBlock->Text = currentPackage->Id->FamilyName;

	auto loader = ref new Windows::ApplicationModel::Resources::ResourceLoader();
	languageTextBlock->Text = loader->GetString("Language");
}

void UwpCppApp::MainPage::cmdLaunch_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Platform::String ^ StoreUriByPfn = "ms-windows-store://pdp/?PFN=";
	auto currentPackage = Windows::ApplicationModel::Package::Current;

	auto uriToLaunch = ref new Windows::Foundation::Uri(StoreUriByPfn + currentPackage->Id->FamilyName);

	Windows::System::Launcher::LaunchUriAsync(uriToLaunch);
}
