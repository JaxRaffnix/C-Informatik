$myFiles = 'C:\Users\Nutzer\Workspace\Coding\C\HKAEITB\Informatik Uebungsblaetter\Uebungsblatt2\*.c'
$myDestination = 'C:\Users\Nutzer\Workspace\Coding\C\HKAEITB\Informatik Uebungsblaetter\loesung.Zip'

$compress = @{
    Path = $myFiles
    CompressionLevel = "Fastest"
    DestinationPath = $myDestination
  }
  Compress-Archive @compress