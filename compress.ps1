$myFiles = 'C:\Users\Nutzer\Workspace\Coding\C\HKAEITB\Informatik Uebungsblaetter\Uebungsblatt3\*.c'
$myDestination = 'C:\Users\Nutzer\Workspace\Coding\C\HKAEITB\Informatik Uebungsblaetter\loesung.Zip'

$compress = @{
    Path = $myFiles
    CompressionLevel = "Fastest"
    Update = $true
    DestinationPath = $myDestination
  }
  Compress-Archive @compress