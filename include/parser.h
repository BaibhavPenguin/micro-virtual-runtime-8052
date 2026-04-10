#ifndef parser_h
#define parser_h

#define hsh_key 0b00111111

#define bck_spc '\b'

#define whitespc ' '

#define comma ','

#define backspace 0x7F


unsigned char parse_numeric_operand_single(void);     //Uses temp1
void parse_cmd(void);   // Uses temp0 , temp1


#endif //parser_h