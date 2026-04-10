#ifndef command_h
#define command_h



#define cadd 0x46   //add
#define csub 0x41   //sub
#define cdiv 0x50   //div
#define cmul 0x40  //mul
#define cbuf 0x4d  //buf
#define cclr 0x55   //clr
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
#define crst 0x72 //--r
#define forever 0x66 //--f
#define no_op 00
#define error_op 01
#define ccl 0x6b    //-cl

void bytecode_exec(void);

static inline void rst_handler(void);

static inline void color_handler(void);

static inline void input_handler(void);

static inline void infinite_flag_handler(void);

static inline void add_handler(void);
// cls handling done by clear_terminal system routine.


#endif  //command_h