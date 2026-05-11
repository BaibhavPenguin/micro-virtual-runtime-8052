#include "at89s52_reg.h"
#include "uvr_variable.h"
#include "uvr_const.h"
#include "ios.h"
#include "parser.h"
#include "command.h"
#include "driver52.h"
#include "system_core.h"
#include "flags.h"
#include "virtual_stack_manager.h"
#include "handlers.h"

void init_sys(void){
	EA = enable;
	ES = enable;
	ET2 = enable;
	machine_state = state_listener;
	is_recieved = false;
	infinite_exec = false;
	is_error = false;
	echo_e = false;
	fail_safe_enabled = true;
	wr_pointer = &input_buffer[0];
	rd_pointer = &input_buffer[0];
	ip_buffer_agent = reset;
	backspace_block = true;
	state_programming_enabled = false;
	state_executing_script = false;
	is_requesting_syscall_access = false;
	is_input_buffer_reset = false;
	is_programmed = false;

	err_handler = NO_ERROR;
	//Error Codes
	
} 
void init_timer(void){
	//using Timer 2 in 16-Bit Auto Reload Mode 50ms tick
	T2CON = 0x00;
	RCAP2H = timer_h;
	RCAP2L = timer_l;
	TH2 = timer_h;
	TL2 = timer_l;
	TR2 = enable;


}
void init_serial(void){
	/* Uses Timer 1 in  8-Bit Autoreload Mode */
	TMOD = 0x20;				//Set TMOD to Use Timer 1 in 8 Bit Auto Reload
	TH1 = serial_baud_timer;	//Set Reload value
	TL1 = serial_baud_timer;	//Set Initial Value
	TR1 = enable;					//Start Timer 1
	SCON = 0x50;				//Serial Mode 1 , 8 Bit UART
	TI = reset;
	RI = reset;
}
void flush_inp_buffer(void){
	ip_buffer_agent = reset;
	rd_pointer = &input_buffer[0];
	wr_pointer = &input_buffer[0];
	loop_counter = reset;
	while(loop_counter < buffer_size){
		input_buffer[loop_counter] = 0;
		loop_counter++;
	};
	loop_counter = reset;
	is_input_buffer_reset = true;
}
void software_delay(void) __critical{
	unsigned int tempY;
	unsigned int tempX;
		for(tempX = 0 ; tempX < temp_integer ;tempX++){
			for(tempY = 0 ; tempY < 1275 ; tempY++){
				;
			};
		};

	return;
}


void uart_send(char dat){
	SBUF = dat;
	while(!TI);
	TI = reset;
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
			backspace_block = true;
		default:
			uart_send(*rd_pointer);
			
	};
	
	

}
void input_char_serial_polling(void){
	ES = reset;
	while(!RI);
	temp0 = SBUF;
	RI = reset;
	ES = set;
}
void print_invalid_cmd(void){
	loop_counter = reset;
	while(loop_counter != len_error_code){
		uart_send(error_msg[loop_counter]);
		loop_counter++;
	};

	loop_counter = reset;
	while(loop_counter != len_invalid_cmd_msg){
		uart_send(invalid_msg[loop_counter]);
		loop_counter++;
	}

	return;
}
void print_boot_message(void){
	loop_counter = reset;
	while(loop_counter != len_boot_message){
		uart_send(boot_message[loop_counter]);
		loop_counter++;
	};
	loop_counter = reset;
}
void print_ready_message(void){
	loop_counter = reset;
	while(loop_counter != len_ready_message){
		uart_send(ready_msg[loop_counter]);
		loop_counter++;
	};
	loop_counter = reset;
}

