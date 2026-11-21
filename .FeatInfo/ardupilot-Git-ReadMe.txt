Tipps und Hinweise zur Arbeit mit ArduPilot/Git/Container:

1) Die ArduPilot Files bei Github sind grundsätzlich für Linux und nicht für Windows
Git speichert den Dateninhalt in Blobs, und alles andere Eigenschaften wie namen, pfad, ausführbar, .. in Trees


1a) CR/LF
	VSC ändert dies automatisch beim öffnen, dadurch sind alle files geändert und git sieht eine differenz.
	Diese Differnz kann aber nicht angezeigt werden..
	GitRepro-Einstellung notwendig (in \ArduPilot\.git\config)
  		"core.autocrlf = false"
  		
1b) ausführbar-Eigenschaft
	Diese Eigenschaft wird unter Linux und Windows unterschiedlich gehandhabt, dadurch sieht git einen Unterschied
	GitRepro-Einstellung und für submodule mavlink und picolib notwendig
	(in \ArduPilot\.git\modules\modules\(picolibc|mavlink)\config)
	und für submodule mavlink und picolib notwendig
  		"core.filemode = false"