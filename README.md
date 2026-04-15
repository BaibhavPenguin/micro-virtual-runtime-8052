# **Micro Virtual Runtime (uVR AT89S52)** <br>
**Micro Virtual - R Copyright 2026 Baibhav Bhattacharya**  
Micro Virtual - R is a minimal runtime enviornment for Micro Controllers. This specific rendition of Micro Virtual - R is designed in compatibility with 8052 Class Microcontrollers MMCS51 specifically AT89S52.
The entire runtime can fully function within the 256 byte internal ram of the AT89S52. It supprots full Serial Communication. Command based audit. Fast paced industrial prototyping and a hands free programming approach.<br>

## **The Vision of Micro Virtual - R**<br>
**A small program for blinking led's in C**<br>
`#include <reg52.h>

	void delay(unsigned char ms){
		unsigned char i , j;
		for(i = 0 ; i <= ms ; i++){
			for(j = 0 ; j <= 1275 ; j++){
				
			};
		};
	}

	void main(){
		while(1){
			P1.1 = 1
			delay(200);
			P1.1 = 0;
			delay(200);	
		}
	
	}

`
<br>
**Blinking LED via Micro virtual - R**
`tog p1 10 05 i 1` : toggle port 1 between 10 and 05 infinitely with a 1 second delay<br>
Micro Virtual - R significantly reduces the programming needed and eliminates the constant need of reflashing the rom for testing new logic.
<br>
## **The Memory Map of Micro virtual - R**<br>
 ![Memory Map](assets/memmap.png)
 <br>
 The Entire runtime fully functions inside of approximately 90 byte of ram. As any functional runtime
 can't only work on that, it uses the vast rom space of AT89S52 for maximum things possible.
<br>
## **The Software Architecture of Micro Virtual - R**
![Software Architecture Chart](assets/1.png)
<br>
![Software Architecture Chart](assets/2.png)
<br>
## **Micro virtual Runtime Interface** <br>
Micro virtual - R features a comprehensive CLI as a primary communication medium. It also supports font colors via `--c` command 
varivous arithmetic , logical and automation commands can be run via the serial terminal 
![Micro Virtual R Demo](assets/cli_demo_image.png)
<br>
## **uVR Command Demo** <br>
**Some supported commands are : **<br>
`add` : Add two numbers <br>
`sub` : Subtract two number <br>
`tog` : Toggle a Pin or Port<br>
`buf` : View previous Result<br>
`rld` : Load Virtual Accumulator (16-Bit)<br>
*and many more!* check **tree/main/docs/Commands.md** for detailed information on supported commands and their usage!<br>
## **Credits**
Micro Virtual - R is completely designed and built by **Baibhav Bhattacharya** and is free and open source for anyone to use and modify!<br>
**LinkedIn** https://www.linkedin.com/in/baibhav-bhattacharya-214533402/ <br>
**BaibhavPenguin** on GitHub <br>
## **Official Repository** <br>
https://github.com/BaibhavPenguin/micro-virtual-runtime-8052
