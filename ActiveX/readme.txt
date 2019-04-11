ActiveX Control based on tutorial: https://www.codeproject.com/Articles/14533/A-Complete-ActiveX-Web-Control-Tutorial

--- Contents

ACCMD - The Source code which is a Visual Studio project.
bin - The output binaries for Microwsoft Windows
      You may use the msi, or register the ocx with regsvr32 directly.
  x86 for 32bit OS
  x64 for 64bit OS
Setup - The project to create the MSI Installer
test.html - To test whether the ACCMD is working well on your system, open this in IE, allow ActiveX, and click on the
      button.

--- How to configure?

Once the the ActiveX plugin ACCMD has been installed, open Internet Explorer/Internet Options/Security/Custom level...
and allow "Initialize and script ActiveX controls not marked as safe for scripting" for the zone Local intranet.
