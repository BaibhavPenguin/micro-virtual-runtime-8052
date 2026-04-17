# Infinite Execution on Micro Virtual - R AT89S52
Micro virtual - R blocks the access to potential infinite loops by default, this can be disabled by using `--i` command

The `--i` command toggles the infinite protection mechanism and enables ponetial infinite loops in the tog and slp command
Commands run under infinite enable may cause total system halt and require an external reset.  
Use at your own risk!  
