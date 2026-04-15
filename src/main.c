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
	is_error = 0;
	echo_e = 0;
	wr_pointer = &prog_buffer[0];
	rd_pointer = &prog_buffer[0];
	prog_counter = 0;
} 

static inline void restore_sys(void){
	ES = 0;
	EA = 0;
	loop_counter = 0;
	while(loop_counter < buffer_size){
		prog_buffer[loop_counter] = 0;
		loop_counter++;
	};
	instruction_buffer = 0;
	op1 = 0;
	op2 = 0;
	loop_counter = 0;
	infinite_exec = 0;
	is_recieved = 0;
	wr_pointer = &prog_buffer[0];
	rd_pointer = &prog_buffer[0];
	prog_counter = 0;
	is_error = 0;
	EA = 1;
	ES = 1;

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

	if(echo_e){
		uart_send(backspace);
		return;
	};

	switch(*rd_pointer){
		case 0x0D:
			uart_send('\n');uart_send('\r');
		default:
			uart_send(*rd_pointer);
			
	};
	
	

}

void parse_cmd(void){
	
	command_parser:
	switch(prog_buffer[prog_counter]){
		case backspace:
			prog_counter++;
			prog_counter &= 0x1f;
			goto command_parser;
		case whitespc:
			prog_counter++;
			prog_counter &= 0x1f;
			goto command_parser;
		default:
			temp0 = 0; 			//For storing command length
			while(prog_buffer[prog_counter] != whitespc){
			if(prog_buffer[prog_counter] == c_enter){
				break;
			}
			temp1 = prog_buffer[prog_counter];
			prog_counter++;
			prog_counter &= 0x1f;
			
			temp1 =  temp1 ^ (hsh_key & prog_buffer[prog_counter]);
			prog_counter++;
			prog_counter &= 0x1f;
			
			temp1 = (temp1 >> 1) ^ prog_buffer[prog_counter];
			instruction_buffer = temp1;
			temp0++;
			prog_counter++;
			prog_counter &= 0x1f;
			}
			
			if(temp0 > 1){
				instruction_buffer = error_op;

			}
	}
	
}

void input_char_serial_polling(void){
	ES = 0;
	while(!RI);
	temp0 = SBUF;
	RI = 0;
	ES = 1;
}

void print_invalid_cmd(void){
	loop_counter = 0;
	while(loop_counter != len_error_code){
		uart_send(error_msg[loop_counter]);
		loop_counter++;
	};

	loop_counter = 0;
	while(loop_counter != len_invalid_cmd_msg){
		uart_send(invalid_msg[loop_counter]);
		loop_counter++;
	}

	loop_counter = 0;
	while(loop_counter != len_info_msg){
		uart_send(info_msg[loop_counter]);
		loop_counter++;
	};
	return;
}

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
	};
}

void print_success_message(void){
	loop_counter = 0;
	while(loop_counter != len_success_msg){
		uart_send(success_msg[loop_counter]);
		loop_counter++;
	};
}

void print_result_buffers(void){
	temp_integer = result;
	loop_counter = 0;
	if(temp_integer == 0){
		uart_send('0');
		uart_send('\r');uart_send('\n');
		is_success = 1;
		return;
	};

	while(temp_integer > 0){
		result_char_buffer[loop_counter] = (temp_integer % 10) + 0x30;
		temp_integer /= 10;
		loop_counter++;
	};

	uart_send(result_char_buffer[4]);
	uart_send(result_char_buffer[3]);
	uart_send(result_char_buffer[2]);
	uart_send(result_char_buffer[1]);
	uart_send(result_char_buffer[0]);
	uart_send('\r');uart_send('\n');
	is_success = 1;
	result_char_buffer[0] = 0;
	result_char_buffer[1] = 0;
	result_char_buffer[2] = 0;
	result_char_buffer[3] = 0;
	result_char_buffer[4] = 0;
	return;
	
}

void terminal_reset(void){
	uart_send(esc_char);uart_send(terminal_reset_byte); //Full Reset Terminal
}

void clear_terminal(void){
	uart_send(esc_char);uart_send('[');uart_send('2');uart_send('J');
	uart_send(esc_char);uart_send('[');uart_send('H');
}

unsigned char parse_numeric_operand_single(void){
	operand_parser:
	switch(prog_buffer[prog_counter]){
		case backspace:
			prog_counter++;
			prog_counter &= 0x1f;
			goto operand_parser;
		case whitespc:
			prog_counter++;
			prog_counter &= 0x1f;
			goto operand_parser;
		default:
				temp1 = 0;
				while(prog_buffer[prog_counter] != whitespc){
					
					if(prog_buffer[prog_counter] == c_enter){
						break;
					};
					temp1 *= 10;
					temp1 += prog_buffer[prog_counter] - 0x30;
					prog_counter++;
					prog_counter &= 0x1f;
				};
				return temp1;
	}
}

