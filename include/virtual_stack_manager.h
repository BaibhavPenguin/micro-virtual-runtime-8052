#ifndef virtual_stack_manager_h
#define virtual_stack_manager_h

#define data_stack_limit 10
#define symbol 0
#define data_segment 1

static unsigned char fetch_data_variable(unsigned char);
static void create_data_variable(unsigned char);
static void assign_data_variable(unsigned char,unsigned char);
static void delete_data_variable(unsigned char);
static unsigned char fetch_variable_slot(unsigned char);

static void reset_stack(void);

#endif //virtual_stack_manager_h