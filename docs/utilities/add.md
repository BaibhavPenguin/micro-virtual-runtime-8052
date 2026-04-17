# Addition on Micro Virtual - R AT89S52

Micro Virtual - R Supports 16 bit addition via the `add` command.

## **Usage**

`add data1 data2` 

Add any two 8-bit decimal, `data1` and `data2` are numbers between 0-255  

<br>
<br>

`add data1`

Add an 8-bit decimal number to the previous result, the result of continious addition can reach upto 65535.  

<br>
<br>

`add`

Using the `add` command without operands clears the result buffer and resets the virtual accumulator back to 0.

## **Other Information**
The `add` command does not support negative numbers and/or hexadecimal numbers. using hexadecimal numbers may result in undefined behaviour and system crashes.

## **View Previous Page**
<a href="../Commands.md">View All Supported Commands of Micro Virtual - R</a>