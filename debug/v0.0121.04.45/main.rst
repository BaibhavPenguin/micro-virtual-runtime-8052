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
                                     12 	.globl _Timer2_ISR
                                     13 	.globl _Serial_ISR
                                     14 	.globl _hex_to_ascii
                                     15 	.globl _ascii_to_hex
                                     16 	.globl _delay_ms_500
                                     17 	.globl _uart_send
                                     18 	.globl _init_serial
                                     19 	.globl _init_timer
                                     20 	.globl _init_sys
                                     21 	.globl _WDTRST
                                     22 	.globl _TF2
                                     23 	.globl _EXF2
                                     24 	.globl _RCLK
                                     25 	.globl _TCLK
                                     26 	.globl _EXEN2
                                     27 	.globl _TR2
                                     28 	.globl _C_T2
                                     29 	.globl _CP_RL2
                                     30 	.globl _T2CON_7
                                     31 	.globl _T2CON_6
                                     32 	.globl _T2CON_5
                                     33 	.globl _T2CON_4
                                     34 	.globl _T2CON_3
                                     35 	.globl _T2CON_2
                                     36 	.globl _T2CON_1
                                     37 	.globl _T2CON_0
                                     38 	.globl _PT2
                                     39 	.globl _ET2
                                     40 	.globl _CY
                                     41 	.globl _AC
                                     42 	.globl _F0
                                     43 	.globl _RS1
                                     44 	.globl _RS0
                                     45 	.globl _OV
                                     46 	.globl _F1
                                     47 	.globl _P
                                     48 	.globl _PS
                                     49 	.globl _PT1
                                     50 	.globl _PX1
                                     51 	.globl _PT0
                                     52 	.globl _PX0
                                     53 	.globl _RD
                                     54 	.globl _WR
                                     55 	.globl _T1
                                     56 	.globl _T0
                                     57 	.globl _INT1
                                     58 	.globl _INT0
                                     59 	.globl _TXD
                                     60 	.globl _RXD
                                     61 	.globl _P3_7
                                     62 	.globl _P3_6
                                     63 	.globl _P3_5
                                     64 	.globl _P3_4
                                     65 	.globl _P3_3
                                     66 	.globl _P3_2
                                     67 	.globl _P3_1
                                     68 	.globl _P3_0
                                     69 	.globl _EA
                                     70 	.globl _ES
                                     71 	.globl _ET1
                                     72 	.globl _EX1
                                     73 	.globl _ET0
                                     74 	.globl _EX0
                                     75 	.globl _P2_7
                                     76 	.globl _P2_6
                                     77 	.globl _P2_5
                                     78 	.globl _P2_4
                                     79 	.globl _P2_3
                                     80 	.globl _P2_2
                                     81 	.globl _P2_1
                                     82 	.globl _P2_0
                                     83 	.globl _SM0
                                     84 	.globl _SM1
                                     85 	.globl _SM2
                                     86 	.globl _REN
                                     87 	.globl _TB8
                                     88 	.globl _RB8
                                     89 	.globl _TI
                                     90 	.globl _RI
                                     91 	.globl _P1_7
                                     92 	.globl _P1_6
                                     93 	.globl _P1_5
                                     94 	.globl _P1_4
                                     95 	.globl _P1_3
                                     96 	.globl _P1_2
                                     97 	.globl _P1_1
                                     98 	.globl _P1_0
                                     99 	.globl _TF1
                                    100 	.globl _TR1
                                    101 	.globl _TF0
                                    102 	.globl _TR0
                                    103 	.globl _IE1
                                    104 	.globl _IT1
                                    105 	.globl _IE0
                                    106 	.globl _IT0
                                    107 	.globl _P0_7
                                    108 	.globl _P0_6
                                    109 	.globl _P0_5
                                    110 	.globl _P0_4
                                    111 	.globl _P0_3
                                    112 	.globl _P0_2
                                    113 	.globl _P0_1
                                    114 	.globl _P0_0
                                    115 	.globl _TH2
                                    116 	.globl _TL2
                                    117 	.globl _RCAP2H
                                    118 	.globl _RCAP2L
                                    119 	.globl _T2CON
                                    120 	.globl _B
                                    121 	.globl _ACC
                                    122 	.globl _PSW
                                    123 	.globl _IP
                                    124 	.globl _P3
                                    125 	.globl _IE
                                    126 	.globl _P2
                                    127 	.globl _SBUF
                                    128 	.globl _SCON
                                    129 	.globl _P1
                                    130 	.globl _TH1
                                    131 	.globl _TH0
                                    132 	.globl _TL1
                                    133 	.globl _TL0
                                    134 	.globl _TMOD
                                    135 	.globl _TCON
                                    136 	.globl _PCON
                                    137 	.globl _DPH
                                    138 	.globl _DPL
                                    139 	.globl _SP
                                    140 	.globl _P0
                                    141 	.globl _is_recieved
                                    142 	.globl _prog_buffer
                                    143 	.globl _result_h
                                    144 	.globl _result_l
                                    145 	.globl _instruction_buffer
                                    146 	.globl _temp3
                                    147 	.globl _temp2
                                    148 	.globl _temp1
                                    149 	.globl _temp0
                                    150 	.globl _active_timer
                                    151 	.globl _op2
                                    152 	.globl _op1
                                    153 	.globl _system_tick
                                    154 	.globl _prog_counter
                                    155 	.globl _loop_counter
                                    156 	.globl _wr_pointer
                                    157 	.globl _rd_pointer
                                    158 	.globl _echo
                                    159 	.globl _print_boot_message
                                    160 	.globl _print_ready_message
                                    161 	.globl _clear_terminal
                                    162 ;--------------------------------------------------------
                                    163 ; special function registers
                                    164 ;--------------------------------------------------------
                                    165 	.area RSEG    (ABS,DATA)
      000000                        166 	.org 0x0000
                           000080   167 _P0	=	0x0080
                           000081   168 _SP	=	0x0081
                           000082   169 _DPL	=	0x0082
                           000083   170 _DPH	=	0x0083
                           000087   171 _PCON	=	0x0087
                           000088   172 _TCON	=	0x0088
                           000089   173 _TMOD	=	0x0089
                           00008A   174 _TL0	=	0x008a
                           00008B   175 _TL1	=	0x008b
                           00008C   176 _TH0	=	0x008c
                           00008D   177 _TH1	=	0x008d
                           000090   178 _P1	=	0x0090
                           000098   179 _SCON	=	0x0098
                           000099   180 _SBUF	=	0x0099
                           0000A0   181 _P2	=	0x00a0
                           0000A8   182 _IE	=	0x00a8
                           0000B0   183 _P3	=	0x00b0
                           0000B8   184 _IP	=	0x00b8
                           0000D0   185 _PSW	=	0x00d0
                           0000E0   186 _ACC	=	0x00e0
                           0000F0   187 _B	=	0x00f0
                           0000C8   188 _T2CON	=	0x00c8
                           0000CA   189 _RCAP2L	=	0x00ca
                           0000CB   190 _RCAP2H	=	0x00cb
                           0000CC   191 _TL2	=	0x00cc
                           0000CD   192 _TH2	=	0x00cd
                                    193 ;--------------------------------------------------------
                                    194 ; special function bits
                                    195 ;--------------------------------------------------------
                                    196 	.area RSEG    (ABS,DATA)
      000000                        197 	.org 0x0000
                           000080   198 _P0_0	=	0x0080
                           000081   199 _P0_1	=	0x0081
                           000082   200 _P0_2	=	0x0082
                           000083   201 _P0_3	=	0x0083
                           000084   202 _P0_4	=	0x0084
                           000085   203 _P0_5	=	0x0085
                           000086   204 _P0_6	=	0x0086
                           000087   205 _P0_7	=	0x0087
                           000088   206 _IT0	=	0x0088
                           000089   207 _IE0	=	0x0089
                           00008A   208 _IT1	=	0x008a
                           00008B   209 _IE1	=	0x008b
                           00008C   210 _TR0	=	0x008c
                           00008D   211 _TF0	=	0x008d
                           00008E   212 _TR1	=	0x008e
                           00008F   213 _TF1	=	0x008f
                           000090   214 _P1_0	=	0x0090
                           000091   215 _P1_1	=	0x0091
                           000092   216 _P1_2	=	0x0092
                           000093   217 _P1_3	=	0x0093
                           000094   218 _P1_4	=	0x0094
                           000095   219 _P1_5	=	0x0095
                           000096   220 _P1_6	=	0x0096
                           000097   221 _P1_7	=	0x0097
                           000098   222 _RI	=	0x0098
                           000099   223 _TI	=	0x0099
                           00009A   224 _RB8	=	0x009a
                           00009B   225 _TB8	=	0x009b
                           00009C   226 _REN	=	0x009c
                           00009D   227 _SM2	=	0x009d
                           00009E   228 _SM1	=	0x009e
                           00009F   229 _SM0	=	0x009f
                           0000A0   230 _P2_0	=	0x00a0
                           0000A1   231 _P2_1	=	0x00a1
                           0000A2   232 _P2_2	=	0x00a2
                           0000A3   233 _P2_3	=	0x00a3
                           0000A4   234 _P2_4	=	0x00a4
                           0000A5   235 _P2_5	=	0x00a5
                           0000A6   236 _P2_6	=	0x00a6
                           0000A7   237 _P2_7	=	0x00a7
                           0000A8   238 _EX0	=	0x00a8
                           0000A9   239 _ET0	=	0x00a9
                           0000AA   240 _EX1	=	0x00aa
                           0000AB   241 _ET1	=	0x00ab
                           0000AC   242 _ES	=	0x00ac
                           0000AF   243 _EA	=	0x00af
                           0000B0   244 _P3_0	=	0x00b0
                           0000B1   245 _P3_1	=	0x00b1
                           0000B2   246 _P3_2	=	0x00b2
                           0000B3   247 _P3_3	=	0x00b3
                           0000B4   248 _P3_4	=	0x00b4
                           0000B5   249 _P3_5	=	0x00b5
                           0000B6   250 _P3_6	=	0x00b6
                           0000B7   251 _P3_7	=	0x00b7
                           0000B0   252 _RXD	=	0x00b0
                           0000B1   253 _TXD	=	0x00b1
                           0000B2   254 _INT0	=	0x00b2
                           0000B3   255 _INT1	=	0x00b3
                           0000B4   256 _T0	=	0x00b4
                           0000B5   257 _T1	=	0x00b5
                           0000B6   258 _WR	=	0x00b6
                           0000B7   259 _RD	=	0x00b7
                           0000B8   260 _PX0	=	0x00b8
                           0000B9   261 _PT0	=	0x00b9
                           0000BA   262 _PX1	=	0x00ba
                           0000BB   263 _PT1	=	0x00bb
                           0000BC   264 _PS	=	0x00bc
                           0000D0   265 _P	=	0x00d0
                           0000D1   266 _F1	=	0x00d1
                           0000D2   267 _OV	=	0x00d2
                           0000D3   268 _RS0	=	0x00d3
                           0000D4   269 _RS1	=	0x00d4
                           0000D5   270 _F0	=	0x00d5
                           0000D6   271 _AC	=	0x00d6
                           0000D7   272 _CY	=	0x00d7
                           0000AD   273 _ET2	=	0x00ad
                           0000BD   274 _PT2	=	0x00bd
                           0000C8   275 _T2CON_0	=	0x00c8
                           0000C9   276 _T2CON_1	=	0x00c9
                           0000CA   277 _T2CON_2	=	0x00ca
                           0000CB   278 _T2CON_3	=	0x00cb
                           0000CC   279 _T2CON_4	=	0x00cc
                           0000CD   280 _T2CON_5	=	0x00cd
                           0000CE   281 _T2CON_6	=	0x00ce
                           0000CF   282 _T2CON_7	=	0x00cf
                           0000C8   283 _CP_RL2	=	0x00c8
                           0000C9   284 _C_T2	=	0x00c9
                           0000CA   285 _TR2	=	0x00ca
                           0000CB   286 _EXEN2	=	0x00cb
                           0000CC   287 _TCLK	=	0x00cc
                           0000CD   288 _RCLK	=	0x00cd
                           0000CE   289 _EXF2	=	0x00ce
                           0000CF   290 _TF2	=	0x00cf
                           0000A6   291 _WDTRST	=	0x00a6
                                    292 ;--------------------------------------------------------
                                    293 ; overlayable register banks
                                    294 ;--------------------------------------------------------
                                    295 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        296 	.ds 8
                                    297 ;--------------------------------------------------------
                                    298 ; internal ram data
                                    299 ;--------------------------------------------------------
                                    300 	.area DSEG    (DATA)
                           000032   301 _rd_pointer	=	0x0032
                           000033   302 _wr_pointer	=	0x0033
                                    303 ;--------------------------------------------------------
                                    304 ; overlayable items in internal ram
                                    305 ;--------------------------------------------------------
                                    306 	.area	OSEG    (OVR,DATA)
                                    307 ;--------------------------------------------------------
                                    308 ; Stack segment in internal ram
                                    309 ;--------------------------------------------------------
                                    310 	.area SSEG
      000060                        311 __start__stack:
      000060                        312 	.ds	1
                                    313 
                                    314 ;--------------------------------------------------------
                                    315 ; indirectly addressable internal ram data
                                    316 ;--------------------------------------------------------
                                    317 	.area ISEG    (DATA)
                                    318 ;--------------------------------------------------------
                                    319 ; absolute internal ram data
                                    320 ;--------------------------------------------------------
                                    321 	.area IABS    (ABS,DATA)
      000030                        322 	.org 0x0030
      000030                        323 _loop_counter::
      000030                        324 	.ds 1
      000031                        325 	.org 0x0031
      000031                        326 _prog_counter::
      000031                        327 	.ds 1
      000034                        328 	.org 0x0034
      000034                        329 _system_tick::
      000034                        330 	.ds 1
      000035                        331 	.org 0x0035
      000035                        332 _op1::
      000035                        333 	.ds 1
      000036                        334 	.org 0x0036
      000036                        335 _op2::
      000036                        336 	.ds 1
      000037                        337 	.org 0x0037
      000037                        338 _active_timer::
      000037                        339 	.ds 1
      000038                        340 	.org 0x0038
      000038                        341 _temp0::
      000038                        342 	.ds 1
      000039                        343 	.org 0x0039
      000039                        344 _temp1::
      000039                        345 	.ds 1
      00003A                        346 	.org 0x003A
      00003A                        347 _temp2::
      00003A                        348 	.ds 1
      00003C                        349 	.org 0x003C
      00003C                        350 _temp3::
      00003C                        351 	.ds 1
      00003D                        352 	.org 0x003D
      00003D                        353 _instruction_buffer::
      00003D                        354 	.ds 1
      00003E                        355 	.org 0x003E
      00003E                        356 _result_l::
      00003E                        357 	.ds 1
      00003F                        358 	.org 0x003F
      00003F                        359 _result_h::
      00003F                        360 	.ds 1
      000040                        361 	.org 0x0040
      000040                        362 _prog_buffer::
      000040                        363 	.ds 32
                                    364 	.area IABS    (ABS,DATA)
                                    365 ;--------------------------------------------------------
                                    366 ; bit data
                                    367 ;--------------------------------------------------------
                                    368 	.area BSEG    (BIT)
                           000000   369 _is_recieved	=	0x0000
                                    370 ;--------------------------------------------------------
                                    371 ; paged external ram data
                                    372 ;--------------------------------------------------------
                                    373 	.area PSEG    (PAG,XDATA)
                                    374 ;--------------------------------------------------------
                                    375 ; uninitialized external ram data
                                    376 ;--------------------------------------------------------
                                    377 	.area XSEG    (XDATA)
                                    378 ;--------------------------------------------------------
                                    379 ; absolute external ram data
                                    380 ;--------------------------------------------------------
                                    381 	.area XABS    (ABS,XDATA)
                                    382 ;--------------------------------------------------------
                                    383 ; initialized external ram data
                                    384 ;--------------------------------------------------------
                                    385 	.area XISEG   (XDATA)
                                    386 	.area HOME    (CODE)
                                    387 	.area GSINIT0 (CODE)
                                    388 	.area GSINIT1 (CODE)
                                    389 	.area GSINIT2 (CODE)
                                    390 	.area GSINIT3 (CODE)
                                    391 	.area GSINIT4 (CODE)
                                    392 	.area GSINIT5 (CODE)
                                    393 	.area GSINIT  (CODE)
                                    394 	.area GSFINAL (CODE)
                                    395 	.area CSEG    (CODE)
                                    396 ;--------------------------------------------------------
                                    397 ; interrupt vector
                                    398 ;--------------------------------------------------------
                                    399 	.area HOME    (CODE)
      000000                        400 __interrupt_vect:
      000000 02 00 74         [24]  401 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  402 	reti
      000004                        403 	.ds	7
      00000B 32               [24]  404 	reti
      00000C                        405 	.ds	7
      000013 32               [24]  406 	reti
      000014                        407 	.ds	7
      00001B 32               [24]  408 	reti
      00001C                        409 	.ds	7
      000023 02 01 A6         [24]  410 	ljmp	_Serial_ISR
      000026                        411 	.ds	5
      00002B 02 01 C4         [24]  412 	ljmp	_Timer2_ISR
                                    413 ; restartable atomic support routines
      00002E                        414 	.ds	2
      000030                        415 sdcc_atomic_exchange_rollback_start::
      000030 00               [12]  416 	nop
      000031 00               [12]  417 	nop
      000032                        418 sdcc_atomic_exchange_pdata_impl:
      000032 E2               [24]  419 	movx	a, @r0
      000033 FB               [12]  420 	mov	r3, a
      000034 EA               [12]  421 	mov	a, r2
      000035 F2               [24]  422 	movx	@r0, a
      000036 80 2C            [24]  423 	sjmp	sdcc_atomic_exchange_exit
      000038 00               [12]  424 	nop
      000039 00               [12]  425 	nop
      00003A                        426 sdcc_atomic_exchange_xdata_impl:
      00003A E0               [24]  427 	movx	a, @dptr
      00003B FB               [12]  428 	mov	r3, a
      00003C EA               [12]  429 	mov	a, r2
      00003D F0               [24]  430 	movx	@dptr, a
      00003E 80 24            [24]  431 	sjmp	sdcc_atomic_exchange_exit
      000040                        432 sdcc_atomic_compare_exchange_idata_impl:
      000040 E6               [12]  433 	mov	a, @r0
      000041 B5 02 02         [24]  434 	cjne	a, ar2, .+#5
      000044 EB               [12]  435 	mov	a, r3
      000045 F6               [12]  436 	mov	@r0, a
      000046 22               [24]  437 	ret
      000047 00               [12]  438 	nop
      000048                        439 sdcc_atomic_compare_exchange_pdata_impl:
      000048 E2               [24]  440 	movx	a, @r0
      000049 B5 02 02         [24]  441 	cjne	a, ar2, .+#5
      00004C EB               [12]  442 	mov	a, r3
      00004D F2               [24]  443 	movx	@r0, a
      00004E 22               [24]  444 	ret
      00004F 00               [12]  445 	nop
      000050                        446 sdcc_atomic_compare_exchange_xdata_impl:
      000050 E0               [24]  447 	movx	a, @dptr
      000051 B5 02 02         [24]  448 	cjne	a, ar2, .+#5
      000054 EB               [12]  449 	mov	a, r3
      000055 F0               [24]  450 	movx	@dptr, a
      000056 22               [24]  451 	ret
      000057                        452 sdcc_atomic_exchange_rollback_end::
                                    453 
      000057                        454 sdcc_atomic_exchange_gptr_impl::
      000057 30 F6 E0         [24]  455 	jnb	b.6, sdcc_atomic_exchange_xdata_impl
      00005A A8 82            [24]  456 	mov	r0, dpl
      00005C 20 F5 D3         [24]  457 	jb	b.5, sdcc_atomic_exchange_pdata_impl
      00005F                        458 sdcc_atomic_exchange_idata_impl:
      00005F EA               [12]  459 	mov	a, r2
      000060 C6               [12]  460 	xch	a, @r0
      000061 F5 82            [12]  461 	mov	dpl, a
      000063 22               [24]  462 	ret
      000064                        463 sdcc_atomic_exchange_exit:
      000064 8B 82            [24]  464 	mov	dpl, r3
      000066 22               [24]  465 	ret
      000067                        466 sdcc_atomic_compare_exchange_gptr_impl::
      000067 30 F6 E6         [24]  467 	jnb	b.6, sdcc_atomic_compare_exchange_xdata_impl
      00006A A8 82            [24]  468 	mov	r0, dpl
      00006C 20 F5 D9         [24]  469 	jb	b.5, sdcc_atomic_compare_exchange_pdata_impl
      00006F 80 CF            [24]  470 	sjmp	sdcc_atomic_compare_exchange_idata_impl
                                    471 ;--------------------------------------------------------
                                    472 ; global & static initialisations
                                    473 ;--------------------------------------------------------
                                    474 	.area HOME    (CODE)
                                    475 	.area GSINIT  (CODE)
                                    476 	.area GSFINAL (CODE)
                                    477 	.area GSINIT  (CODE)
                                    478 	.globl __sdcc_gsinit_startup
                                    479 	.globl __sdcc_program_startup
                                    480 	.globl __start__stack
                                    481 	.globl __mcs51_genXINIT
                                    482 	.globl __mcs51_genXRAMCLEAR
                                    483 	.globl __mcs51_genRAMCLEAR
                                    484 ;	include/uvr_variable.h:10: volatile unsigned char __data __at (0x30) loop_counter = 0; //Store Loop Counters
      0000CD 75 30 00         [24]  485 	mov	_loop_counter,#0x00
                                    486 ;	include/uvr_variable.h:12: volatile unsigned char __data __at (0x31)  prog_counter = 0; //Store Program Counters
      0000D0 75 31 00         [24]  487 	mov	_prog_counter,#0x00
                                    488 ;	include/uvr_variable.h:16: volatile unsigned char __data __at (0x34)  system_tick = 0; //Common System Time
      0000D3 75 34 00         [24]  489 	mov	_system_tick,#0x00
                                    490 ;	include/uvr_variable.h:17: volatile unsigned char __data __at (0x35) op1 = 0; //Operand Buffer
      0000D6 75 35 00         [24]  491 	mov	_op1,#0x00
                                    492 ;	include/uvr_variable.h:18: volatile unsigned char __data __at (0x36) op2 = 0; //perand Buffer
      0000D9 75 36 00         [24]  493 	mov	_op2,#0x00
                                    494 ;	include/uvr_variable.h:19: volatile unsigned char __data __at (0x37)  active_timer = 0; //To Calculate Timer Differences
      0000DC 75 37 00         [24]  495 	mov	_active_timer,#0x00
                                    496 ;	include/uvr_variable.h:21: volatile unsigned char __data __at (0x38) temp0 = 0;
      0000DF 75 38 00         [24]  497 	mov	_temp0,#0x00
                                    498 ;	include/uvr_variable.h:22: volatile unsigned char __data __at (0x39) temp1 = 0;
      0000E2 75 39 00         [24]  499 	mov	_temp1,#0x00
                                    500 ;	include/uvr_variable.h:23: volatile unsigned char __data __at (0x3A) temp2 = 0; //Temporary Variables
      0000E5 75 3A 00         [24]  501 	mov	_temp2,#0x00
                                    502 ;	include/uvr_variable.h:24: volatile unsigned char __data __at (0x3C) temp3 = 0;
      0000E8 75 3C 00         [24]  503 	mov	_temp3,#0x00
                                    504 ;	include/uvr_variable.h:27: volatile unsigned char __data __at (0x3D) instruction_buffer =0;
      0000EB 75 3D 00         [24]  505 	mov	_instruction_buffer,#0x00
                                    506 ;	include/uvr_variable.h:28: volatile unsigned char __data __at (0x3E) result_l = 0;
      0000EE 75 3E 00         [24]  507 	mov	_result_l,#0x00
                                    508 ;	include/uvr_variable.h:29: volatile unsigned char __data __at (0x3F) result_h = 0;
      0000F1 75 3F 00         [24]  509 	mov	_result_h,#0x00
                                    510 ;	include/uvr_variable.h:33: volatile unsigned char __data __at (0x40) prog_buffer[32] = {0};
      0000F4 75 40 00         [24]  511 	mov	_prog_buffer,#0x00
                                    512 	.area GSFINAL (CODE)
      0000F7 02 00 71         [24]  513 	ljmp	__sdcc_program_startup
                                    514 ;--------------------------------------------------------
                                    515 ; Home
                                    516 ;--------------------------------------------------------
                                    517 	.area HOME    (CODE)
                                    518 	.area HOME    (CODE)
      000071                        519 __sdcc_program_startup:
      000071 02 01 CE         [24]  520 	ljmp	_main
                                    521 ;	return from main will return to caller
                                    522 ;--------------------------------------------------------
                                    523 ; code
                                    524 ;--------------------------------------------------------
                                    525 	.area CSEG    (CODE)
                                    526 ;------------------------------------------------------------
                                    527 ;Allocation info for local variables in function 'init_sys'
                                    528 ;------------------------------------------------------------
                                    529 ;	src/main.c:6: void init_sys(void){
                                    530 ;	-----------------------------------------
                                    531 ;	 function init_sys
                                    532 ;	-----------------------------------------
      0000FA                        533 _init_sys:
                           000007   534 	ar7 = 0x07
                           000006   535 	ar6 = 0x06
                           000005   536 	ar5 = 0x05
                           000004   537 	ar4 = 0x04
                           000003   538 	ar3 = 0x03
                           000002   539 	ar2 = 0x02
                           000001   540 	ar1 = 0x01
                           000000   541 	ar0 = 0x00
                                    542 ;	src/main.c:7: EA = 1;
                                    543 ;	assignBit
      0000FA D2 AF            [12]  544 	setb	_EA
                                    545 ;	src/main.c:8: ES = 1;
                                    546 ;	assignBit
      0000FC D2 AC            [12]  547 	setb	_ES
                                    548 ;	src/main.c:9: ET2 = 1;
                                    549 ;	assignBit
      0000FE D2 AD            [12]  550 	setb	_ET2
                                    551 ;	src/main.c:10: is_recieved = 0;
                                    552 ;	assignBit
      000100 C2 00            [12]  553 	clr	_is_recieved
                                    554 ;	src/main.c:12: wr_pointer = &prog_buffer[0];
      000102 75 33 40         [24]  555 	mov	_wr_pointer,#_prog_buffer
                                    556 ;	src/main.c:13: rd_pointer = &prog_buffer[0];
      000105 75 32 40         [24]  557 	mov	_rd_pointer,#_prog_buffer
                                    558 ;	src/main.c:14: } 
      000108 22               [24]  559 	ret
                                    560 ;------------------------------------------------------------
                                    561 ;Allocation info for local variables in function 'init_timer'
                                    562 ;------------------------------------------------------------
                                    563 ;	src/main.c:16: void init_timer(void){
                                    564 ;	-----------------------------------------
                                    565 ;	 function init_timer
                                    566 ;	-----------------------------------------
      000109                        567 _init_timer:
                                    568 ;	src/main.c:18: T2CON = 0x00;
      000109 75 C8 00         [24]  569 	mov	_T2CON,#0x00
                                    570 ;	src/main.c:19: RCAP2H = timer_h;
      00010C 75 CB 4C         [24]  571 	mov	_RCAP2H,#0x4c
                                    572 ;	src/main.c:20: RCAP2L = timer_l;
      00010F 75 CA 00         [24]  573 	mov	_RCAP2L,#0x00
                                    574 ;	src/main.c:21: TH2 = timer_h;
      000112 75 CD 4C         [24]  575 	mov	_TH2,#0x4c
                                    576 ;	src/main.c:22: TL2 = timer_l;
      000115 75 CC 00         [24]  577 	mov	_TL2,#0x00
                                    578 ;	src/main.c:23: TR2 = 1;
                                    579 ;	assignBit
      000118 D2 CA            [12]  580 	setb	_TR2
                                    581 ;	src/main.c:26: }
      00011A 22               [24]  582 	ret
                                    583 ;------------------------------------------------------------
                                    584 ;Allocation info for local variables in function 'init_serial'
                                    585 ;------------------------------------------------------------
                                    586 ;	src/main.c:29: void init_serial(void){
                                    587 ;	-----------------------------------------
                                    588 ;	 function init_serial
                                    589 ;	-----------------------------------------
      00011B                        590 _init_serial:
                                    591 ;	src/main.c:31: TMOD = 0x20;				//Set TMOD to Use Timer 1 in 8 Bit Auto Reload
      00011B 75 89 20         [24]  592 	mov	_TMOD,#0x20
                                    593 ;	src/main.c:32: TH1 = serial_baud_timer;	//Set Reload value
      00011E 75 8D FD         [24]  594 	mov	_TH1,#0xfd
                                    595 ;	src/main.c:33: TL1 = serial_baud_timer;	//Set Initial Value
      000121 75 8B FD         [24]  596 	mov	_TL1,#0xfd
                                    597 ;	src/main.c:34: TR1 = 1;					//Start Timer 1
                                    598 ;	assignBit
      000124 D2 8E            [12]  599 	setb	_TR1
                                    600 ;	src/main.c:35: SCON = 0x50;				//Serial Mode 1 , 8 Bit UART
      000126 75 98 50         [24]  601 	mov	_SCON,#0x50
                                    602 ;	src/main.c:36: TI = 0;
                                    603 ;	assignBit
      000129 C2 99            [12]  604 	clr	_TI
                                    605 ;	src/main.c:37: }
      00012B 22               [24]  606 	ret
                                    607 ;------------------------------------------------------------
                                    608 ;Allocation info for local variables in function 'uart_send'
                                    609 ;------------------------------------------------------------
                                    610 ;dat           Allocated to registers 
                                    611 ;------------------------------------------------------------
                                    612 ;	src/main.c:40: void uart_send(char dat){
                                    613 ;	-----------------------------------------
                                    614 ;	 function uart_send
                                    615 ;	-----------------------------------------
      00012C                        616 _uart_send:
      00012C 85 82 99         [24]  617 	mov	_SBUF,dpl
                                    618 ;	src/main.c:42: while(!TI);
      00012F                        619 00101$:
                                    620 ;	src/main.c:43: TI = 0;
                                    621 ;	assignBit
      00012F 10 99 02         [24]  622 	jbc	_TI,00118$
      000132 80 FB            [24]  623 	sjmp	00101$
      000134                        624 00118$:
                                    625 ;	src/main.c:44: }
      000134 22               [24]  626 	ret
                                    627 ;------------------------------------------------------------
                                    628 ;Allocation info for local variables in function 'echo'
                                    629 ;------------------------------------------------------------
                                    630 ;	src/main.c:48: void echo(void){
                                    631 ;	-----------------------------------------
                                    632 ;	 function echo
                                    633 ;	-----------------------------------------
      000135                        634 _echo:
                                    635 ;	src/main.c:49: while(!is_recieved);
      000135                        636 00101$:
      000135 30 00 FD         [24]  637 	jnb	_is_recieved,00101$
                                    638 ;	src/main.c:50: switch(*rd_pointer){
      000138 A9 32            [24]  639 	mov	r1,_rd_pointer
      00013A 87 07            [24]  640 	mov	ar7,@r1
      00013C BF 0D 0C         [24]  641 	cjne	r7,#0x0d,00105$
                                    642 ;	src/main.c:52: uart_send('\n');uart_send('\r');
      00013F 75 82 0A         [24]  643 	mov	dpl, #0x0a
      000142 12 01 2C         [24]  644 	lcall	_uart_send
      000145 75 82 0D         [24]  645 	mov	dpl, #0x0d
      000148 12 01 2C         [24]  646 	lcall	_uart_send
                                    647 ;	src/main.c:53: default:
      00014B                        648 00105$:
                                    649 ;	src/main.c:54: uart_send(*rd_pointer);
      00014B A9 32            [24]  650 	mov	r1,_rd_pointer
      00014D 87 82            [24]  651 	mov	dpl,@r1
      00014F 12 01 2C         [24]  652 	lcall	_uart_send
                                    653 ;	src/main.c:56: rd_pointer++;
      000152 05 32            [12]  654 	inc	_rd_pointer
                                    655 ;	src/main.c:57: is_recieved = 0;
                                    656 ;	assignBit
      000154 C2 00            [12]  657 	clr	_is_recieved
                                    658 ;	src/main.c:59: }
      000156 22               [24]  659 	ret
                                    660 ;------------------------------------------------------------
                                    661 ;Allocation info for local variables in function 'delay_ms_500'
                                    662 ;------------------------------------------------------------
                                    663 ;	src/main.c:65: void delay_ms_500(void){
                                    664 ;	-----------------------------------------
                                    665 ;	 function delay_ms_500
                                    666 ;	-----------------------------------------
      000157                        667 _delay_ms_500:
                                    668 ;	src/main.c:68: }
      000157 22               [24]  669 	ret
                                    670 ;------------------------------------------------------------
                                    671 ;Allocation info for local variables in function 'ascii_to_hex'
                                    672 ;------------------------------------------------------------
                                    673 ;	src/main.c:73: void ascii_to_hex(void){
                                    674 ;	-----------------------------------------
                                    675 ;	 function ascii_to_hex
                                    676 ;	-----------------------------------------
      000158                        677 _ascii_to_hex:
                                    678 ;	src/main.c:76: }
      000158 22               [24]  679 	ret
                                    680 ;------------------------------------------------------------
                                    681 ;Allocation info for local variables in function 'hex_to_ascii'
                                    682 ;------------------------------------------------------------
                                    683 ;	src/main.c:82: void hex_to_ascii(void){
                                    684 ;	-----------------------------------------
                                    685 ;	 function hex_to_ascii
                                    686 ;	-----------------------------------------
      000159                        687 _hex_to_ascii:
                                    688 ;	src/main.c:85: }
      000159 22               [24]  689 	ret
                                    690 ;------------------------------------------------------------
                                    691 ;Allocation info for local variables in function 'print_boot_message'
                                    692 ;------------------------------------------------------------
                                    693 ;	src/main.c:90: void print_boot_message(void){
                                    694 ;	-----------------------------------------
                                    695 ;	 function print_boot_message
                                    696 ;	-----------------------------------------
      00015A                        697 _print_boot_message:
                                    698 ;	src/main.c:91: temp0 = 0;
      00015A 75 38 00         [24]  699 	mov	_temp0,#0x00
                                    700 ;	src/main.c:92: while(temp0 != len_boot_message){
      00015D                        701 00101$:
      00015D 74 36            [12]  702 	mov	a,#0x36
      00015F B5 38 02         [24]  703 	cjne	a,_temp0,00118$
      000162 80 12            [24]  704 	sjmp	00103$
      000164                        705 00118$:
                                    706 ;	src/main.c:93: uart_send(boot_message[temp0]);
      000164 E5 38            [12]  707 	mov	a,_temp0
      000166 90 01 E9         [24]  708 	mov	dptr,#_boot_message
      000169 93               [24]  709 	movc	a,@a+dptr
      00016A F5 82            [12]  710 	mov	dpl,a
      00016C 12 01 2C         [24]  711 	lcall	_uart_send
                                    712 ;	src/main.c:94: temp0++;
      00016F E5 38            [12]  713 	mov	a,_temp0
      000171 04               [12]  714 	inc	a
      000172 F5 38            [12]  715 	mov	_temp0,a
      000174 80 E7            [24]  716 	sjmp	00101$
      000176                        717 00103$:
                                    718 ;	src/main.c:96: temp0 = 0;
      000176 75 38 00         [24]  719 	mov	_temp0,#0x00
                                    720 ;	src/main.c:97: }
      000179 22               [24]  721 	ret
                                    722 ;------------------------------------------------------------
                                    723 ;Allocation info for local variables in function 'print_ready_message'
                                    724 ;------------------------------------------------------------
                                    725 ;	src/main.c:99: void print_ready_message(void){
                                    726 ;	-----------------------------------------
                                    727 ;	 function print_ready_message
                                    728 ;	-----------------------------------------
      00017A                        729 _print_ready_message:
                                    730 ;	src/main.c:100: temp0 = 0;
      00017A 75 38 00         [24]  731 	mov	_temp0,#0x00
                                    732 ;	src/main.c:101: while(temp0 != len_ready_message){
      00017D                        733 00101$:
      00017D 74 07            [12]  734 	mov	a,#0x07
      00017F B5 38 02         [24]  735 	cjne	a,_temp0,00118$
      000182 80 12            [24]  736 	sjmp	00103$
      000184                        737 00118$:
                                    738 ;	src/main.c:102: uart_send(ready_msg[temp0]);
      000184 E5 38            [12]  739 	mov	a,_temp0
      000186 90 02 1F         [24]  740 	mov	dptr,#_ready_msg
      000189 93               [24]  741 	movc	a,@a+dptr
      00018A F5 82            [12]  742 	mov	dpl,a
      00018C 12 01 2C         [24]  743 	lcall	_uart_send
                                    744 ;	src/main.c:103: temp0++;
      00018F E5 38            [12]  745 	mov	a,_temp0
      000191 04               [12]  746 	inc	a
      000192 F5 38            [12]  747 	mov	_temp0,a
      000194 80 E7            [24]  748 	sjmp	00101$
      000196                        749 00103$:
                                    750 ;	src/main.c:105: temp0 = 0;
      000196 75 38 00         [24]  751 	mov	_temp0,#0x00
                                    752 ;	src/main.c:106: }
      000199 22               [24]  753 	ret
                                    754 ;------------------------------------------------------------
                                    755 ;Allocation info for local variables in function 'clear_terminal'
                                    756 ;------------------------------------------------------------
                                    757 ;	src/main.c:108: void clear_terminal(void){
                                    758 ;	-----------------------------------------
                                    759 ;	 function clear_terminal
                                    760 ;	-----------------------------------------
      00019A                        761 _clear_terminal:
                                    762 ;	src/main.c:111: uart_send(0x1B);uart_send(0x63); //Full Reset Terminal
      00019A 75 82 1B         [24]  763 	mov	dpl, #0x1b
      00019D 12 01 2C         [24]  764 	lcall	_uart_send
      0001A0 75 82 63         [24]  765 	mov	dpl, #0x63
                                    766 ;	src/main.c:112: }
      0001A3 02 01 2C         [24]  767 	ljmp	_uart_send
                                    768 ;------------------------------------------------------------
                                    769 ;Allocation info for local variables in function 'Serial_ISR'
                                    770 ;------------------------------------------------------------
                                    771 ;	src/main.c:116: void Serial_ISR(void) __interrupt(4)
                                    772 ;	-----------------------------------------
                                    773 ;	 function Serial_ISR
                                    774 ;	-----------------------------------------
      0001A6                        775 _Serial_ISR:
      0001A6 C0 E0            [24]  776 	push	acc
      0001A8 C0 00            [24]  777 	push	ar0
      0001AA C0 D0            [24]  778 	push	psw
      0001AC 75 D0 00         [24]  779 	mov	psw,#0x00
                                    780 ;	src/main.c:118: if(RI){
      0001AF 30 98 0B         [24]  781 	jnb	_RI,00103$
                                    782 ;	src/main.c:119: *wr_pointer = SBUF;
      0001B2 E5 33            [12]  783 	mov	a,_wr_pointer
      0001B4 F8               [12]  784 	mov	r0,a
      0001B5 A6 99            [24]  785 	mov	@r0,_SBUF
                                    786 ;	src/main.c:120: is_recieved = 1;
                                    787 ;	assignBit
      0001B7 D2 00            [12]  788 	setb	_is_recieved
                                    789 ;	src/main.c:121: wr_pointer++;
      0001B9 05 33            [12]  790 	inc	_wr_pointer
                                    791 ;	src/main.c:122: RI = 0;
                                    792 ;	assignBit
      0001BB C2 98            [12]  793 	clr	_RI
      0001BD                        794 00103$:
                                    795 ;	src/main.c:124: }
      0001BD D0 D0            [24]  796 	pop	psw
      0001BF D0 00            [24]  797 	pop	ar0
      0001C1 D0 E0            [24]  798 	pop	acc
      0001C3 32               [24]  799 	reti
                                    800 ;	eliminated unneeded push/pop ar1
                                    801 ;	eliminated unneeded push/pop dpl
                                    802 ;	eliminated unneeded push/pop dph
                                    803 ;	eliminated unneeded push/pop b
                                    804 ;------------------------------------------------------------
                                    805 ;Allocation info for local variables in function 'Timer2_ISR'
                                    806 ;------------------------------------------------------------
                                    807 ;	src/main.c:127: void Timer2_ISR(void) __interrupt(5)
                                    808 ;	-----------------------------------------
                                    809 ;	 function Timer2_ISR
                                    810 ;	-----------------------------------------
      0001C4                        811 _Timer2_ISR:
      0001C4 C0 E0            [24]  812 	push	acc
                                    813 ;	src/main.c:129: system_tick++;
      0001C6 E5 34            [12]  814 	mov	a,_system_tick
      0001C8 04               [12]  815 	inc	a
      0001C9 F5 34            [12]  816 	mov	_system_tick,a
                                    817 ;	src/main.c:130: }
      0001CB D0 E0            [24]  818 	pop	acc
      0001CD 32               [24]  819 	reti
                                    820 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    821 ;	eliminated unneeded push/pop not_psw
                                    822 ;	eliminated unneeded push/pop dpl
                                    823 ;	eliminated unneeded push/pop dph
                                    824 ;	eliminated unneeded push/pop b
                                    825 ;------------------------------------------------------------
                                    826 ;Allocation info for local variables in function 'main'
                                    827 ;------------------------------------------------------------
                                    828 ;	src/main.c:133: void main(void){
                                    829 ;	-----------------------------------------
                                    830 ;	 function main
                                    831 ;	-----------------------------------------
      0001CE                        832 _main:
                                    833 ;	src/main.c:134: SP = hw_stack; 		//initiaslze Stack Pointer;
      0001CE 75 81 60         [24]  834 	mov	_SP,#0x60
                                    835 ;	src/main.c:135: init_sys();
      0001D1 12 00 FA         [24]  836 	lcall	_init_sys
                                    837 ;	src/main.c:136: init_serial();
      0001D4 12 01 1B         [24]  838 	lcall	_init_serial
                                    839 ;	src/main.c:140: clear_terminal();
      0001D7 12 01 9A         [24]  840 	lcall	_clear_terminal
                                    841 ;	src/main.c:141: print_boot_message();
      0001DA 12 01 5A         [24]  842 	lcall	_print_boot_message
                                    843 ;	src/main.c:142: print_ready_message();
      0001DD 12 01 7A         [24]  844 	lcall	_print_ready_message
                                    845 ;	src/main.c:144: while(1){
      0001E0                        846 00102$:
                                    847 ;	src/main.c:145: echo();
      0001E0 12 01 35         [24]  848 	lcall	_echo
                                    849 ;	src/main.c:147: }
      0001E3 80 FB            [24]  850 	sjmp	00102$
                                    851 	.area CSEG    (CODE)
                                    852 	.area CONST   (CODE)
                                    853 	.area CONST   (CODE)
      0001E9                        854 _boot_message:
      0001E9 4D                     855 	.db #0x4d	; 77	'M'
      0001EA 69                     856 	.db #0x69	; 105	'i'
      0001EB 63                     857 	.db #0x63	; 99	'c'
      0001EC 72                     858 	.db #0x72	; 114	'r'
      0001ED 6F                     859 	.db #0x6f	; 111	'o'
      0001EE 20                     860 	.db #0x20	; 32
      0001EF 56                     861 	.db #0x56	; 86	'V'
      0001F0 69                     862 	.db #0x69	; 105	'i'
      0001F1 72                     863 	.db #0x72	; 114	'r'
      0001F2 74                     864 	.db #0x74	; 116	't'
      0001F3 75                     865 	.db #0x75	; 117	'u'
      0001F4 61                     866 	.db #0x61	; 97	'a'
      0001F5 6C                     867 	.db #0x6c	; 108	'l'
      0001F6 2D                     868 	.db #0x2d	; 45
      0001F7 52                     869 	.db #0x52	; 82	'R'
      0001F8 20                     870 	.db #0x20	; 32
      0001F9 43                     871 	.db #0x43	; 67	'C'
      0001FA 6F                     872 	.db #0x6f	; 111	'o'
      0001FB 70                     873 	.db #0x70	; 112	'p'
      0001FC 79                     874 	.db #0x79	; 121	'y'
      0001FD 72                     875 	.db #0x72	; 114	'r'
      0001FE 69                     876 	.db #0x69	; 105	'i'
      0001FF 67                     877 	.db #0x67	; 103	'g'
      000200 68                     878 	.db #0x68	; 104	'h'
      000201 74                     879 	.db #0x74	; 116	't'
      000202 20                     880 	.db #0x20	; 32
      000203 32                     881 	.db #0x32	; 50	'2'
      000204 30                     882 	.db #0x30	; 48	'0'
      000205 32                     883 	.db #0x32	; 50	'2'
      000206 36                     884 	.db #0x36	; 54	'6'
      000207 20                     885 	.db #0x20	; 32
      000208 42                     886 	.db #0x42	; 66	'B'
      000209 61                     887 	.db #0x61	; 97	'a'
      00020A 69                     888 	.db #0x69	; 105	'i'
      00020B 62                     889 	.db #0x62	; 98	'b'
      00020C 68                     890 	.db #0x68	; 104	'h'
      00020D 61                     891 	.db #0x61	; 97	'a'
      00020E 76                     892 	.db #0x76	; 118	'v'
      00020F 20                     893 	.db #0x20	; 32
      000210 42                     894 	.db #0x42	; 66	'B'
      000211 68                     895 	.db #0x68	; 104	'h'
      000212 61                     896 	.db #0x61	; 97	'a'
      000213 74                     897 	.db #0x74	; 116	't'
      000214 74                     898 	.db #0x74	; 116	't'
      000215 61                     899 	.db #0x61	; 97	'a'
      000216 63                     900 	.db #0x63	; 99	'c'
      000217 68                     901 	.db #0x68	; 104	'h'
      000218 72                     902 	.db #0x72	; 114	'r'
      000219 79                     903 	.db #0x79	; 121	'y'
      00021A 61                     904 	.db #0x61	; 97	'a'
      00021B 0D                     905 	.db #0x0d	; 13
      00021C 0A                     906 	.db #0x0a	; 10
      00021D 00                     907 	.db 0x00
      00021E 00                     908 	.db 0x00
                                    909 	.area CSEG    (CODE)
                                    910 	.area CONST   (CODE)
      00021F                        911 _ready_msg:
      00021F 52                     912 	.db #0x52	; 82	'R'
      000220 45                     913 	.db #0x45	; 69	'E'
      000221 41                     914 	.db #0x41	; 65	'A'
      000222 44                     915 	.db #0x44	; 68	'D'
      000223 59                     916 	.db #0x59	; 89	'Y'
      000224 0D                     917 	.db #0x0d	; 13
      000225 0A                     918 	.db #0x0a	; 10
                                    919 	.area CSEG    (CODE)
                                    920 	.area XINIT   (CODE)
                                    921 	.area CABS    (ABS,CODE)
