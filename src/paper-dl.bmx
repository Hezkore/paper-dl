SuperStrict

Framework brl.standardio

' Get the Paper project version info
Print( "Fetching Paper information..." )
BlockingDownload( "https://papermc.io/api/v2/projects/paper", "tmp.json" )
Local json:String = LoadString( "tmp.json" )
Local values:String[] = json.Split( "~q" )
Local latestVersion:String = values[values.Length - 2]
Print( "Latest Paper version: " + latestVersion )

' Get the version builds
Print( "Fetching Paper version " + latestVersion + " builds..." )
BlockingDownload( "https://papermc.io/api/v2/projects/paper/versions/" + latestVersion, "tmp.json" )
json = LoadString( "tmp.json" )
values = json.Split( "," )
Local latestBuild:String = Int( values[values.Length - 1] )
Print( "Latest Paper " + latestVersion + " build: " + latestBuild )

' Get the download names
Print( "Fetching Paper version " + latestVersion + " build " + latestBuild + " download info..." )
BlockingDownload( "https://papermc.io/api/v2/projects/paper/versions/" + latestVersion + "/builds/" + latestBuild, "tmp.json" )
json = LoadString( "tmp.json" )
Local downloadName:String = json.Split( "~qname~q:" )[1]
downloadName = downloadName.Split( "~q" )[1]
Print( "Jar for Paper " + latestVersion + " build " + latestBuild + ": " + downloadName )

' Download the file
Print( "Downloading " + downloadName + "..." )
BlockingDownload( "https://papermc.io/api/v2/projects/paper/versions/" + latestVersion + "/builds/" + latestBuild + "/downloads/" + downloadName, "paper.jar" )

' Super basic function for calling curl on the system
Function BlockingDownload( url:String, dest:String )
	system_( "curl -Lo " + dest + " " + url )
EndFunction