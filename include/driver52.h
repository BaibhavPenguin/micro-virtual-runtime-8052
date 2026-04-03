#ifndef driver52_h
#define driver52_h


void init_sys();
void init_timer();
void init_serial();
void uart_send();
void start_timer();
unsigned char ascii_to_decimal(unsigned char);
void hex_to_ascii();
void start_interrupts();


#endif //driver52_h
