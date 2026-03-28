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
                                     13 	.globl _print_boot_message
                                     14 	.globl _hex_to_ascii
                                     15 	.globl _ascii_to_hex
                                     16 	.globl _delay_ms_500
                                     17 	.globl _echo
                                     18 	.globl _put_char
                                     19 	.globl _init_serial
                                     20 	.globl _init_timer
                                     21 	.globl _init_mpu
                                     22 	.globl _WDTRST
                                     23 	.globl _TF2
                                     24 	.globl _EXF2
                                     25 	.globl _RCLK
                                     26 	.globl _TCLK
                                     27 	.globl _EXEN2
                                     28 	.globl _TR2
                                     29 	.globl _C_T2
                                     30 	.globl _CP_RL2
                                     31 	.globl _T2CON_7
                                     32 	.globl _T2CON_6
                                     33 	.globl _T2CON_5
                                     34 	.globl _T2CON_4
                                     35 	.globl _T2CON_3
                                     36 	.globl _T2CON_2
                                     37 	.globl _T2CON_1
                                     38 	.globl _T2CON_0
                                     39 	.globl _PT2
                                     40 	.globl _ET2
                                     41 	.globl _CY
                                     42 	.globl _AC
                                     43 	.globl _F0
                                     44 	.globl _RS1
                                     45 	.globl _RS0
                                     46 	.globl _OV
                                     47 	.globl _F1
                                     48 	.globl _P
                                     49 	.globl _PS
                                     50 	.globl _PT1
                                     51 	.globl _PX1
                                     52 	.globl _PT0
                                     53 	.globl _PX0
                                     54 	.globl _RD
                                     55 	.globl _WR
                                     56 	.globl _T1
                                     57 	.globl _T0
                                     58 	.globl _INT1
                                     59 	.globl _INT0
                                     60 	.globl _TXD
                                     61 	.globl _RXD
                                     62 	.globl _P3_7
                                     63 	.globl _P3_6
                                     64 	.globl _P3_5
                                     65 	.globl _P3_4
                                     66 	.globl _P3_3
                                     67 	.globl _P3_2
                                     68 	.globl _P3_1
                                     69 	.globl _P3_0
                                     70 	.globl _EA
                                     71 	.globl _ES
                                     72 	.globl _ET1
                                     73 	.globl _EX1
                                     74 	.globl _ET0
                                     75 	.globl _EX0
                                     76 	.globl _P2_7
                                     77 	.globl _P2_6
                                     78 	.globl _P2_5
                                     79 	.globl _P2_4
                                     80 	.globl _P2_3
                                     81 	.globl _P2_2
                                     82 	.globl _P2_1
                                     83 	.globl _P2_0
                                     84 	.globl _SM0
                                     85 	.globl _SM1
                                     86 	.globl _SM2
                                     87 	.globl _REN
                                     88 	.globl _TB8
                                     89 	.globl _RB8
                                     90 	.globl _TI
                                     91 	.globl _RI
                                     92 	.globl _P1_7
                                     93 	.globl _P1_6
                                     94 	.globl _P1_5
                                     95 	.globl _P1_4
                                     96 	.globl _P1_3
                                     97 	.globl _P1_2
                                     98 	.globl _P1_1
                                     99 	.globl _P1_0
                                    100 	.globl _TF1
                                    101 	.globl _TR1
                                    102 	.globl _TF0
                                    103 	.globl _TR0
                                    104 	.globl _IE1
                                    105 	.globl _IT1
                                    106 	.globl _IE0
                                    107 	.globl _IT0
                                    108 	.globl _P0_7
                                    109 	.globl _P0_6
                                    110 	.globl _P0_5
                                    111 	.globl _P0_4
                                    112 	.globl _P0_3
                                    113 	.globl _P0_2
                                    114 	.globl _P0_1
                                    115 	.globl _P0_0
                                    116 	.globl _TH2
                                    117 	.globl _TL2
                                    118 	.globl _RCAP2H
                                    119 	.globl _RCAP2L
                                    120 	.globl _T2CON
                                    121 	.globl _B
                                    122 	.globl _ACC
                                    123 	.globl _PSW
                                    124 	.globl _IP
                                    125 	.globl _P3
                                    126 	.globl _IE
                                    127 	.globl _P2
                                    128 	.globl _SBUF
                                    129 	.globl _SCON
                                    130 	.globl _P1
                                    131 	.globl _TH1
                                    132 	.globl _TH0
                                    133 	.globl _TL1
                                    134 	.globl _TL0
                                    135 	.globl _TMOD
                                    136 	.globl _TCON
                                    137 	.globl _PCON
                                    138 	.globl _DPH
                                    139 	.globl _DPL
                                    140 	.globl _SP
                                    141 	.globl _P0
                                    142 	.globl _prog_buffer
                                    143 	.globl _result_h
                                    144 	.globl _result_l
                                    145 	.globl _instruction_buffer
                                    146 	.globl _temp3
                                    147 	.globl _temp2
                                    148 	.globl _temp1
                                    149 	.globl _serial_busy
                                    150 	.globl _active_timer
                                    151 	.globl _op2
                                    152 	.globl _op1
                                    153 	.globl _system_tick
                                    154 	.globl _wr_pointer
                                    155 	.globl _rd_pointer
                                    156 	.globl _prog_counter
                                    157 	.globl _loop_counter
                                    158 ;--------------------------------------------------------
                                    159 ; special function registers
                                    160 ;--------------------------------------------------------
                                    161 	.area RSEG    (ABS,DATA)
      000000                        162 	.org 0x0000
                           000080   163 _P0	=	0x0080
                           000081   164 _SP	=	0x0081
                           000082   165 _DPL	=	0x0082
                           000083   166 _DPH	=	0x0083
                           000087   167 _PCON	=	0x0087
                           000088   168 _TCON	=	0x0088
                           000089   169 _TMOD	=	0x0089
                           00008A   170 _TL0	=	0x008a
                           00008B   171 _TL1	=	0x008b
                           00008C   172 _TH0	=	0x008c
                           00008D   173 _TH1	=	0x008d
                           000090   174 _P1	=	0x0090
                           000098   175 _SCON	=	0x0098
                           000099   176 _SBUF	=	0x0099
                           0000A0   177 _P2	=	0x00a0
                           0000A8   178 _IE	=	0x00a8
                           0000B0   179 _P3	=	0x00b0
                           0000B8   180 _IP	=	0x00b8
                           0000D0   181 _PSW	=	0x00d0
                           0000E0   182 _ACC	=	0x00e0
                           0000F0   183 _B	=	0x00f0
                           0000C8   184 _T2CON	=	0x00c8
                           0000CA   185 _RCAP2L	=	0x00ca
                           0000CB   186 _RCAP2H	=	0x00cb
                           0000CC   187 _TL2	=	0x00cc
                           0000CD   188 _TH2	=	0x00cd
                                    189 ;--------------------------------------------------------
                                    190 ; special function bits
                                    191 ;--------------------------------------------------------
                                    192 	.area RSEG    (ABS,DATA)
      000000                        193 	.org 0x0000
                           000080   194 _P0_0	=	0x0080
                           000081   195 _P0_1	=	0x0081
                           000082   196 _P0_2	=	0x0082
                           000083   197 _P0_3	=	0x0083
                           000084   198 _P0_4	=	0x0084
                           000085   199 _P0_5	=	0x0085
                           000086   200 _P0_6	=	0x0086
                           000087   201 _P0_7	=	0x0087
                           000088   202 _IT0	=	0x0088
                           000089   203 _IE0	=	0x0089
                           00008A   204 _IT1	=	0x008a
                           00008B   205 _IE1	=	0x008b
                           00008C   206 _TR0	=	0x008c
                           00008D   207 _TF0	=	0x008d
                           00008E   208 _TR1	=	0x008e
                           00008F   209 _TF1	=	0x008f
                           000090   210 _P1_0	=	0x0090
                           000091   211 _P1_1	=	0x0091
                           000092   212 _P1_2	=	0x0092
                           000093   213 _P1_3	=	0x0093
                           000094   214 _P1_4	=	0x0094
                           000095   215 _P1_5	=	0x0095
                           000096   216 _P1_6	=	0x0096
                           000097   217 _P1_7	=	0x0097
                           000098   218 _RI	=	0x0098
                           000099   219 _TI	=	0x0099
                           00009A   220 _RB8	=	0x009a
                           00009B   221 _TB8	=	0x009b
                           00009C   222 _REN	=	0x009c
                           00009D   223 _SM2	=	0x009d
                           00009E   224 _SM1	=	0x009e
                           00009F   225 _SM0	=	0x009f
                           0000A0   226 _P2_0	=	0x00a0
                           0000A1   227 _P2_1	=	0x00a1
                           0000A2   228 _P2_2	=	0x00a2
                           0000A3   229 _P2_3	=	0x00a3
                           0000A4   230 _P2_4	=	0x00a4
                           0000A5   231 _P2_5	=	0x00a5
                           0000A6   232 _P2_6	=	0x00a6
                           0000A7   233 _P2_7	=	0x00a7
                           0000A8   234 _EX0	=	0x00a8
                           0000A9   235 _ET0	=	0x00a9
                           0000AA   236 _EX1	=	0x00aa
                           0000AB   237 _ET1	=	0x00ab
                           0000AC   238 _ES	=	0x00ac
                           0000AF   239 _EA	=	0x00af
                           0000B0   240 _P3_0	=	0x00b0
                           0000B1   241 _P3_1	=	0x00b1
                           0000B2   242 _P3_2	=	0x00b2
                           0000B3   243 _P3_3	=	0x00b3
                           0000B4   244 _P3_4	=	0x00b4
                           0000B5   245 _P3_5	=	0x00b5
                           0000B6   246 _P3_6	=	0x00b6
                           0000B7   247 _P3_7	=	0x00b7
                           0000B0   248 _RXD	=	0x00b0
                           0000B1   249 _TXD	=	0x00b1
                           0000B2   250 _INT0	=	0x00b2
                           0000B3   251 _INT1	=	0x00b3
                           0000B4   252 _T0	=	0x00b4
                           0000B5   253 _T1	=	0x00b5
                           0000B6   254 _WR	=	0x00b6
                           0000B7   255 _RD	=	0x00b7
                           0000B8   256 _PX0	=	0x00b8
                           0000B9   257 _PT0	=	0x00b9
                           0000BA   258 _PX1	=	0x00ba
                           0000BB   259 _PT1	=	0x00bb
                           0000BC   260 _PS	=	0x00bc
                           0000D0   261 _P	=	0x00d0
                           0000D1   262 _F1	=	0x00d1
                           0000D2   263 _OV	=	0x00d2
                           0000D3   264 _RS0	=	0x00d3
                           0000D4   265 _RS1	=	0x00d4
                           0000D5   266 _F0	=	0x00d5
                           0000D6   267 _AC	=	0x00d6
                           0000D7   268 _CY	=	0x00d7
                           0000AD   269 _ET2	=	0x00ad
                           0000BD   270 _PT2	=	0x00bd
                           0000C8   271 _T2CON_0	=	0x00c8
                           0000C9   272 _T2CON_1	=	0x00c9
                           0000CA   273 _T2CON_2	=	0x00ca
                           0000CB   274 _T2CON_3	=	0x00cb
                           0000CC   275 _T2CON_4	=	0x00cc
                           0000CD   276 _T2CON_5	=	0x00cd
                           0000CE   277 _T2CON_6	=	0x00ce
                           0000CF   278 _T2CON_7	=	0x00cf
                           0000C8   279 _CP_RL2	=	0x00c8
                           0000C9   280 _C_T2	=	0x00c9
                           0000CA   281 _TR2	=	0x00ca
                           0000CB   282 _EXEN2	=	0x00cb
                           0000CC   283 _TCLK	=	0x00cc
                           0000CD   284 _RCLK	=	0x00cd
                           0000CE   285 _EXF2	=	0x00ce
                           0000CF   286 _TF2	=	0x00cf
                           0000A6   287 _WDTRST	=	0x00a6
                                    288 ;--------------------------------------------------------
                                    289 ; overlayable register banks
                                    290 ;--------------------------------------------------------
                                    291 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        292 	.ds 8
                                    293 ;--------------------------------------------------------
                                    294 ; internal ram data
                                    295 ;--------------------------------------------------------
                                    296 	.area DSEG    (DATA)
                           000030   297 _loop_counter	=	0x0030
                           000031   298 _prog_counter	=	0x0031
                           000032   299 _rd_pointer	=	0x0032
                           000033   300 _wr_pointer	=	0x0033
                           000034   301 _system_tick	=	0x0034
                           000035   302 _op1	=	0x0035
                           000036   303 _op2	=	0x0036
                           000037   304 _active_timer	=	0x0037
                           000038   305 _serial_busy	=	0x0038
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
                                    339 ;--------------------------------------------------------
                                    340 ; paged external ram data
                                    341 ;--------------------------------------------------------
                                    342 	.area PSEG    (PAG,XDATA)
                                    343 ;--------------------------------------------------------
                                    344 ; uninitialized external ram data
                                    345 ;--------------------------------------------------------
                                    346 	.area XSEG    (XDATA)
                                    347 ;--------------------------------------------------------
                                    348 ; absolute external ram data
                                    349 ;--------------------------------------------------------
                                    350 	.area XABS    (ABS,XDATA)
                                    351 ;--------------------------------------------------------
                                    352 ; initialized external ram data
                                    353 ;--------------------------------------------------------
                                    354 	.area XISEG   (XDATA)
                                    355 	.area HOME    (CODE)
                                    356 	.area GSINIT0 (CODE)
                                    357 	.area GSINIT1 (CODE)
                                    358 	.area GSINIT2 (CODE)
                                    359 	.area GSINIT3 (CODE)
                                    360 	.area GSINIT4 (CODE)
                                    361 	.area GSINIT5 (CODE)
                                    362 	.area GSINIT  (CODE)
                                    363 	.area GSFINAL (CODE)
                                    364 	.area CSEG    (CODE)
                                    365 ;--------------------------------------------------------
                                    366 ; interrupt vector
                                    367 ;--------------------------------------------------------
                                    368 	.area HOME    (CODE)
      000000                        369 __interrupt_vect:
      000000 02 00 6C         [24]  370 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  371 	reti
      000004                        372 	.ds	7
      00000B 32               [24]  373 	reti
      00000C                        374 	.ds	7
      000013 32               [24]  375 	reti
      000014                        376 	.ds	7
      00001B 32               [24]  377 	reti
      00001C                        378 	.ds	7
      000023 02 01 5F         [24]  379 	ljmp	_Serial_ISR
                                    380 ; restartable atomic support routines
      000026                        381 	.ds	2
      000028                        382 sdcc_atomic_exchange_rollback_start::
      000028 00               [12]  383 	nop
      000029 00               [12]  384 	nop
      00002A                        385 sdcc_atomic_exchange_pdata_impl:
      00002A E2               [24]  386 	movx	a, @r0
      00002B FB               [12]  387 	mov	r3, a
      00002C EA               [12]  388 	mov	a, r2
      00002D F2               [24]  389 	movx	@r0, a
      00002E 80 2C            [24]  390 	sjmp	sdcc_atomic_exchange_exit
      000030 00               [12]  391 	nop
      000031 00               [12]  392 	nop
      000032                        393 sdcc_atomic_exchange_xdata_impl:
      000032 E0               [24]  394 	movx	a, @dptr
      000033 FB               [12]  395 	mov	r3, a
      000034 EA               [12]  396 	mov	a, r2
      000035 F0               [24]  397 	movx	@dptr, a
      000036 80 24            [24]  398 	sjmp	sdcc_atomic_exchange_exit
      000038                        399 sdcc_atomic_compare_exchange_idata_impl:
      000038 E6               [12]  400 	mov	a, @r0
      000039 B5 02 02         [24]  401 	cjne	a, ar2, .+#5
      00003C EB               [12]  402 	mov	a, r3
      00003D F6               [12]  403 	mov	@r0, a
      00003E 22               [24]  404 	ret
      00003F 00               [12]  405 	nop
      000040                        406 sdcc_atomic_compare_exchange_pdata_impl:
      000040 E2               [24]  407 	movx	a, @r0
      000041 B5 02 02         [24]  408 	cjne	a, ar2, .+#5
      000044 EB               [12]  409 	mov	a, r3
      000045 F2               [24]  410 	movx	@r0, a
      000046 22               [24]  411 	ret
      000047 00               [12]  412 	nop
      000048                        413 sdcc_atomic_compare_exchange_xdata_impl:
      000048 E0               [24]  414 	movx	a, @dptr
      000049 B5 02 02         [24]  415 	cjne	a, ar2, .+#5
      00004C EB               [12]  416 	mov	a, r3
      00004D F0               [24]  417 	movx	@dptr, a
      00004E 22               [24]  418 	ret
      00004F                        419 sdcc_atomic_exchange_rollback_end::
                                    420 
      00004F                        421 sdcc_atomic_exchange_gptr_impl::
      00004F 30 F6 E0         [24]  422 	jnb	b.6, sdcc_atomic_exchange_xdata_impl
      000052 A8 82            [24]  423 	mov	r0, dpl
      000054 20 F5 D3         [24]  424 	jb	b.5, sdcc_atomic_exchange_pdata_impl
      000057                        425 sdcc_atomic_exchange_idata_impl:
      000057 EA               [12]  426 	mov	a, r2
      000058 C6               [12]  427 	xch	a, @r0
      000059 F5 82            [12]  428 	mov	dpl, a
      00005B 22               [24]  429 	ret
      00005C                        430 sdcc_atomic_exchange_exit:
      00005C 8B 82            [24]  431 	mov	dpl, r3
      00005E 22               [24]  432 	ret
      00005F                        433 sdcc_atomic_compare_exchange_gptr_impl::
      00005F 30 F6 E6         [24]  434 	jnb	b.6, sdcc_atomic_compare_exchange_xdata_impl
      000062 A8 82            [24]  435 	mov	r0, dpl
      000064 20 F5 D9         [24]  436 	jb	b.5, sdcc_atomic_compare_exchange_pdata_impl
      000067 80 CF            [24]  437 	sjmp	sdcc_atomic_compare_exchange_idata_impl
                                    438 ;--------------------------------------------------------
                                    439 ; global & static initialisations
                                    440 ;--------------------------------------------------------
                                    441 	.area HOME    (CODE)
                                    442 	.area GSINIT  (CODE)
                                    443 	.area GSFINAL (CODE)
                                    444 	.area GSINIT  (CODE)
                                    445 	.globl __sdcc_gsinit_startup
                                    446 	.globl __sdcc_program_startup
                                    447 	.globl __start__stack
                                    448 	.globl __mcs51_genXINIT
                                    449 	.globl __mcs51_genXRAMCLEAR
                                    450 	.globl __mcs51_genRAMCLEAR
                                    451 ;	include/uvr_variable.h:31: volatile unsigned char __data __at (0x40) prog_buffer[32] = {0};
      0000C5 75 40 00         [24]  452 	mov	_prog_buffer,#0x00
                                    453 	.area GSFINAL (CODE)
      0000C8 02 00 69         [24]  454 	ljmp	__sdcc_program_startup
                                    455 ;--------------------------------------------------------
                                    456 ; Home
                                    457 ;--------------------------------------------------------
                                    458 	.area HOME    (CODE)
                                    459 	.area HOME    (CODE)
      000069                        460 __sdcc_program_startup:
      000069 02 01 83         [24]  461 	ljmp	_main
                                    462 ;	return from main will return to caller
                                    463 ;--------------------------------------------------------
                                    464 ; code
                                    465 ;--------------------------------------------------------
                                    466 	.area CSEG    (CODE)
                                    467 ;------------------------------------------------------------
                                    468 ;Allocation info for local variables in function 'init_mpu'
                                    469 ;------------------------------------------------------------
                                    470 ;	src/main.c:6: void init_mpu(void){
                                    471 ;	-----------------------------------------
                                    472 ;	 function init_mpu
                                    473 ;	-----------------------------------------
      0000CB                        474 _init_mpu:
                           000007   475 	ar7 = 0x07
                           000006   476 	ar6 = 0x06
                           000005   477 	ar5 = 0x05
                           000004   478 	ar4 = 0x04
                           000003   479 	ar3 = 0x03
                           000002   480 	ar2 = 0x02
                           000001   481 	ar1 = 0x01
                           000000   482 	ar0 = 0x00
                                    483 ;	src/main.c:7: EA = 1; 		//Enable Global Interupt
                                    484 ;	assignBit
      0000CB D2 AF            [12]  485 	setb	_EA
                                    486 ;	src/main.c:8: SP = hw_stack;		//Initialize Stack Pointer
      0000CD 75 81 60         [24]  487 	mov	_SP,#0x60
                                    488 ;	src/main.c:12: loop_counter = 00;
      0000D0 75 30 00         [24]  489 	mov	_loop_counter,#0x00
                                    490 ;	src/main.c:13: prog_counter = 00;
      0000D3 75 31 00         [24]  491 	mov	_prog_counter,#0x00
                                    492 ;	src/main.c:14: rd_pointer = 0x40;	//Read Memory
      0000D6 75 32 40         [24]  493 	mov	_rd_pointer,#0x40
                                    494 ;	src/main.c:15: wr_pointer = 0x40;		//Write Memory
      0000D9 75 33 40         [24]  495 	mov	_wr_pointer,#0x40
                                    496 ;	src/main.c:16: system_tick = 00;
      0000DC 75 34 00         [24]  497 	mov	_system_tick,#0x00
                                    498 ;	src/main.c:17: op1 = 00;
      0000DF 75 35 00         [24]  499 	mov	_op1,#0x00
                                    500 ;	src/main.c:18: op2 = 00;
      0000E2 75 36 00         [24]  501 	mov	_op2,#0x00
                                    502 ;	src/main.c:19: active_timer = 00;
      0000E5 75 37 00         [24]  503 	mov	_active_timer,#0x00
                                    504 ;	src/main.c:20: serial_busy = 00;
      0000E8 75 38 00         [24]  505 	mov	_serial_busy,#0x00
                                    506 ;	src/main.c:21: temp1 = 00;
      0000EB 75 39 00         [24]  507 	mov	_temp1,#0x00
                                    508 ;	src/main.c:22: temp2 = 00;
      0000EE 75 3A 00         [24]  509 	mov	_temp2,#0x00
                                    510 ;	src/main.c:23: temp3 = 00;
      0000F1 75 3C 00         [24]  511 	mov	_temp3,#0x00
                                    512 ;	src/main.c:24: instruction_buffer = 00;
      0000F4 75 3D 00         [24]  513 	mov	_instruction_buffer,#0x00
                                    514 ;	src/main.c:25: result_l = 00;
      0000F7 75 3E 00         [24]  515 	mov	_result_l,#0x00
                                    516 ;	src/main.c:26: result_h = 00;
      0000FA 75 3F 00         [24]  517 	mov	_result_h,#0x00
                                    518 ;	src/main.c:27: }
      0000FD 22               [24]  519 	ret
                                    520 ;------------------------------------------------------------
                                    521 ;Allocation info for local variables in function 'init_timer'
                                    522 ;------------------------------------------------------------
                                    523 ;	src/main.c:31: void init_timer(void){
                                    524 ;	-----------------------------------------
                                    525 ;	 function init_timer
                                    526 ;	-----------------------------------------
      0000FE                        527 _init_timer:
                                    528 ;	src/main.c:33: }
      0000FE 22               [24]  529 	ret
                                    530 ;------------------------------------------------------------
                                    531 ;Allocation info for local variables in function 'init_serial'
                                    532 ;------------------------------------------------------------
                                    533 ;	src/main.c:36: void init_serial(void){
                                    534 ;	-----------------------------------------
                                    535 ;	 function init_serial
                                    536 ;	-----------------------------------------
      0000FF                        537 _init_serial:
                                    538 ;	src/main.c:38: TMOD = 0x20;				//Set TMOD to Use Timer 1 in 8 Bit Auto Reload
      0000FF 75 89 20         [24]  539 	mov	_TMOD,#0x20
                                    540 ;	src/main.c:39: TH1 = serial_baud_timer;	//Set Reload value
      000102 75 8D FD         [24]  541 	mov	_TH1,#0xfd
                                    542 ;	src/main.c:40: TL1 = serial_baud_timer;	//Set Initial Value
      000105 75 8B FD         [24]  543 	mov	_TL1,#0xfd
                                    544 ;	src/main.c:41: TR1 = 1;					//Start Timer 1
                                    545 ;	assignBit
      000108 D2 8E            [12]  546 	setb	_TR1
                                    547 ;	src/main.c:42: serial_busy = 0x00;
      00010A 75 38 00         [24]  548 	mov	_serial_busy,#0x00
                                    549 ;	src/main.c:43: TI = 0;
                                    550 ;	assignBit
      00010D C2 99            [12]  551 	clr	_TI
                                    552 ;	src/main.c:44: RI = 0;
                                    553 ;	assignBit
      00010F C2 98            [12]  554 	clr	_RI
                                    555 ;	src/main.c:45: SCON = 0x50;				//Serial Mode 1 , 8 Bit UART
      000111 75 98 50         [24]  556 	mov	_SCON,#0x50
                                    557 ;	src/main.c:46: ES = 1;						//Enable Serial interrupt
                                    558 ;	assignBit
      000114 D2 AC            [12]  559 	setb	_ES
                                    560 ;	src/main.c:48: }
      000116 22               [24]  561 	ret
                                    562 ;------------------------------------------------------------
                                    563 ;Allocation info for local variables in function 'put_char'
                                    564 ;------------------------------------------------------------
                                    565 ;args          Allocated to registers r7 
                                    566 ;------------------------------------------------------------
                                    567 ;	src/main.c:51: void put_char(char args){
                                    568 ;	-----------------------------------------
                                    569 ;	 function put_char
                                    570 ;	-----------------------------------------
      000117                        571 _put_char:
      000117 AF 82            [24]  572 	mov	r7, dpl
                                    573 ;	src/main.c:57: __endasm;
      000119                        574 SERIAL_WAIT:
                                    575 ;Assembly because sdcc sucks
      000119 E5 38            [12]  576 	mov	a , _serial_busy
      00011B 70 FC            [24]  577 	jnz	SERIAL_WAIT
                                    578 ;	src/main.c:59: serial_busy = 0x01;
      00011D 75 38 01         [24]  579 	mov	_serial_busy,#0x01
                                    580 ;	src/main.c:60: SBUF = args;
      000120 8F 99            [24]  581 	mov	_SBUF,r7
                                    582 ;	src/main.c:62: }
      000122 22               [24]  583 	ret
                                    584 ;------------------------------------------------------------
                                    585 ;Allocation info for local variables in function 'echo'
                                    586 ;------------------------------------------------------------
                                    587 ;	src/main.c:64: void echo(void){
                                    588 ;	-----------------------------------------
                                    589 ;	 function echo
                                    590 ;	-----------------------------------------
      000123                        591 _echo:
                                    592 ;	src/main.c:65: serial_busy = 1;
      000123 75 38 01         [24]  593 	mov	_serial_busy,#0x01
                                    594 ;	src/main.c:66: while(rd_pointer == wr_pointer);
      000126                        595 00101$:
      000126 E5 33            [12]  596 	mov	a,_wr_pointer
      000128 B5 32 02         [24]  597 	cjne	a,_rd_pointer,00133$
      00012B 80 F9            [24]  598 	sjmp	00101$
      00012D                        599 00133$:
                                    600 ;	src/main.c:67: SBUF = *rd_pointer;
      00012D A9 32            [24]  601 	mov	r1,_rd_pointer
      00012F 87 99            [24]  602 	mov	_SBUF,@r1
                                    603 ;	src/main.c:68: while(serial_busy);
      000131                        604 00104$:
      000131 E5 38            [12]  605 	mov	a,_serial_busy
      000133 70 FC            [24]  606 	jnz	00104$
                                    607 ;	src/main.c:69: rd_pointer++;
      000135 05 32            [12]  608 	inc	_rd_pointer
                                    609 ;	src/main.c:71: }
      000137 22               [24]  610 	ret
                                    611 ;------------------------------------------------------------
                                    612 ;Allocation info for local variables in function 'delay_ms_500'
                                    613 ;------------------------------------------------------------
                                    614 ;	src/main.c:77: void delay_ms_500(void){
                                    615 ;	-----------------------------------------
                                    616 ;	 function delay_ms_500
                                    617 ;	-----------------------------------------
      000138                        618 _delay_ms_500:
                                    619 ;	src/main.c:80: }
      000138 22               [24]  620 	ret
                                    621 ;------------------------------------------------------------
                                    622 ;Allocation info for local variables in function 'ascii_to_hex'
                                    623 ;------------------------------------------------------------
                                    624 ;	src/main.c:85: void ascii_to_hex(void){
                                    625 ;	-----------------------------------------
                                    626 ;	 function ascii_to_hex
                                    627 ;	-----------------------------------------
      000139                        628 _ascii_to_hex:
                                    629 ;	src/main.c:88: }
      000139 22               [24]  630 	ret
                                    631 ;------------------------------------------------------------
                                    632 ;Allocation info for local variables in function 'hex_to_ascii'
                                    633 ;------------------------------------------------------------
                                    634 ;	src/main.c:94: void hex_to_ascii(void){
                                    635 ;	-----------------------------------------
                                    636 ;	 function hex_to_ascii
                                    637 ;	-----------------------------------------
      00013A                        638 _hex_to_ascii:
                                    639 ;	src/main.c:97: }
      00013A 22               [24]  640 	ret
                                    641 ;------------------------------------------------------------
                                    642 ;Allocation info for local variables in function 'print_boot_message'
                                    643 ;------------------------------------------------------------
                                    644 ;	src/main.c:102: void print_boot_message(void){
                                    645 ;	-----------------------------------------
                                    646 ;	 function print_boot_message
                                    647 ;	-----------------------------------------
      00013B                        648 _print_boot_message:
                                    649 ;	src/main.c:104: put_char('D');put_char('e');put_char('b');put_char('u');put_char('g');put_char('\n');
      00013B 75 82 44         [24]  650 	mov	dpl, #0x44
      00013E 12 01 17         [24]  651 	lcall	_put_char
      000141 75 82 65         [24]  652 	mov	dpl, #0x65
      000144 12 01 17         [24]  653 	lcall	_put_char
      000147 75 82 62         [24]  654 	mov	dpl, #0x62
      00014A 12 01 17         [24]  655 	lcall	_put_char
      00014D 75 82 75         [24]  656 	mov	dpl, #0x75
      000150 12 01 17         [24]  657 	lcall	_put_char
      000153 75 82 67         [24]  658 	mov	dpl, #0x67
      000156 12 01 17         [24]  659 	lcall	_put_char
      000159 75 82 0A         [24]  660 	mov	dpl, #0x0a
                                    661 ;	src/main.c:106: }
      00015C 02 01 17         [24]  662 	ljmp	_put_char
                                    663 ;------------------------------------------------------------
                                    664 ;Allocation info for local variables in function 'Serial_ISR'
                                    665 ;------------------------------------------------------------
                                    666 ;	src/main.c:114: void Serial_ISR(void) __interrupt (4)
                                    667 ;	-----------------------------------------
                                    668 ;	 function Serial_ISR
                                    669 ;	-----------------------------------------
      00015F                        670 _Serial_ISR:
      00015F C0 E0            [24]  671 	push	acc
      000161 C0 00            [24]  672 	push	ar0
      000163 C0 D0            [24]  673 	push	psw
      000165 75 D0 00         [24]  674 	mov	psw,#0x00
                                    675 ;	src/main.c:116: if(RI){						//Recieve Interrput == RI
      000168 30 98 09         [24]  676 	jnb	_RI,00102$
                                    677 ;	src/main.c:117: *wr_pointer = SBUF;		//Store Input Data in Buffer
      00016B E5 33            [12]  678 	mov	a,_wr_pointer
      00016D F8               [12]  679 	mov	r0,a
      00016E A6 99            [24]  680 	mov	@r0,_SBUF
                                    681 ;	src/main.c:118: wr_pointer++;
      000170 05 33            [12]  682 	inc	_wr_pointer
                                    683 ;	src/main.c:119: RI = 0;
                                    684 ;	assignBit
      000172 C2 98            [12]  685 	clr	_RI
      000174                        686 00102$:
                                    687 ;	src/main.c:122: if(TI){
                                    688 ;	src/main.c:123: TI = 0;
                                    689 ;	assignBit
      000174 10 99 02         [24]  690 	jbc	_TI,00120$
      000177 80 03            [24]  691 	sjmp	00105$
      000179                        692 00120$:
                                    693 ;	src/main.c:124: serial_busy = 0;
      000179 75 38 00         [24]  694 	mov	_serial_busy,#0x00
      00017C                        695 00105$:
                                    696 ;	src/main.c:126: }
      00017C D0 D0            [24]  697 	pop	psw
      00017E D0 00            [24]  698 	pop	ar0
      000180 D0 E0            [24]  699 	pop	acc
      000182 32               [24]  700 	reti
                                    701 ;	eliminated unneeded push/pop ar1
                                    702 ;	eliminated unneeded push/pop dpl
                                    703 ;	eliminated unneeded push/pop dph
                                    704 ;	eliminated unneeded push/pop b
                                    705 ;------------------------------------------------------------
                                    706 ;Allocation info for local variables in function 'main'
                                    707 ;------------------------------------------------------------
                                    708 ;	src/main.c:128: void main(void){
                                    709 ;	-----------------------------------------
                                    710 ;	 function main
                                    711 ;	-----------------------------------------
      000183                        712 _main:
                                    713 ;	src/main.c:129: init_mpu();
      000183 12 00 CB         [24]  714 	lcall	_init_mpu
                                    715 ;	src/main.c:131: init_serial();
      000186 12 00 FF         [24]  716 	lcall	_init_serial
                                    717 ;	src/main.c:133: serial_busy = 0;
      000189 75 38 00         [24]  718 	mov	_serial_busy,#0x00
                                    719 ;	src/main.c:135: while(1){
      00018C                        720 00102$:
                                    721 ;	src/main.c:136: put_char('A');
      00018C 75 82 41         [24]  722 	mov	dpl, #0x41
      00018F 12 01 17         [24]  723 	lcall	_put_char
                                    724 ;	src/main.c:138: }
      000192 80 F8            [24]  725 	sjmp	00102$
                                    726 	.area CSEG    (CODE)
                                    727 	.area CONST   (CODE)
                                    728 	.area XINIT   (CODE)
                                    729 	.area CABS    (ABS,CODE)
