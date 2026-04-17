# Direct Hardware Inputs on Micro Virtual - R AT89S52

Getting data from Hardwae ports is staightforward by using the `dtg` command.

## USAGE

`dtg portx access_flag`

`portx` : A string literal which represents a hardware port.

## PORTS

These are the literals which come in place of `portx`

`port0` : Hardware GPIO port 0  
`port1` : Hardware GPIO port 1   
`port2` : Hardware GPIO port 2
`port3` : hardware GPIO port 3

The access to **port0** , **port2** and **port3** is disabled by default as these ports are multiplexed for Serial interrupts and other on-chip peripherals.
The use of `--f` prior to the `dtg` command is ***required*** for accessing these ports.
### Using `--f` and accessing `port2` , `port3` and `port0` may cause System Failure.

## ACCESS FLAGS
There are three access flags which are used for viewing data in different formats.

`-d` : View data as a decimal number  
`-b` : View data as an ASCII Binary Number in 0's and 1's   *(Eg : 01010110)*  
`-r` : View data in Raw Mode without formatting, this data may represent **any** ASCII character even unprintable ones.

### **The access to `-r` is also blocked by default ***requiring*** usage of `--f` prior to `dtg` command!**

## USER DATA VARIABLE in `dtg`
 `dtg var access_flag`  
 
The `var` operand gets the `data` from the user data variable and prints it on the terminal.

### NOTE .. for saving inputs from hardware ports , you need the `dmv` command.




## **View Previous Page**
<a href="../Commands.md">View All Supported Commands of Micro Virtual - R</a>