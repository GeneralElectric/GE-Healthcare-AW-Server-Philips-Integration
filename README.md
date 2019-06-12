# GE-Healthcare-AW-Server-Philips-Integration

**This document provides the instructions to integrate Philips iSite and AW Server. The project folders contain the html code and registry of ActiveX. The customer is responsible for implementing the integration in their environment with guidance from GE. Installation and Configuration are shown in this README.md and the corresponding readme.txt files in each folder.**

Integration will require registering of ActiveX, determining location of executable source code, launching of the patient context, and authentication of end users. The AW Server PACS Integration Guide can be acquired from GE to support users with implementation for integrating a command line-based interface to launch AW Server applications with selected datasets.

Philips iSite Enterprise uses a web-based client application. AW Server starts from command line. To integrate the launch of AW Server from the iSite application it needs a Plug-in.

## Design
The iSite Enterprise application supports plug-ins in HTML format. The plug-in HTML page contains JavaScript code and an ActiveX control.

The plug-in loads when the user logs in the iSite Enterprise application. There are two different HTML pages for the plug-in. An HTML which contains the code of the plug-in and a Preferences HTML page which contains argument values for the plug-in command line calls. 

The plug-in creates a menu item on the DICOM exam view item. With a right mouse button click the Start AW command can be executed and the AW Server starts with the parameters of the DICOM file. 

When the user logs out from the iSite Enterprise application, the plug-in automatically logs out the user from the AW Server if the AW Server application was started during the session.


## iSite AW Server Plug-in architecture
 
**ActiveX Control**

An MFC ActiveX Control written in Visual C++. The aim of this application is to call command line commands from an HTML file.

It has one textual input parameter, which will contain the command line script what is created in the HTML at run-time. 

The execution of the of the command can be called with the single method of the Control. The Control creates a new process for the command line call. The call of method of the Control generates an event, so the HTML can handle it if it needs to.   

**Plug-in HTML Page**

This Page does not have UI elements. It loads when the user logs in the iSite Enterprise application. Initializes the plug-in components, the Preferences Page, the ActiveX Control and the menu items for the execution of the plug-in.  

**Plug-in Preferences HTML Page**

The Preferences Page is accessible in the Preferences Window, Machine Preferences menu. The command line argument values can be defined here. It can be saved by clicking the Save Configuration button.

The iSite Enterprise application uses an XML object to save and read the information. This XML source is available in HTML pages with declaring the "xmldso" object element. 

## Install
1. Unzip the Plug-in
2. Run RegisterOcx.bat with administrator privileges, click OK when finished
3. Check user section data in iSiteconfig.js 

## Configure
1. Login to Philips iSite Enterprise
2. Open Preferences -> Machine Settings -> Plug-ins -> Add
3. Name is AW Test
4. Select AWTest.html for source
5. Check iSiteEnterprise, iSiteRadiology
6. Uncheck Disable API
7. Save Configuration
8. Log out then Log in.
9. Open Preferences -> Machine Settings -> AW Preferences
10. Configure the parameters. Integration.exe classpath have to use „\\” (e.g: C:\\GE\\integration.exe)
11. Click Save Configuration, close Preferences window
12. Select Demo set -> Open an exam item -> Right mouse button click on an image -> Start AW


## Note
- The iSite application uses Internet Explorer internet settings. Enable activeX in Internet Explorer. Help: https://support.microsoft.com/en-ie/help/17469/windows-internet-explorer-use-activex-controls
