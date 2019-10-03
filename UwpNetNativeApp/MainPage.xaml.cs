// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.ApplicationModel.Resources;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=234238

namespace UwpNetNativeApp
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();
            this.RefreshAppInfo();
        }

        private void ShowOptionalPackages(Object sender, RoutedEventArgs e)
        {
            var currentAppPackage = Windows.ApplicationModel.Package.Current;
            var dependencies = currentAppPackage.Dependencies;

            optionalPackagesListBox.Items.Clear();

            foreach (var package in dependencies)
            {
                if (package.IsOptional)
                {
                    optionalPackagesListBox.Items.Add(package.Id.FullName);
                }
            }
        }

        private void RefreshAppInfo()
        {
            var currentPackage = Windows.ApplicationModel.Package.Current;
            var version = currentPackage.Id.Version;

            versionTextBlock.Text = version.Major.ToString() + "." + version.Minor.ToString() + "."
                + version.Build.ToString() + "." + version.Revision.ToString();

            architectureTextBlock.Text = currentPackage.Id.Architecture.ToString();
            appNameTextBlock.Text = currentPackage.Id.Name;
            packageFamilyNameTextBlock.Text = currentPackage.Id.FamilyName;

            var loader = new ResourceLoader();
            languageTextBlock.Text = loader.GetString("Language");
        }

        private void CmdLaunch_Click(Object sender, RoutedEventArgs e)
        {
            const string StoreUriByPfn = "ms-windows-store://pdp/?PFN=";
            var currentPackage = Windows.ApplicationModel.Package.Current;

            var uriToLaunch = new Uri(StoreUriByPfn + currentPackage.Id.FamilyName);

            var task = Windows.System.Launcher.LaunchUriAsync(uriToLaunch);
        }
    }
}
