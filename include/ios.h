
#ifndef ios_h
#define ios_h

#define set 1
#define reset 0

void echo(void);
void print_ready_message(void);
void clear_terminal(void);
void print_boot_message(void);
void print_wait_message(void);
void print_success_message(void);
void print_invalid_cmd(void);
void terminal_reset(void);
void input_char_serial_polling(void);

void print_result_buffers(void);

#endif //ios_h
