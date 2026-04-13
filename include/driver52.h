#ifndef driver52_h
#define driver52_h


void init_sys(void);
static inline void restore_sys(void);
void init_timer(void);
void init_serial(void);
void uart_send(void);
void start_timer(void);
void start_interrupts(void);


#endif //driver52_h
