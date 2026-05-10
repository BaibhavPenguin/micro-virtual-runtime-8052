#ifndef parser_h
#define parser_h

#define hsh_key 0b00111111

#define bck_spc '\b'

#define whitespc ' '

#define comma ','

#define backspace 0x7F


unsigned char unified_numeric_parser(void);     //Uses temp1




static void arithmetic_parser(void);

static inline void print_parser(void);

static inline void sleep_parser(void);

static inline void exit_parser(void);
static inline void end_parser(void);



#endif //parser_h