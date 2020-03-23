# XDK Installation Tips

## Visual Studio
* only supports Visual Studio 2015 or Visual Studio 2017
* higher versions of Visual Studio are not supported
* install Visual Studio before running the XDK install
* install the following workloads:
  * Desktop development with C++
  * Game development with C++
* install the following individual components:
  * Visual Studio C++ core features
  * Visual C++ ATL for x86 and x64
  * VC++ 2015.3 v14.00 (v140) toolset for desktop
  * VC++ 2017 version 15.9 v14.16 latest v141 tools
  * Windows 10 SDK (10.0.15063.0) for UWP: C#, VB, JS
  * Windows 10 SDK (10.0.15063.0) for UWP: C++
  * Windows 10 SDK (10.0.16299.0) for Desktop C++ [ARM and ARM64]
  * Windows 10 SDK (10.0.16299.0) for Desktop C++ [x86 and x64]
  * Windows 10 SDK (10.0.16299.0) for UWP: C#, VB, JS
  * Windows 10 SDK (10.0.16299.0) for UWP: C++
  * Windows 10 SDK (10.0.17134.0)
  * Windows 10 SDK (10.0.17763.0)
  * Windows 8.1 SDK

That might be more than is needed for individual components, but it is what I had installed when I wrote this and it worked.

## XDK Download

* https://www.microsoft.com/en-us/software-download/devcenter
* Sign in
* Select File Type: Xbox One
* Press [Confirm] button
* Select Build/version number: [10.0.17134.5076] - July 2018 Xbox One XDK  QFE 13
* Press [Confirm] button
* Press [Download Now] button
* Unzip the file you download
* Run XboxOneXDK.exe (if the filename has "tools" in it, you downloaded the wrong file)


## Powershell

The ExecutionPolicy for LocalMachine and CurrentUser should be Unrestricted.  Run the following from an admin Powershell console.

```powershell
Set-ExecutionPolicy -Scope CurrentUser Unrestricted -Force
Set-ExecutionPolicy -Scope LocalMachine Unrestricted -Force
```