# Subtraction on Micro Virtual - R AT89S52

Micro Virtual - R Supports 16 bit subtraction via the `sub` command.

## **Usage**

`sub data1 data2` 

Subtract any two 8-bit decimal, `data2` from `data1`, they numbers between 0-255  

<br>
<br>

`sub data1`

Subtract an 8-bit decimal number from the previous result, the result of continious subtraction wraps around to 65535 if going below 0. 

<br>
<br>

`sub`

Using the `sub` command without operands clears the result buffer and resets the virtual accumulator back to 0.

## **Other Information**
The `sub` command does not support negative numbers and/or hexadecimal numbers. using hexadecimal numbers may result in undefined behaviour and system crashes.
Negative numbers are not supported system wide meaning performing subtractions which result in negative number may give a very large value between 0-65535.

## **View Previous Page**
<a href="../Commands.md">View All Supported Commands of Micro Virtual - R</a>