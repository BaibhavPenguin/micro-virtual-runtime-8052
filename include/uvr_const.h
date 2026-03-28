#ifndef uvr_const_h
#define uvr_const_h

// Micro Virtual Runtime 2026 : Ported for AT89S52 : Unique ROM Literals

//=================================== COMMAND LIST ==========================================
#define sADD '+'  //Add 2 numbers
#define sSUB '-'  //Subtract a Number from another
#define sMUL '*'  //Multiply two numbers
#define sDIV '/'  //Divide two numbers
#define sOUT 'O'  //Output a byte to Ports , Memory or Serial
#define sLPP '#'  //Micro Loop Outputs 
#define sRES 'R'  //Reset State
#define sTICK 'T' //Start Timer Tick
#define sEXEC '?' //Execute Script


//================================== LITERALS ===============================================

#define hw_stack 0x60 //Starting Address of Hardware Stack

#define timer_l 0x00  //50 ms Master tick at T0 for 11.0592MHz

#define timer_h 0x4C //50 ms Master tick at T0

#define serial_baud_timer 0xFD  //Using Timer 1 for Serial at 9600 Baud Rate

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



#endif //uvr_const_h


