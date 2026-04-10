# **Micro Virtual \- R : AT89S52 (8052)**

**COPYRIGHT 2026 Baibhav Bhattacharya** 

## **What is Micro Virtual \- R (uVR) ?**

**Micro Virtual \- R**  is a minimal execution runtime for Embedded Devices.   
It features Live execution of commands over a Serial Interface.  
This specific rendition of Micro Virtual \- R is designed for the 8052 (MCS51) Family of microcontrollers and is made in compatibility with the AT89S52 Microcontroller.

The entire runtime can fully function within the OnBoard **128 bytes** **of Internal RAM.**  
Micro Virtual \- R is designed to reduce the complexity in testing loops and logic on the AT89S52.

## **Vision**

B**linking LED Program for At89S52 in C** 

`#include <8052.h>`   

`void delay(unsigned int ms)`  
`{`  
    	`unsigned int i, j;`  
`for(i = 0; i < ms; i++)`  
   	 `{`  
        		`` for(j = 0; j < 1275; j++);` ``  
`}`  
`}`

`void main(void)`  
`{`  
    `while(1)`  
    `{`  
        `P1 ^= 0x01;`    
        `delay(500);`  
    `}`  
`}`

**Live Blinking LED via Micro Virtual-R** 

`tog 255 , 0 , p1 , i`

`Format : tog data1 , data2 , output , iterations` 

Micro Virtual-R reduces the amount of programming and eliminates the need of constant flashing and rewriting of the ROM. 

## **Memory Footprint**

The entire runtime utilises 90 bytes of Memory.
<img width="960" height="720" alt="new_memory_map" src="https://github.com/user-attachments/assets/aa1bbcd7-08a7-42cb-966c-acc8089b76ba" />



## **Credits**

Designed and Built by Baibhav Bhattaharya   
“@BaibhavPenguin” on GitHub  
Copyright 2026 GPL v3.0 OpenSource License


## **Official Repository**

https://github.com/BaibhavPenguin/micro-virtual-runtime-8052
