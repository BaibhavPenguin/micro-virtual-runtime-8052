#ifndef uvr_variable_h
#define uvr_variable_h

#define buffer_ptr 0x40  //Starting Address of Program Buffer

// "__data" is used for placing the variables in Internal RAM of At89S52 00H to FFH
// Refer to 89S52MAP.txt for viewing the Memory Map

//=============================== PAGE ONE VARIABLES ============================================
volatile unsigned char __data __at (0x30) loop_counter = 0; //Store Loop Counters

volatile unsigned char __data __at (0x31)  prog_counter; //Store Program Counters
volatile unsigned char __data __at (0x32)  *rd_pointer;
volatile unsigned char __data __at (0x33)  *wr_pointer;

volatile unsigned char __data __at (0x34)  system_tick = 0; //Common System Time
volatile unsigned char __data __at (0x35) op1 = 0; //Operand Buffer
volatile unsigned char __data __at (0x36) op2 = 0; //perand Buffer
volatile unsigned char __data __at (0x37)  active_timer = 0; //To Calculate Timer Differences

volatile unsigned char __data __at (0x38) temp0 = 0;
volatile unsigned char __data __at (0x39) temp1 = 0;
volatile unsigned char __data __at (0x3A) temp2 = 0; //Temporary Variables
volatile unsigned char __data __at (0x3C) temp3 = 0;

volatile unsigned char __data __at (0x3D) instruction_buffer =0;
volatile unsigned char __data __at (0x3E) result_l = 0;
volatile unsigned char __data __at (0x3F) result_h = 0;

//=============================== MULTIPLEXED BUFFER ===========================================

volatile unsigned char __data __at (0x40) prog_buffer[32] = {0};


//============================== FLAGS ===========================
__bit __at(0x00) is_recieved;
__bit __at(0x01) infinite_exec;
__bit __at(0x02) is_error;
__bit __at(0x03) echo_e;
__bit __at(0x04) is_success;

#endif //uvr_variable_h