static inline void rst_handler(void){
	EA = 0; //Disable All Interrupts Temporarily
	WDTRST = 0x1E;  //Actication Byte 1
	WDTRST = 0xE1;	//Activation Byte 2
	print_wait_message();
	while(1);

}

static inline void color_handler(void){
	op1 = 0;
	op1 = parse_numeric_operand_single();
	if(op1 >= supported_ansi_color_operands ){
		is_error = 1;
		return;
	};
	uart_send(esc_char); //Escape Character
	uart_send('[');
	uart_send(ascii_three_char);
	uart_send(ascii_zero_char + op1);
	uart_send('m');
	is_success = 1;

}

static inline void infinite_flag_handler(void){
	loop_counter = 0;
	if(infinite_exec){
		infinite_exec = 0;
		while(loop_counter != len_infinite_disabled){
			uart_send(infinite_disabled_msg[loop_counter]);
			loop_counter++;
		};
	}
	else{
		infinite_exec = 1;
		while(loop_counter != len_infinite_enabled){
			uart_send(infinite_enabled_msg[loop_counter]);
			loop_counter++;
		};
	}
}

static inline void add_handler(void){
	op1 = parse_numeric_operand_single();
	op2 = parse_numeric_operand_single();
	if(op1 == 0 && op2 == 0){
		result = 0;
		goto print;
	};
	if(op1 != 0 && op2 == 0){
		result = result + op1;
		goto print;
	};
	result = op1 + op2;
	
	print:
	print_result_buffers();


}

static inline void sub_handler(void){
	op1 = parse_numeric_operand_single();
	op2 = parse_numeric_operand_single();
	if(op1 == 0 && op2 == 0){
		result = 0;
		goto print;
	};
	if(op1 != 0 && op2 == 0){
		result = result - op1;
		goto print;
	};
	result = op1 - op2;
	
	print:
	print_result_buffers();


}

static inline void div_handler(void){
	op1 = parse_numeric_operand_single();
	op2 = parse_numeric_operand_single();
	if(op1 == 0 && op2 == 0){
		is_error = 1;
		return;
	};
	if(op1 != 0 && op2 == 0){
		result = result / op1;
		goto print;
	}
	result = op1 / op2;
	
	print:
	print_result_buffers();


}

static inline void mul_handler(void){
	op1 = parse_numeric_operand_single();
	op2 = parse_numeric_operand_single();

	if(op1 != 0 && op2 == 0){
		result = result * op1;
		goto print;
	}
	result = op1 * op2;
	
	print:
	print_result_buffers();


}

static void ld_handler(void){
	ld_parser:
	switch(prog_buffer[prog_counter]){
		case backspace:
			prog_counter++;
			prog_counter &= 0x1f;
			goto ld_parser;
		case whitespc:
			prog_counter++;
			prog_counter &= 0x1f;
			goto ld_parser;
		default:
				result = 0;
				while(prog_buffer[prog_counter] != whitespc){
					
					if(prog_buffer[prog_counter] == c_enter){
						break;
					};
					result *= 10;
					result += prog_buffer[prog_counter] - 0x30;
					prog_counter++;
					prog_counter &= 0x1f;
				};
				is_success = 1;
		}
}

static inline void dts_handler(void){
	op1 = parse_numeric_operand_single();
	temp4 = op1;
	is_success = 1;
}

static inline void dtg_handler(void){
	temp2 = result;
	temp3 = (result >> 8);
	result = temp4;
	print_result_buffers();
	result = (temp3 << 8) + temp2;
}

static inline void not_handler(void){
	ld_handler();
	result = ~result;
	print_result_buffers();
}

static inline void shift_r_handler(void){
	op1 = parse_numeric_operand_single();
	op2 = parse_numeric_operand_single();
	
	if(!op2){
		result = result >> op1;
		goto print;
	};
	
	result = op2 >> op1;
	print:
	print_result_buffers();
}

static inline void shift_l_handler(void){
	op1 = parse_numeric_operand_single();
	op2 = parse_numeric_operand_single();
	
	if(!op2){
		result = result << op1;
		goto print;
	};
	
	result = op2 << op1;
	print:
	print_result_buffers();
}

