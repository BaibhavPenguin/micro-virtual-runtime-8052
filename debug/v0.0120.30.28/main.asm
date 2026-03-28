;--------------------------------------------------------
; File Created by SDCC : free open source ISO C Compiler
; Version 4.5.0 #15242 (Linux)
;--------------------------------------------------------
	.module main
	
	.optsdcc -mmcs51 --model-small
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _Timer2_ISR
	.globl _Serial_ISR
	.globl _hex_to_ascii
	.globl _ascii_to_hex
	.globl _delay_ms_500
	.globl _echo
	.globl _uart_send
	.globl _init_serial
	.globl _init_timer
	.globl _init_sys
	.globl _WDTRST
	.globl _TF2
	.globl _EXF2
	.globl _RCLK
	.globl _TCLK
	.globl _EXEN2
	.globl _TR2
	.globl _C_T2
	.globl _CP_RL2
	.globl _T2CON_7
	.globl _T2CON_6
	.globl _T2CON_5
	.globl _T2CON_4
	.globl _T2CON_3
	.globl _T2CON_2
	.globl _T2CON_1
	.globl _T2CON_0
	.globl _PT2
	.globl _ET2
	.globl _CY
	.globl _AC
	.globl _F0
	.globl _RS1
	.globl _RS0
	.globl _OV
	.globl _F1
	.globl _P
	.globl _PS
	.globl _PT1
	.globl _PX1
	.globl _PT0
	.globl _PX0
	.globl _RD
	.globl _WR
	.globl _T1
	.globl _T0
	.globl _INT1
	.globl _INT0
	.globl _TXD
	.globl _RXD
	.globl _P3_7
	.globl _P3_6
	.globl _P3_5
	.globl _P3_4
	.globl _P3_3
	.globl _P3_2
	.globl _P3_1
	.globl _P3_0
	.globl _EA
	.globl _ES
	.globl _ET1
	.globl _EX1
	.globl _ET0
	.globl _EX0
	.globl _P2_7
	.globl _P2_6
	.globl _P2_5
	.globl _P2_4
	.globl _P2_3
	.globl _P2_2
	.globl _P2_1
	.globl _P2_0
	.globl _SM0
	.globl _SM1
	.globl _SM2
	.globl _REN
	.globl _TB8
	.globl _RB8
	.globl _TI
	.globl _RI
	.globl _P1_7
	.globl _P1_6
	.globl _P1_5
	.globl _P1_4
	.globl _P1_3
	.globl _P1_2
	.globl _P1_1
	.globl _P1_0
	.globl _TF1
	.globl _TR1
	.globl _TF0
	.globl _TR0
	.globl _IE1
	.globl _IT1
	.globl _IE0
	.globl _IT0
	.globl _P0_7
	.globl _P0_6
	.globl _P0_5
	.globl _P0_4
	.globl _P0_3
	.globl _P0_2
	.globl _P0_1
	.globl _P0_0
	.globl _TH2
	.globl _TL2
	.globl _RCAP2H
	.globl _RCAP2L
	.globl _T2CON
	.globl _B
	.globl _ACC
	.globl _PSW
	.globl _IP
	.globl _P3
	.globl _IE
	.globl _P2
	.globl _SBUF
	.globl _SCON
	.globl _P1
	.globl _TH1
	.globl _TH0
	.globl _TL1
	.globl _TL0
	.globl _TMOD
	.globl _TCON
	.globl _PCON
	.globl _DPH
	.globl _DPL
	.globl _SP
	.globl _P0
	.globl _wr_pointer
	.globl _rd_pointer
	.globl _is_recieved
	.globl _prog_buffer
	.globl _result_h
	.globl _result_l
	.globl _instruction_buffer
	.globl _temp3
	.globl _temp2
	.globl _temp1
	.globl _temp0
	.globl _active_timer
	.globl _op2
	.globl _op1
	.globl _system_tick
	.globl _prog_counter
	.globl _loop_counter
	.globl _print_boot_message
	.globl _print_ready_message
	.globl _clear_terminal
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0	=	0x0080
_SP	=	0x0081
_DPL	=	0x0082
_DPH	=	0x0083
_PCON	=	0x0087
_TCON	=	0x0088
_TMOD	=	0x0089
_TL0	=	0x008a
_TL1	=	0x008b
_TH0	=	0x008c
_TH1	=	0x008d
_P1	=	0x0090
_SCON	=	0x0098
_SBUF	=	0x0099
_P2	=	0x00a0
_IE	=	0x00a8
_P3	=	0x00b0
_IP	=	0x00b8
_PSW	=	0x00d0
_ACC	=	0x00e0
_B	=	0x00f0
_T2CON	=	0x00c8
_RCAP2L	=	0x00ca
_RCAP2H	=	0x00cb
_TL2	=	0x00cc
_TH2	=	0x00cd
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0_0	=	0x0080
_P0_1	=	0x0081
_P0_2	=	0x0082
_P0_3	=	0x0083
_P0_4	=	0x0084
_P0_5	=	0x0085
_P0_6	=	0x0086
_P0_7	=	0x0087
_IT0	=	0x0088
_IE0	=	0x0089
_IT1	=	0x008a
_IE1	=	0x008b
_TR0	=	0x008c
_TF0	=	0x008d
_TR1	=	0x008e
_TF1	=	0x008f
_P1_0	=	0x0090
_P1_1	=	0x0091
_P1_2	=	0x0092
_P1_3	=	0x0093
_P1_4	=	0x0094
_P1_5	=	0x0095
_P1_6	=	0x0096
_P1_7	=	0x0097
_RI	=	0x0098
_TI	=	0x0099
_RB8	=	0x009a
_TB8	=	0x009b
_REN	=	0x009c
_SM2	=	0x009d
_SM1	=	0x009e
_SM0	=	0x009f
_P2_0	=	0x00a0
_P2_1	=	0x00a1
_P2_2	=	0x00a2
_P2_3	=	0x00a3
_P2_4	=	0x00a4
_P2_5	=	0x00a5
_P2_6	=	0x00a6
_P2_7	=	0x00a7
_EX0	=	0x00a8
_ET0	=	0x00a9
_EX1	=	0x00aa
_ET1	=	0x00ab
_ES	=	0x00ac
_EA	=	0x00af
_P3_0	=	0x00b0
_P3_1	=	0x00b1
_P3_2	=	0x00b2
_P3_3	=	0x00b3
_P3_4	=	0x00b4
_P3_5	=	0x00b5
_P3_6	=	0x00b6
_P3_7	=	0x00b7
_RXD	=	0x00b0
_TXD	=	0x00b1
_INT0	=	0x00b2
_INT1	=	0x00b3
_T0	=	0x00b4
_T1	=	0x00b5
_WR	=	0x00b6
_RD	=	0x00b7
_PX0	=	0x00b8
_PT0	=	0x00b9
_PX1	=	0x00ba
_PT1	=	0x00bb
_PS	=	0x00bc
_P	=	0x00d0
_F1	=	0x00d1
_OV	=	0x00d2
_RS0	=	0x00d3
_RS1	=	0x00d4
_F0	=	0x00d5
_AC	=	0x00d6
_CY	=	0x00d7
_ET2	=	0x00ad
_PT2	=	0x00bd
_T2CON_0	=	0x00c8
_T2CON_1	=	0x00c9
_T2CON_2	=	0x00ca
_T2CON_3	=	0x00cb
_T2CON_4	=	0x00cc
_T2CON_5	=	0x00cd
_T2CON_6	=	0x00ce
_T2CON_7	=	0x00cf
_CP_RL2	=	0x00c8
_C_T2	=	0x00c9
_TR2	=	0x00ca
_EXEN2	=	0x00cb
_TCLK	=	0x00cc
_RCLK	=	0x00cd
_EXF2	=	0x00ce
_TF2	=	0x00cf
_WDTRST	=	0x00a6
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
;--------------------------------------------------------
; overlayable items in internal ram
;--------------------------------------------------------
	.area	OSEG    (OVR,DATA)
