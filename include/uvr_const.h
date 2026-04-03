#ifndef uvr_const_h
#define uvr_const_h

// Micro Virtual Runtime 2026 : Ported for AT89S52 : Unique ROM Literals

//=================================== COMMAND LIST ==========================================


//================================== LITERALS ===============================================

#define hw_stack 0x60 //Starting Address of Hardware Stack

#define timer_l 0x00  //50 ms Master tick at T0 for 11.0592MHz

#define timer_h 0x4C //50 ms Master tick at T0

#define serial_baud_timer 0xFD  //Using Timer 1 for Serial at 9600 Baud Rate

#define esc_char 0x1B



//================================== LOOKUP TABLES  ==========================================

#define len_boot_message 54

__code static char boot_message[54] = {
    'M','i','c','r' ,'o', ' ' ,'V','i','r','t','u','a','l','-','R',
    ' ','C','o','p','y','r','i','g','h','t', ' ' ,'2','0','2','6',
    ' ','B','a','i','b','h','a','v',' ','B','h','a','t','t','a',
    'c','h','r','y','a','\r','\n'
};

#define len_ready_message 7
__code static char ready_msg[7] = {
    'R','E','A','D','Y' , '\r' ,'\n'
};

#define len_invalid_cmd_msg 10;
__code static char invalid_msg[] = {
    'I','n','v','a','l','i','d',' ','C','M','D','\r','\n'
};

#define decimal_table 10
__code static char ascii_codes[] = {
    0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39
};

#define len_wait_msg 15
__code static char wait_msg[15] = {
    'P','r','o','c','e','s','s','i','n','g','.','.','.','\r','\n'
};

#define len_success_msg 4
__code static char success_msg[] = {
    'O' , 'K' , '\r' , '\n'
};
#endif //uvr_const_h