void print_success_message(void){
	loop_counter = reset;
	while(loop_counter != len_success_msg){
		uart_send(success_msg[loop_counter]);
		loop_counter++;
	};
	loop_counter = reset;
}
void print_output_buffers_dec(void){
	loop_counter = reset;
	if(temp_integer == 0){
		uart_send('0');
		uart_send('\r');uart_send('\n');
		is_success = true;
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
void print_output_buffers_bin(void){

	while(temp_integer){
		temp0 = temp_integer & 0x01;
		if(temp0){
			uart_send('1');
		}
		else{
			uart_send('0');
		}
		temp_integer = temp_integer >> 1;
	}
	uart_send('\r');uart_send('\n');

}
void terminal_reset(void){
	uart_send(esc_char);uart_send(terminal_reset_byte); //Full Reset Terminal
}
void print_fail_safe_notice(void){
	loop_counter = reset;
	while(loop_counter != len_failsafe_notice){
		uart_send(failsafe_notice[loop_counter]);
		loop_counter++;
	};
	loop_counter = reset;
}
void print_program_enabled_msg(void){
	loop_counter = reset;
	while(loop_counter < len_programming_enabled_msg){
		uart_send(programming_enabled_msg[loop_counter]);
		loop_counter++;
	};
	loop_counter = reset;
	uart_send(esc_char);uart_send('[');uart_send('3');uart_send('5');uart_send('m');
}
void print_program_entered_msg(void){
	loop_counter = reset;
	while(loop_counter < len_program_entered_msg){
		uart_send(program_entered_msg[loop_counter]);
		loop_counter++;
	};
	loop_counter = reset;
}
void print_program_execution_msg(void){
	loop_counter = reset;
	while(loop_counter < len_running_program_msg){
		uart_send(running_program_msg[loop_counter]);
		loop_counter++;
	};
	loop_counter = reset;
}
void print_program_completed_msg(void){
	result = 50 * system_tick;
	uart_send('D');uart_send('u');uart_send('r');uart_send('a');uart_send('t');uart_send('i');uart_send('o');uart_send('n');uart_send('(');
	uart_send('m');uart_send('s');uart_send(')');uart_send(' ');
	if(!result){
		uart_send('<');uart_send(' ');uart_send('5');uart_send('0');uart_send('\r');uart_send('\n');
		goto skip;
	}
	temp_integer = result;
	print_output_buffers_dec();
	skip:
	uart_send(esc_char);uart_send('[');uart_send('0');uart_send('m');

}


static unsigned char fetch_data_variable(unsigned char identifier_id){
	loop_counter = reset;
	while(loop_counter < data_stack_limit){
		if(virtual_data_stack[loop_counter][symbol] == identifier_id){
			return virtual_data_stack[loop_counter][data_segment];
		}
		loop_counter++;
	}
	is_error = true;
	err_handler = ERR_INVALID_TOKEN;
	return 255;
}
static void create_data_variable(unsigned char identifier_id){
	loop_counter = reset;
	while(loop_counter < data_stack_limit){
		if((virtual_data_stack[loop_counter][symbol]) == reset){
			virtual_data_stack[loop_counter][symbol] = identifier_id;
			return;
		};
		loop_counter++;
	};
	loop_counter = reset;
	is_error = true;
	err_handler = ERR_DATA_STACK_OVERFLOW;
}
static unsigned char fetch_variable_slot(unsigned char identifier_id){
	loop_counter = reset;
	while(loop_counter < data_stack_limit){
		if(virtual_data_stack[loop_counter][symbol] == identifier_id){
			return loop_counter;
		}
		loop_counter++;
	}
	is_error = true;
	err_handler = ERR_INVALID_TOKEN;
	return 255;
}
static void assign_data_variable(unsigned char identifier_id , unsigned char data){
	temp3 = fetch_variable_slot(identifier_id);
	if(is_error){
		return;
	}
	virtual_data_stack[temp3][data_segment] = data;
	return;
}
static void delete_data_variable(unsigned char identifier_id){
	loop_counter = reset;
	while(loop_counter < data_stack_limit){
		if(virtual_data_stack[loop_counter][symbol] == identifier_id){
			virtual_data_stack[loop_counter][symbol] = reset;
			virtual_data_stack[loop_counter][data_segment] = reset;
		}
		loop_counter++;
	}
	is_error = true;
	err_handler = ERR_INVALID_TOKEN;
	return;
}









unsigned char unified_numeric_parser(void){
	operand_parser:
	switch(input_buffer[ip_buffer_agent]){
		case backspace:
			increment_ip_buffer_agent();
			goto operand_parser;
		case whitespc:
			increment_ip_buffer_agent();
			goto operand_parser;
		default:
				temp1 = 0;
				while(input_buffer[ip_buffer_agent] != whitespc){
					
					if(input_buffer[ip_buffer_agent] == c_enter){
						break;
					};
					temp1 *= 10;
					temp1 += input_buffer[ip_buffer_agent] - 0x30;
					increment_ip_buffer_agent();
				};
				return temp1;
	}
}
static void unified_numeric_word_parser(void){
	ld_parser:
	switch(input_buffer[ip_buffer_agent]){
		case backspace:
			increment_ip_buffer_agent();
			goto ld_parser;
		case whitespc:
			increment_ip_buffer_agent();
			goto ld_parser;
		default:
				temp_integer  = 0;
				while(input_buffer[ip_buffer_agent] != whitespc){
					
					if(input_buffer[ip_buffer_agent] == c_enter){
						break;
					};
					temp_integer *= 10;
					temp_integer += input_buffer[ip_buffer_agent] - 0x30;
					increment_ip_buffer_agent();
				};
				
	}
}

static void arithmetic_parser(void){

	op1 = unified_numeric_parser();
	op2 = unified_numeric_parser();
	op3 = unified_numeric_parser();
	op4 = unified_numeric_parser();

	program_buffer[virtual_program_counter] = instruction_buffer;
	increment_virtual_program_counter();
	program_buffer[virtual_program_counter] = op1;
	increment_virtual_program_counter();
	program_buffer[virtual_program_counter] = op2;
	increment_virtual_program_counter();
	program_buffer[virtual_program_counter] = op3;
	increment_virtual_program_counter();
	program_buffer[virtual_program_counter] = op4;
	increment_virtual_program_counter();



}

static void unified_arithmetic_core(void){
	instruction_buffer = program_buffer[virtual_program_counter];
	increment_virtual_program_counter();
	op1 = program_buffer[virtual_program_counter];
	increment_virtual_program_counter();
	op2 = program_buffer[virtual_program_counter];
	increment_virtual_program_counter();
	op3 = program_buffer[virtual_program_counter];
	increment_virtual_program_counter();
	op4 = program_buffer[virtual_program_counter];

	temp0 = reset;
	temp1 = reset;

	switch(op1){
		case val_flag:
			temp0 = op2;
			temp1 = op3;
			temp_integer = 0;
			break;
		case dot_result:
			temp0 = op2;
			temp1 = 0;
			temp_integer = result;
			op4 = op3;
			break;
		case dot_xword:
			temp0 = op2;
			temp1 = 0;
			temp_integer = xword;
			op4 = op3;
			break;
		case dat_flag:
			temp0 = fetch_data_variable(op2);
			temp1 = fetch_data_variable(op3);
			temp_integer = 0;
			break;
		default:
			is_error = 1;
			err_handler = ERR_INVALID_OPERAND;

	};

	switch(instruction_buffer){
		case cadd:
			temp_integer += temp0 + temp1;
			break;

		case csub:
			if(temp1 == 0){
				temp_integer = temp_integer - temp0;
				break;
			}
			else{
				temp_integer =  temp0 - temp1;
			};
			break;

		case cmul:
			if(temp1 == 0){
				temp_integer = temp_integer * temp0;
				break;
			}
			else{
				temp_integer =  temp0 * temp1;
			};
			break;

		case cdiv:
			if(temp0 == 0){
				is_error = 1;
				err_handler = ERR_ZERO_DIVISION;
				break;
			};
			if(temp1 == 0){
				temp_integer = temp_integer / temp0;
				break;
			}
			else{
				temp_integer =  temp0 / temp1;
			};
			break;

		case cmod:
			if(temp0 == 0){
				is_error = 1;
				err_handler = ERR_ZERO_DIVISION;
				break;
			};
			if(temp1 == 0){
				temp_integer = temp_integer % temp0;
				break;
			}
			else{
				temp_integer =  temp0 % temp1;
			};
			break;
		
		
	}

	switch(op4){
		case dot_result:
			result = temp_integer;
			break;
		case dot_xword:
			xword = temp_integer;
			break;
		default:
			temp0 = temp_integer;
			assign_data_variable(op4,temp0);
	}
	

	

}



static inline void end_parser(void){
	program_buffer[virtual_program_counter] = instruction_buffer;
	increment_virtual_program_counter();
}
static inline void end_handler(void){
	state_executing_script = false;
	is_success = true;
	print_program_completed_msg();
}

static inline void prog_handler(void){
	state_programming_enabled = true;
	state_executing_script = false;
	loop_counter = reset;
	while(loop_counter < 80){
		program_buffer[loop_counter] = 0;
		loop_counter++;
	}
	loop_counter = reset;
	print_program_enabled_msg();
}
static inline void run_handler(void){
	if(is_programmed){
		state_programming_enabled = false;
		state_executing_script = true;
		print_program_execution_msg();
	}
	else{
		//print_invalid_prog_msg();
	}
}
	
static inline void parse_handler(void){
	op1 = unified_numeric_parser();
	temp_integer = op1;
	print_output_buffers_dec();
}
static inline void exit_handler(void){
	state_programming_enabled = false;
	is_programmed = true;
	print_program_entered_msg();
}
static inline void prog_erase_handler(void){
	loop_counter = reset;
	while(loop_counter < 80){
		program_buffer[loop_counter] = 0;
		loop_counter++;
	}
	loop_counter = reset;
	is_programmed = false;
	//print_prog_erased_msg();
}


static inline void print_parser(void){
	op1 = unified_numeric_parser();
	op2 = unified_numeric_parser();
	program_buffer[virtual_program_counter] = instruction_buffer;
	increment_virtual_program_counter();
	program_buffer[virtual_program_counter] = op1;
	increment_virtual_program_counter();
	program_buffer[virtual_program_counter] = op2;
	increment_virtual_program_counter();
}
static inline void print_handler(void){
	increment_virtual_program_counter();
	op1 = program_buffer[virtual_program_counter];
	increment_virtual_program_counter();
	op2 = program_buffer[virtual_program_counter];
	switch(op1){
		case dot_xword:
			uart_send('x');uart_send('W');uart_send('O');uart_send('R');uart_send('D');uart_send(':');uart_send(' ');
			temp_integer = xword;
			break;
		case dot_result:
			uart_send('v');uart_send('A');uart_send('C');uart_send('C');uart_send(':');uart_send(' ');
			temp_integer = result;
			break;
		default:
			temp_integer = fetch_data_variable(op1);
	};

	switch(op2){
		case formatted_decimal:
			print_output_buffers_dec();
			break;
		case formatted_bin:
			print_output_buffers_bin();
			break;
		case formatted_raw:
			temp0 = temp_integer;
			uart_send(temp0);
			break;
		case formatted_dec_bin:
			int temp = temp_integer;
			print_output_buffers_dec();
			temp_integer = temp;
			print_output_buffers_bin();
			break;
		default:
			is_error = true;
			err_handler = ERR_INVALID_OPERAND;
			
	};
	
}

static inline void sleep_parser(void){
	unified_numeric_word_parser();
	program_buffer[virtual_program_counter] = instruction_buffer;
	increment_virtual_program_counter();
	program_buffer[virtual_program_counter] = (temp_integer &= 0xff);
	temp_integer = temp_integer >> 8;
	increment_virtual_program_counter();
	program_buffer[virtual_program_counter] = (temp_integer &= 0xff);
	increment_virtual_program_counter();
}
static inline void sleep_handler(void){
	increment_virtual_program_counter();
	temp_integer = program_buffer[virtual_program_counter];
	increment_virtual_program_counter();
	temp_integer = temp_integer << 8;
	temp_integer |= program_buffer[virtual_program_counter];
	temp_integer = temp_integer >> 8;
	software_delay();
}

static inline void define_parser(void){
	program_buffer[virtual_program_counter] = instruction_buffer;
	increment_virtual_program_counter();
	op1 = unified_numeric_parser();
	program_buffer[virtual_program_counter] = op1;
	increment_virtual_program_counter();
}
static inline void define_handler(void){
	increment_virtual_program_counter();
	op1 = program_buffer[virtual_program_counter];
	create_data_variable(op1);
}

static inline void assign_parser(void){
	program_buffer[virtual_program_counter] = instruction_buffer;
	increment_virtual_program_counter();

	op1 = unified_numeric_parser();
	op2 = unified_numeric_parser();

	program_buffer[virtual_program_counter] = op1;
	increment_virtual_program_counter();
	program_buffer[virtual_program_counter] = op2;
	increment_virtual_program_counter();

}
static inline void assign_handler(void){
	increment_virtual_program_counter();
	op1 = program_buffer[virtual_program_counter];
	increment_virtual_program_counter();
	op2 = program_buffer[virtual_program_counter];
	assign_data_variable(op1,op2);
}

//==================================================================================

void Serial_ISR(void) __using(1) __interrupt(4)
{
	if(RI){
		switch(SBUF){
			case backspace:
				if(wr_pointer > &input_buffer[0] && !backspace_block){
					wr_pointer--;
					*wr_pointer = 0;
				}
				echo_e = true;
				break;
			default:
			*wr_pointer = SBUF;
			echo_e = false;
			wr_pointer++;
			
		};
		is_recieved = true;
		RI = false;
		
	}
}

void Timer2_ISR(void) __using(2) __interrupt(5)
{
	system_tick++;
}



//========================= RUNTIME SEQUENCES
static inline void runtime_fail_restore_seq(void){
	ES = disable;
	EA = disable;
	instruction_buffer = reset;
	loop_counter = reset;
	while(loop_counter < 32){
		input_buffer[loop_counter] = reset;
		loop_counter++;
	}
	loop_counter = reset;

	op1 = reset;
	op2 = reset;
	loop_counter = reset;
	infinite_exec = false;
	is_recieved = false;
	wr_pointer = &input_buffer[0];
	rd_pointer = &input_buffer[0];
	ip_buffer_agent = reset;
	if(state_programming_enabled){
		uart_send(esc_char);uart_send('[');uart_send('3');uart_send('4');uart_send('m');
	}

	EA = enable;
	ES = enable;

}
static inline void config_machine_state(void){
	if(*rd_pointer == c_enter){
		machine_state = state_exec;
	}
	else{
		machine_state = state_listener;
	}
}
static inline void increment_ip_buffer_agent(void){
	ip_buffer_agent++;
	ip_buffer_agent &= 0x1f;				//Apply Bitmask to keep under 32 (buffer Size)	
}
static inline void increment_virtual_program_counter(void){
	virtual_program_counter++;
	virtual_program_counter &= 0x3f;

}
static inline void runtime_memory_mgmt(void){
	if(is_input_buffer_reset == true){
		goto skip_buffer_mgmt;
	}
	if(echo_e){
		if(!backspace_block){
			rd_pointer--;
		}
		
		echo_e = false;
		
	}
	else{
		rd_pointer++;
		backspace_block = false;
		
	};
	if(rd_pointer < &input_buffer[0]){
		rd_pointer++;
	}

	if(rd_pointer > &input_buffer[31]){
		rd_pointer = &input_buffer[0];
	};

	if(wr_pointer > &input_buffer[31]){
		wr_pointer = &input_buffer[0];
	};
	skip_buffer_mgmt:
	is_input_buffer_reset = false;

}
static inline void runtime_forbidden_access(void){

}
static inline void runtime_terminal_reset(void){
	terminal_reset();
}
static inline void runtime_reset_seq(void){
	EA = disable; //Disable All Interrupts Temporarily
	WDTRST = 0x1E;  //Actication Byte 1
	WDTRST = 0xE1;	//Activation Byte 2
	while(1);

}
static inline void runtime_state_cleanup(void){
	if(is_success){
		print_success_message();
		is_success = false;
	};

	if(is_error){
		print_invalid_cmd();
		runtime_fail_restore_seq();
		is_error = false;
	};
		is_recieved = false;
}
static inline void runtime_reset_state(void){
	machine_state = state_listener;
}
static inline void runtime_core_seq(void){
	if(machine_state){
		ES = disable;				//Disable Serial Interrupt;
		runtime_command_parser();
		runtime_syscall_request_handler();
		runtime_command_exec();
		instruction_buffer = reset;
		flush_inp_buffer();
		ES = enable;
	};
}
static inline void runtime_boot_seq(void){
	terminal_reset();
	print_boot_message();
	print_ready_message();
}
static inline void runtime_hwinit_seq(void){
	SP = hw_stack; 		//initiaslze Stack Pointer;
	init_sys();
	init_serial();
	//init_timer();
}
static inline void runtime_syscall_request_handler(void){
	if(is_requesting_syscall_access == true && state_programming_enabled == false){
		switch(instruction_buffer){
			case cenable :
				break;
			case cdisable:
				break;
			case crst:
				runtime_reset_seq();
				break;
			case cclr:
				runtime_terminal_reset();
				break;
			case cparse:
				parse_handler();
				break;
			case cprog:
				prog_handler();
				break;
			case crun:
				run_handler();
				break;
			case no_op:
				break;
			case cerase:
				prog_erase_handler();
				break;
			default:
				is_error = true;

		}
		is_requesting_syscall_access = false;
	}
}
static inline void runtime_command_parser(void){
	instruction_buffer = unified_numeric_parser();
	if(state_programming_enabled == false){
			is_requesting_syscall_access = true;
			goto skip;
		}
	
	parser_loop:
	switch(instruction_buffer){
		case cdiv:
		case cmod:
		case cmul:
		case csub:
		case cadd:
			arithmetic_parser();
			break;
		case cexit:
			exit_handler();
			break;
		case cprint:
			print_parser();
			break;
		case csleep:
			sleep_parser();
			break;
		case cdefine:
			define_parser();
			break;
		case cassign:
			assign_parser();
			break;
		case cend:
			end_parser();
			break;
		case no_op:
			break;
		default:
			is_error = true;
	}

	skip:
}
void runtime_command_exec(void){
	if(!state_executing_script){
		return;
	};

	virtual_program_counter = reset;
	TR2 = disable; 				//Disable timer2 for preventing misallignment
	system_tick = reset;
	init_timer();

	while(state_executing_script){
		instruction_buffer = program_buffer[virtual_program_counter];
		switch(instruction_buffer){
			case cadd:
			case csub:
			case cmul:
			case cdiv:
			case cmod:
				unified_arithmetic_core();
				break;
			
			case cprint:
				print_handler();
				break;
			case csleep:
				sleep_handler();
				break;
			case cdefine:
				define_handler();
				break;
			case cassign:
				assign_handler();
				break;
			case cend:
				end_handler();
				break;
			default:
				
			
		}
		if(is_error){
			//print_program_error_code();
			state_executing_script = false;
			is_success = false;
		}
		increment_virtual_program_counter();
	}
	TR2 = disable; 			//Disable timer2 after execution
	virtual_program_counter = reset;
	
	

	
}



//========================================================================================

void main(void){
	runtime_hwinit_seq();
	runtime_boot_seq();
	
	while(true){
		echo();					
		config_machine_state();		
		runtime_core_seq();
		runtime_memory_mgmt();
		runtime_state_cleanup();
		runtime_reset_state();	

	}
}
	

