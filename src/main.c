#include "at89s52_reg.h"
#include "uvr_variable.h"
#include "uvr_const.h"
#include "ios.h"
#include "parser.h"
#include "command.h"

void init_sys(void){
	EA = 1;
	ES = 1;
	ET2 = 1;
	is_recieved = 0;
	infinite_exec = 0;

	wr_pointer = &prog_buffer[0];
	rd_pointer = &prog_buffer[0];
	prog_counter = 0;
} 

void init_timer(void){
	//using Timer 2 in 16-Bit Auto Reload Mode 50ms tick
	T2CON = 0x00;
	RCAP2H = timer_h;
	RCAP2L = timer_l;
	TH2 = timer_h;
	TL2 = timer_l;
	TR2 = 1;


}


void init_serial(void){
	/* Uses Timer 1 in  8-Bit Autoreload Mode */
	TMOD = 0x20;				//Set TMOD to Use Timer 1 in 8 Bit Auto Reload
	TH1 = serial_baud_timer;	//Set Reload value
	TL1 = serial_baud_timer;	//Set Initial Value
	TR1 = 1;					//Start Timer 1
	SCON = 0x50;				//Serial Mode 1 , 8 Bit UART
	TI = 0;
}


void uart_send(char dat){
	SBUF = dat;
	while(!TI);
	TI = 0;
}



void echo(void){
	while(!is_recieved);
	switch(*rd_pointer){
		case 0x0D:
			uart_send('\n');uart_send('\r');
		default:
			uart_send(*rd_pointer);
			
	};
	
	

}

unsigned char ascii_to_decimal(unsigned char dat){
	uart_send(dat);
	if(dat > 0x29 && dat < 0x40){
		dat = dat - 0x30;
	}
	else{
		return 0;
	}
	return dat;
	
}

void parse_cmd(void){
	command_parser:
	switch(prog_buffer[prog_counter]){
		case bck_spc:
			prog_counter++;
			goto command_parser;
		case del_key:
			prog_counter++;
			goto command_parser;
		case whitespc:
			prog_counter++;
			goto command_parser;
		default:
			while(prog_buffer[prog_counter] != whitespc){
			if(prog_buffer[prog_counter] == bck_spc){
				prog_counter++;
			}
			if(prog_buffer[prog_counter] == c_enter){
				break;
			}
			temp1 = prog_buffer[prog_counter];
			prog_counter++;
			temp1 =  temp1 ^ (hsh_key & prog_buffer[prog_counter]);
			prog_counter++;
			temp1 = (temp1 >> 1) ^ prog_buffer[prog_counter];
			instruction_buffer = temp1;
			prog_counter++;
			}
	}
	
}



void delay_ms_500(void){}
void hex_to_ascii(void){}


void print_boot_message(void){
	temp0 = 0;
	while(temp0 != len_boot_message){
		uart_send(boot_message[temp0]);
		temp0++;
	};
	temp0 = 0;
}

void print_ready_message(void){
	temp0 = 0;
	while(temp0 != len_ready_message){
		uart_send(ready_msg[temp0]);
		temp0++;
	};
	temp0 = 0;
}

void print_wait_message(void){
	loop_counter = 0;
	while(loop_counter != len_wait_msg){
		uart_send(wait_msg[loop_counter]);
		loop_counter++;
	}
}

void clear_terminal(void){
	//uart_send(0x1B);uart_send(0x5B);(0x48); //ANSI Home Cursor
	//uart_send(0x1B);uart_send(0x5B);uart_send(0x32);uart_send(0x4A); //Clear Sequence ANSI
	uart_send(0x1B);uart_send(0x63); //Full Reset Terminal
}


void rst_handler(void){
	EA = 0; //Disable All Interrupts Temporarily
	WDTRST = 0x1E;  //Actication Byte 1
	WDTRST = 0xE1;	//Activation Byte 2
	while(1){
		print_wait_message();
	}

}


void bytecode_exec(void){

	switch(instruction_buffer){
		case crst:
			rst_handler();
			break;
		case ccls:
			clear_terminal();
			break;
		default:
			uart_send('E');
	};
	return;
	
}


//==================================================================================

void Serial_ISR(void) __interrupt(4)
{
	if(RI){
		*wr_pointer = SBUF;
		wr_pointer++;
		is_recieved = 1;
		RI = 0;
	}
}


void Timer2_ISR(void) __interrupt(5)
{
	system_tick++;
}


void main(void){
	SP = hw_stack; 		//initiaslze Stack Pointer;
	init_sys();
	init_serial();

	
	//============================System Boot Sequence===================//
	clear_terminal();
	print_boot_message();
	print_ready_message();

	while(1){
		echo();
		switch(*rd_pointer){
			case c_enter:
				ES = 0;				//Disable Serial Interrupt;
				parse_cmd();
				bytecode_exec();
				uart_send(instruction_buffer);
				prog_counter++;		//Increment Virtual Program Counter 
				ES = 1;
				
			default:
			rd_pointer++;
		}
		if(wr_pointer > &prog_buffer[31]){
			wr_pointer = &prog_buffer[0];
		};
		if(rd_pointer > &prog_buffer[31]){
			rd_pointer = &prog_buffer[0];
		};
		if(prog_counter > 31){
			prog_counter = 0;
		}
		is_recieved = 0;
		

	}
}
	