;--------------------------------------------------------
; Stack segment in internal ram
;--------------------------------------------------------
	.area SSEG
__start__stack:
	.ds	1

;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.org 0x0030
_loop_counter::
	.ds 1
	.org 0x0031
_prog_counter::
	.ds 1
	.org 0x0034
_system_tick::
	.ds 1
	.org 0x0035
_op1::
	.ds 1
	.org 0x0036
_op2::
	.ds 1
	.org 0x0037
_active_timer::
	.ds 1
	.org 0x0038
_temp0::
	.ds 1
	.org 0x0039
_temp1::
	.ds 1
	.org 0x003A
_temp2::
	.ds 1
	.org 0x003C
_temp3::
	.ds 1
	.org 0x003D
_instruction_buffer::
	.ds 1
	.org 0x003E
_result_l::
	.ds 1
	.org 0x003F
_result_h::
	.ds 1
	.org 0x0040
_prog_buffer::
	.ds 32
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
_is_recieved	=	0x0000
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; uninitialized external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
	.org 0x0032
_rd_pointer::
	.ds 1
	.org 0x0033
_wr_pointer::
	.ds 1
;--------------------------------------------------------
; initialized external ram data
;--------------------------------------------------------
	.area XISEG   (XDATA)
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; interrupt vector
;--------------------------------------------------------
	.area HOME    (CODE)
