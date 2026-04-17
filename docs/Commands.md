<h1><strong>Supported Commands in Micro Virtual-R for At89S52</strong></h1>
<br>

## **Commands for performing Arithmetic Operations**
<table align="center" border="1">
<tr>
<th align="center">Sr</th>
<th align="center">Command</th>
<th align="center">Type</th>
<th align="center">Description</th>
<th align="center">Usage</th>
</tr>

<tr>
<td>1
<td align="center">add
<td align="center">Arithmetic
<td align="center"> Add any two numbers and get a result upto 65535
<td> <a href="utilities/add.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>2
<td align="center">sub
<td align="center">Arithmetic
<td align="center"> Subtract any two unsigned numbers.
<td> <a href="utilities/sub.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>3
<td align="center">mul
<td align="center">Arithmetic
<td align="center"> Multiply 8-bit numbers for a result upto 65535
<td> <a href="utilities/mul.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>4
<td align="center">div
<td align="center">Arithmetic
<td align="center"> Divide 8-bit numbers and get Quotient
<td> <a href="utilities/div.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>5
<td align="center">mod
<td align="center">Arithmetic
<td align="center"> Divide 8-bit numbers and get Remainder
<td> <a href="utilities/mod.md"> View Usage Details</a> </td>
</tr>

</table>


<br>
<br>

## **Commands for performing Logical Operations**
<table align="center" border="1">
<tr>
<th align="center">Sr</th>
<th align="center">Command</th>
<th align="center">Type</th>
<th align="center">Description</th>
<th align="center">Usage</th>
</tr>

<tr>
<td>1
<td align="center">and
<td align="center">Bitwise
<td align="center"> Perform bitwise Logical <b>AND</b> operation 
<td> <a href="utilities/and.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>2
<td align="center">orr
<td align="center">Bitwise
<td align="center"> Perform bitwise Logical <b>OR</b> operation 
<td> <a href="utilities/orr.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>3
<td align="center">not
<td align="center">Bitwise
<td align="center">Perform bitwise Logical <b>NOT</b> operation 
<td> <a href="utilities/not.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>4
<td align="center">xor
<td align="center">Bitwise
<td align="center"> Perform bitwise Logical <b>XOR</b> operation
<td> <a href="utilities/xor.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>5
<td align="center">>>>
<td align="center">Bitwise
<td align="center"> Perform bitwise <b>Right Shift</b> 
<td> <a href="utilities/rsh.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>6
<td align="center"><<<
<td align="center">Bitwise
<td align="center"> Perform bitwise <b>Left Shift</b> 
<td> <a href="utilities/lsh.md"> View Usage Details</a> </td>
</tr>

</table>


<br>
<br>

## **System Management and Accessibility Commands**
<table align="center" border="1">
<tr>
<th align="center">Sr</th>
<th align="center">Command</th>
<th align="center">Type</th>
<th align="center">Description</th>
<th align="center">Usage</th>
</tr>

<tr>
<td>1
<td align="center">clr
<td align="center">System
<td align="center"> Clear the serial terminal
<td> <a href="utilities/term.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>2
<td align="center">-cl
<td align="center">System
<td align="center">Reset Serial terminal 
<td> <a href="utilities/term.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>3
<td align="center">--r
<td align="center">System
<td align="center">Runtime Hard Reset
<td> <a href="utilities/term.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>4
<td align="center">--c
<td align="center">System
<td align="center">Change Terminal Font Color
<td> <a href="utilities/col.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>5
<td align="center">--f
<td align="center">Runtime Critical
<td align="center">Toggle System <b>Fail Safe.</b>
<td> <a href="utilities/forc.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>6
<td align="center">--i
<td align="center">Runtime Critical
<td align="center">Toggle <b>Infinite Execution</b>
<td> <a href="utilities/inf.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>7
<td align="center">buf
<td align="center">Data Management
<td align="center">View current data of Result Buffer in decimal
<td> <a href="utilities/buf.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>8
<td align="center">rld
<td align="center">Data Management
<td align="center">Load 16-Bit Data in Result buffer.
<td> <a href="utilities/rld.md"> View Usage Details</a> </td>
</tr>
</table>

<br>
<br>

## **Direct Hardware Access in Micro Virtual - R**
<table align="center" border="1">
<tr>
<th align="center">Sr</th>
<th align="center">Command</th>
<th align="center">Type</th>
<th align="center">Description</th>
<th align="center">Usage</th>
</tr>

<tr>
<td>1
<td align="center">dts
<td align="center">Direct Access
<td align="center"> Send 8-Bit Data to hardware ports or user variable
<td> <a href="utilities/dts.md"> View Usage Details</a> </td>
</tr>

<tr>
<td>2
<td align="center">dtg
<td align="center">Direct Access
<td align="center"> Subtract any two unsigned numbers.
<td> <a href="utilities/dtg.md"> View Usage Details</a> </td>
</tr>

<tr>
<td> 3
<td align="center"> tog
<td align="center"> Direct Access
<td align="center"> Not Yet Updated
<td align="center"> Not Yet Updated
</tr>

<tr>
<td> 4
<td align="center"> slp
<td align="center"> Direct Access
<td align="center"> Not Yet Updated
<td align="center"> Not Yet Updated
</tr>

<tr>
<td> 5
<td align="center"> bit
<td align="center"> Direct Access
<td align="center"> Not Yet Updated
<td align="center"> Not Yet Updated
</tr>

<tr>
<td> *
<td align="center"> N/A
<td align="center"> N/A
<td align="center"> N/A
<td align="center"> N/A
</tr>
</table>

<br>

## **View Previous Page**
<a href="../README.md">Return to project overview - <u>README</u></a>