static inline void mod_handler(void){
	op1 = parse_numeric_operand_single();
	op2 = parse_numeric_operand_single();
	if(op1 == 0 && op2 == 0){
		is_error = 1;
		return;
	};
	if(op1 != 0 && op2 == 0){
		result = result % op1;
		goto print;
	}
	result = op1 % op2;
	
	print:
	print_result_buffers();


}

static inline void and_handler(void){
	op1 = parse_numeric_operand_single();
	op2 = parse_numeric_operand_single();

	if(op1 != 0 && op2 == 0){
		result = result & op1;
		goto print;
	}
	result = op1 & op2;
	
	print:
	print_result_buffers();


}

static inline void orr_handler(void){
	op1 = parse_numeric_operand_single();
	op2 = parse_numeric_operand_single();
	if(op1 != 0 && op2 == 0){
		result = result | op1;
		goto print;
	}
	result = op1 | op2;
	
	print:
	print_result_buffers();


}

static inline void xor_handler(void){
	op1 = parse_numeric_operand_single();
	op2 = parse_numeric_operand_single();
	if(op1 != 0 && op2 == 0){
		result = result ^ op1;
		goto print;
	}
	result = op1 ^ op2;
	
	print:
	print_result_buffers();


}

static inline void dmv_handler(void){
	temp4 = result;
	is_success = 1;
}

static inline void dmr_handler(void){
	result = temp4;
	is_success = 1;
}


void bytecode_exec(void){
	switch(instruction_buffer){
		case no_op:
			break;
		case crst:
			rst_handler();
			break;
		case cclr:
			clear_terminal();
			break;
		case col:
			color_handler();
			break;
		case ccl:
			terminal_reset();
			break;
		case forever:
			infinite_flag_handler();
			break;
		case cadd:
			add_handler();
			break;
		case csub:
			sub_handler();
			break;
		case cdiv:
			div_handler();
			break;
		case cmul:
			mul_handler();
			break;
		case cbuf:
			print_result_buffers();
			break;
		case cld:
			ld_handler();
			break;
		case cdts:
			dts_handler();
			break;
		case cdtg:
			dtg_handler();
			break;
		case cmod:
			mod_handler();
			break;
		case cand:
			and_handler();
			break;
		case corr:
			orr_handler();
			break;
		case cxor:
			xor_handler();
			break;
		case cnot:
			not_handler();
			break;
		case cshiftr:
			shift_r_handler();
			break;
		case cshiftl:
			shift_l_handler();
			break;
		case cdmv:
			dmv_handler();
			break;
		case cdmr:
			dmr_handler();
			break;
		default:
			is_error = 1;
	};
	return;
	
}


//==================================================================================

void Serial_ISR(void) __interrupt(4)
{
	if(RI){
		switch(SBUF){
			case backspace:
				if(wr_pointer > &prog_buffer[0]){
					wr_pointer--;
				}
				echo_e = 1;
				break;
			default:
			*wr_pointer = SBUF;
			echo_e = 0;
			wr_pointer++;
			
		};
		is_recieved = 1;
		RI = 0;
		

		/*
		
		Saved for Restoration 

		*wr_pointer = SBUF;
		wr_pointer++;
		is_recieved = 1;
		RI = 0;
		
		*/
		
	
		
	}
}

void Timer2_ISR(void) __interrupt(5)
{
	system_tick++;
}








//========================================================================================

void main(void){
	SP = hw_stack; 		//initiaslze Stack Pointer;
	init_sys();
	init_serial();

	
	//============================System Boot Sequence===================//
	terminal_reset();
	print_boot_message();
	print_ready_message();

	while(1){
		echo();
		if(*rd_pointer == c_enter){
			
			ES = 0;				//Disable Serial Interrupt;
			parse_cmd();
			bytecode_exec();
			prog_counter++;		//Increment Virtual Program Counter 
			instruction_buffer = 0;
			ES = 1;
		};

		if(echo_e && rd_pointer > &prog_buffer[0]){
			rd_pointer--;
			echo_e = 0;
		}else{
			rd_pointer++;
		};

		if(is_success){
			print_success_message();
			is_success = 0;
		};
		if(is_error){
			print_invalid_cmd();
			restore_sys();
		};
		if(wr_pointer > &prog_buffer[31]){
			wr_pointer = &prog_buffer[0];
		};
		if(rd_pointer > &prog_buffer[31]){
			rd_pointer = &prog_buffer[0];
		};
		
		prog_counter &= 0x1f;				//Apply Bitmask to keep under 32 (buffer Size)	
		is_recieved = 0;
		

	}
}
	