__interrupt_vect:
	ljmp	__sdcc_gsinit_startup
	reti
	.ds	7
	reti
	.ds	7
	reti
	.ds	7
	reti
	.ds	7
	ljmp	_Serial_ISR
	.ds	5
	ljmp	_Timer2_ISR
; restartable atomic support routines
	.ds	2
sdcc_atomic_exchange_rollback_start::
	nop
	nop
sdcc_atomic_exchange_pdata_impl:
	movx	a, @r0
	mov	r3, a
	mov	a, r2
	movx	@r0, a
	sjmp	sdcc_atomic_exchange_exit
	nop
	nop
sdcc_atomic_exchange_xdata_impl:
	movx	a, @dptr
	mov	r3, a
	mov	a, r2
	movx	@dptr, a
	sjmp	sdcc_atomic_exchange_exit
sdcc_atomic_compare_exchange_idata_impl:
	mov	a, @r0
	cjne	a, ar2, .+#5
	mov	a, r3
	mov	@r0, a
	ret
	nop
sdcc_atomic_compare_exchange_pdata_impl:
	movx	a, @r0
	cjne	a, ar2, .+#5
	mov	a, r3
	movx	@r0, a
	ret
	nop
sdcc_atomic_compare_exchange_xdata_impl:
	movx	a, @dptr
	cjne	a, ar2, .+#5
	mov	a, r3
	movx	@dptr, a
	ret
sdcc_atomic_exchange_rollback_end::

sdcc_atomic_exchange_gptr_impl::
	jnb	b.6, sdcc_atomic_exchange_xdata_impl
	mov	r0, dpl
	jb	b.5, sdcc_atomic_exchange_pdata_impl
sdcc_atomic_exchange_idata_impl:
	mov	a, r2
	xch	a, @r0
	mov	dpl, a
	ret
sdcc_atomic_exchange_exit:
	mov	dpl, r3
	ret
sdcc_atomic_compare_exchange_gptr_impl::
	jnb	b.6, sdcc_atomic_compare_exchange_xdata_impl
	mov	r0, dpl
	jb	b.5, sdcc_atomic_compare_exchange_pdata_impl
	sjmp	sdcc_atomic_compare_exchange_idata_impl
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
	.globl __sdcc_gsinit_startup
	.globl __sdcc_program_startup
	.globl __start__stack
	.globl __mcs51_genXINIT
	.globl __mcs51_genXRAMCLEAR
	.globl __mcs51_genRAMCLEAR
;	include/uvr_variable.h:10: volatile unsigned char __data __at (0x30) loop_counter = 0; //Store Loop Counters
	mov	_loop_counter,#0x00
;	include/uvr_variable.h:12: volatile unsigned char __data __at (0x31)  prog_counter = 0; //Store Program Counters
	mov	_prog_counter,#0x00
;	include/uvr_variable.h:16: volatile unsigned char __data __at (0x34)  system_tick = 0; //Common System Time
	mov	_system_tick,#0x00
;	include/uvr_variable.h:17: volatile unsigned char __data __at (0x35) op1 = 0; //Operand Buffer
	mov	_op1,#0x00
;	include/uvr_variable.h:18: volatile unsigned char __data __at (0x36) op2 = 0; //perand Buffer
	mov	_op2,#0x00
;	include/uvr_variable.h:19: volatile unsigned char __data __at (0x37)  active_timer = 0; //To Calculate Timer Differences
	mov	_active_timer,#0x00
;	include/uvr_variable.h:21: volatile unsigned char __data __at (0x38) temp0 = 0;
	mov	_temp0,#0x00
;	include/uvr_variable.h:22: volatile unsigned char __data __at (0x39) temp1 = 0;
	mov	_temp1,#0x00
