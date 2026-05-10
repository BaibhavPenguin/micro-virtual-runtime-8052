
#ifndef ios_h
#define ios_h



void echo(void);
void print_ready_message(void);
void print_boot_message(void);
void print_wait_message(void);
void print_success_message(void);
void print_invalid_cmd(void);
void terminal_reset(void);
void input_char_serial_polling(void);
void print_result_buffers(void);
void print_fail_safe_notice(void);

void print_program_enabled_msg(void);
void print_program_entered_msg(void);
void print_program_execution_msg(void);

void print_program_completed_msg(void);

#endif //ios_h
