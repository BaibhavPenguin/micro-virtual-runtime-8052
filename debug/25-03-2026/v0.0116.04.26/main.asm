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
	.globl _print_boot_message
	.globl _hex_to_ascii
	.globl _ascii_to_hex
	.globl _delay_ms_500
	.globl _echo
	.globl _put_char
	.globl _init_serial
	.globl _init_timer
	.globl _init_mpu
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
	.globl _prog_buffer
	.globl _result_h
	.globl _result_l
	.globl _instruction_buffer
	.globl _temp3
	.globl _temp2
	.globl _temp1
	.globl _echo_buffer
	.globl _active_timer
	.globl _op2
	.globl _op1
	.globl _system_tick
	.globl _wr_pointer
	.globl _rd_pointer
	.globl _prog_counter
	.globl _loop_counter
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
_loop_counter	=	0x0030
_prog_counter	=	0x0031
_rd_pointer	=	0x0032
_wr_pointer	=	0x0033
_system_tick	=	0x0034
_op1	=	0x0035
_op2	=	0x0036
_active_timer	=	0x0037
_echo_buffer	=	0x0038
_temp1	=	0x0039
_temp2	=	0x003a
_temp3	=	0x003c
_instruction_buffer	=	0x003d
_result_l	=	0x003e
_result_h	=	0x003f
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
	.org 0x0040
_prog_buffer::
	.ds 32
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
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
; restartable atomic support routines
	.ds	5
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
;	include/uvr_variable.h:31: volatile unsigned char __data __at (0x40) prog_buffer[32] = {0};
	mov	_prog_buffer,#0x00
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
;Allocation info for local variables in function 'init_mpu'
;------------------------------------------------------------
;	src/main.c:6: void init_mpu(void){
;	-----------------------------------------
;	 function init_mpu
;	-----------------------------------------
_init_mpu:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
;	src/main.c:7: SP = hw_stack;		//Initialize Stack Pointer
	mov	_SP,#0x60
;	src/main.c:9: loop_counter = 00;
	mov	_loop_counter,#0x00
;	src/main.c:10: prog_counter = 00;
	mov	_prog_counter,#0x00
;	src/main.c:11: rd_pointer = 0x40;	//Read Memory
	mov	_rd_pointer,#0x40
;	src/main.c:12: wr_pointer = 0x40;		//Write Memory
	mov	_wr_pointer,#0x40
;	src/main.c:13: system_tick = 00;
	mov	_system_tick,#0x00
;	src/main.c:14: op1 = 00;
	mov	_op1,#0x00
;	src/main.c:15: op2 = 00;
	mov	_op2,#0x00
;	src/main.c:16: active_timer = 00;
	mov	_active_timer,#0x00
;	src/main.c:17: echo_buffer = 00;
	mov	_echo_buffer,#0x00
;	src/main.c:18: temp1 = 00;
	mov	_temp1,#0x00
;	src/main.c:19: temp2 = 00;
	mov	_temp2,#0x00
;	src/main.c:20: temp3 = 00;
	mov	_temp3,#0x00
;	src/main.c:21: instruction_buffer = 00;
	mov	_instruction_buffer,#0x00
;	src/main.c:22: result_l = 00;
	mov	_result_l,#0x00
;	src/main.c:23: result_h = 00;
	mov	_result_h,#0x00
;	src/main.c:24: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'init_timer'
;------------------------------------------------------------
;	src/main.c:28: void init_timer(void){
;	-----------------------------------------
;	 function init_timer
;	-----------------------------------------
_init_timer:
;	src/main.c:30: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'init_serial'
;------------------------------------------------------------
;	src/main.c:33: void init_serial(void){
;	-----------------------------------------
;	 function init_serial
;	-----------------------------------------
_init_serial:
;	src/main.c:35: TMOD = 0x20;				//Set TMOD to Use Timer 1 in 8 Bit Auto Reload
	mov	_TMOD,#0x20
;	src/main.c:36: TH1 = serial_baud_timer;	//Set Reload value
	mov	_TH1,#0xfd
;	src/main.c:37: TL1 = serial_baud_timer;	//Set Initial Value
	mov	_TL1,#0xfd
;	src/main.c:38: TR1 = 1;					//Start Timer 1
;	assignBit
	setb	_TR1
;	src/main.c:39: SCON = 0x50;				//Serial Mode 1 , 8 Bit UART
	mov	_SCON,#0x50
;	src/main.c:41: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'put_char'
;------------------------------------------------------------
;dat           Allocated to registers 
;------------------------------------------------------------
;	src/main.c:44: void put_char(char dat){
;	-----------------------------------------
;	 function put_char
;	-----------------------------------------
_put_char:
	mov	_SBUF,dpl
;	src/main.c:46: while(!TI);
00101$:
;	src/main.c:47: TI = 0;
;	assignBit
	jbc	_TI,00118$
	sjmp	00101$
00118$:
;	src/main.c:49: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'echo'
;------------------------------------------------------------
;	src/main.c:51: void echo(void){
;	-----------------------------------------
;	 function echo
;	-----------------------------------------
_echo:
;	src/main.c:53: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'delay_ms_500'
;------------------------------------------------------------
;	src/main.c:59: void delay_ms_500(void){
;	-----------------------------------------
;	 function delay_ms_500
;	-----------------------------------------
_delay_ms_500:
;	src/main.c:62: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'ascii_to_hex'
;------------------------------------------------------------
;	src/main.c:67: void ascii_to_hex(void){
;	-----------------------------------------
;	 function ascii_to_hex
;	-----------------------------------------
_ascii_to_hex:
;	src/main.c:70: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'hex_to_ascii'
;------------------------------------------------------------
;	src/main.c:76: void hex_to_ascii(void){
;	-----------------------------------------
;	 function hex_to_ascii
;	-----------------------------------------
_hex_to_ascii:
;	src/main.c:79: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'print_boot_message'
;------------------------------------------------------------
;	src/main.c:84: void print_boot_message(void){
;	-----------------------------------------
;	 function print_boot_message
;	-----------------------------------------
_print_boot_message:
;	src/main.c:86: put_char('D');put_char('e');put_char('b');put_char('u');put_char('g');put_char('\n');
	mov	dpl, #0x44
	lcall	_put_char
	mov	dpl, #0x65
	lcall	_put_char
	mov	dpl, #0x62
	lcall	_put_char
	mov	dpl, #0x75
	lcall	_put_char
	mov	dpl, #0x67
	lcall	_put_char
	mov	dpl, #0x0a
;	src/main.c:88: }
	ljmp	_put_char
;------------------------------------------------------------
;Allocation info for local variables in function 'main'
;------------------------------------------------------------
;	src/main.c:96: void main(void){
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	src/main.c:97: init_mpu();
	lcall	_init_mpu
;	src/main.c:98: init_serial();
	lcall	_init_serial
;	src/main.c:100: while(1){
00102$:
;	src/main.c:101: put_char('A');
	mov	dpl, #0x41
	lcall	_put_char
;	src/main.c:104: }
	sjmp	00102$
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)
