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
                                     17 	.globl _echo
                                     18 	.globl _uart_send
                                     19 	.globl _init_serial
                                     20 	.globl _init_timer
                                     21 	.globl _init_sys
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
                                    142 	.globl _wr_pointer
                                    143 	.globl _rd_pointer
                                    144 	.globl _is_recieved
                                    145 	.globl _prog_buffer
                                    146 	.globl _result_h
                                    147 	.globl _result_l
                                    148 	.globl _instruction_buffer
                                    149 	.globl _temp3
                                    150 	.globl _temp2
                                    151 	.globl _temp1
                                    152 	.globl _temp0
                                    153 	.globl _active_timer
                                    154 	.globl _op2
                                    155 	.globl _op1
                                    156 	.globl _system_tick
                                    157 	.globl _prog_counter
                                    158 	.globl _loop_counter
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
                                    301 ;--------------------------------------------------------
                                    302 ; overlayable items in internal ram
                                    303 ;--------------------------------------------------------
                                    304 	.area	OSEG    (OVR,DATA)
                                    305 ;--------------------------------------------------------
                                    306 ; Stack segment in internal ram
                                    307 ;--------------------------------------------------------
                                    308 	.area SSEG
      000060                        309 __start__stack:
      000060                        310 	.ds	1
                                    311 
                                    312 ;--------------------------------------------------------
                                    313 ; indirectly addressable internal ram data
                                    314 ;--------------------------------------------------------
                                    315 	.area ISEG    (DATA)
                                    316 ;--------------------------------------------------------
                                    317 ; absolute internal ram data
                                    318 ;--------------------------------------------------------
                                    319 	.area IABS    (ABS,DATA)
      000030                        320 	.org 0x0030
      000030                        321 _loop_counter::
      000030                        322 	.ds 1
      000031                        323 	.org 0x0031
      000031                        324 _prog_counter::
      000031                        325 	.ds 1
      000034                        326 	.org 0x0034
      000034                        327 _system_tick::
      000034                        328 	.ds 1
      000035                        329 	.org 0x0035
      000035                        330 _op1::
      000035                        331 	.ds 1
      000036                        332 	.org 0x0036
      000036                        333 _op2::
      000036                        334 	.ds 1
      000037                        335 	.org 0x0037
      000037                        336 _active_timer::
      000037                        337 	.ds 1
      000038                        338 	.org 0x0038
      000038                        339 _temp0::
      000038                        340 	.ds 1
      000039                        341 	.org 0x0039
      000039                        342 _temp1::
      000039                        343 	.ds 1
      00003A                        344 	.org 0x003A
      00003A                        345 _temp2::
      00003A                        346 	.ds 1
      00003C                        347 	.org 0x003C
      00003C                        348 _temp3::
      00003C                        349 	.ds 1
      00003D                        350 	.org 0x003D
      00003D                        351 _instruction_buffer::
      00003D                        352 	.ds 1
      00003E                        353 	.org 0x003E
      00003E                        354 _result_l::
      00003E                        355 	.ds 1
      00003F                        356 	.org 0x003F
      00003F                        357 _result_h::
      00003F                        358 	.ds 1
      000040                        359 	.org 0x0040
      000040                        360 _prog_buffer::
      000040                        361 	.ds 32
                                    362 	.area IABS    (ABS,DATA)
                                    363 ;--------------------------------------------------------
                                    364 ; bit data
                                    365 ;--------------------------------------------------------
                                    366 	.area BSEG    (BIT)
                           000000   367 _is_recieved	=	0x0000
                                    368 ;--------------------------------------------------------
                                    369 ; paged external ram data
                                    370 ;--------------------------------------------------------
                                    371 	.area PSEG    (PAG,XDATA)
                                    372 ;--------------------------------------------------------
                                    373 ; uninitialized external ram data
                                    374 ;--------------------------------------------------------
                                    375 	.area XSEG    (XDATA)
                                    376 ;--------------------------------------------------------
                                    377 ; absolute external ram data
                                    378 ;--------------------------------------------------------
                                    379 	.area XABS    (ABS,XDATA)
      000032                        380 	.org 0x0032
      000032                        381 _rd_pointer::
      000032                        382 	.ds 1
      000033                        383 	.org 0x0033
      000033                        384 _wr_pointer::
      000033                        385 	.ds 1
                                    386 ;--------------------------------------------------------
                                    387 ; initialized external ram data
                                    388 ;--------------------------------------------------------
                                    389 	.area XISEG   (XDATA)
                                    390 	.area HOME    (CODE)
                                    391 	.area GSINIT0 (CODE)
                                    392 	.area GSINIT1 (CODE)
                                    393 	.area GSINIT2 (CODE)
                                    394 	.area GSINIT3 (CODE)
                                    395 	.area GSINIT4 (CODE)
                                    396 	.area GSINIT5 (CODE)
                                    397 	.area GSINIT  (CODE)
                                    398 	.area GSFINAL (CODE)
                                    399 	.area CSEG    (CODE)
                                    400 ;--------------------------------------------------------
                                    401 ; interrupt vector
                                    402 ;--------------------------------------------------------
                                    403 	.area HOME    (CODE)
      000000                        404 __interrupt_vect:
      000000 02 00 74         [24]  405 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  406 	reti
      000004                        407 	.ds	7
      00000B 32               [24]  408 	reti
      00000C                        409 	.ds	7
      000013 32               [24]  410 	reti
      000014                        411 	.ds	7
      00001B 32               [24]  412 	reti
      00001C                        413 	.ds	7
      000023 02 01 95         [24]  414 	ljmp	_Serial_ISR
      000026                        415 	.ds	5
      00002B 02 01 C1         [24]  416 	ljmp	_Timer2_ISR
                                    417 ; restartable atomic support routines
      00002E                        418 	.ds	2
      000030                        419 sdcc_atomic_exchange_rollback_start::
      000030 00               [12]  420 	nop
      000031 00               [12]  421 	nop
      000032                        422 sdcc_atomic_exchange_pdata_impl:
      000032 E2               [24]  423 	movx	a, @r0
      000033 FB               [12]  424 	mov	r3, a
      000034 EA               [12]  425 	mov	a, r2
      000035 F2               [24]  426 	movx	@r0, a
      000036 80 2C            [24]  427 	sjmp	sdcc_atomic_exchange_exit
      000038 00               [12]  428 	nop
      000039 00               [12]  429 	nop
      00003A                        430 sdcc_atomic_exchange_xdata_impl:
      00003A E0               [24]  431 	movx	a, @dptr
      00003B FB               [12]  432 	mov	r3, a
      00003C EA               [12]  433 	mov	a, r2
      00003D F0               [24]  434 	movx	@dptr, a
      00003E 80 24            [24]  435 	sjmp	sdcc_atomic_exchange_exit
      000040                        436 sdcc_atomic_compare_exchange_idata_impl:
      000040 E6               [12]  437 	mov	a, @r0
      000041 B5 02 02         [24]  438 	cjne	a, ar2, .+#5
      000044 EB               [12]  439 	mov	a, r3
      000045 F6               [12]  440 	mov	@r0, a
      000046 22               [24]  441 	ret
      000047 00               [12]  442 	nop
      000048                        443 sdcc_atomic_compare_exchange_pdata_impl:
      000048 E2               [24]  444 	movx	a, @r0
      000049 B5 02 02         [24]  445 	cjne	a, ar2, .+#5
      00004C EB               [12]  446 	mov	a, r3
      00004D F2               [24]  447 	movx	@r0, a
      00004E 22               [24]  448 	ret
      00004F 00               [12]  449 	nop
      000050                        450 sdcc_atomic_compare_exchange_xdata_impl:
      000050 E0               [24]  451 	movx	a, @dptr
      000051 B5 02 02         [24]  452 	cjne	a, ar2, .+#5
      000054 EB               [12]  453 	mov	a, r3
      000055 F0               [24]  454 	movx	@dptr, a
      000056 22               [24]  455 	ret
      000057                        456 sdcc_atomic_exchange_rollback_end::
                                    457 
      000057                        458 sdcc_atomic_exchange_gptr_impl::
      000057 30 F6 E0         [24]  459 	jnb	b.6, sdcc_atomic_exchange_xdata_impl
      00005A A8 82            [24]  460 	mov	r0, dpl
      00005C 20 F5 D3         [24]  461 	jb	b.5, sdcc_atomic_exchange_pdata_impl
      00005F                        462 sdcc_atomic_exchange_idata_impl:
      00005F EA               [12]  463 	mov	a, r2
      000060 C6               [12]  464 	xch	a, @r0
      000061 F5 82            [12]  465 	mov	dpl, a
      000063 22               [24]  466 	ret
      000064                        467 sdcc_atomic_exchange_exit:
      000064 8B 82            [24]  468 	mov	dpl, r3
      000066 22               [24]  469 	ret
      000067                        470 sdcc_atomic_compare_exchange_gptr_impl::
      000067 30 F6 E6         [24]  471 	jnb	b.6, sdcc_atomic_compare_exchange_xdata_impl
      00006A A8 82            [24]  472 	mov	r0, dpl
      00006C 20 F5 D9         [24]  473 	jb	b.5, sdcc_atomic_compare_exchange_pdata_impl
      00006F 80 CF            [24]  474 	sjmp	sdcc_atomic_compare_exchange_idata_impl
                                    475 ;--------------------------------------------------------
                                    476 ; global & static initialisations
                                    477 ;--------------------------------------------------------
                                    478 	.area HOME    (CODE)
                                    479 	.area GSINIT  (CODE)
                                    480 	.area GSFINAL (CODE)
                                    481 	.area GSINIT  (CODE)
                                    482 	.globl __sdcc_gsinit_startup
                                    483 	.globl __sdcc_program_startup
                                    484 	.globl __start__stack
                                    485 	.globl __mcs51_genXINIT
                                    486 	.globl __mcs51_genXRAMCLEAR
                                    487 	.globl __mcs51_genRAMCLEAR
                                    488 ;	include/uvr_variable.h:10: volatile unsigned char __data __at (0x30) loop_counter = 0; //Store Loop Counters
      0000CD 75 30 00         [24]  489 	mov	_loop_counter,#0x00
                                    490 ;	include/uvr_variable.h:12: volatile unsigned char __data __at (0x31)  prog_counter = 0; //Store Program Counters
      0000D0 75 31 00         [24]  491 	mov	_prog_counter,#0x00
                                    492 ;	include/uvr_variable.h:16: volatile unsigned char __data __at (0x34)  system_tick = 0; //Common System Time
      0000D3 75 34 00         [24]  493 	mov	_system_tick,#0x00
                                    494 ;	include/uvr_variable.h:17: volatile unsigned char __data __at (0x35) op1 = 0; //Operand Buffer
      0000D6 75 35 00         [24]  495 	mov	_op1,#0x00
                                    496 ;	include/uvr_variable.h:18: volatile unsigned char __data __at (0x36) op2 = 0; //perand Buffer
      0000D9 75 36 00         [24]  497 	mov	_op2,#0x00
                                    498 ;	include/uvr_variable.h:19: volatile unsigned char __data __at (0x37)  active_timer = 0; //To Calculate Timer Differences
      0000DC 75 37 00         [24]  499 	mov	_active_timer,#0x00
                                    500 ;	include/uvr_variable.h:21: volatile unsigned char __data __at (0x38) temp0 = 0;
      0000DF 75 38 00         [24]  501 	mov	_temp0,#0x00
                                    502 ;	include/uvr_variable.h:22: volatile unsigned char __data __at (0x39) temp1 = 0;
      0000E2 75 39 00         [24]  503 	mov	_temp1,#0x00
                                    504 ;	include/uvr_variable.h:23: volatile unsigned char __data __at (0x3A) temp2 = 0; //Temporary Variables
      0000E5 75 3A 00         [24]  505 	mov	_temp2,#0x00
                                    506 ;	include/uvr_variable.h:24: volatile unsigned char __data __at (0x3C) temp3 = 0;
      0000E8 75 3C 00         [24]  507 	mov	_temp3,#0x00
                                    508 ;	include/uvr_variable.h:27: volatile unsigned char __data __at (0x3D) instruction_buffer =0;
      0000EB 75 3D 00         [24]  509 	mov	_instruction_buffer,#0x00
                                    510 ;	include/uvr_variable.h:28: volatile unsigned char __data __at (0x3E) result_l = 0;
      0000EE 75 3E 00         [24]  511 	mov	_result_l,#0x00
                                    512 ;	include/uvr_variable.h:29: volatile unsigned char __data __at (0x3F) result_h = 0;
      0000F1 75 3F 00         [24]  513 	mov	_result_h,#0x00
                                    514 ;	include/uvr_variable.h:33: volatile unsigned char __data __at (0x40) prog_buffer[32] = {0};
      0000F4 75 40 00         [24]  515 	mov	_prog_buffer,#0x00
                                    516 ;	include/uvr_variable.h:13: volatile unsigned char __data __at (0x32)  *rd_pointer = buffer_ptr; //Read Pointer
      0000F7 90 00 32         [24]  517 	mov	dptr,#_rd_pointer
      0000FA 74 40            [12]  518 	mov	a,#0x40
      0000FC F0               [24]  519 	movx	@dptr,a
                                    520 ;	include/uvr_variable.h:14: volatile unsigned char __data __at (0x33)  *wr_pointer = buffer_ptr; //Write Pointer
      0000FD 90 00 33         [24]  521 	mov	dptr,#_wr_pointer
      000100 F0               [24]  522 	movx	@dptr,a
                                    523 	.area GSFINAL (CODE)
      000101 02 00 71         [24]  524 	ljmp	__sdcc_program_startup
                                    525 ;--------------------------------------------------------
                                    526 ; Home
                                    527 ;--------------------------------------------------------
                                    528 	.area HOME    (CODE)
                                    529 	.area HOME    (CODE)
      000071                        530 __sdcc_program_startup:
      000071 02 01 CB         [24]  531 	ljmp	_main
                                    532 ;	return from main will return to caller
                                    533 ;--------------------------------------------------------
                                    534 ; code
                                    535 ;--------------------------------------------------------
                                    536 	.area CSEG    (CODE)
                                    537 ;------------------------------------------------------------
                                    538 ;Allocation info for local variables in function 'init_sys'
                                    539 ;------------------------------------------------------------
                                    540 ;	src/main.c:6: void init_sys(void){
                                    541 ;	-----------------------------------------
                                    542 ;	 function init_sys
                                    543 ;	-----------------------------------------
      000104                        544 _init_sys:
                           000007   545 	ar7 = 0x07
                           000006   546 	ar6 = 0x06
                           000005   547 	ar5 = 0x05
                           000004   548 	ar4 = 0x04
                           000003   549 	ar3 = 0x03
                           000002   550 	ar2 = 0x02
                           000001   551 	ar1 = 0x01
                           000000   552 	ar0 = 0x00
                                    553 ;	src/main.c:7: EA = 1;
                                    554 ;	assignBit
      000104 D2 AF            [12]  555 	setb	_EA
                                    556 ;	src/main.c:8: ES = 1;
                                    557 ;	assignBit
      000106 D2 AC            [12]  558 	setb	_ES
                                    559 ;	src/main.c:9: ET2 = 1;
                                    560 ;	assignBit
      000108 D2 AD            [12]  561 	setb	_ET2
                                    562 ;	src/main.c:10: is_recieved = 0;
                                    563 ;	assignBit
      00010A C2 00            [12]  564 	clr	_is_recieved
                                    565 ;	src/main.c:11: }
      00010C 22               [24]  566 	ret
                                    567 ;------------------------------------------------------------
                                    568 ;Allocation info for local variables in function 'init_timer'
                                    569 ;------------------------------------------------------------
                                    570 ;	src/main.c:13: void init_timer(void){
                                    571 ;	-----------------------------------------
                                    572 ;	 function init_timer
                                    573 ;	-----------------------------------------
      00010D                        574 _init_timer:
                                    575 ;	src/main.c:15: T2CON = 0x00;
      00010D 75 C8 00         [24]  576 	mov	_T2CON,#0x00
                                    577 ;	src/main.c:16: RCAP2H = timer_h;
      000110 75 CB 4C         [24]  578 	mov	_RCAP2H,#0x4c
                                    579 ;	src/main.c:17: RCAP2L = timer_l;
      000113 75 CA 00         [24]  580 	mov	_RCAP2L,#0x00
                                    581 ;	src/main.c:18: TH2 = timer_h;
      000116 75 CD 4C         [24]  582 	mov	_TH2,#0x4c
                                    583 ;	src/main.c:19: TL2 = timer_l;
      000119 75 CC 00         [24]  584 	mov	_TL2,#0x00
                                    585 ;	src/main.c:20: TR2 = 1;
                                    586 ;	assignBit
      00011C D2 CA            [12]  587 	setb	_TR2
                                    588 ;	src/main.c:23: }
      00011E 22               [24]  589 	ret
                                    590 ;------------------------------------------------------------
                                    591 ;Allocation info for local variables in function 'init_serial'
                                    592 ;------------------------------------------------------------
                                    593 ;	src/main.c:26: void init_serial(void){
                                    594 ;	-----------------------------------------
                                    595 ;	 function init_serial
                                    596 ;	-----------------------------------------
      00011F                        597 _init_serial:
                                    598 ;	src/main.c:28: TMOD = 0x20;				//Set TMOD to Use Timer 1 in 8 Bit Auto Reload
      00011F 75 89 20         [24]  599 	mov	_TMOD,#0x20
                                    600 ;	src/main.c:29: TH1 = serial_baud_timer;	//Set Reload value
      000122 75 8D FD         [24]  601 	mov	_TH1,#0xfd
                                    602 ;	src/main.c:30: TL1 = serial_baud_timer;	//Set Initial Value
      000125 75 8B FD         [24]  603 	mov	_TL1,#0xfd
                                    604 ;	src/main.c:31: TR1 = 1;					//Start Timer 1
                                    605 ;	assignBit
      000128 D2 8E            [12]  606 	setb	_TR1
                                    607 ;	src/main.c:32: SCON = 0x50;				//Serial Mode 1 , 8 Bit UART
      00012A 75 98 50         [24]  608 	mov	_SCON,#0x50
                                    609 ;	src/main.c:33: TI = 0;
                                    610 ;	assignBit
      00012D C2 99            [12]  611 	clr	_TI
                                    612 ;	src/main.c:34: }
      00012F 22               [24]  613 	ret
                                    614 ;------------------------------------------------------------
                                    615 ;Allocation info for local variables in function 'uart_send'
                                    616 ;------------------------------------------------------------
                                    617 ;dat           Allocated to registers 
                                    618 ;------------------------------------------------------------
                                    619 ;	src/main.c:37: void uart_send(char dat){
                                    620 ;	-----------------------------------------
                                    621 ;	 function uart_send
                                    622 ;	-----------------------------------------
      000130                        623 _uart_send:
      000130 85 82 99         [24]  624 	mov	_SBUF,dpl
                                    625 ;	src/main.c:39: while(!TI);
      000133                        626 00101$:
                                    627 ;	src/main.c:40: TI = 0;
                                    628 ;	assignBit
      000133 10 99 02         [24]  629 	jbc	_TI,00118$
      000136 80 FB            [24]  630 	sjmp	00101$
      000138                        631 00118$:
                                    632 ;	src/main.c:41: }
      000138 22               [24]  633 	ret
                                    634 ;------------------------------------------------------------
                                    635 ;Allocation info for local variables in function 'echo'
                                    636 ;------------------------------------------------------------
                                    637 ;	src/main.c:45: void echo(void){
                                    638 ;	-----------------------------------------
                                    639 ;	 function echo
                                    640 ;	-----------------------------------------
      000139                        641 _echo:
                                    642 ;	src/main.c:47: }
      000139 22               [24]  643 	ret
                                    644 ;------------------------------------------------------------
                                    645 ;Allocation info for local variables in function 'delay_ms_500'
                                    646 ;------------------------------------------------------------
                                    647 ;	src/main.c:53: void delay_ms_500(void){
                                    648 ;	-----------------------------------------
                                    649 ;	 function delay_ms_500
                                    650 ;	-----------------------------------------
      00013A                        651 _delay_ms_500:
                                    652 ;	src/main.c:56: }
      00013A 22               [24]  653 	ret
                                    654 ;------------------------------------------------------------
                                    655 ;Allocation info for local variables in function 'ascii_to_hex'
                                    656 ;------------------------------------------------------------
                                    657 ;	src/main.c:61: void ascii_to_hex(void){
                                    658 ;	-----------------------------------------
                                    659 ;	 function ascii_to_hex
                                    660 ;	-----------------------------------------
      00013B                        661 _ascii_to_hex:
                                    662 ;	src/main.c:64: }
      00013B 22               [24]  663 	ret
                                    664 ;------------------------------------------------------------
                                    665 ;Allocation info for local variables in function 'hex_to_ascii'
                                    666 ;------------------------------------------------------------
                                    667 ;	src/main.c:70: void hex_to_ascii(void){
                                    668 ;	-----------------------------------------
                                    669 ;	 function hex_to_ascii
                                    670 ;	-----------------------------------------
      00013C                        671 _hex_to_ascii:
                                    672 ;	src/main.c:73: }
      00013C 22               [24]  673 	ret
                                    674 ;------------------------------------------------------------
                                    675 ;Allocation info for local variables in function 'print_boot_message'
                                    676 ;------------------------------------------------------------
                                    677 ;	src/main.c:78: void print_boot_message(void){
                                    678 ;	-----------------------------------------
                                    679 ;	 function print_boot_message
                                    680 ;	-----------------------------------------
      00013D                        681 _print_boot_message:
                                    682 ;	src/main.c:79: temp0 = 0;
      00013D 75 38 00         [24]  683 	mov	_temp0,#0x00
                                    684 ;	src/main.c:80: while(temp0 != 54){
      000140                        685 00101$:
      000140 74 36            [12]  686 	mov	a,#0x36
      000142 B5 38 02         [24]  687 	cjne	a,_temp0,00118$
      000145 80 12            [24]  688 	sjmp	00103$
      000147                        689 00118$:
                                    690 ;	src/main.c:81: uart_send(boot_message[temp0]);
      000147 E5 38            [12]  691 	mov	a,_temp0
      000149 90 01 E0         [24]  692 	mov	dptr,#_boot_message
      00014C 93               [24]  693 	movc	a,@a+dptr
      00014D F5 82            [12]  694 	mov	dpl,a
      00014F 12 01 30         [24]  695 	lcall	_uart_send
                                    696 ;	src/main.c:82: temp0++;
      000152 E5 38            [12]  697 	mov	a,_temp0
      000154 04               [12]  698 	inc	a
      000155 F5 38            [12]  699 	mov	_temp0,a
      000157 80 E7            [24]  700 	sjmp	00101$
      000159                        701 00103$:
                                    702 ;	src/main.c:84: temp0 = 0;
      000159 75 38 00         [24]  703 	mov	_temp0,#0x00
                                    704 ;	src/main.c:85: }
      00015C 22               [24]  705 	ret
                                    706 ;------------------------------------------------------------
                                    707 ;Allocation info for local variables in function 'print_ready_message'
                                    708 ;------------------------------------------------------------
                                    709 ;	src/main.c:87: void print_ready_message(void){
                                    710 ;	-----------------------------------------
                                    711 ;	 function print_ready_message
                                    712 ;	-----------------------------------------
      00015D                        713 _print_ready_message:
                                    714 ;	src/main.c:88: temp0 = 0;
      00015D 75 38 00         [24]  715 	mov	_temp0,#0x00
                                    716 ;	src/main.c:89: while(temp0 != 7){
      000160                        717 00101$:
      000160 74 07            [12]  718 	mov	a,#0x07
      000162 B5 38 02         [24]  719 	cjne	a,_temp0,00118$
      000165 80 12            [24]  720 	sjmp	00103$
      000167                        721 00118$:
                                    722 ;	src/main.c:90: uart_send(ready_msg[temp0]);
      000167 E5 38            [12]  723 	mov	a,_temp0
      000169 90 02 16         [24]  724 	mov	dptr,#_ready_msg
      00016C 93               [24]  725 	movc	a,@a+dptr
      00016D F5 82            [12]  726 	mov	dpl,a
      00016F 12 01 30         [24]  727 	lcall	_uart_send
                                    728 ;	src/main.c:91: temp0++;
      000172 E5 38            [12]  729 	mov	a,_temp0
      000174 04               [12]  730 	inc	a
      000175 F5 38            [12]  731 	mov	_temp0,a
      000177 80 E7            [24]  732 	sjmp	00101$
      000179                        733 00103$:
                                    734 ;	src/main.c:93: temp0 = 0;
      000179 75 38 00         [24]  735 	mov	_temp0,#0x00
                                    736 ;	src/main.c:94: }
      00017C 22               [24]  737 	ret
                                    738 ;------------------------------------------------------------
                                    739 ;Allocation info for local variables in function 'clear_terminal'
                                    740 ;------------------------------------------------------------
                                    741 ;	src/main.c:96: void clear_terminal(void){
                                    742 ;	-----------------------------------------
                                    743 ;	 function clear_terminal
                                    744 ;	-----------------------------------------
      00017D                        745 _clear_terminal:
                                    746 ;	src/main.c:97: uart_send(0x1B);uart_send(0x5B);uart_send(0x32);uart_send(0x4A);
      00017D 75 82 1B         [24]  747 	mov	dpl, #0x1b
      000180 12 01 30         [24]  748 	lcall	_uart_send
      000183 75 82 5B         [24]  749 	mov	dpl, #0x5b
      000186 12 01 30         [24]  750 	lcall	_uart_send
      000189 75 82 32         [24]  751 	mov	dpl, #0x32
      00018C 12 01 30         [24]  752 	lcall	_uart_send
      00018F 75 82 4A         [24]  753 	mov	dpl, #0x4a
                                    754 ;	src/main.c:98: }
      000192 02 01 30         [24]  755 	ljmp	_uart_send
                                    756 ;------------------------------------------------------------
                                    757 ;Allocation info for local variables in function 'Serial_ISR'
                                    758 ;------------------------------------------------------------
                                    759 ;	src/main.c:102: void Serial_ISR(void) __interrupt(4)
                                    760 ;	-----------------------------------------
                                    761 ;	 function Serial_ISR
                                    762 ;	-----------------------------------------
      000195                        763 _Serial_ISR:
      000195 C0 E0            [24]  764 	push	acc
      000197 C0 82            [24]  765 	push	dpl
      000199 C0 83            [24]  766 	push	dph
      00019B C0 01            [24]  767 	push	ar1
      00019D C0 D0            [24]  768 	push	psw
      00019F 75 D0 00         [24]  769 	mov	psw,#0x00
                                    770 ;	src/main.c:104: if(RI){
      0001A2 30 98 11         [24]  771 	jnb	_RI,00103$
                                    772 ;	src/main.c:105: *wr_pointer = SBUF;
      0001A5 90 00 33         [24]  773 	mov	dptr,#_wr_pointer
      0001A8 E0               [24]  774 	movx	a,@dptr
      0001A9 F9               [12]  775 	mov	r1,a
      0001AA A7 99            [24]  776 	mov	@r1,_SBUF
                                    777 ;	src/main.c:106: is_recieved = 1;
                                    778 ;	assignBit
      0001AC D2 00            [12]  779 	setb	_is_recieved
                                    780 ;	src/main.c:107: wr_pointer++;
      0001AE 90 00 33         [24]  781 	mov	dptr,#_wr_pointer
      0001B1 E9               [12]  782 	mov	a,r1
      0001B2 04               [12]  783 	inc	a
      0001B3 F0               [24]  784 	movx	@dptr,a
                                    785 ;	src/main.c:108: RI = 0;
                                    786 ;	assignBit
      0001B4 C2 98            [12]  787 	clr	_RI
      0001B6                        788 00103$:
                                    789 ;	src/main.c:110: }
      0001B6 D0 D0            [24]  790 	pop	psw
      0001B8 D0 01            [24]  791 	pop	ar1
      0001BA D0 83            [24]  792 	pop	dph
      0001BC D0 82            [24]  793 	pop	dpl
      0001BE D0 E0            [24]  794 	pop	acc
      0001C0 32               [24]  795 	reti
                                    796 ;	eliminated unneeded push/pop ar0
                                    797 ;	eliminated unneeded push/pop b
                                    798 ;------------------------------------------------------------
                                    799 ;Allocation info for local variables in function 'Timer2_ISR'
                                    800 ;------------------------------------------------------------
                                    801 ;	src/main.c:113: void Timer2_ISR(void) __interrupt(5)
                                    802 ;	-----------------------------------------
                                    803 ;	 function Timer2_ISR
                                    804 ;	-----------------------------------------
      0001C1                        805 _Timer2_ISR:
      0001C1 C0 E0            [24]  806 	push	acc
                                    807 ;	src/main.c:115: system_tick++;
      0001C3 E5 34            [12]  808 	mov	a,_system_tick
      0001C5 04               [12]  809 	inc	a
      0001C6 F5 34            [12]  810 	mov	_system_tick,a
                                    811 ;	src/main.c:116: }
      0001C8 D0 E0            [24]  812 	pop	acc
      0001CA 32               [24]  813 	reti
                                    814 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    815 ;	eliminated unneeded push/pop not_psw
                                    816 ;	eliminated unneeded push/pop dpl
                                    817 ;	eliminated unneeded push/pop dph
                                    818 ;	eliminated unneeded push/pop b
                                    819 ;------------------------------------------------------------
                                    820 ;Allocation info for local variables in function 'main'
                                    821 ;------------------------------------------------------------
                                    822 ;	src/main.c:119: void main(void){
                                    823 ;	-----------------------------------------
                                    824 ;	 function main
                                    825 ;	-----------------------------------------
      0001CB                        826 _main:
                                    827 ;	src/main.c:120: SP = hw_stack; 		//initiaslze Stack Pointer;
      0001CB 75 81 60         [24]  828 	mov	_SP,#0x60
                                    829 ;	src/main.c:121: init_sys();
      0001CE 12 01 04         [24]  830 	lcall	_init_sys
                                    831 ;	src/main.c:122: init_serial();
      0001D1 12 01 1F         [24]  832 	lcall	_init_serial
                                    833 ;	src/main.c:126: print_boot_message();
      0001D4 12 01 3D         [24]  834 	lcall	_print_boot_message
                                    835 ;	src/main.c:127: print_ready_message();
      0001D7 12 01 5D         [24]  836 	lcall	_print_ready_message
                                    837 ;	src/main.c:129: while(1);
      0001DA                        838 00102$:
                                    839 ;	src/main.c:130: }
      0001DA 80 FE            [24]  840 	sjmp	00102$
                                    841 	.area CSEG    (CODE)
                                    842 	.area CONST   (CODE)
                                    843 	.area CONST   (CODE)
      0001E0                        844 _boot_message:
      0001E0 4D                     845 	.db #0x4d	; 77	'M'
      0001E1 69                     846 	.db #0x69	; 105	'i'
      0001E2 63                     847 	.db #0x63	; 99	'c'
      0001E3 72                     848 	.db #0x72	; 114	'r'
      0001E4 6F                     849 	.db #0x6f	; 111	'o'
      0001E5 20                     850 	.db #0x20	; 32
      0001E6 56                     851 	.db #0x56	; 86	'V'
      0001E7 69                     852 	.db #0x69	; 105	'i'
      0001E8 72                     853 	.db #0x72	; 114	'r'
      0001E9 74                     854 	.db #0x74	; 116	't'
      0001EA 75                     855 	.db #0x75	; 117	'u'
      0001EB 61                     856 	.db #0x61	; 97	'a'
      0001EC 6C                     857 	.db #0x6c	; 108	'l'
      0001ED 2D                     858 	.db #0x2d	; 45
      0001EE 52                     859 	.db #0x52	; 82	'R'
      0001EF 20                     860 	.db #0x20	; 32
      0001F0 43                     861 	.db #0x43	; 67	'C'
      0001F1 6F                     862 	.db #0x6f	; 111	'o'
      0001F2 70                     863 	.db #0x70	; 112	'p'
      0001F3 79                     864 	.db #0x79	; 121	'y'
      0001F4 72                     865 	.db #0x72	; 114	'r'
      0001F5 69                     866 	.db #0x69	; 105	'i'
      0001F6 67                     867 	.db #0x67	; 103	'g'
      0001F7 68                     868 	.db #0x68	; 104	'h'
      0001F8 74                     869 	.db #0x74	; 116	't'
      0001F9 20                     870 	.db #0x20	; 32
      0001FA 32                     871 	.db #0x32	; 50	'2'
      0001FB 30                     872 	.db #0x30	; 48	'0'
      0001FC 32                     873 	.db #0x32	; 50	'2'
      0001FD 36                     874 	.db #0x36	; 54	'6'
      0001FE 20                     875 	.db #0x20	; 32
      0001FF 42                     876 	.db #0x42	; 66	'B'
      000200 61                     877 	.db #0x61	; 97	'a'
      000201 69                     878 	.db #0x69	; 105	'i'
      000202 62                     879 	.db #0x62	; 98	'b'
      000203 68                     880 	.db #0x68	; 104	'h'
      000204 61                     881 	.db #0x61	; 97	'a'
      000205 76                     882 	.db #0x76	; 118	'v'
      000206 20                     883 	.db #0x20	; 32
      000207 42                     884 	.db #0x42	; 66	'B'
      000208 68                     885 	.db #0x68	; 104	'h'
      000209 61                     886 	.db #0x61	; 97	'a'
      00020A 74                     887 	.db #0x74	; 116	't'
      00020B 74                     888 	.db #0x74	; 116	't'
      00020C 61                     889 	.db #0x61	; 97	'a'
      00020D 63                     890 	.db #0x63	; 99	'c'
      00020E 68                     891 	.db #0x68	; 104	'h'
      00020F 72                     892 	.db #0x72	; 114	'r'
      000210 79                     893 	.db #0x79	; 121	'y'
      000211 61                     894 	.db #0x61	; 97	'a'
      000212 0D                     895 	.db #0x0d	; 13
      000213 0A                     896 	.db #0x0a	; 10
      000214 00                     897 	.db 0x00
      000215 00                     898 	.db 0x00
                                    899 	.area CSEG    (CODE)
                                    900 	.area CONST   (CODE)
      000216                        901 _ready_msg:
      000216 52                     902 	.db #0x52	; 82	'R'
      000217 45                     903 	.db #0x45	; 69	'E'
      000218 41                     904 	.db #0x41	; 65	'A'
      000219 44                     905 	.db #0x44	; 68	'D'
      00021A 59                     906 	.db #0x59	; 89	'Y'
      00021B 0D                     907 	.db #0x0d	; 13
      00021C 0A                     908 	.db #0x0a	; 10
                                    909 	.area CSEG    (CODE)
                                    910 	.area XINIT   (CODE)
                                    911 	.area CABS    (ABS,CODE)