;	include/uvr_variable.h:23: volatile unsigned char __data __at (0x3A) temp2 = 0; //Temporary Variables
	mov	_temp2,#0x00
;	include/uvr_variable.h:24: volatile unsigned char __data __at (0x3C) temp3 = 0;
	mov	_temp3,#0x00
;	include/uvr_variable.h:27: volatile unsigned char __data __at (0x3D) instruction_buffer =0;
	mov	_instruction_buffer,#0x00
;	include/uvr_variable.h:28: volatile unsigned char __data __at (0x3E) result_l = 0;
	mov	_result_l,#0x00
;	include/uvr_variable.h:29: volatile unsigned char __data __at (0x3F) result_h = 0;
	mov	_result_h,#0x00
;	include/uvr_variable.h:33: volatile unsigned char __data __at (0x40) prog_buffer[32] = {0};
	mov	_prog_buffer,#0x00
;	include/uvr_variable.h:13: volatile unsigned char __data __at (0x32)  *rd_pointer = buffer_ptr; //Read Pointer
	mov	dptr,#_rd_pointer
	mov	a,#0x40
	movx	@dptr,a
;	include/uvr_variable.h:14: volatile unsigned char __data __at (0x33)  *wr_pointer = buffer_ptr; //Write Pointer
	mov	dptr,#_wr_pointer
	movx	@dptr,a
	.area GSFINAL (CODE)
	ljmp	__sdcc_program_startup
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
__sdcc_program_startup:
	ljmp	_main
