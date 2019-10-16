// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.using System;

using System;
using System.Diagnostics;
using System.Globalization;
using System.Threading;
using System.Windows;
using Windows.ApplicationModel;

namespace CentennialApp
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
            RefreshAppInfo();
        }

        private void RefreshAppInfo()
        {
            var resourceManager = Strings.Resources.ResourceManager;
            Greeting.Text = resourceManager.GetString("Greeting");
            languageTextBlock.Text = resourceManager.GetString("Language");
            Title = resourceManager.GetString("AppTitle");

            try
            {
                var package = Windows.ApplicationModel.Package.Current;
                var version = package.Id.Version;
                versionTextBlock.Text = String.Format("{0}.{1}.{2}.{3}", version.Major, version.Minor, version.Build,
                    version.Revision);
                architectureTextBlock.Text = package.Id.Architecture.ToString();
                appNameTextBlock.Text = package.Id.Name;
            }
            catch (InvalidOperationException)
            {
                // No package identity
            }
        }

        private void cmdLaunch_Click(object sender, RoutedEventArgs e)
        {
            const string StoreUriByPfn = "ms-windows-store://pdp/?PFN=";
            var currentPackage = Windows.ApplicationModel.Package.Current;

            var uriToLaunch = new Uri(StoreUriByPfn + currentPackage.Id.FamilyName);

            var task = Windows.System.Launcher.LaunchUriAsync(uriToLaunch);
        }
    }
}