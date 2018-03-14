/*
Copyright 2018 General Electric

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
var SAMPLE_PREFS_NAME = "AW Preferences";
var SAMPLE_PREFS_TYPE = "Machine";

var SAMPLE_ROOT = "AWPreferences";
var SAMPLE_ONE_TAG = "apiVersion";
var SAMPLE_TWO_TAG = "awServerIp";
var SAMPLE_THREE_TAG = "user";
var SAMPLE_FOUR_TAG = "secure";
var SAMPLE_FIVE_TAG = "soloPath";

var apiVersion = "2.0";
var awServerIp = "127.0.0.1";
var user = "service";
var secure = "yes";
var soloPath = "";

// Retrieve XML string of preferences

function GetPreferences()
{
	if (typeof(iSiteEnterprise) == "object") 
			 {
				iSiteForPrefs = iSiteNonVisual;
			 } 
			 else if (typeof(Radiology) == "object") 
			 {
				iSiteForPrefs = Radiology;
			 } 
			 else 
			 {
				iSiteForPrefs = NotDefined;
			 }
	var xmlstring = iSiteForPrefs.GetPreference(SAMPLE_PREFS_NAME, SAMPLE_PREFS_TYPE);
  
  if (xmlstring != "")
  {
    var doc = xmldso.XMLDocument;
    doc.loadXML(xmlstring);

    var root = doc.documentElement;

    var nodeList = doc.getElementsByTagName(SAMPLE_ROOT);
  
    var elem = nodeList.item(0).getElementsByTagName(SAMPLE_ONE_TAG);
    apiVersion = elem.item(0).text;
    var elem = nodeList.item(0).getElementsByTagName(SAMPLE_TWO_TAG);
    awServerIp = elem.item(0).text;
    var elem = nodeList.item(0).getElementsByTagName(SAMPLE_THREE_TAG);
    user = elem.item(0).text;
    var elem = nodeList.item(0).getElementsByTagName(SAMPLE_FOUR_TAG);
    secure = elem.item(0).text;
    var elem = nodeList.item(0).getElementsByTagName(SAMPLE_FIVE_TAG);
    soloPath = elem.item(0).text;
  }
}

// Write XML string of preferences

function SetPreferences()
{
  var doc = xmldso.XMLDocument;

  var strRoot = "<" + SAMPLE_ROOT + "></" + SAMPLE_ROOT + ">";  
  doc.loadXML(strRoot);
  
  var root = doc.documentElement;
 
  var elem = doc.createElement(SAMPLE_ONE_TAG);
  elem.text = apiVersionI.value;
  root.appendChild(elem);
  
  elem = doc.createElement(SAMPLE_TWO_TAG);
  elem.text = awServerIpI.value;
  root.appendChild(elem);
  
  elem = doc.createElement(SAMPLE_THREE_TAG);
  elem.text = userI.value;
  root.appendChild(elem);
  
  elem = doc.createElement(SAMPLE_FOUR_TAG);
  elem.text = secureI.value;
  root.appendChild(elem);
  
  elem = doc.createElement(SAMPLE_FIVE_TAG);
  elem.text = soloPathI.value;
  root.appendChild(elem);

  xmlstring = doc.xml;
  
  if (typeof(iSiteEnterprise) == "object") 
			 {
				iSiteForPrefs = iSiteNonVisual;
			 } 
			 else if (typeof(Radiology) == "object") 
			 {
				iSiteForPrefs = Radiology;
			 } 
			 else 
			 {
				iSiteForPrefs = NotDefined;
			 }
	var xmlstring = iSiteForPrefs.SetPreference(SAMPLE_PREFS_NAME, SAMPLE_PREFS_TYPE, xmlstring);
}

