# Direct Hardware Outputs on Micro Virtual - R AT89S52

Outputting data to Hardwae ports is staightforward by using the `dts` command.

## USAGE

`dts data8 portx`

`datat8` : Any decimal number between 0-255
`portx` : A string literal which represents a hardware port.

## PORTS

These are the literals which come in place of `portx`

`port0` : Hardware GPIO port 0  
`port1` : Hardware GPIO port 1   
`port2` : Hardware GPIO port 2
`port3` : hardware GPIO port 3

The access to **port0** , **port2** and **port3** is disabled by default as these ports are multiplexed for Serial interrupts and other on-chip peripherals.
The use of `--f` prior to the `dts` command is ***required*** for accessing these ports.
### Using `--f` and accessing `port2` , `port3` and `port0` may cause System Failure.

## USING `dts` FOR SAVING DATA IN A VARIABLE
 `dts data var`  
 
The `var` operand saves the `data` inside of a single byte which is directly accessible as a temporaey storage for outputting or saving critical user data.


## **View Previous Page**
<a href="../Commands.md">View All Supported Commands of Micro Virtual - R</a>
