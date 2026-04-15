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

<h1><strong>Arithmetic Operations Using Micro Virtual-R Commands</strong></h1> <br>

**Adddition "add"** <br>
Micro Virtual-R supports addition of 8 bit unsigned numbers (0-255) and upto 65535 using command shorthands<br>

`add num1 num2` <br>
Add two numbers from 0-255 for a maximum result of upto 510  

`add num1`  
Add a number to the previous result of addition, by default the result buffer starts from 0  

`add`  
Clear the result buffer , Resets the result to 00.  

**Subtraction "sub"**  

Micro Virtual-R supports addition of 8 bit unsigned numbers (0-255) and upto 65535 using command shorthands<br>

`sub num1 num2` <br>
Subtract two numbers from 0-255 for a maximum result of upto 510  

`sub num1`  
Subtract a number from the previous result, by default the result buffer starts from 0  

`sub`  
Clear the result buffer , Resets the result to 00.  

**Multiplication "mul"**  

Micro Virtual-R supports Multiplication of 8 bit unsigned numbers (0-255) and upto 65535 using command shorthands<br>

`mul num1 num2`  
Multiply two numbers from 0-255 for a maximum result of upto 65535  

`mul num1`  
Muliply a number to the previous result ,by default the result buffer starts from 0.   


**Division "div"**  

Micro Virtual-R supports Division of 8 bit unsigned numbers upto 65535 using command shorthands<br>

`div num1 num2`  
Divide num1 by num2, num2 cannot be 0. 

`div num1`  
Divide a number to the previous result , by default the result buffer starts from 0  

**Modulus "mod" **  
Modulus `mod` gives the remainder of a division.  

`div num1 num2`  
Get Remainder of division of num1 by num2, num2 cannot be 0, 

`div num1`  
Get Remainder of division of a number to the previous result , by default the result buffer starts from 0  


`buf`  
View the result of the previous arithmetic and logical command.   

<h1><strong> Logical Operations in Micro Virtual - R</strong></h1><br>

**AND Operation "and"** <br>
`and data1 data2`  
Perform bitwise AND Operation on two 8-Bit numbers  

`and data1`  
Peeform bitwise AND Operation on previous result and 8-bit number


**OR Operation "orr"** <br>
`orr data1 data2`  
Perform bitwise OR Operation on two 8-Bit numbers  

`orr data1`  
Peeform bitwise OR Operation on previous result and 8-bit number


**NOT Operation "not"** <br>
`not data1`  
Perform bitwise NOT operation on 16-Bit number  


**XOR Operation "xor"** <br>
`xor data1 data2`  
Perform bitwise xOR Operation on two 8-Bit numbers  

`xor data1`  
Peeform bitwise xOR Operation on previous result and 8-bit number

<h1><strong>Binary Shifting operations</strong></h1><br>

**Binary Right Shift ">>>"**  
`>>> number_of_bits data`  
Shift an 8 bit data by "number_bits" towards the right  
`>>> number_of_bits`  
Shift the previous result by "number_of_bits" towards the right  


**Binary Left Shift "<<<"**  
`<<< number_of_bits data`  
Shift an 8 bit data by "number_bits" towards the left    
`<<< number_of_bits`  
Shift the previous result by "number_of_bits" towards the left   

<hr>

<h1><strong>Saving user data in Micro Virtual-R</strong></h1><br>
Micro Virtual - R for AT89S52 gives access to a single 8 bit variable which can be directly accesed   via
`dts data` : Save 8-Bit data in variable `x`
`dtg` : View data stored in variable `x`  
`din` : Input data from Ports to variable `x`  
`dto` : Output data from variable `x` to ports 
`dmv` : Move lower byte of result in variable `x`  
`dmr` : Restore lower byte of result from variable `x`    
The `x` user data variable can also be accesed in `tog` commands through `x` operand.
Other diret uses will be added in later revisions.

<hr>

**The Infinite Execution Flag '--f'**<br>
Infinitely executing commands will be added in future revisions and releases so as of now the `--f` command does nothing other than print a message and toggle an unused flag  
It is an essential component for future commands.  

<hr>

Other commands and changes to existing commands will bed added here.
