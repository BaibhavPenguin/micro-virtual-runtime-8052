#ifndef parser_h
#define parser_h

#define hsh_key 0b00111111

#define bck_spc '\b'

#define whitespc ' '

#define comma ','

#define backspace 0x7F


unsigned char parse_numeric_operand_single(void);     //Uses temp1
void parse_cmd(void);   // Uses temp0 , temp1



#define port0 136
#define port1 137
#define port2 138
#define port3 139
#define var 132
#define term 37


#define binary_flag 20
#define decimal_flag 22
#define raw_flag 36



#endif //parser_h