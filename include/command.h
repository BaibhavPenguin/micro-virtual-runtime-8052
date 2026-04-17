#ifndef command_h
#define command_h



#define cadd 0x46   //add --done
#define csub 0x41   //sub --done
#define cdiv 0x50   //div --done
#define cmul 0x40  //mul --done
#define cbuf 0x4d  //buf --done
#define cclr 0x55   //clr --done
#define ctog 0x4a   //tog
#define cand 0x43   //and       --done
#define corr 0x5c   //orr      --done
#define cnot 0x54   //not       --done
#define cxor 0x59   //xor       --done
#define cshiftr 0x3e // >>>     --done
#define cshiftl 0x3c //<<<      --done


#define c_enter '\r' //On Pressing Enter Key
#define col 0x63   //--c --done
#define crst 0x72 //--r --done
#define forever 0x69 //--i --done
#define no_op 00        //--done
#define error_op 01     //--done
#define ccl 0x6b    //-cl --done
#define cdts 0x5b   //dts   --done
#define cdtg 0x4f   //dtg   --done
#define cld 0x4b //rld --done
#define csleep 0x5f //slp
#define cmod 0x45 //mod --done
#define cdmv 0x52 //dmv     --done
#define cdmr 0x56 //dmr     --done
#define cforce 0x66 //--f 


static inline void rst_handler(void);

static inline void color_handler(void);

static inline void input_handler(void);

static inline void infinite_flag_handler(void);

static inline void force_flag_handler(void);

static inline void add_handler(void);

static inline void sub_handler(void);

static inline void div_handler(void);

static inline void mul_handler(void);

static void ld_handler(void);   //Don't Cast as Inline as It is used multiple times.

static void dts_handler(void);

static void dtg_handler(void);

static inline void mod_handler(void);

static inline void and_handler(void);

static inline void orr_handler(void);

static inline void xor_handler(void);

static inline void not_handler(void);

static inline void shift_r_handler(void);

static inline void shift_l_handler(void);

static inline void dmv_handler(void);

static inline void dmr_handler(void);

// cls handling done by clear_terminal system routine.


#endif  //command_h