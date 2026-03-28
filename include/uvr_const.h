#ifndef uvr_const_h
#define uvr_const_h

// Micro Virtual Runtime 2026 : Ported for AT89S52 : Unique ROM Literals

//=================================== COMMAND LIST ==========================================
#define cadd 0x46   //add
#define csub 0x41   //sub
#define cdiv 0x50   //div
#define cmul 0x40  //mul
#define ccls 0x5d   //cls
#define cdel 0x4c   //del
#define ctog 0x4a   //tog
#define cand 0x43   //and
#define cor 0x0e   //or
#define cnot 0x54   //not
#define cxor 0x59   //xor
#define ccout 0x6f  //--o
#define ccin  0x69  //--i
#define cext 0x5a   //ext
#define c_enter '\r' //On Pressing Enter Key
#define col 0x63   //--c
#define rst 0x72 //--r
#define forever 0x66 //--f


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

#endif //uvr_const_h