;	return from main will return to caller
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'init_sys'
;------------------------------------------------------------
;	src/main.c:6: void init_sys(void){
;	-----------------------------------------
;	 function init_sys
;	-----------------------------------------
_init_sys:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
;	src/main.c:7: EA = 1;
;	assignBit
	setb	_EA
;	src/main.c:8: ES = 1;
;	assignBit
	setb	_ES
;	src/main.c:9: ET2 = 1;
;	assignBit
	setb	_ET2
;	src/main.c:10: is_recieved = 0;
;	assignBit
	clr	_is_recieved
;	src/main.c:11: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'init_timer'
;------------------------------------------------------------
;	src/main.c:13: void init_timer(void){
;	-----------------------------------------
;	 function init_timer
;	-----------------------------------------
_init_timer:
;	src/main.c:15: T2CON = 0x00;
	mov	_T2CON,#0x00
;	src/main.c:16: RCAP2H = timer_h;
	mov	_RCAP2H,#0x4c
;	src/main.c:17: RCAP2L = timer_l;
	mov	_RCAP2L,#0x00
;	src/main.c:18: TH2 = timer_h;
	mov	_TH2,#0x4c
;	src/main.c:19: TL2 = timer_l;
	mov	_TL2,#0x00
;	src/main.c:20: TR2 = 1;
;	assignBit
	setb	_TR2
;	src/main.c:23: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'init_serial'
;------------------------------------------------------------
;	src/main.c:26: void init_serial(void){
;	-----------------------------------------
;	 function init_serial
;	-----------------------------------------
_init_serial:
;	src/main.c:28: TMOD = 0x20;				//Set TMOD to Use Timer 1 in 8 Bit Auto Reload
	mov	_TMOD,#0x20
;	src/main.c:29: TH1 = serial_baud_timer;	//Set Reload value
	mov	_TH1,#0xfd
;	src/main.c:30: TL1 = serial_baud_timer;	//Set Initial Value
	mov	_TL1,#0xfd
;	src/main.c:31: TR1 = 1;					//Start Timer 1
;	assignBit
	setb	_TR1
;	src/main.c:32: SCON = 0x50;				//Serial Mode 1 , 8 Bit UART
	mov	_SCON,#0x50
;	src/main.c:33: TI = 0;
;	assignBit
	clr	_TI
;	src/main.c:34: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'uart_send'
;------------------------------------------------------------
;dat           Allocated to registers 
;------------------------------------------------------------
;	src/main.c:37: void uart_send(char dat){
;	-----------------------------------------
;	 function uart_send
;	-----------------------------------------
_uart_send:
	mov	_SBUF,dpl
;	src/main.c:39: while(!TI);
00101$:
;	src/main.c:40: TI = 0;
;	assignBit
	jbc	_TI,00118$
	sjmp	00101$
00118$:
;	src/main.c:41: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'echo'
;------------------------------------------------------------
;	src/main.c:45: void echo(void){
;	-----------------------------------------
;	 function echo
;	-----------------------------------------
_echo:
;	src/main.c:47: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'delay_ms_500'
;------------------------------------------------------------
;	src/main.c:53: void delay_ms_500(void){
;	-----------------------------------------
;	 function delay_ms_500
;	-----------------------------------------
_delay_ms_500:
;	src/main.c:56: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'ascii_to_hex'
;------------------------------------------------------------
;	src/main.c:61: void ascii_to_hex(void){
;	-----------------------------------------
;	 function ascii_to_hex
;	-----------------------------------------
_ascii_to_hex:
;	src/main.c:64: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'hex_to_ascii'
;------------------------------------------------------------
;	src/main.c:70: void hex_to_ascii(void){
;	-----------------------------------------
;	 function hex_to_ascii
;	-----------------------------------------
_hex_to_ascii:
;	src/main.c:73: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'print_boot_message'
;------------------------------------------------------------
;	src/main.c:78: void print_boot_message(void){
;	-----------------------------------------
;	 function print_boot_message
;	-----------------------------------------
_print_boot_message:
;	src/main.c:79: temp0 = 0;
	mov	_temp0,#0x00
;	src/main.c:80: while(temp0 != 54){
00101$:
	mov	a,#0x36
	cjne	a,_temp0,00118$
	sjmp	00103$
00118$:
;	src/main.c:81: uart_send(boot_message[temp0]);
	mov	a,_temp0
	mov	dptr,#_boot_message
	movc	a,@a+dptr
	mov	dpl,a
	lcall	_uart_send
;	src/main.c:82: temp0++;
	mov	a,_temp0
	inc	a
	mov	_temp0,a
	sjmp	00101$
00103$:
;	src/main.c:84: temp0 = 0;
	mov	_temp0,#0x00
;	src/main.c:85: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'print_ready_message'
;------------------------------------------------------------
;	src/main.c:87: void print_ready_message(void){
;	-----------------------------------------
;	 function print_ready_message
;	-----------------------------------------
_print_ready_message:
;	src/main.c:88: temp0 = 0;
	mov	_temp0,#0x00
;	src/main.c:89: while(temp0 != 7){
00101$:
	mov	a,#0x07
	cjne	a,_temp0,00118$
	sjmp	00103$
00118$:
;	src/main.c:90: uart_send(ready_msg[temp0]);
	mov	a,_temp0
	mov	dptr,#_ready_msg
	movc	a,@a+dptr
	mov	dpl,a
	lcall	_uart_send
;	src/main.c:91: temp0++;
	mov	a,_temp0
	inc	a
	mov	_temp0,a
	sjmp	00101$
00103$:
;	src/main.c:93: temp0 = 0;
	mov	_temp0,#0x00
;	src/main.c:94: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'clear_terminal'
;------------------------------------------------------------
;	src/main.c:96: void clear_terminal(void){
;	-----------------------------------------
;	 function clear_terminal
;	-----------------------------------------
_clear_terminal:
;	src/main.c:97: uart_send(0x1B);uart_send(0x5B);uart_send(0x32);uart_send(0x4A); //Clear Sequence ANSI
	mov	dpl, #0x1b
	lcall	_uart_send
	mov	dpl, #0x5b
	lcall	_uart_send
	mov	dpl, #0x32
	lcall	_uart_send
	mov	dpl, #0x4a
	lcall	_uart_send
;	src/main.c:98: uart_send(0x1B);uart_send(0x5B);(0x48); //ANSI Home Cursor
	mov	dpl, #0x1b
	lcall	_uart_send
	mov	dpl, #0x5b
;	src/main.c:99: }
	ljmp	_uart_send
;------------------------------------------------------------
;Allocation info for local variables in function 'Serial_ISR'
;------------------------------------------------------------
;	src/main.c:103: void Serial_ISR(void) __interrupt(4)
;	-----------------------------------------
;	 function Serial_ISR
;	-----------------------------------------
_Serial_ISR:
	push	acc
	push	dpl
	push	dph
	push	ar1
	push	psw
	mov	psw,#0x00
;	src/main.c:105: if(RI){
	jnb	_RI,00103$
;	src/main.c:106: *wr_pointer = SBUF;
	mov	dptr,#_wr_pointer
	movx	a,@dptr
	mov	r1,a
	mov	@r1,_SBUF
;	src/main.c:107: is_recieved = 1;
;	assignBit
	setb	_is_recieved
;	src/main.c:108: wr_pointer++;
	mov	dptr,#_wr_pointer
	mov	a,r1
	inc	a
	movx	@dptr,a
;	src/main.c:109: RI = 0;
;	assignBit
	clr	_RI
00103$:
;	src/main.c:111: }
	pop	psw
	pop	ar1
	pop	dph
	pop	dpl
	pop	acc
	reti
;	eliminated unneeded push/pop ar0
;	eliminated unneeded push/pop b
;------------------------------------------------------------
;Allocation info for local variables in function 'Timer2_ISR'
;------------------------------------------------------------
;	src/main.c:114: void Timer2_ISR(void) __interrupt(5)
;	-----------------------------------------
;	 function Timer2_ISR
;	-----------------------------------------
_Timer2_ISR:
	push	acc
;	src/main.c:116: system_tick++;
	mov	a,_system_tick
	inc	a
	mov	_system_tick,a
;	src/main.c:117: }
	pop	acc
	reti
;	eliminated unneeded mov psw,# (no regs used in bank)
;	eliminated unneeded push/pop not_psw
;	eliminated unneeded push/pop dpl
;	eliminated unneeded push/pop dph
;	eliminated unneeded push/pop b
;------------------------------------------------------------
;Allocation info for local variables in function 'main'
;------------------------------------------------------------
;	src/main.c:120: void main(void){
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	src/main.c:121: SP = hw_stack; 		//initiaslze Stack Pointer;
	mov	_SP,#0x60
;	src/main.c:122: init_sys();
	lcall	_init_sys
;	src/main.c:123: init_serial();
	lcall	_init_serial
;	src/main.c:127: clear_terminal();
	lcall	_clear_terminal
;	src/main.c:128: print_boot_message();
	lcall	_print_boot_message
;	src/main.c:129: print_ready_message();
	lcall	_print_ready_message
;	src/main.c:131: while(1);
00102$:
;	src/main.c:132: }
	sjmp	00102$
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area CONST   (CODE)
_boot_message:
	.db #0x4d	; 77	'M'
	.db #0x69	; 105	'i'
	.db #0x63	; 99	'c'
	.db #0x72	; 114	'r'
	.db #0x6f	; 111	'o'
	.db #0x20	; 32
	.db #0x56	; 86	'V'
	.db #0x69	; 105	'i'
	.db #0x72	; 114	'r'
	.db #0x74	; 116	't'
	.db #0x75	; 117	'u'
	.db #0x61	; 97	'a'
	.db #0x6c	; 108	'l'
	.db #0x2d	; 45
	.db #0x52	; 82	'R'
	.db #0x20	; 32
	.db #0x43	; 67	'C'
	.db #0x6f	; 111	'o'
	.db #0x70	; 112	'p'
	.db #0x79	; 121	'y'
	.db #0x72	; 114	'r'
	.db #0x69	; 105	'i'
	.db #0x67	; 103	'g'
	.db #0x68	; 104	'h'
	.db #0x74	; 116	't'
	.db #0x20	; 32
	.db #0x32	; 50	'2'
	.db #0x30	; 48	'0'
	.db #0x32	; 50	'2'
	.db #0x36	; 54	'6'
	.db #0x20	; 32
	.db #0x42	; 66	'B'
	.db #0x61	; 97	'a'
	.db #0x69	; 105	'i'
	.db #0x62	; 98	'b'
	.db #0x68	; 104	'h'
	.db #0x61	; 97	'a'
	.db #0x76	; 118	'v'
	.db #0x20	; 32
	.db #0x42	; 66	'B'
	.db #0x68	; 104	'h'
	.db #0x61	; 97	'a'
	.db #0x74	; 116	't'
	.db #0x74	; 116	't'
	.db #0x61	; 97	'a'
	.db #0x63	; 99	'c'
	.db #0x68	; 104	'h'
	.db #0x72	; 114	'r'
	.db #0x79	; 121	'y'
	.db #0x61	; 97	'a'
	.db #0x0d	; 13
	.db #0x0a	; 10
	.db 0x00
	.db 0x00
	.area CSEG    (CODE)
	.area CONST   (CODE)
_ready_msg:
	.db #0x52	; 82	'R'
	.db #0x45	; 69	'E'
	.db #0x41	; 65	'A'
	.db #0x44	; 68	'D'
	.db #0x59	; 89	'Y'
	.db #0x0d	; 13
	.db #0x0a	; 10
	.area CSEG    (CODE)
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)
