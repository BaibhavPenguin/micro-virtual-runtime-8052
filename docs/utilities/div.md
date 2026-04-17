# Division on Micro Virtual - R AT89S52

Micro Virtual - R Supports 16 bit diviion via the `div` command.

## **Usage**

`div data1 data2` 

Dividde any two 8-bit decimal, `data1` divided by `data2`, They are numbers between 0-255  

<br>
<br>

`div data1`

The operand 8-bit decimal number divides the previous result, division by 0 will error as expected

<br>
<br>


## **Other Information**
The `div` command does not support negative numbers and/or hexadecimal numbers. using hexadecimal numbers may result in undefined behaviour and system crashes.

## **View Previous Page**
<a href="../Commands.md">View All Supported Commands of Micro Virtual - R</a>