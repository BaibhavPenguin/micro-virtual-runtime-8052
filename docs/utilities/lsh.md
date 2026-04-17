# Bitwise Left Shift on Micro Virtual - R AT89S52

Micro Virtual - R Supports Bitwise via the `<<<` command.

## **Usage**

`<<< count data` 

Shift `data` towrads the left by 1 bit for `count` times.
`data` can be a 16-Bit Number

<br>
<br>

`<<< count`

Shift the contents of the 16-Bit virtual Accumulator towards the left by 1 bit for count times.

<br>

## **Other Information**
The `<<<` command does not support negative numbers and/or hexadecimal numbers. using hexadecimal numbers may result in undefined behaviour and system crashes.

## **View Previous Page**
<a href="../Commands.md">View All Supported Commands of Micro Virtual - R</a>