# Terminal Commands on Micro Virtual - R AT89S52

VArious terminal commands are supported in Micro virtual - R for AT89S52

## **Commands**

`clr` 

Clears the terminal screen, moving the cursor back to the `HOME` position, does not overwrite terminal color settings. 
Does not take any operands.

<br>
<br>

`-cl`

Resets the terminal settings back to default. best used when garbeled text has appeared due to flashing errors or dirty signals. Completely overwrites Terminal Color Settings. Does not take any operands.

<br>
<br>

`--r`

Hard Resets the Runtime via a Hardware WatchDog. It is best used for resetting hardware I/O ports and other peripheral devices connected via software without needing access to a physical reset switch.

## **Other Information**
These commands are system commands and play no role in Logical and Arithmetic Operations. however, some dangerous operations are prevented by other system commands.

## **View Previous Page**
<a href="../Commands.md">View All Supported Commands of Micro Virtual - R</a>