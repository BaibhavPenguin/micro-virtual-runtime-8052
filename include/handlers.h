#ifndef handlers_h
#define handlers_h

static inline void live_reset_handler(void);
static inline void live_program_stream_handler(void);
static inline void live_program_run_handler(void);
static inline void live_terminal_clear_handler(void);
static inline void live_debug_parser_handler(void);
static inline void prog_erase_handler(void);

static inline void add_handler(void);
static inline void sub_handler(void);
static inline void mul_handler(void);
static inline void div_handler(void);



static inline void prog_handler(void);
static inline void exit_handler(void);
static inline void run_handler(void);
static inline void end_handler(void);
static inline void parse_handler(void);
static inline void print_handler(void);
static inline void sleep_handler(void);

static void unified_arithmetic_core(void);


static inline void infinite_flag_handler(void);
static inline void force_flag_handler(void);


static inline void define_handler(void);
static inline void assign_handler(void);





#endif //handlers_h