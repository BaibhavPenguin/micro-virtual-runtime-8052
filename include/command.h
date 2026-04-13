#ifndef command_h
#define command_h



#define cadd 0x46   //add --done
#define csub 0x41   //sub --done
#define cdiv 0x50   //div --done
#define cmul 0x40  //mul --done
#define cbuf 0x4d  //buf --done
#define cclr 0x55   //clr --done
#define ctog 0x4a   //tog
#define cand 0x43   //and
#define cor 0x0e   //or
#define cnot 0x54   //not
#define cxor 0x59   //xor

#define cdto 0x47  //dto
#define cdin 0x48 //din
#define c_enter '\r' //On Pressing Enter Key
#define col 0x63   //--c --done
#define crst 0x72 //--r --done
#define forever 0x66 //--f --done
#define no_op 00        //--done
#define error_op 01     //--done
#define ccl 0x6b    //-cl --done
#define cdts 0x5b   //dts
#define cdtg 0x4f   //dtg
#define cld 0x4b //rld --done
#define csleep 0x5f //slp
#define cmod 0x45 //mod
#define cdmv 0x52 //dmv
#define cdmr 0x56 //dmr

void bytecode_exec(void);

static inline void rst_handler(void);

static inline void color_handler(void);

static inline void input_handler(void);

static inline void infinite_flag_handler(void);

static inline void add_handler(void);

static inline void sub_handler(void);

static inline void div_handler(void);

static inline void mul_handler(void);

static inline void ld_handler(void);

static inline void dts_handler(void);

static inline void dtg_handler(void);

static inline void mod_handler(void);



// cls handling done by clear_terminal system routine.


#endif  //command_h