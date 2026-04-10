<h1><strong>Supported Commands in Micro Virtual-R for At89S52</strong></h1>
<br>

**Clear Screen "cls"** <br>
`cls`
<br>
**Reset Command Line "-cl"** <br> 
`-cl`
<br>
**Runtime Software Reset "--r"**  <br>
`--r`
<br>
**Change Text Color "--c"**  <br>
<br>
`--c color_short_code`
 
**Colors Supported Are**  <br>
`00 = black`<br>
`01 = red`<br>
`02 = green`<br>
`03 = yellow`<br>
`04 = blue`<br>
`05 = magenta`<br>
`06 = cyan`<br>
`07 = white`

**Default Color is set to white**

##**Arithmetic Operations Using Micro Virtual-R Commands** <br>

**Adddition "add"** <br>
Micro Virtual-R supports addition of 8 bit unsigned numbers (0-255) and upto 65535 using command shorthands<br>

`add num1 num2` <br>
Add two numbers from 0-255 for a maximum result of upto 510  

`add num1`  
Add a number to the previous result of addition, by default the result buffer starts from 0  

`add`  
Clear the result buffer , Resets the result to 00.  

`buf`  
View the result of the previous arithmetic and logical command.  

<hr>

**The Infinite Execution Flag '--f'**<br>
Infinitely executing commands will be added in future revisions and releases so as of now the `--f` command does nothing other than print a message and toggle an unused flag  
It is an essential component for future commands.  

<hr>

Other commands and changes to existing commands will bed added here.
