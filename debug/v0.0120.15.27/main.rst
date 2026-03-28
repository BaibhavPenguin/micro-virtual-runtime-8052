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
                                     14 	.globl _print_boot_message
                                     15 	.globl _hex_to_ascii
                                     16 	.globl _ascii_to_hex
                                     17 	.globl _delay_ms_500
                                     18 	.globl _echo
                                     19 	.globl _uart_send
                                     20 	.globl _init_serial
                                     21 	.globl _init_timer
                                     22 	.globl _init_sys
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
                                    143 	.globl _wr_pointer
                                    144 	.globl _rd_pointer
                                    145 	.globl _is_recieved
                                    146 	.globl _prog_buffer
                                    147 	.globl _result_h
                                    148 	.globl _result_l
                                    149 	.globl _instruction_buffer
                                    150 	.globl _temp3
                                    151 	.globl _temp2
                                    152 	.globl _temp1
                                    153 	.globl _temp_0
                                    154 	.globl _active_timer
                                    155 	.globl _op2
                                    156 	.globl _op1
                                    157 	.globl _system_tick
                                    158 	.globl _prog_counter
                                    159 	.globl _loop_counter
                                    160 ;--------------------------------------------------------
                                    161 ; special function registers
                                    162 ;--------------------------------------------------------
                                    163 	.area RSEG    (ABS,DATA)
      000000                        164 	.org 0x0000
                           000080   165 _P0	=	0x0080
                           000081   166 _SP	=	0x0081
                           000082   167 _DPL	=	0x0082
                           000083   168 _DPH	=	0x0083
                           000087   169 _PCON	=	0x0087
                           000088   170 _TCON	=	0x0088
                           000089   171 _TMOD	=	0x0089
                           00008A   172 _TL0	=	0x008a
                           00008B   173 _TL1	=	0x008b
                           00008C   174 _TH0	=	0x008c
                           00008D   175 _TH1	=	0x008d
                           000090   176 _P1	=	0x0090
                           000098   177 _SCON	=	0x0098
                           000099   178 _SBUF	=	0x0099
                           0000A0   179 _P2	=	0x00a0
                           0000A8   180 _IE	=	0x00a8
                           0000B0   181 _P3	=	0x00b0
                           0000B8   182 _IP	=	0x00b8
                           0000D0   183 _PSW	=	0x00d0
                           0000E0   184 _ACC	=	0x00e0
                           0000F0   185 _B	=	0x00f0
                           0000C8   186 _T2CON	=	0x00c8
                           0000CA   187 _RCAP2L	=	0x00ca
                           0000CB   188 _RCAP2H	=	0x00cb
                           0000CC   189 _TL2	=	0x00cc
                           0000CD   190 _TH2	=	0x00cd
                                    191 ;--------------------------------------------------------
                                    192 ; special function bits
                                    193 ;--------------------------------------------------------
                                    194 	.area RSEG    (ABS,DATA)
      000000                        195 	.org 0x0000
                           000080   196 _P0_0	=	0x0080
                           000081   197 _P0_1	=	0x0081
                           000082   198 _P0_2	=	0x0082
                           000083   199 _P0_3	=	0x0083
                           000084   200 _P0_4	=	0x0084
                           000085   201 _P0_5	=	0x0085
                           000086   202 _P0_6	=	0x0086
                           000087   203 _P0_7	=	0x0087
                           000088   204 _IT0	=	0x0088
                           000089   205 _IE0	=	0x0089
                           00008A   206 _IT1	=	0x008a
                           00008B   207 _IE1	=	0x008b
                           00008C   208 _TR0	=	0x008c
                           00008D   209 _TF0	=	0x008d
                           00008E   210 _TR1	=	0x008e
                           00008F   211 _TF1	=	0x008f
                           000090   212 _P1_0	=	0x0090
                           000091   213 _P1_1	=	0x0091
                           000092   214 _P1_2	=	0x0092
                           000093   215 _P1_3	=	0x0093
                           000094   216 _P1_4	=	0x0094
                           000095   217 _P1_5	=	0x0095
                           000096   218 _P1_6	=	0x0096
                           000097   219 _P1_7	=	0x0097
                           000098   220 _RI	=	0x0098
                           000099   221 _TI	=	0x0099
                           00009A   222 _RB8	=	0x009a
                           00009B   223 _TB8	=	0x009b
                           00009C   224 _REN	=	0x009c
                           00009D   225 _SM2	=	0x009d
                           00009E   226 _SM1	=	0x009e
                           00009F   227 _SM0	=	0x009f
                           0000A0   228 _P2_0	=	0x00a0
                           0000A1   229 _P2_1	=	0x00a1
                           0000A2   230 _P2_2	=	0x00a2
                           0000A3   231 _P2_3	=	0x00a3
                           0000A4   232 _P2_4	=	0x00a4
                           0000A5   233 _P2_5	=	0x00a5
                           0000A6   234 _P2_6	=	0x00a6
                           0000A7   235 _P2_7	=	0x00a7
                           0000A8   236 _EX0	=	0x00a8
                           0000A9   237 _ET0	=	0x00a9
                           0000AA   238 _EX1	=	0x00aa
                           0000AB   239 _ET1	=	0x00ab
                           0000AC   240 _ES	=	0x00ac
                           0000AF   241 _EA	=	0x00af
                           0000B0   242 _P3_0	=	0x00b0
                           0000B1   243 _P3_1	=	0x00b1
                           0000B2   244 _P3_2	=	0x00b2
                           0000B3   245 _P3_3	=	0x00b3
                           0000B4   246 _P3_4	=	0x00b4
                           0000B5   247 _P3_5	=	0x00b5
                           0000B6   248 _P3_6	=	0x00b6
                           0000B7   249 _P3_7	=	0x00b7
                           0000B0   250 _RXD	=	0x00b0
                           0000B1   251 _TXD	=	0x00b1
                           0000B2   252 _INT0	=	0x00b2
                           0000B3   253 _INT1	=	0x00b3
                           0000B4   254 _T0	=	0x00b4
                           0000B5   255 _T1	=	0x00b5
                           0000B6   256 _WR	=	0x00b6
                           0000B7   257 _RD	=	0x00b7
                           0000B8   258 _PX0	=	0x00b8
                           0000B9   259 _PT0	=	0x00b9
                           0000BA   260 _PX1	=	0x00ba
                           0000BB   261 _PT1	=	0x00bb
                           0000BC   262 _PS	=	0x00bc
                           0000D0   263 _P	=	0x00d0
                           0000D1   264 _F1	=	0x00d1
                           0000D2   265 _OV	=	0x00d2
                           0000D3   266 _RS0	=	0x00d3
                           0000D4   267 _RS1	=	0x00d4
                           0000D5   268 _F0	=	0x00d5
                           0000D6   269 _AC	=	0x00d6
                           0000D7   270 _CY	=	0x00d7
                           0000AD   271 _ET2	=	0x00ad
                           0000BD   272 _PT2	=	0x00bd
                           0000C8   273 _T2CON_0	=	0x00c8
                           0000C9   274 _T2CON_1	=	0x00c9
                           0000CA   275 _T2CON_2	=	0x00ca
                           0000CB   276 _T2CON_3	=	0x00cb
                           0000CC   277 _T2CON_4	=	0x00cc
                           0000CD   278 _T2CON_5	=	0x00cd
                           0000CE   279 _T2CON_6	=	0x00ce
                           0000CF   280 _T2CON_7	=	0x00cf
                           0000C8   281 _CP_RL2	=	0x00c8
                           0000C9   282 _C_T2	=	0x00c9
                           0000CA   283 _TR2	=	0x00ca
                           0000CB   284 _EXEN2	=	0x00cb
                           0000CC   285 _TCLK	=	0x00cc
                           0000CD   286 _RCLK	=	0x00cd
                           0000CE   287 _EXF2	=	0x00ce
                           0000CF   288 _TF2	=	0x00cf
                           0000A6   289 _WDTRST	=	0x00a6
                                    290 ;--------------------------------------------------------
                                    291 ; overlayable register banks
                                    292 ;--------------------------------------------------------
                                    293 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        294 	.ds 8
                                    295 ;--------------------------------------------------------
                                    296 ; internal ram data
                                    297 ;--------------------------------------------------------
                                    298 	.area DSEG    (DATA)
                                    299 ;--------------------------------------------------------
                                    300 ; overlayable items in internal ram
                                    301 ;--------------------------------------------------------
                                    302 	.area	OSEG    (OVR,DATA)
                                    303 ;--------------------------------------------------------
                                    304 ; Stack segment in internal ram
                                    305 ;--------------------------------------------------------
                                    306 	.area SSEG
      000060                        307 __start__stack:
      000060                        308 	.ds	1
                                    309 
                                    310 ;--------------------------------------------------------
                                    311 ; indirectly addressable internal ram data
                                    312 ;--------------------------------------------------------
                                    313 	.area ISEG    (DATA)
                                    314 ;--------------------------------------------------------
                                    315 ; absolute internal ram data
                                    316 ;--------------------------------------------------------
                                    317 	.area IABS    (ABS,DATA)
      000030                        318 	.org 0x0030
      000030                        319 _loop_counter::
      000030                        320 	.ds 1
      000031                        321 	.org 0x0031
      000031                        322 _prog_counter::
      000031                        323 	.ds 1
      000034                        324 	.org 0x0034
      000034                        325 _system_tick::
      000034                        326 	.ds 1
      000035                        327 	.org 0x0035
      000035                        328 _op1::
      000035                        329 	.ds 1
      000036                        330 	.org 0x0036
      000036                        331 _op2::
      000036                        332 	.ds 1
      000037                        333 	.org 0x0037
      000037                        334 _active_timer::
      000037                        335 	.ds 1
      000038                        336 	.org 0x0038
      000038                        337 _temp_0::
      000038                        338 	.ds 1
      000039                        339 	.org 0x0039
      000039                        340 _temp1::
      000039                        341 	.ds 1
      00003A                        342 	.org 0x003A
      00003A                        343 _temp2::
      00003A                        344 	.ds 1
      00003C                        345 	.org 0x003C
      00003C                        346 _temp3::
      00003C                        347 	.ds 1
      00003D                        348 	.org 0x003D
      00003D                        349 _instruction_buffer::
      00003D                        350 	.ds 1
      00003E                        351 	.org 0x003E
      00003E                        352 _result_l::
      00003E                        353 	.ds 1
      00003F                        354 	.org 0x003F
      00003F                        355 _result_h::
      00003F                        356 	.ds 1
      000040                        357 	.org 0x0040
      000040                        358 _prog_buffer::
      000040                        359 	.ds 32
                                    360 	.area IABS    (ABS,DATA)
                                    361 ;--------------------------------------------------------
                                    362 ; bit data
                                    363 ;--------------------------------------------------------
                                    364 	.area BSEG    (BIT)
                           000000   365 _is_recieved	=	0x0000
                                    366 ;--------------------------------------------------------
                                    367 ; paged external ram data
                                    368 ;--------------------------------------------------------
                                    369 	.area PSEG    (PAG,XDATA)
                                    370 ;--------------------------------------------------------
                                    371 ; uninitialized external ram data
                                    372 ;--------------------------------------------------------
                                    373 	.area XSEG    (XDATA)
                                    374 ;--------------------------------------------------------
                                    375 ; absolute external ram data
                                    376 ;--------------------------------------------------------
                                    377 	.area XABS    (ABS,XDATA)
      000032                        378 	.org 0x0032
      000032                        379 _rd_pointer::
      000032                        380 	.ds 1
      000033                        381 	.org 0x0033
      000033                        382 _wr_pointer::
      000033                        383 	.ds 1
                                    384 ;--------------------------------------------------------
                                    385 ; initialized external ram data
                                    386 ;--------------------------------------------------------
                                    387 	.area XISEG   (XDATA)
                                    388 	.area HOME    (CODE)
                                    389 	.area GSINIT0 (CODE)
                                    390 	.area GSINIT1 (CODE)
                                    391 	.area GSINIT2 (CODE)
                                    392 	.area GSINIT3 (CODE)
                                    393 	.area GSINIT4 (CODE)
                                    394 	.area GSINIT5 (CODE)
                                    395 	.area GSINIT  (CODE)
                                    396 	.area GSFINAL (CODE)
                                    397 	.area CSEG    (CODE)
                                    398 ;--------------------------------------------------------
                                    399 ; interrupt vector
                                    400 ;--------------------------------------------------------
                                    401 	.area HOME    (CODE)
      000000                        402 __interrupt_vect:
      000000 02 00 74         [24]  403 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  404 	reti
      000004                        405 	.ds	7
      00000B 32               [24]  406 	reti
      00000C                        407 	.ds	7
      000013 32               [24]  408 	reti
      000014                        409 	.ds	7
      00001B 32               [24]  410 	reti
      00001C                        411 	.ds	7
      000023 02 01 5D         [24]  412 	ljmp	_Serial_ISR
      000026                        413 	.ds	5
      00002B 02 01 89         [24]  414 	ljmp	_Timer2_ISR
                                    415 ; restartable atomic support routines
      00002E                        416 	.ds	2
      000030                        417 sdcc_atomic_exchange_rollback_start::
      000030 00               [12]  418 	nop
      000031 00               [12]  419 	nop
      000032                        420 sdcc_atomic_exchange_pdata_impl:
      000032 E2               [24]  421 	movx	a, @r0
      000033 FB               [12]  422 	mov	r3, a
      000034 EA               [12]  423 	mov	a, r2
      000035 F2               [24]  424 	movx	@r0, a
      000036 80 2C            [24]  425 	sjmp	sdcc_atomic_exchange_exit
      000038 00               [12]  426 	nop
      000039 00               [12]  427 	nop
      00003A                        428 sdcc_atomic_exchange_xdata_impl:
      00003A E0               [24]  429 	movx	a, @dptr
      00003B FB               [12]  430 	mov	r3, a
      00003C EA               [12]  431 	mov	a, r2
      00003D F0               [24]  432 	movx	@dptr, a
      00003E 80 24            [24]  433 	sjmp	sdcc_atomic_exchange_exit
      000040                        434 sdcc_atomic_compare_exchange_idata_impl:
      000040 E6               [12]  435 	mov	a, @r0
      000041 B5 02 02         [24]  436 	cjne	a, ar2, .+#5
      000044 EB               [12]  437 	mov	a, r3
      000045 F6               [12]  438 	mov	@r0, a
      000046 22               [24]  439 	ret
      000047 00               [12]  440 	nop
      000048                        441 sdcc_atomic_compare_exchange_pdata_impl:
      000048 E2               [24]  442 	movx	a, @r0
      000049 B5 02 02         [24]  443 	cjne	a, ar2, .+#5
      00004C EB               [12]  444 	mov	a, r3
      00004D F2               [24]  445 	movx	@r0, a
      00004E 22               [24]  446 	ret
      00004F 00               [12]  447 	nop
      000050                        448 sdcc_atomic_compare_exchange_xdata_impl:
      000050 E0               [24]  449 	movx	a, @dptr
      000051 B5 02 02         [24]  450 	cjne	a, ar2, .+#5
      000054 EB               [12]  451 	mov	a, r3
      000055 F0               [24]  452 	movx	@dptr, a
      000056 22               [24]  453 	ret
      000057                        454 sdcc_atomic_exchange_rollback_end::
                                    455 
      000057                        456 sdcc_atomic_exchange_gptr_impl::
      000057 30 F6 E0         [24]  457 	jnb	b.6, sdcc_atomic_exchange_xdata_impl
      00005A A8 82            [24]  458 	mov	r0, dpl
      00005C 20 F5 D3         [24]  459 	jb	b.5, sdcc_atomic_exchange_pdata_impl
      00005F                        460 sdcc_atomic_exchange_idata_impl:
      00005F EA               [12]  461 	mov	a, r2
      000060 C6               [12]  462 	xch	a, @r0
      000061 F5 82            [12]  463 	mov	dpl, a
      000063 22               [24]  464 	ret
      000064                        465 sdcc_atomic_exchange_exit:
      000064 8B 82            [24]  466 	mov	dpl, r3
      000066 22               [24]  467 	ret
      000067                        468 sdcc_atomic_compare_exchange_gptr_impl::
      000067 30 F6 E6         [24]  469 	jnb	b.6, sdcc_atomic_compare_exchange_xdata_impl
      00006A A8 82            [24]  470 	mov	r0, dpl
      00006C 20 F5 D9         [24]  471 	jb	b.5, sdcc_atomic_compare_exchange_pdata_impl
      00006F 80 CF            [24]  472 	sjmp	sdcc_atomic_compare_exchange_idata_impl
                                    473 ;--------------------------------------------------------
                                    474 ; global & static initialisations
                                    475 ;--------------------------------------------------------
                                    476 	.area HOME    (CODE)
                                    477 	.area GSINIT  (CODE)
                                    478 	.area GSFINAL (CODE)
                                    479 	.area GSINIT  (CODE)
                                    480 	.globl __sdcc_gsinit_startup
                                    481 	.globl __sdcc_program_startup
                                    482 	.globl __start__stack
                                    483 	.globl __mcs51_genXINIT
                                    484 	.globl __mcs51_genXRAMCLEAR
                                    485 	.globl __mcs51_genRAMCLEAR
                                    486 ;	include/uvr_variable.h:10: volatile unsigned char __data __at (0x30) loop_counter = 0; //Store Loop Counters
      0000CD 75 30 00         [24]  487 	mov	_loop_counter,#0x00
                                    488 ;	include/uvr_variable.h:12: volatile unsigned char __data __at (0x31)  prog_counter = 0; //Store Program Counters
      0000D0 75 31 00         [24]  489 	mov	_prog_counter,#0x00
                                    490 ;	include/uvr_variable.h:16: volatile unsigned char __data __at (0x34)  system_tick = 0; //Common System Time
      0000D3 75 34 00         [24]  491 	mov	_system_tick,#0x00
                                    492 ;	include/uvr_variable.h:17: volatile unsigned char __data __at (0x35) op1 = 0; //Operand Buffer
      0000D6 75 35 00         [24]  493 	mov	_op1,#0x00
                                    494 ;	include/uvr_variable.h:18: volatile unsigned char __data __at (0x36) op2 = 0; //perand Buffer
      0000D9 75 36 00         [24]  495 	mov	_op2,#0x00
                                    496 ;	include/uvr_variable.h:19: volatile unsigned char __data __at (0x37)  active_timer = 0; //To Calculate Timer Differences
      0000DC 75 37 00         [24]  497 	mov	_active_timer,#0x00
                                    498 ;	include/uvr_variable.h:21: volatile unsigned char __data __at (0x38) temp_0 = 0;
      0000DF 75 38 00         [24]  499 	mov	_temp_0,#0x00
                                    500 ;	include/uvr_variable.h:22: volatile unsigned char __data __at (0x39) temp1 = 0;
      0000E2 75 39 00         [24]  501 	mov	_temp1,#0x00
                                    502 ;	include/uvr_variable.h:23: volatile unsigned char __data __at (0x3A) temp2 = 0; //Temporary Variables
      0000E5 75 3A 00         [24]  503 	mov	_temp2,#0x00
                                    504 ;	include/uvr_variable.h:24: volatile unsigned char __data __at (0x3C) temp3 = 0;
      0000E8 75 3C 00         [24]  505 	mov	_temp3,#0x00
                                    506 ;	include/uvr_variable.h:27: volatile unsigned char __data __at (0x3D) instruction_buffer =0;
      0000EB 75 3D 00         [24]  507 	mov	_instruction_buffer,#0x00
                                    508 ;	include/uvr_variable.h:28: volatile unsigned char __data __at (0x3E) result_l = 0;
      0000EE 75 3E 00         [24]  509 	mov	_result_l,#0x00
                                    510 ;	include/uvr_variable.h:29: volatile unsigned char __data __at (0x3F) result_h = 0;
      0000F1 75 3F 00         [24]  511 	mov	_result_h,#0x00
                                    512 ;	include/uvr_variable.h:33: volatile unsigned char __data __at (0x40) prog_buffer[32] = {0};
      0000F4 75 40 00         [24]  513 	mov	_prog_buffer,#0x00
                                    514 ;	include/uvr_variable.h:13: volatile unsigned char __data __at (0x32)  *rd_pointer = buffer_ptr; //Read Pointer
      0000F7 90 00 32         [24]  515 	mov	dptr,#_rd_pointer
      0000FA 74 40            [12]  516 	mov	a,#0x40
      0000FC F0               [24]  517 	movx	@dptr,a
                                    518 ;	include/uvr_variable.h:14: volatile unsigned char __data __at (0x33)  *wr_pointer = buffer_ptr; //Write Pointer
      0000FD 90 00 33         [24]  519 	mov	dptr,#_wr_pointer
      000100 F0               [24]  520 	movx	@dptr,a
                                    521 	.area GSFINAL (CODE)
      000101 02 00 71         [24]  522 	ljmp	__sdcc_program_startup
                                    523 ;--------------------------------------------------------
                                    524 ; Home
                                    525 ;--------------------------------------------------------
                                    526 	.area HOME    (CODE)
                                    527 	.area HOME    (CODE)
      000071                        528 __sdcc_program_startup:
      000071 02 01 93         [24]  529 	ljmp	_main
                                    530 ;	return from main will return to caller
                                    531 ;--------------------------------------------------------
                                    532 ; code
                                    533 ;--------------------------------------------------------
                                    534 	.area CSEG    (CODE)
                                    535 ;------------------------------------------------------------
                                    536 ;Allocation info for local variables in function 'init_sys'
                                    537 ;------------------------------------------------------------
                                    538 ;	src/main.c:6: void init_sys(void){
                                    539 ;	-----------------------------------------
                                    540 ;	 function init_sys
                                    541 ;	-----------------------------------------
      000104                        542 _init_sys:
                           000007   543 	ar7 = 0x07
                           000006   544 	ar6 = 0x06
                           000005   545 	ar5 = 0x05
                           000004   546 	ar4 = 0x04
                           000003   547 	ar3 = 0x03
                           000002   548 	ar2 = 0x02
                           000001   549 	ar1 = 0x01
                           000000   550 	ar0 = 0x00
                                    551 ;	src/main.c:7: EA = 1;
                                    552 ;	assignBit
      000104 D2 AF            [12]  553 	setb	_EA
                                    554 ;	src/main.c:8: ES = 1;
                                    555 ;	assignBit
      000106 D2 AC            [12]  556 	setb	_ES
                                    557 ;	src/main.c:9: ET2 = 1;
                                    558 ;	assignBit
      000108 D2 AD            [12]  559 	setb	_ET2
                                    560 ;	src/main.c:10: is_recieved = 0;
                                    561 ;	assignBit
      00010A C2 00            [12]  562 	clr	_is_recieved
                                    563 ;	src/main.c:11: }
      00010C 22               [24]  564 	ret
                                    565 ;------------------------------------------------------------
                                    566 ;Allocation info for local variables in function 'init_timer'
                                    567 ;------------------------------------------------------------
                                    568 ;	src/main.c:13: void init_timer(void){
                                    569 ;	-----------------------------------------
                                    570 ;	 function init_timer
                                    571 ;	-----------------------------------------
      00010D                        572 _init_timer:
                                    573 ;	src/main.c:15: T2CON = 0x00;
      00010D 75 C8 00         [24]  574 	mov	_T2CON,#0x00
                                    575 ;	src/main.c:16: RCAP2H = timer_h;
      000110 75 CB 4C         [24]  576 	mov	_RCAP2H,#0x4c
                                    577 ;	src/main.c:17: RCAP2L = timer_l;
      000113 75 CA 00         [24]  578 	mov	_RCAP2L,#0x00
                                    579 ;	src/main.c:18: TH2 = timer_h;
      000116 75 CD 4C         [24]  580 	mov	_TH2,#0x4c
                                    581 ;	src/main.c:19: TL2 = timer_l;
      000119 75 CC 00         [24]  582 	mov	_TL2,#0x00
                                    583 ;	src/main.c:20: TR2 = 1;
                                    584 ;	assignBit
      00011C D2 CA            [12]  585 	setb	_TR2
                                    586 ;	src/main.c:23: }
      00011E 22               [24]  587 	ret
                                    588 ;------------------------------------------------------------
                                    589 ;Allocation info for local variables in function 'init_serial'
                                    590 ;------------------------------------------------------------
                                    591 ;	src/main.c:26: void init_serial(void){
                                    592 ;	-----------------------------------------
                                    593 ;	 function init_serial
                                    594 ;	-----------------------------------------
      00011F                        595 _init_serial:
                                    596 ;	src/main.c:28: TMOD = 0x20;				//Set TMOD to Use Timer 1 in 8 Bit Auto Reload
      00011F 75 89 20         [24]  597 	mov	_TMOD,#0x20
                                    598 ;	src/main.c:29: TH1 = serial_baud_timer;	//Set Reload value
      000122 75 8D FD         [24]  599 	mov	_TH1,#0xfd
                                    600 ;	src/main.c:30: TL1 = serial_baud_timer;	//Set Initial Value
      000125 75 8B FD         [24]  601 	mov	_TL1,#0xfd
                                    602 ;	src/main.c:31: TR1 = 1;					//Start Timer 1
                                    603 ;	assignBit
      000128 D2 8E            [12]  604 	setb	_TR1
                                    605 ;	src/main.c:32: SCON = 0x50;				//Serial Mode 1 , 8 Bit UART
      00012A 75 98 50         [24]  606 	mov	_SCON,#0x50
                                    607 ;	src/main.c:33: TI = 0;
                                    608 ;	assignBit
      00012D C2 99            [12]  609 	clr	_TI
                                    610 ;	src/main.c:34: }
      00012F 22               [24]  611 	ret
                                    612 ;------------------------------------------------------------
                                    613 ;Allocation info for local variables in function 'uart_send'
                                    614 ;------------------------------------------------------------
                                    615 ;dat           Allocated to registers 
                                    616 ;------------------------------------------------------------
                                    617 ;	src/main.c:37: void uart_send(char dat){
                                    618 ;	-----------------------------------------
                                    619 ;	 function uart_send
                                    620 ;	-----------------------------------------
      000130                        621 _uart_send:
      000130 85 82 99         [24]  622 	mov	_SBUF,dpl
                                    623 ;	src/main.c:39: while(!TI);
      000133                        624 00101$:
                                    625 ;	src/main.c:40: TI = 0;
                                    626 ;	assignBit
      000133 10 99 02         [24]  627 	jbc	_TI,00118$
      000136 80 FB            [24]  628 	sjmp	00101$
      000138                        629 00118$:
                                    630 ;	src/main.c:41: }
      000138 22               [24]  631 	ret
                                    632 ;------------------------------------------------------------
                                    633 ;Allocation info for local variables in function 'echo'
                                    634 ;------------------------------------------------------------
                                    635 ;	src/main.c:45: void echo(void){
                                    636 ;	-----------------------------------------
                                    637 ;	 function echo
                                    638 ;	-----------------------------------------
      000139                        639 _echo:
                                    640 ;	src/main.c:47: }
      000139 22               [24]  641 	ret
                                    642 ;------------------------------------------------------------
                                    643 ;Allocation info for local variables in function 'delay_ms_500'
                                    644 ;------------------------------------------------------------
                                    645 ;	src/main.c:53: void delay_ms_500(void){
                                    646 ;	-----------------------------------------
                                    647 ;	 function delay_ms_500
                                    648 ;	-----------------------------------------
      00013A                        649 _delay_ms_500:
                                    650 ;	src/main.c:56: }
      00013A 22               [24]  651 	ret
                                    652 ;------------------------------------------------------------
                                    653 ;Allocation info for local variables in function 'ascii_to_hex'
                                    654 ;------------------------------------------------------------
                                    655 ;	src/main.c:61: void ascii_to_hex(void){
                                    656 ;	-----------------------------------------
                                    657 ;	 function ascii_to_hex
                                    658 ;	-----------------------------------------
      00013B                        659 _ascii_to_hex:
                                    660 ;	src/main.c:64: }
      00013B 22               [24]  661 	ret
                                    662 ;------------------------------------------------------------
                                    663 ;Allocation info for local variables in function 'hex_to_ascii'
                                    664 ;------------------------------------------------------------
                                    665 ;	src/main.c:70: void hex_to_ascii(void){
                                    666 ;	-----------------------------------------
                                    667 ;	 function hex_to_ascii
                                    668 ;	-----------------------------------------
      00013C                        669 _hex_to_ascii:
                                    670 ;	src/main.c:73: }
      00013C 22               [24]  671 	ret
                                    672 ;------------------------------------------------------------
                                    673 ;Allocation info for local variables in function 'print_boot_message'
                                    674 ;------------------------------------------------------------
                                    675 ;	src/main.c:78: void print_boot_message(void){
                                    676 ;	-----------------------------------------
                                    677 ;	 function print_boot_message
                                    678 ;	-----------------------------------------
      00013D                        679 _print_boot_message:
                                    680 ;	src/main.c:79: loop_counter = 0;
      00013D 75 30 00         [24]  681 	mov	_loop_counter,#0x00
                                    682 ;	src/main.c:80: while(loop_counter != 55){
      000140                        683 00101$:
      000140 74 37            [12]  684 	mov	a,#0x37
      000142 B5 30 02         [24]  685 	cjne	a,_loop_counter,00118$
      000145 80 12            [24]  686 	sjmp	00103$
      000147                        687 00118$:
                                    688 ;	src/main.c:81: uart_send(boot_message[loop_counter]);
      000147 E5 30            [12]  689 	mov	a,_loop_counter
      000149 90 01 A5         [24]  690 	mov	dptr,#_boot_message
      00014C 93               [24]  691 	movc	a,@a+dptr
      00014D F5 82            [12]  692 	mov	dpl,a
      00014F 12 01 30         [24]  693 	lcall	_uart_send
                                    694 ;	src/main.c:82: loop_counter++;
      000152 E5 30            [12]  695 	mov	a,_loop_counter
      000154 04               [12]  696 	inc	a
      000155 F5 30            [12]  697 	mov	_loop_counter,a
      000157 80 E7            [24]  698 	sjmp	00101$
      000159                        699 00103$:
                                    700 ;	src/main.c:84: loop_counter = 0;
      000159 75 30 00         [24]  701 	mov	_loop_counter,#0x00
                                    702 ;	src/main.c:85: }
      00015C 22               [24]  703 	ret
                                    704 ;------------------------------------------------------------
                                    705 ;Allocation info for local variables in function 'Serial_ISR'
                                    706 ;------------------------------------------------------------
                                    707 ;	src/main.c:89: void Serial_ISR(void) __interrupt(4)
                                    708 ;	-----------------------------------------
                                    709 ;	 function Serial_ISR
                                    710 ;	-----------------------------------------
      00015D                        711 _Serial_ISR:
      00015D C0 E0            [24]  712 	push	acc
      00015F C0 82            [24]  713 	push	dpl
      000161 C0 83            [24]  714 	push	dph
      000163 C0 01            [24]  715 	push	ar1
      000165 C0 D0            [24]  716 	push	psw
      000167 75 D0 00         [24]  717 	mov	psw,#0x00
                                    718 ;	src/main.c:91: if(RI){
      00016A 30 98 11         [24]  719 	jnb	_RI,00103$
                                    720 ;	src/main.c:92: *wr_pointer = SBUF;
      00016D 90 00 33         [24]  721 	mov	dptr,#_wr_pointer
      000170 E0               [24]  722 	movx	a,@dptr
      000171 F9               [12]  723 	mov	r1,a
      000172 A7 99            [24]  724 	mov	@r1,_SBUF
                                    725 ;	src/main.c:93: is_recieved = 1;
                                    726 ;	assignBit
      000174 D2 00            [12]  727 	setb	_is_recieved
                                    728 ;	src/main.c:94: wr_pointer++;
      000176 90 00 33         [24]  729 	mov	dptr,#_wr_pointer
      000179 E9               [12]  730 	mov	a,r1
      00017A 04               [12]  731 	inc	a
      00017B F0               [24]  732 	movx	@dptr,a
                                    733 ;	src/main.c:95: RI = 0;
                                    734 ;	assignBit
      00017C C2 98            [12]  735 	clr	_RI
      00017E                        736 00103$:
                                    737 ;	src/main.c:97: }
      00017E D0 D0            [24]  738 	pop	psw
      000180 D0 01            [24]  739 	pop	ar1
      000182 D0 83            [24]  740 	pop	dph
      000184 D0 82            [24]  741 	pop	dpl
      000186 D0 E0            [24]  742 	pop	acc
      000188 32               [24]  743 	reti
                                    744 ;	eliminated unneeded push/pop ar0
                                    745 ;	eliminated unneeded push/pop b
                                    746 ;------------------------------------------------------------
                                    747 ;Allocation info for local variables in function 'Timer2_ISR'
                                    748 ;------------------------------------------------------------
                                    749 ;	src/main.c:100: void Timer2_ISR(void) __interrupt(5)
                                    750 ;	-----------------------------------------
                                    751 ;	 function Timer2_ISR
                                    752 ;	-----------------------------------------
      000189                        753 _Timer2_ISR:
      000189 C0 E0            [24]  754 	push	acc
                                    755 ;	src/main.c:102: system_tick++;
      00018B E5 34            [12]  756 	mov	a,_system_tick
      00018D 04               [12]  757 	inc	a
      00018E F5 34            [12]  758 	mov	_system_tick,a
                                    759 ;	src/main.c:103: }
      000190 D0 E0            [24]  760 	pop	acc
      000192 32               [24]  761 	reti
                                    762 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    763 ;	eliminated unneeded push/pop not_psw
                                    764 ;	eliminated unneeded push/pop dpl
                                    765 ;	eliminated unneeded push/pop dph
                                    766 ;	eliminated unneeded push/pop b
                                    767 ;------------------------------------------------------------
                                    768 ;Allocation info for local variables in function 'main'
                                    769 ;------------------------------------------------------------
                                    770 ;	src/main.c:106: void main(void){
                                    771 ;	-----------------------------------------
                                    772 ;	 function main
                                    773 ;	-----------------------------------------
      000193                        774 _main:
                                    775 ;	src/main.c:107: SP = hw_stack; 		//initiaslze Stack Pointer;
      000193 75 81 60         [24]  776 	mov	_SP,#0x60
                                    777 ;	src/main.c:108: init_sys();
      000196 12 01 04         [24]  778 	lcall	_init_sys
                                    779 ;	src/main.c:109: init_serial();
      000199 12 01 1F         [24]  780 	lcall	_init_serial
                                    781 ;	src/main.c:113: print_boot_message();
      00019C 12 01 3D         [24]  782 	lcall	_print_boot_message
                                    783 ;	src/main.c:115: while(1);
      00019F                        784 00102$:
                                    785 ;	src/main.c:116: }
      00019F 80 FE            [24]  786 	sjmp	00102$
                                    787 	.area CSEG    (CODE)
                                    788 	.area CONST   (CODE)
                                    789 	.area CONST   (CODE)
      0001A5                        790 _boot_message:
      0001A5 4D                     791 	.db #0x4d	; 77	'M'
      0001A6 69                     792 	.db #0x69	; 105	'i'
      0001A7 72                     793 	.db #0x72	; 114	'r'
      0001A8 6F                     794 	.db #0x6f	; 111	'o'
      0001A9 63                     795 	.db #0x63	; 99	'c'
      0001AA 20                     796 	.db #0x20	; 32
      0001AB 56                     797 	.db #0x56	; 86	'V'
      0001AC 69                     798 	.db #0x69	; 105	'i'
      0001AD 72                     799 	.db #0x72	; 114	'r'
      0001AE 74                     800 	.db #0x74	; 116	't'
      0001AF 75                     801 	.db #0x75	; 117	'u'
      0001B0 61                     802 	.db #0x61	; 97	'a'
      0001B1 6C                     803 	.db #0x6c	; 108	'l'
      0001B2 2D                     804 	.db #0x2d	; 45
      0001B3 52                     805 	.db #0x52	; 82	'R'
      0001B4 20                     806 	.db #0x20	; 32
      0001B5 24                     807 	.db #0x24	; 36
      0001B6 43                     808 	.db #0x43	; 67	'C'
      0001B7 6F                     809 	.db #0x6f	; 111	'o'
      0001B8 70                     810 	.db #0x70	; 112	'p'
      0001B9 79                     811 	.db #0x79	; 121	'y'
      0001BA 72                     812 	.db #0x72	; 114	'r'
      0001BB 69                     813 	.db #0x69	; 105	'i'
      0001BC 67                     814 	.db #0x67	; 103	'g'
      0001BD 68                     815 	.db #0x68	; 104	'h'
      0001BE 74                     816 	.db #0x74	; 116	't'
      0001BF 20                     817 	.db #0x20	; 32
      0001C0 32                     818 	.db #0x32	; 50	'2'
      0001C1 30                     819 	.db #0x30	; 48	'0'
      0001C2 32                     820 	.db #0x32	; 50	'2'
      0001C3 36                     821 	.db #0x36	; 54	'6'
      0001C4 20                     822 	.db #0x20	; 32
      0001C5 42                     823 	.db #0x42	; 66	'B'
      0001C6 61                     824 	.db #0x61	; 97	'a'
      0001C7 69                     825 	.db #0x69	; 105	'i'
      0001C8 62                     826 	.db #0x62	; 98	'b'
      0001C9 68                     827 	.db #0x68	; 104	'h'
      0001CA 61                     828 	.db #0x61	; 97	'a'
      0001CB 76                     829 	.db #0x76	; 118	'v'
      0001CC 20                     830 	.db #0x20	; 32
      0001CD 42                     831 	.db #0x42	; 66	'B'
      0001CE 68                     832 	.db #0x68	; 104	'h'
      0001CF 61                     833 	.db #0x61	; 97	'a'
      0001D0 74                     834 	.db #0x74	; 116	't'
      0001D1 74                     835 	.db #0x74	; 116	't'
      0001D2 61                     836 	.db #0x61	; 97	'a'
      0001D3 63                     837 	.db #0x63	; 99	'c'
      0001D4 68                     838 	.db #0x68	; 104	'h'
      0001D5 72                     839 	.db #0x72	; 114	'r'
      0001D6 79                     840 	.db #0x79	; 121	'y'
      0001D7 61                     841 	.db #0x61	; 97	'a'
      0001D8 0D                     842 	.db #0x0d	; 13
      0001D9 0A                     843 	.db #0x0a	; 10
      0001DA 00                     844 	.db 0x00
      0001DB 00                     845 	.db 0x00
                                    846 	.area CSEG    (CODE)
                                    847 	.area CONST   (CODE)
      0001DC                        848 _ready_msg:
      0001DC 52                     849 	.db #0x52	; 82	'R'
      0001DD 45                     850 	.db #0x45	; 69	'E'
      0001DE 41                     851 	.db #0x41	; 65	'A'
      0001DF 44                     852 	.db #0x44	; 68	'D'
      0001E0 59                     853 	.db #0x59	; 89	'Y'
      0001E1 0D                     854 	.db #0x0d	; 13
      0001E2 0A                     855 	.db #0x0a	; 10
                                    856 	.area CSEG    (CODE)
                                    857 	.area XINIT   (CODE)
                                    858 	.area CABS    (ABS,CODE)
