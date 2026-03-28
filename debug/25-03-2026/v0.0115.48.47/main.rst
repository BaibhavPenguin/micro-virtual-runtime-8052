                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler
                                      3 ; Version 4.5.0 #15242 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _Serial_ISR
                                     13 	.globl _start_interrupts
                                     14 	.globl _print_boot_message
                                     15 	.globl _hex_to_ascii
                                     16 	.globl _ascii_to_hex
                                     17 	.globl _delay_ms_500
                                     18 	.globl _echo
                                     19 	.globl _put_char
                                     20 	.globl _init_serial
                                     21 	.globl _init_timer
                                     22 	.globl _init_mpu
                                     23 	.globl _WDTRST
                                     24 	.globl _TF2
                                     25 	.globl _EXF2
                                     26 	.globl _RCLK
                                     27 	.globl _TCLK
                                     28 	.globl _EXEN2
                                     29 	.globl _TR2
                                     30 	.globl _C_T2
                                     31 	.globl _CP_RL2
                                     32 	.globl _T2CON_7
                                     33 	.globl _T2CON_6
                                     34 	.globl _T2CON_5
                                     35 	.globl _T2CON_4
                                     36 	.globl _T2CON_3
                                     37 	.globl _T2CON_2
                                     38 	.globl _T2CON_1
                                     39 	.globl _T2CON_0
                                     40 	.globl _PT2
                                     41 	.globl _ET2
                                     42 	.globl _CY
                                     43 	.globl _AC
                                     44 	.globl _F0
                                     45 	.globl _RS1
                                     46 	.globl _RS0
                                     47 	.globl _OV
                                     48 	.globl _F1
                                     49 	.globl _P
                                     50 	.globl _PS
                                     51 	.globl _PT1
                                     52 	.globl _PX1
                                     53 	.globl _PT0
                                     54 	.globl _PX0
                                     55 	.globl _RD
                                     56 	.globl _WR
                                     57 	.globl _T1
                                     58 	.globl _T0
                                     59 	.globl _INT1
                                     60 	.globl _INT0
                                     61 	.globl _TXD
                                     62 	.globl _RXD
                                     63 	.globl _P3_7
                                     64 	.globl _P3_6
                                     65 	.globl _P3_5
                                     66 	.globl _P3_4
                                     67 	.globl _P3_3
                                     68 	.globl _P3_2
                                     69 	.globl _P3_1
                                     70 	.globl _P3_0
                                     71 	.globl _EA
                                     72 	.globl _ES
                                     73 	.globl _ET1
                                     74 	.globl _EX1
                                     75 	.globl _ET0
                                     76 	.globl _EX0
                                     77 	.globl _P2_7
                                     78 	.globl _P2_6
                                     79 	.globl _P2_5
                                     80 	.globl _P2_4
                                     81 	.globl _P2_3
                                     82 	.globl _P2_2
                                     83 	.globl _P2_1
                                     84 	.globl _P2_0
                                     85 	.globl _SM0
                                     86 	.globl _SM1
                                     87 	.globl _SM2
                                     88 	.globl _REN
                                     89 	.globl _TB8
                                     90 	.globl _RB8
                                     91 	.globl _TI
                                     92 	.globl _RI
                                     93 	.globl _P1_7
                                     94 	.globl _P1_6
                                     95 	.globl _P1_5
                                     96 	.globl _P1_4
                                     97 	.globl _P1_3
                                     98 	.globl _P1_2
                                     99 	.globl _P1_1
                                    100 	.globl _P1_0
                                    101 	.globl _TF1
                                    102 	.globl _TR1
                                    103 	.globl _TF0
                                    104 	.globl _TR0
                                    105 	.globl _IE1
                                    106 	.globl _IT1
                                    107 	.globl _IE0
                                    108 	.globl _IT0
                                    109 	.globl _P0_7
                                    110 	.globl _P0_6
                                    111 	.globl _P0_5
                                    112 	.globl _P0_4
                                    113 	.globl _P0_3
                                    114 	.globl _P0_2
                                    115 	.globl _P0_1
                                    116 	.globl _P0_0
                                    117 	.globl _TH2
                                    118 	.globl _TL2
                                    119 	.globl _RCAP2H
                                    120 	.globl _RCAP2L
                                    121 	.globl _T2CON
                                    122 	.globl _B
                                    123 	.globl _ACC
                                    124 	.globl _PSW
                                    125 	.globl _IP
                                    126 	.globl _P3
                                    127 	.globl _IE
                                    128 	.globl _P2
                                    129 	.globl _SBUF
                                    130 	.globl _SCON
                                    131 	.globl _P1
                                    132 	.globl _TH1
                                    133 	.globl _TH0
                                    134 	.globl _TL1
                                    135 	.globl _TL0
                                    136 	.globl _TMOD
                                    137 	.globl _TCON
                                    138 	.globl _PCON
                                    139 	.globl _DPH
                                    140 	.globl _DPL
                                    141 	.globl _SP
                                    142 	.globl _P0
                                    143 	.globl _serial_busy
                                    144 	.globl _prog_buffer
                                    145 	.globl _result_h
                                    146 	.globl _result_l
                                    147 	.globl _instruction_buffer
                                    148 	.globl _temp3
                                    149 	.globl _temp2
                                    150 	.globl _temp1
                                    151 	.globl _active_timer
                                    152 	.globl _op2
                                    153 	.globl _op1
                                    154 	.globl _system_tick
                                    155 	.globl _wr_pointer
                                    156 	.globl _rd_pointer
                                    157 	.globl _prog_counter
                                    158 	.globl _loop_counter
                                    159 ;--------------------------------------------------------
                                    160 ; special function registers
                                    161 ;--------------------------------------------------------
                                    162 	.area RSEG    (ABS,DATA)
      000000                        163 	.org 0x0000
                           000080   164 _P0	=	0x0080
                           000081   165 _SP	=	0x0081
                           000082   166 _DPL	=	0x0082
                           000083   167 _DPH	=	0x0083
                           000087   168 _PCON	=	0x0087
                           000088   169 _TCON	=	0x0088
                           000089   170 _TMOD	=	0x0089
                           00008A   171 _TL0	=	0x008a
                           00008B   172 _TL1	=	0x008b
                           00008C   173 _TH0	=	0x008c
                           00008D   174 _TH1	=	0x008d
                           000090   175 _P1	=	0x0090
                           000098   176 _SCON	=	0x0098
                           000099   177 _SBUF	=	0x0099
                           0000A0   178 _P2	=	0x00a0
                           0000A8   179 _IE	=	0x00a8
                           0000B0   180 _P3	=	0x00b0
                           0000B8   181 _IP	=	0x00b8
                           0000D0   182 _PSW	=	0x00d0
                           0000E0   183 _ACC	=	0x00e0
                           0000F0   184 _B	=	0x00f0
                           0000C8   185 _T2CON	=	0x00c8
                           0000CA   186 _RCAP2L	=	0x00ca
                           0000CB   187 _RCAP2H	=	0x00cb
                           0000CC   188 _TL2	=	0x00cc
                           0000CD   189 _TH2	=	0x00cd
                                    190 ;--------------------------------------------------------
                                    191 ; special function bits
                                    192 ;--------------------------------------------------------
                                    193 	.area RSEG    (ABS,DATA)
      000000                        194 	.org 0x0000
                           000080   195 _P0_0	=	0x0080
                           000081   196 _P0_1	=	0x0081
                           000082   197 _P0_2	=	0x0082
                           000083   198 _P0_3	=	0x0083
                           000084   199 _P0_4	=	0x0084
                           000085   200 _P0_5	=	0x0085
                           000086   201 _P0_6	=	0x0086
                           000087   202 _P0_7	=	0x0087
                           000088   203 _IT0	=	0x0088
                           000089   204 _IE0	=	0x0089
                           00008A   205 _IT1	=	0x008a
                           00008B   206 _IE1	=	0x008b
                           00008C   207 _TR0	=	0x008c
                           00008D   208 _TF0	=	0x008d
                           00008E   209 _TR1	=	0x008e
                           00008F   210 _TF1	=	0x008f
                           000090   211 _P1_0	=	0x0090
                           000091   212 _P1_1	=	0x0091
                           000092   213 _P1_2	=	0x0092
                           000093   214 _P1_3	=	0x0093
                           000094   215 _P1_4	=	0x0094
                           000095   216 _P1_5	=	0x0095
                           000096   217 _P1_6	=	0x0096
                           000097   218 _P1_7	=	0x0097
                           000098   219 _RI	=	0x0098
                           000099   220 _TI	=	0x0099
                           00009A   221 _RB8	=	0x009a
                           00009B   222 _TB8	=	0x009b
                           00009C   223 _REN	=	0x009c
                           00009D   224 _SM2	=	0x009d
                           00009E   225 _SM1	=	0x009e
                           00009F   226 _SM0	=	0x009f
                           0000A0   227 _P2_0	=	0x00a0
                           0000A1   228 _P2_1	=	0x00a1
                           0000A2   229 _P2_2	=	0x00a2
                           0000A3   230 _P2_3	=	0x00a3
                           0000A4   231 _P2_4	=	0x00a4
                           0000A5   232 _P2_5	=	0x00a5
                           0000A6   233 _P2_6	=	0x00a6
                           0000A7   234 _P2_7	=	0x00a7
                           0000A8   235 _EX0	=	0x00a8
                           0000A9   236 _ET0	=	0x00a9
                           0000AA   237 _EX1	=	0x00aa
                           0000AB   238 _ET1	=	0x00ab
                           0000AC   239 _ES	=	0x00ac
                           0000AF   240 _EA	=	0x00af
                           0000B0   241 _P3_0	=	0x00b0
                           0000B1   242 _P3_1	=	0x00b1
                           0000B2   243 _P3_2	=	0x00b2
                           0000B3   244 _P3_3	=	0x00b3
                           0000B4   245 _P3_4	=	0x00b4
                           0000B5   246 _P3_5	=	0x00b5
                           0000B6   247 _P3_6	=	0x00b6
                           0000B7   248 _P3_7	=	0x00b7
                           0000B0   249 _RXD	=	0x00b0
                           0000B1   250 _TXD	=	0x00b1
                           0000B2   251 _INT0	=	0x00b2
                           0000B3   252 _INT1	=	0x00b3
                           0000B4   253 _T0	=	0x00b4
                           0000B5   254 _T1	=	0x00b5
                           0000B6   255 _WR	=	0x00b6
                           0000B7   256 _RD	=	0x00b7
                           0000B8   257 _PX0	=	0x00b8
                           0000B9   258 _PT0	=	0x00b9
                           0000BA   259 _PX1	=	0x00ba
                           0000BB   260 _PT1	=	0x00bb
                           0000BC   261 _PS	=	0x00bc
                           0000D0   262 _P	=	0x00d0
                           0000D1   263 _F1	=	0x00d1
                           0000D2   264 _OV	=	0x00d2
                           0000D3   265 _RS0	=	0x00d3
                           0000D4   266 _RS1	=	0x00d4
                           0000D5   267 _F0	=	0x00d5
                           0000D6   268 _AC	=	0x00d6
                           0000D7   269 _CY	=	0x00d7
                           0000AD   270 _ET2	=	0x00ad
                           0000BD   271 _PT2	=	0x00bd
                           0000C8   272 _T2CON_0	=	0x00c8
                           0000C9   273 _T2CON_1	=	0x00c9
                           0000CA   274 _T2CON_2	=	0x00ca
                           0000CB   275 _T2CON_3	=	0x00cb
                           0000CC   276 _T2CON_4	=	0x00cc
                           0000CD   277 _T2CON_5	=	0x00cd
                           0000CE   278 _T2CON_6	=	0x00ce
                           0000CF   279 _T2CON_7	=	0x00cf
                           0000C8   280 _CP_RL2	=	0x00c8
                           0000C9   281 _C_T2	=	0x00c9
                           0000CA   282 _TR2	=	0x00ca
                           0000CB   283 _EXEN2	=	0x00cb
                           0000CC   284 _TCLK	=	0x00cc
                           0000CD   285 _RCLK	=	0x00cd
                           0000CE   286 _EXF2	=	0x00ce
                           0000CF   287 _TF2	=	0x00cf
                           0000A6   288 _WDTRST	=	0x00a6
                                    289 ;--------------------------------------------------------
                                    290 ; overlayable register banks
                                    291 ;--------------------------------------------------------
                                    292 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        293 	.ds 8
                                    294 ;--------------------------------------------------------
                                    295 ; internal ram data
                                    296 ;--------------------------------------------------------
                                    297 	.area DSEG    (DATA)
                           000030   298 _loop_counter	=	0x0030
                           000031   299 _prog_counter	=	0x0031
                           000032   300 _rd_pointer	=	0x0032
                           000033   301 _wr_pointer	=	0x0033
                           000034   302 _system_tick	=	0x0034
                           000035   303 _op1	=	0x0035
                           000036   304 _op2	=	0x0036
                           000037   305 _active_timer	=	0x0037
                           000039   306 _temp1	=	0x0039
                           00003A   307 _temp2	=	0x003a
                           00003C   308 _temp3	=	0x003c
                           00003D   309 _instruction_buffer	=	0x003d
                           00003E   310 _result_l	=	0x003e
                           00003F   311 _result_h	=	0x003f
                                    312 ;--------------------------------------------------------
                                    313 ; overlayable items in internal ram
                                    314 ;--------------------------------------------------------
                                    315 	.area	OSEG    (OVR,DATA)
                                    316 ;--------------------------------------------------------
                                    317 ; Stack segment in internal ram
                                    318 ;--------------------------------------------------------
                                    319 	.area SSEG
      000060                        320 __start__stack:
      000060                        321 	.ds	1
                                    322 
                                    323 ;--------------------------------------------------------
                                    324 ; indirectly addressable internal ram data
                                    325 ;--------------------------------------------------------
                                    326 	.area ISEG    (DATA)
                                    327 ;--------------------------------------------------------
                                    328 ; absolute internal ram data
                                    329 ;--------------------------------------------------------
                                    330 	.area IABS    (ABS,DATA)
      000040                        331 	.org 0x0040
      000040                        332 _prog_buffer::
      000040                        333 	.ds 32
                                    334 	.area IABS    (ABS,DATA)
                                    335 ;--------------------------------------------------------
                                    336 ; bit data
                                    337 ;--------------------------------------------------------
                                    338 	.area BSEG    (BIT)
                           000000   339 _serial_busy	=	0x0000
                                    340 ;--------------------------------------------------------
                                    341 ; paged external ram data
                                    342 ;--------------------------------------------------------
                                    343 	.area PSEG    (PAG,XDATA)
                                    344 ;--------------------------------------------------------
                                    345 ; uninitialized external ram data
                                    346 ;--------------------------------------------------------
                                    347 	.area XSEG    (XDATA)
                                    348 ;--------------------------------------------------------
                                    349 ; absolute external ram data
                                    350 ;--------------------------------------------------------
                                    351 	.area XABS    (ABS,XDATA)
                                    352 ;--------------------------------------------------------
                                    353 ; initialized external ram data
                                    354 ;--------------------------------------------------------
                                    355 	.area XISEG   (XDATA)
                                    356 	.area HOME    (CODE)
                                    357 	.area GSINIT0 (CODE)
                                    358 	.area GSINIT1 (CODE)
                                    359 	.area GSINIT2 (CODE)
                                    360 	.area GSINIT3 (CODE)
                                    361 	.area GSINIT4 (CODE)
                                    362 	.area GSINIT5 (CODE)
                                    363 	.area GSINIT  (CODE)
                                    364 	.area GSFINAL (CODE)
                                    365 	.area CSEG    (CODE)
                                    366 ;--------------------------------------------------------
                                    367 ; interrupt vector
                                    368 ;--------------------------------------------------------
                                    369 	.area HOME    (CODE)
      000000                        370 __interrupt_vect:
      000000 02 00 6C         [24]  371 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  372 	reti
      000004                        373 	.ds	7
      00000B 32               [24]  374 	reti
      00000C                        375 	.ds	7
      000013 32               [24]  376 	reti
      000014                        377 	.ds	7
      00001B 32               [24]  378 	reti
      00001C                        379 	.ds	7
      000023 02 01 46         [24]  380 	ljmp	_Serial_ISR
                                    381 ; restartable atomic support routines
      000026                        382 	.ds	2
      000028                        383 sdcc_atomic_exchange_rollback_start::
      000028 00               [12]  384 	nop
      000029 00               [12]  385 	nop
      00002A                        386 sdcc_atomic_exchange_pdata_impl:
      00002A E2               [24]  387 	movx	a, @r0
      00002B FB               [12]  388 	mov	r3, a
      00002C EA               [12]  389 	mov	a, r2
      00002D F2               [24]  390 	movx	@r0, a
      00002E 80 2C            [24]  391 	sjmp	sdcc_atomic_exchange_exit
      000030 00               [12]  392 	nop
      000031 00               [12]  393 	nop
      000032                        394 sdcc_atomic_exchange_xdata_impl:
      000032 E0               [24]  395 	movx	a, @dptr
      000033 FB               [12]  396 	mov	r3, a
      000034 EA               [12]  397 	mov	a, r2
      000035 F0               [24]  398 	movx	@dptr, a
      000036 80 24            [24]  399 	sjmp	sdcc_atomic_exchange_exit
      000038                        400 sdcc_atomic_compare_exchange_idata_impl:
      000038 E6               [12]  401 	mov	a, @r0
      000039 B5 02 02         [24]  402 	cjne	a, ar2, .+#5
      00003C EB               [12]  403 	mov	a, r3
      00003D F6               [12]  404 	mov	@r0, a
      00003E 22               [24]  405 	ret
      00003F 00               [12]  406 	nop
      000040                        407 sdcc_atomic_compare_exchange_pdata_impl:
      000040 E2               [24]  408 	movx	a, @r0
      000041 B5 02 02         [24]  409 	cjne	a, ar2, .+#5
      000044 EB               [12]  410 	mov	a, r3
      000045 F2               [24]  411 	movx	@r0, a
      000046 22               [24]  412 	ret
      000047 00               [12]  413 	nop
      000048                        414 sdcc_atomic_compare_exchange_xdata_impl:
      000048 E0               [24]  415 	movx	a, @dptr
      000049 B5 02 02         [24]  416 	cjne	a, ar2, .+#5
      00004C EB               [12]  417 	mov	a, r3
      00004D F0               [24]  418 	movx	@dptr, a
      00004E 22               [24]  419 	ret
      00004F                        420 sdcc_atomic_exchange_rollback_end::
                                    421 
      00004F                        422 sdcc_atomic_exchange_gptr_impl::
      00004F 30 F6 E0         [24]  423 	jnb	b.6, sdcc_atomic_exchange_xdata_impl
      000052 A8 82            [24]  424 	mov	r0, dpl
      000054 20 F5 D3         [24]  425 	jb	b.5, sdcc_atomic_exchange_pdata_impl
      000057                        426 sdcc_atomic_exchange_idata_impl:
      000057 EA               [12]  427 	mov	a, r2
      000058 C6               [12]  428 	xch	a, @r0
      000059 F5 82            [12]  429 	mov	dpl, a
      00005B 22               [24]  430 	ret
      00005C                        431 sdcc_atomic_exchange_exit:
      00005C 8B 82            [24]  432 	mov	dpl, r3
      00005E 22               [24]  433 	ret
      00005F                        434 sdcc_atomic_compare_exchange_gptr_impl::
      00005F 30 F6 E6         [24]  435 	jnb	b.6, sdcc_atomic_compare_exchange_xdata_impl
      000062 A8 82            [24]  436 	mov	r0, dpl
      000064 20 F5 D9         [24]  437 	jb	b.5, sdcc_atomic_compare_exchange_pdata_impl
      000067 80 CF            [24]  438 	sjmp	sdcc_atomic_compare_exchange_idata_impl
                                    439 ;--------------------------------------------------------
                                    440 ; global & static initialisations
                                    441 ;--------------------------------------------------------
                                    442 	.area HOME    (CODE)
                                    443 	.area GSINIT  (CODE)
                                    444 	.area GSFINAL (CODE)
                                    445 	.area GSINIT  (CODE)
                                    446 	.globl __sdcc_gsinit_startup
                                    447 	.globl __sdcc_program_startup
                                    448 	.globl __start__stack
                                    449 	.globl __mcs51_genXINIT
                                    450 	.globl __mcs51_genXRAMCLEAR
                                    451 	.globl __mcs51_genRAMCLEAR
                                    452 ;	include/uvr_variable.h:31: volatile unsigned char __data __at (0x40) prog_buffer[32] = {0};
      0000C5 75 40 00         [24]  453 	mov	_prog_buffer,#0x00
                                    454 	.area GSFINAL (CODE)
      0000C8 02 00 69         [24]  455 	ljmp	__sdcc_program_startup
                                    456 ;--------------------------------------------------------
                                    457 ; Home
                                    458 ;--------------------------------------------------------
                                    459 	.area HOME    (CODE)
                                    460 	.area HOME    (CODE)
      000069                        461 __sdcc_program_startup:
      000069 02 01 69         [24]  462 	ljmp	_main
                                    463 ;	return from main will return to caller
                                    464 ;--------------------------------------------------------
                                    465 ; code
                                    466 ;--------------------------------------------------------
                                    467 	.area CSEG    (CODE)
                                    468 ;------------------------------------------------------------
                                    469 ;Allocation info for local variables in function 'init_mpu'
                                    470 ;------------------------------------------------------------
                                    471 ;	src/main.c:6: void init_mpu(void){
                                    472 ;	-----------------------------------------
                                    473 ;	 function init_mpu
                                    474 ;	-----------------------------------------
      0000CB                        475 _init_mpu:
                           000007   476 	ar7 = 0x07
                           000006   477 	ar6 = 0x06
                           000005   478 	ar5 = 0x05
                           000004   479 	ar4 = 0x04
                           000003   480 	ar3 = 0x03
                           000002   481 	ar2 = 0x02
                           000001   482 	ar1 = 0x01
                           000000   483 	ar0 = 0x00
                                    484 ;	src/main.c:8: SP = hw_stack;		//Initialize Stack Pointer
      0000CB 75 81 60         [24]  485 	mov	_SP,#0x60
                                    486 ;	src/main.c:12: loop_counter = 00;
      0000CE 75 30 00         [24]  487 	mov	_loop_counter,#0x00
                                    488 ;	src/main.c:13: prog_counter = 00;
      0000D1 75 31 00         [24]  489 	mov	_prog_counter,#0x00
                                    490 ;	src/main.c:14: rd_pointer = 0x40;	//Read Memory
      0000D4 75 32 40         [24]  491 	mov	_rd_pointer,#0x40
                                    492 ;	src/main.c:15: wr_pointer = 0x40;		//Write Memory
      0000D7 75 33 40         [24]  493 	mov	_wr_pointer,#0x40
                                    494 ;	src/main.c:16: system_tick = 00;
      0000DA 75 34 00         [24]  495 	mov	_system_tick,#0x00
                                    496 ;	src/main.c:17: op1 = 00;
      0000DD 75 35 00         [24]  497 	mov	_op1,#0x00
                                    498 ;	src/main.c:18: op2 = 00;
      0000E0 75 36 00         [24]  499 	mov	_op2,#0x00
                                    500 ;	src/main.c:19: active_timer = 00;
      0000E3 75 37 00         [24]  501 	mov	_active_timer,#0x00
                                    502 ;	src/main.c:20: serial_busy = 00;
                                    503 ;	assignBit
      0000E6 C2 00            [12]  504 	clr	_serial_busy
                                    505 ;	src/main.c:21: temp1 = 00;
      0000E8 75 39 00         [24]  506 	mov	_temp1,#0x00
                                    507 ;	src/main.c:22: temp2 = 00;
      0000EB 75 3A 00         [24]  508 	mov	_temp2,#0x00
                                    509 ;	src/main.c:23: temp3 = 00;
      0000EE 75 3C 00         [24]  510 	mov	_temp3,#0x00
                                    511 ;	src/main.c:24: instruction_buffer = 00;
      0000F1 75 3D 00         [24]  512 	mov	_instruction_buffer,#0x00
                                    513 ;	src/main.c:25: result_l = 00;
      0000F4 75 3E 00         [24]  514 	mov	_result_l,#0x00
                                    515 ;	src/main.c:26: result_h = 00;
      0000F7 75 3F 00         [24]  516 	mov	_result_h,#0x00
                                    517 ;	src/main.c:27: }
      0000FA 22               [24]  518 	ret
                                    519 ;------------------------------------------------------------
                                    520 ;Allocation info for local variables in function 'init_timer'
                                    521 ;------------------------------------------------------------
                                    522 ;	src/main.c:31: void init_timer(void){
                                    523 ;	-----------------------------------------
                                    524 ;	 function init_timer
                                    525 ;	-----------------------------------------
      0000FB                        526 _init_timer:
                                    527 ;	src/main.c:33: }
      0000FB 22               [24]  528 	ret
                                    529 ;------------------------------------------------------------
                                    530 ;Allocation info for local variables in function 'init_serial'
                                    531 ;------------------------------------------------------------
                                    532 ;	src/main.c:36: void init_serial(void){
                                    533 ;	-----------------------------------------
                                    534 ;	 function init_serial
                                    535 ;	-----------------------------------------
      0000FC                        536 _init_serial:
                                    537 ;	src/main.c:38: TMOD = 0x20;				//Set TMOD to Use Timer 1 in 8 Bit Auto Reload
      0000FC 75 89 20         [24]  538 	mov	_TMOD,#0x20
                                    539 ;	src/main.c:39: TH1 = serial_baud_timer;	//Set Reload value
      0000FF 75 8D FD         [24]  540 	mov	_TH1,#0xfd
                                    541 ;	src/main.c:40: TL1 = serial_baud_timer;	//Set Initial Value
      000102 75 8B FD         [24]  542 	mov	_TL1,#0xfd
                                    543 ;	src/main.c:41: TR1 = 1;					//Start Timer 1
                                    544 ;	assignBit
      000105 D2 8E            [12]  545 	setb	_TR1
                                    546 ;	src/main.c:42: TI = 0;
                                    547 ;	assignBit
      000107 C2 99            [12]  548 	clr	_TI
                                    549 ;	src/main.c:43: RI = 0;
                                    550 ;	assignBit
      000109 C2 98            [12]  551 	clr	_RI
                                    552 ;	src/main.c:44: SCON = 0x50;				//Serial Mode 1 , 8 Bit UART
      00010B 75 98 50         [24]  553 	mov	_SCON,#0x50
                                    554 ;	src/main.c:46: }
      00010E 22               [24]  555 	ret
                                    556 ;------------------------------------------------------------
                                    557 ;Allocation info for local variables in function 'put_char'
                                    558 ;------------------------------------------------------------
                                    559 ;args          Allocated to registers r7 
                                    560 ;------------------------------------------------------------
                                    561 ;	src/main.c:49: void put_char(char args){
                                    562 ;	-----------------------------------------
                                    563 ;	 function put_char
                                    564 ;	-----------------------------------------
      00010F                        565 _put_char:
      00010F AF 82            [24]  566 	mov	r7, dpl
                                    567 ;	src/main.c:50: while(serial_busy);
      000111                        568 00101$:
      000111 20 00 FD         [24]  569 	jb	_serial_busy,00101$
                                    570 ;	src/main.c:51: serial_busy = 1;
                                    571 ;	assignBit
      000114 D2 00            [12]  572 	setb	_serial_busy
                                    573 ;	src/main.c:52: SBUF = args;
      000116 8F 99            [24]  574 	mov	_SBUF,r7
                                    575 ;	src/main.c:54: }
      000118 22               [24]  576 	ret
                                    577 ;------------------------------------------------------------
                                    578 ;Allocation info for local variables in function 'echo'
                                    579 ;------------------------------------------------------------
                                    580 ;	src/main.c:56: void echo(void){
                                    581 ;	-----------------------------------------
                                    582 ;	 function echo
                                    583 ;	-----------------------------------------
      000119                        584 _echo:
                                    585 ;	src/main.c:58: }
      000119 22               [24]  586 	ret
                                    587 ;------------------------------------------------------------
                                    588 ;Allocation info for local variables in function 'delay_ms_500'
                                    589 ;------------------------------------------------------------
                                    590 ;	src/main.c:64: void delay_ms_500(void){
                                    591 ;	-----------------------------------------
                                    592 ;	 function delay_ms_500
                                    593 ;	-----------------------------------------
      00011A                        594 _delay_ms_500:
                                    595 ;	src/main.c:67: }
      00011A 22               [24]  596 	ret
                                    597 ;------------------------------------------------------------
                                    598 ;Allocation info for local variables in function 'ascii_to_hex'
                                    599 ;------------------------------------------------------------
                                    600 ;	src/main.c:72: void ascii_to_hex(void){
                                    601 ;	-----------------------------------------
                                    602 ;	 function ascii_to_hex
                                    603 ;	-----------------------------------------
      00011B                        604 _ascii_to_hex:
                                    605 ;	src/main.c:75: }
      00011B 22               [24]  606 	ret
                                    607 ;------------------------------------------------------------
                                    608 ;Allocation info for local variables in function 'hex_to_ascii'
                                    609 ;------------------------------------------------------------
                                    610 ;	src/main.c:81: void hex_to_ascii(void){
                                    611 ;	-----------------------------------------
                                    612 ;	 function hex_to_ascii
                                    613 ;	-----------------------------------------
      00011C                        614 _hex_to_ascii:
                                    615 ;	src/main.c:84: }
      00011C 22               [24]  616 	ret
                                    617 ;------------------------------------------------------------
                                    618 ;Allocation info for local variables in function 'print_boot_message'
                                    619 ;------------------------------------------------------------
                                    620 ;	src/main.c:89: void print_boot_message(void){
                                    621 ;	-----------------------------------------
                                    622 ;	 function print_boot_message
                                    623 ;	-----------------------------------------
      00011D                        624 _print_boot_message:
                                    625 ;	src/main.c:91: put_char('D');put_char('e');put_char('b');put_char('u');put_char('g');put_char('\n');
      00011D 75 82 44         [24]  626 	mov	dpl, #0x44
      000120 12 01 0F         [24]  627 	lcall	_put_char
      000123 75 82 65         [24]  628 	mov	dpl, #0x65
      000126 12 01 0F         [24]  629 	lcall	_put_char
      000129 75 82 62         [24]  630 	mov	dpl, #0x62
      00012C 12 01 0F         [24]  631 	lcall	_put_char
      00012F 75 82 75         [24]  632 	mov	dpl, #0x75
      000132 12 01 0F         [24]  633 	lcall	_put_char
      000135 75 82 67         [24]  634 	mov	dpl, #0x67
      000138 12 01 0F         [24]  635 	lcall	_put_char
      00013B 75 82 0A         [24]  636 	mov	dpl, #0x0a
                                    637 ;	src/main.c:93: }
      00013E 02 01 0F         [24]  638 	ljmp	_put_char
                                    639 ;------------------------------------------------------------
                                    640 ;Allocation info for local variables in function 'start_interrupts'
                                    641 ;------------------------------------------------------------
                                    642 ;	src/main.c:96: void start_interrupts(){
                                    643 ;	-----------------------------------------
                                    644 ;	 function start_interrupts
                                    645 ;	-----------------------------------------
      000141                        646 _start_interrupts:
                                    647 ;	src/main.c:97: EA = 1;
                                    648 ;	assignBit
      000141 D2 AF            [12]  649 	setb	_EA
                                    650 ;	src/main.c:98: ES = 1;
                                    651 ;	assignBit
      000143 D2 AC            [12]  652 	setb	_ES
                                    653 ;	src/main.c:101: }
      000145 22               [24]  654 	ret
                                    655 ;------------------------------------------------------------
                                    656 ;Allocation info for local variables in function 'Serial_ISR'
                                    657 ;------------------------------------------------------------
                                    658 ;	src/main.c:106: void Serial_ISR(void) __interrupt (4)
                                    659 ;	-----------------------------------------
                                    660 ;	 function Serial_ISR
                                    661 ;	-----------------------------------------
      000146                        662 _Serial_ISR:
      000146 C0 E0            [24]  663 	push	acc
      000148 C0 00            [24]  664 	push	ar0
      00014A C0 D0            [24]  665 	push	psw
      00014C 75 D0 00         [24]  666 	mov	psw,#0x00
                                    667 ;	src/main.c:108: if(RI){						//Recieve Interrput == RI
      00014F 30 98 09         [24]  668 	jnb	_RI,00102$
                                    669 ;	src/main.c:109: *wr_pointer = SBUF;		//Store Input Data in Buffer
      000152 E5 33            [12]  670 	mov	a,_wr_pointer
      000154 F8               [12]  671 	mov	r0,a
      000155 A6 99            [24]  672 	mov	@r0,_SBUF
                                    673 ;	src/main.c:110: wr_pointer++;
      000157 05 33            [12]  674 	inc	_wr_pointer
                                    675 ;	src/main.c:111: RI = 0;
                                    676 ;	assignBit
      000159 C2 98            [12]  677 	clr	_RI
      00015B                        678 00102$:
                                    679 ;	src/main.c:114: if(TI){
                                    680 ;	src/main.c:116: TI = 0;
                                    681 ;	assignBit
      00015B 10 99 02         [24]  682 	jbc	_TI,00120$
      00015E 80 02            [24]  683 	sjmp	00105$
      000160                        684 00120$:
                                    685 ;	src/main.c:117: serial_busy = 0;
                                    686 ;	assignBit
      000160 C2 00            [12]  687 	clr	_serial_busy
      000162                        688 00105$:
                                    689 ;	src/main.c:119: }
      000162 D0 D0            [24]  690 	pop	psw
      000164 D0 00            [24]  691 	pop	ar0
      000166 D0 E0            [24]  692 	pop	acc
      000168 32               [24]  693 	reti
                                    694 ;	eliminated unneeded push/pop ar1
                                    695 ;	eliminated unneeded push/pop dpl
                                    696 ;	eliminated unneeded push/pop dph
                                    697 ;	eliminated unneeded push/pop b
                                    698 ;------------------------------------------------------------
                                    699 ;Allocation info for local variables in function 'main'
                                    700 ;------------------------------------------------------------
                                    701 ;	src/main.c:121: void main(void){
                                    702 ;	-----------------------------------------
                                    703 ;	 function main
                                    704 ;	-----------------------------------------
      000169                        705 _main:
                                    706 ;	src/main.c:122: init_mpu();
      000169 12 00 CB         [24]  707 	lcall	_init_mpu
                                    708 ;	src/main.c:123: start_interrupts();
      00016C 12 01 41         [24]  709 	lcall	_start_interrupts
                                    710 ;	src/main.c:125: init_serial();
      00016F 12 00 FC         [24]  711 	lcall	_init_serial
                                    712 ;	src/main.c:127: while(1){
      000172                        713 00102$:
                                    714 ;	src/main.c:128: put_char('A');
      000172 75 82 41         [24]  715 	mov	dpl, #0x41
      000175 12 01 0F         [24]  716 	lcall	_put_char
                                    717 ;	src/main.c:131: }
      000178 80 F8            [24]  718 	sjmp	00102$
                                    719 	.area CSEG    (CODE)
                                    720 	.area CONST   (CODE)
                                    721 	.area XINIT   (CODE)
                                    722 	.area CABS    (ABS,CODE)
