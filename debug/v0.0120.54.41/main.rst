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
      000023 02 01 93         [24]  410 	ljmp	_Serial_ISR
      000026                        411 	.ds	5
      00002B 02 01 B1         [24]  412 	ljmp	_Timer2_ISR
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
      000071 02 01 BB         [24]  520 	ljmp	_main
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
                                    638 ;	src/main.c:50: uart_send(*rd_pointer);
      000138 A9 32            [24]  639 	mov	r1,_rd_pointer
      00013A 87 82            [24]  640 	mov	dpl,@r1
      00013C 12 01 2C         [24]  641 	lcall	_uart_send
                                    642 ;	src/main.c:51: rd_pointer++;
      00013F 05 32            [12]  643 	inc	_rd_pointer
                                    644 ;	src/main.c:52: is_recieved = 0;
                                    645 ;	assignBit
      000141 C2 00            [12]  646 	clr	_is_recieved
                                    647 ;	src/main.c:54: }
      000143 22               [24]  648 	ret
                                    649 ;------------------------------------------------------------
                                    650 ;Allocation info for local variables in function 'delay_ms_500'
                                    651 ;------------------------------------------------------------
                                    652 ;	src/main.c:60: void delay_ms_500(void){
                                    653 ;	-----------------------------------------
                                    654 ;	 function delay_ms_500
                                    655 ;	-----------------------------------------
      000144                        656 _delay_ms_500:
                                    657 ;	src/main.c:63: }
      000144 22               [24]  658 	ret
                                    659 ;------------------------------------------------------------
                                    660 ;Allocation info for local variables in function 'ascii_to_hex'
                                    661 ;------------------------------------------------------------
                                    662 ;	src/main.c:68: void ascii_to_hex(void){
                                    663 ;	-----------------------------------------
                                    664 ;	 function ascii_to_hex
                                    665 ;	-----------------------------------------
      000145                        666 _ascii_to_hex:
                                    667 ;	src/main.c:71: }
      000145 22               [24]  668 	ret
                                    669 ;------------------------------------------------------------
                                    670 ;Allocation info for local variables in function 'hex_to_ascii'
                                    671 ;------------------------------------------------------------
                                    672 ;	src/main.c:77: void hex_to_ascii(void){
                                    673 ;	-----------------------------------------
                                    674 ;	 function hex_to_ascii
                                    675 ;	-----------------------------------------
      000146                        676 _hex_to_ascii:
                                    677 ;	src/main.c:80: }
      000146 22               [24]  678 	ret
                                    679 ;------------------------------------------------------------
                                    680 ;Allocation info for local variables in function 'print_boot_message'
                                    681 ;------------------------------------------------------------
                                    682 ;	src/main.c:85: void print_boot_message(void){
                                    683 ;	-----------------------------------------
                                    684 ;	 function print_boot_message
                                    685 ;	-----------------------------------------
      000147                        686 _print_boot_message:
                                    687 ;	src/main.c:86: temp0 = 0;
      000147 75 38 00         [24]  688 	mov	_temp0,#0x00
                                    689 ;	src/main.c:87: while(temp0 != len_boot_message){
      00014A                        690 00101$:
      00014A 74 36            [12]  691 	mov	a,#0x36
      00014C B5 38 02         [24]  692 	cjne	a,_temp0,00118$
      00014F 80 12            [24]  693 	sjmp	00103$
      000151                        694 00118$:
                                    695 ;	src/main.c:88: uart_send(boot_message[temp0]);
      000151 E5 38            [12]  696 	mov	a,_temp0
      000153 90 01 D6         [24]  697 	mov	dptr,#_boot_message
      000156 93               [24]  698 	movc	a,@a+dptr
      000157 F5 82            [12]  699 	mov	dpl,a
      000159 12 01 2C         [24]  700 	lcall	_uart_send
                                    701 ;	src/main.c:89: temp0++;
      00015C E5 38            [12]  702 	mov	a,_temp0
      00015E 04               [12]  703 	inc	a
      00015F F5 38            [12]  704 	mov	_temp0,a
      000161 80 E7            [24]  705 	sjmp	00101$
      000163                        706 00103$:
                                    707 ;	src/main.c:91: temp0 = 0;
      000163 75 38 00         [24]  708 	mov	_temp0,#0x00
                                    709 ;	src/main.c:92: }
      000166 22               [24]  710 	ret
                                    711 ;------------------------------------------------------------
                                    712 ;Allocation info for local variables in function 'print_ready_message'
                                    713 ;------------------------------------------------------------
                                    714 ;	src/main.c:94: void print_ready_message(void){
                                    715 ;	-----------------------------------------
                                    716 ;	 function print_ready_message
                                    717 ;	-----------------------------------------
      000167                        718 _print_ready_message:
                                    719 ;	src/main.c:95: temp0 = 0;
      000167 75 38 00         [24]  720 	mov	_temp0,#0x00
                                    721 ;	src/main.c:96: while(temp0 != len_ready_message){
      00016A                        722 00101$:
      00016A 74 07            [12]  723 	mov	a,#0x07
      00016C B5 38 02         [24]  724 	cjne	a,_temp0,00118$
      00016F 80 12            [24]  725 	sjmp	00103$
      000171                        726 00118$:
                                    727 ;	src/main.c:97: uart_send(ready_msg[temp0]);
      000171 E5 38            [12]  728 	mov	a,_temp0
      000173 90 02 0C         [24]  729 	mov	dptr,#_ready_msg
      000176 93               [24]  730 	movc	a,@a+dptr
      000177 F5 82            [12]  731 	mov	dpl,a
      000179 12 01 2C         [24]  732 	lcall	_uart_send
                                    733 ;	src/main.c:98: temp0++;
      00017C E5 38            [12]  734 	mov	a,_temp0
      00017E 04               [12]  735 	inc	a
      00017F F5 38            [12]  736 	mov	_temp0,a
      000181 80 E7            [24]  737 	sjmp	00101$
      000183                        738 00103$:
                                    739 ;	src/main.c:100: temp0 = 0;
      000183 75 38 00         [24]  740 	mov	_temp0,#0x00
                                    741 ;	src/main.c:101: }
      000186 22               [24]  742 	ret
                                    743 ;------------------------------------------------------------
                                    744 ;Allocation info for local variables in function 'clear_terminal'
                                    745 ;------------------------------------------------------------
                                    746 ;	src/main.c:103: void clear_terminal(void){
                                    747 ;	-----------------------------------------
                                    748 ;	 function clear_terminal
                                    749 ;	-----------------------------------------
      000187                        750 _clear_terminal:
                                    751 ;	src/main.c:106: uart_send(0x1B);uart_send(0x63); //Full Reset Terminal
      000187 75 82 1B         [24]  752 	mov	dpl, #0x1b
      00018A 12 01 2C         [24]  753 	lcall	_uart_send
      00018D 75 82 63         [24]  754 	mov	dpl, #0x63
                                    755 ;	src/main.c:107: }
      000190 02 01 2C         [24]  756 	ljmp	_uart_send
                                    757 ;------------------------------------------------------------
                                    758 ;Allocation info for local variables in function 'Serial_ISR'
                                    759 ;------------------------------------------------------------
                                    760 ;	src/main.c:111: void Serial_ISR(void) __interrupt(4)
                                    761 ;	-----------------------------------------
                                    762 ;	 function Serial_ISR
                                    763 ;	-----------------------------------------
      000193                        764 _Serial_ISR:
      000193 C0 E0            [24]  765 	push	acc
      000195 C0 00            [24]  766 	push	ar0
      000197 C0 D0            [24]  767 	push	psw
      000199 75 D0 00         [24]  768 	mov	psw,#0x00
                                    769 ;	src/main.c:113: if(RI){
      00019C 30 98 0B         [24]  770 	jnb	_RI,00103$
                                    771 ;	src/main.c:114: *wr_pointer = SBUF;
      00019F E5 33            [12]  772 	mov	a,_wr_pointer
      0001A1 F8               [12]  773 	mov	r0,a
      0001A2 A6 99            [24]  774 	mov	@r0,_SBUF
                                    775 ;	src/main.c:115: is_recieved = 1;
                                    776 ;	assignBit
      0001A4 D2 00            [12]  777 	setb	_is_recieved
                                    778 ;	src/main.c:116: wr_pointer++;
      0001A6 05 33            [12]  779 	inc	_wr_pointer
                                    780 ;	src/main.c:117: RI = 0;
                                    781 ;	assignBit
      0001A8 C2 98            [12]  782 	clr	_RI
      0001AA                        783 00103$:
                                    784 ;	src/main.c:119: }
      0001AA D0 D0            [24]  785 	pop	psw
      0001AC D0 00            [24]  786 	pop	ar0
      0001AE D0 E0            [24]  787 	pop	acc
      0001B0 32               [24]  788 	reti
                                    789 ;	eliminated unneeded push/pop ar1
                                    790 ;	eliminated unneeded push/pop dpl
                                    791 ;	eliminated unneeded push/pop dph
                                    792 ;	eliminated unneeded push/pop b
                                    793 ;------------------------------------------------------------
                                    794 ;Allocation info for local variables in function 'Timer2_ISR'
                                    795 ;------------------------------------------------------------
                                    796 ;	src/main.c:122: void Timer2_ISR(void) __interrupt(5)
                                    797 ;	-----------------------------------------
                                    798 ;	 function Timer2_ISR
                                    799 ;	-----------------------------------------
      0001B1                        800 _Timer2_ISR:
      0001B1 C0 E0            [24]  801 	push	acc
                                    802 ;	src/main.c:124: system_tick++;
      0001B3 E5 34            [12]  803 	mov	a,_system_tick
      0001B5 04               [12]  804 	inc	a
      0001B6 F5 34            [12]  805 	mov	_system_tick,a
                                    806 ;	src/main.c:125: }
      0001B8 D0 E0            [24]  807 	pop	acc
      0001BA 32               [24]  808 	reti
                                    809 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    810 ;	eliminated unneeded push/pop not_psw
                                    811 ;	eliminated unneeded push/pop dpl
                                    812 ;	eliminated unneeded push/pop dph
                                    813 ;	eliminated unneeded push/pop b
                                    814 ;------------------------------------------------------------
                                    815 ;Allocation info for local variables in function 'main'
                                    816 ;------------------------------------------------------------
                                    817 ;	src/main.c:128: void main(void){
                                    818 ;	-----------------------------------------
                                    819 ;	 function main
                                    820 ;	-----------------------------------------
      0001BB                        821 _main:
                                    822 ;	src/main.c:129: SP = hw_stack; 		//initiaslze Stack Pointer;
      0001BB 75 81 60         [24]  823 	mov	_SP,#0x60
                                    824 ;	src/main.c:130: init_sys();
      0001BE 12 00 FA         [24]  825 	lcall	_init_sys
                                    826 ;	src/main.c:131: init_serial();
      0001C1 12 01 1B         [24]  827 	lcall	_init_serial
                                    828 ;	src/main.c:135: clear_terminal();
      0001C4 12 01 87         [24]  829 	lcall	_clear_terminal
                                    830 ;	src/main.c:136: print_boot_message();
      0001C7 12 01 47         [24]  831 	lcall	_print_boot_message
                                    832 ;	src/main.c:137: print_ready_message();
      0001CA 12 01 67         [24]  833 	lcall	_print_ready_message
                                    834 ;	src/main.c:139: while(1){
      0001CD                        835 00102$:
                                    836 ;	src/main.c:140: echo();
      0001CD 12 01 35         [24]  837 	lcall	_echo
                                    838 ;	src/main.c:142: }
      0001D0 80 FB            [24]  839 	sjmp	00102$
                                    840 	.area CSEG    (CODE)
                                    841 	.area CONST   (CODE)
                                    842 	.area CONST   (CODE)
      0001D6                        843 _boot_message:
      0001D6 4D                     844 	.db #0x4d	; 77	'M'
      0001D7 69                     845 	.db #0x69	; 105	'i'
      0001D8 63                     846 	.db #0x63	; 99	'c'
      0001D9 72                     847 	.db #0x72	; 114	'r'
      0001DA 6F                     848 	.db #0x6f	; 111	'o'
      0001DB 20                     849 	.db #0x20	; 32
      0001DC 56                     850 	.db #0x56	; 86	'V'
      0001DD 69                     851 	.db #0x69	; 105	'i'
      0001DE 72                     852 	.db #0x72	; 114	'r'
      0001DF 74                     853 	.db #0x74	; 116	't'
      0001E0 75                     854 	.db #0x75	; 117	'u'
      0001E1 61                     855 	.db #0x61	; 97	'a'
      0001E2 6C                     856 	.db #0x6c	; 108	'l'
      0001E3 2D                     857 	.db #0x2d	; 45
      0001E4 52                     858 	.db #0x52	; 82	'R'
      0001E5 20                     859 	.db #0x20	; 32
      0001E6 43                     860 	.db #0x43	; 67	'C'
      0001E7 6F                     861 	.db #0x6f	; 111	'o'
      0001E8 70                     862 	.db #0x70	; 112	'p'
      0001E9 79                     863 	.db #0x79	; 121	'y'
      0001EA 72                     864 	.db #0x72	; 114	'r'
      0001EB 69                     865 	.db #0x69	; 105	'i'
      0001EC 67                     866 	.db #0x67	; 103	'g'
      0001ED 68                     867 	.db #0x68	; 104	'h'
      0001EE 74                     868 	.db #0x74	; 116	't'
      0001EF 20                     869 	.db #0x20	; 32
      0001F0 32                     870 	.db #0x32	; 50	'2'
      0001F1 30                     871 	.db #0x30	; 48	'0'
      0001F2 32                     872 	.db #0x32	; 50	'2'
      0001F3 36                     873 	.db #0x36	; 54	'6'
      0001F4 20                     874 	.db #0x20	; 32
      0001F5 42                     875 	.db #0x42	; 66	'B'
      0001F6 61                     876 	.db #0x61	; 97	'a'
      0001F7 69                     877 	.db #0x69	; 105	'i'
      0001F8 62                     878 	.db #0x62	; 98	'b'
      0001F9 68                     879 	.db #0x68	; 104	'h'
      0001FA 61                     880 	.db #0x61	; 97	'a'
      0001FB 76                     881 	.db #0x76	; 118	'v'
      0001FC 20                     882 	.db #0x20	; 32
      0001FD 42                     883 	.db #0x42	; 66	'B'
      0001FE 68                     884 	.db #0x68	; 104	'h'
      0001FF 61                     885 	.db #0x61	; 97	'a'
      000200 74                     886 	.db #0x74	; 116	't'
      000201 74                     887 	.db #0x74	; 116	't'
      000202 61                     888 	.db #0x61	; 97	'a'
      000203 63                     889 	.db #0x63	; 99	'c'
      000204 68                     890 	.db #0x68	; 104	'h'
      000205 72                     891 	.db #0x72	; 114	'r'
      000206 79                     892 	.db #0x79	; 121	'y'
      000207 61                     893 	.db #0x61	; 97	'a'
      000208 0D                     894 	.db #0x0d	; 13
      000209 0A                     895 	.db #0x0a	; 10
      00020A 00                     896 	.db 0x00
      00020B 00                     897 	.db 0x00
                                    898 	.area CSEG    (CODE)
                                    899 	.area CONST   (CODE)
      00020C                        900 _ready_msg:
      00020C 52                     901 	.db #0x52	; 82	'R'
      00020D 45                     902 	.db #0x45	; 69	'E'
      00020E 41                     903 	.db #0x41	; 65	'A'
      00020F 44                     904 	.db #0x44	; 68	'D'
      000210 59                     905 	.db #0x59	; 89	'Y'
      000211 0D                     906 	.db #0x0d	; 13
      000212 0A                     907 	.db #0x0a	; 10
                                    908 	.area CSEG    (CODE)
                                    909 	.area XINIT   (CODE)
                                    910 	.area CABS    (ABS,CODE)
