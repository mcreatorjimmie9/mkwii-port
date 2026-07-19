/* Function at 0x808FEF28, size=1016 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 3 function(s) */

int FUN_808FEF28(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* lis r4, 0 */ // 0x808FEF30
    *(0x44 + r1) = r0; // stw @ 0x808FEF34
    /* stmw r21, 0x14(r1) */ // 0x808FEF38
    r23 = r3;
    r5 = *(0x14c + r3); // lwz @ 0x808FEF40
    r0 = *(0 + r4); // lwz @ 0x808FEF44
    r4 = r5 + 1; // 0x808FEF48
    /* subfc r0, r0, r4 */ // 0x808FEF4C
    /* subfe r0, r0, r0 */ // 0x808FEF50
    r0 = r4 & r0; // 0x808FEF54
    *(0x14c + r3) = r0; // stw @ 0x808FEF58
    FUN_808FC79C(r4); // bl 0x808FC79C
    r12 = *(0 + r23); // lwz @ 0x808FEF60
    r26 = r3;
    r3 = r23;
    /* li r4, 1 */ // 0x808FEF6C
    r12 = *(0x68 + r12); // lwz @ 0x808FEF70
    /* mtctr r12 */ // 0x808FEF74
    /* bctrl  */ // 0x808FEF78
    r12 = *(0 + r23); // lwz @ 0x808FEF7C
    r3 = r23;
    /* li r4, 1 */ // 0x808FEF84
    r12 = *(0xf0 + r12); // lwz @ 0x808FEF88
    /* mtctr r12 */ // 0x808FEF8C
    /* bctrl  */ // 0x808FEF90
    /* li r25, 0 */ // 0x808FEF94
    /* li r24, 0 */ // 0x808FEF98
    /* lis r28, 0 */ // 0x808FEF9C
    /* lis r27, 0 */ // 0x808FEFA0
    /* lis r29, 0x101 */ // 0x808FEFA4
    /* li r30, -1 */ // 0x808FEFA8
    /* li r31, 0 */ // 0x808FEFAC
    /* b 0x808ff374 */ // 0x808FEFB0
    r0 = *(0x314 + r23); // lwz @ 0x808FEFB4
    /* lwzx r8, r24, r0 */ // 0x808FEFB8
    r6 = r0 + r24; // 0x808FEFBC
    if (==) goto 0x0x808ff36c;
    r0 = *(8 + r6); // lwz @ 0x808FEFC8
    if (==) goto 0x0x808ff36c;
    r3 = *(0 + r27); // lwz @ 0x808FEFD4
    /* li r0, 0 */ // 0x808FEFD8
    /* li r4, 0 */ // 0x808FEFDC
    r5 = *(0x25 + r3); // lbz @ 0x808FEFE0
    if (==) goto 0x0x808ff140;
    r3 = r5 + 0xf8; // 0x808FEFF0
    if (<=) goto 0x0x808ff104;
    /* clrlwi r9, r3, 0x18 */ // 0x808FEFF8
    r3 = *(0 + r28); // lwz @ 0x808FEFFC
    r7 = r9 + 7; // 0x808FF000
    /* srwi r7, r7, 3 */ // 0x808FF004
    /* mtctr r7 */ // 0x808FF008
    if (<=) goto 0x0x808ff104;
    r9 = *(0x18 + r3); // lwz @ 0x808FF014
    r7 = r4 rlwinm 2; // rlwinm
    r4 = r4 + 8; // 0x808FF01C
    /* lwzux r9, r7, r9 */ // 0x808FF020
    r9 = *(0x334 + r9); // lhz @ 0x808FF024
    r10 = *(4 + r7); // lwz @ 0x808FF028
    r9 = r9 rlwinm 0x1b; // rlwinm
    r21 = *(8 + r7); // lwz @ 0x808FF030
    r11 = r0 | r9; // 0x808FF034
    r10 = *(0x334 + r10); // lhz @ 0x808FF038
    /* neg r0, r11 */ // 0x808FF03C
    r9 = *(0x334 + r21); // lhz @ 0x808FF040
    r11 = r0 | r11; // 0x808FF044
    r12 = *(0xc + r7); // lwz @ 0x808FF048
    /* srwi r11, r11, 0x1f */ // 0x808FF04C
    r10 = r10 rlwinm 0x1b; // rlwinm
    r11 = r11 | r10; // 0x808FF054
    r0 = *(0x334 + r12); // lhz @ 0x808FF058
    /* neg r10, r11 */ // 0x808FF05C
    r12 = *(0x10 + r7); // lwz @ 0x808FF060
    r10 = r10 | r11; // 0x808FF064
    r9 = r9 rlwinm 0x1b; // rlwinm
    /* srwi r10, r10, 0x1f */ // 0x808FF06C
    r11 = *(0x334 + r12); // lhz @ 0x808FF070
    r12 = r10 | r9; // 0x808FF074
    r21 = *(0x14 + r7); // lwz @ 0x808FF078
    /* neg r9, r12 */ // 0x808FF07C
    r0 = r0 rlwinm 0x1b; // rlwinm
    r9 = r9 | r12; // 0x808FF084
    r10 = *(0x334 + r21); // lhz @ 0x808FF088
    /* srwi r9, r9, 0x1f */ // 0x808FF08C
    r21 = *(0x18 + r7); // lwz @ 0x808FF090
    r22 = r9 | r0; // 0x808FF094
    r7 = *(0x1c + r7); // lwz @ 0x808FF098
    /* neg r12, r22 */ // 0x808FF09C
    r11 = r11 rlwinm 0x1b; // rlwinm
    r0 = *(0x334 + r7); // lhz @ 0x808FF0A4
    r7 = r12 | r22; // 0x808FF0A8
    /* srwi r7, r7, 0x1f */ // 0x808FF0AC
    r12 = r10 rlwinm 0x1b; // rlwinm
    r10 = r7 | r11; // 0x808FF0B4
    r9 = *(0x334 + r21); // lhz @ 0x808FF0B8
    /* neg r7, r10 */ // 0x808FF0BC
    r0 = r0 rlwinm 0x1b; // rlwinm
    r7 = r7 | r10; // 0x808FF0C4
    r11 = r9 rlwinm 0x1b; // rlwinm
    /* srwi r7, r7, 0x1f */ // 0x808FF0CC
    r9 = r7 | r12; // 0x808FF0D0
    /* neg r7, r9 */ // 0x808FF0D4
    r7 = r7 | r9; // 0x808FF0D8
    /* srwi r7, r7, 0x1f */ // 0x808FF0DC
    r9 = r7 | r11; // 0x808FF0E0
    /* neg r7, r9 */ // 0x808FF0E4
    r7 = r7 | r9; // 0x808FF0E8
    /* srwi r7, r7, 0x1f */ // 0x808FF0EC
    r7 = r7 | r0; // 0x808FF0F0
    /* neg r0, r7 */ // 0x808FF0F4
    r0 = r0 | r7; // 0x808FF0F8
    /* srwi r0, r0, 0x1f */ // 0x808FF0FC
    if (counter-- != 0) goto 0x0x808ff014;
    r9 = *(0 + r28); // lwz @ 0x808FF104
    /* b 0x808ff134 */ // 0x808FF108
    r7 = *(0x18 + r9); // lwz @ 0x808FF10C
    r3 = r4 rlwinm 2; // rlwinm
    r4 = r4 + 1; // 0x808FF114
    /* lwzx r3, r7, r3 */ // 0x808FF118
    r3 = *(0x334 + r3); // lhz @ 0x808FF11C
    r3 = r3 rlwinm 0x1b; // rlwinm
    r3 = r0 | r3; // 0x808FF124
    /* neg r0, r3 */ // 0x808FF128
    r0 = r0 | r3; // 0x808FF12C
    /* srwi r0, r0, 0x1f */ // 0x808FF130
    /* clrlwi r3, r4, 0x18 */ // 0x808FF134
    if (<) goto 0x0x808ff10c;
    r3 = *(0x10 + r6); // lwz @ 0x808FF140
    if (==) goto 0x0x808ff1d4;
    r3 = *(0x20 + r3); // lwz @ 0x808FF14C
    r4 = r29 + 0x101; // 0x808FF150
    /* andc. r3, r4, r3 */ // 0x808FF154
    if (!=) goto 0x0x808ff1d4;
    if (!=) goto 0x0x808ff1d4;
    r3 = r8 + 0x74; // 0x808FF164
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x808ff17c;
    /* li r3, 0 */ // 0x808FF174
    /* b 0x808ff180 */ // 0x808FF178
    r3 = *(0xc + r3); // lwz @ 0x808FF17C
    /* li r0, 0 */ // 0x808FF184
    if (==) goto 0x0x808ff194;
    if (!=) goto 0x0x808ff198;
    /* li r0, 1 */ // 0x808FF194
    if (==) goto 0x0x808ff314;
    r3 = *(0x314 + r23); // lwz @ 0x808FF1A0
    /* lwzx r3, r3, r24 */ // 0x808FF1A4
    r12 = *(0 + r3); // lwz @ 0x808FF1A8
    r12 = *(0x10 + r12); // lwz @ 0x808FF1AC
    /* mtctr r12 */ // 0x808FF1B0
    /* bctrl  */ // 0x808FF1B4
    r0 = *(0x314 + r23); // lwz @ 0x808FF1B8
    r3 = r0 + r24; // 0x808FF1BC
    r0 = *(4 + r3); // lbz @ 0x808FF1C0
    if (!=) goto 0x0x808ff314;
    *(8 + r3) = r31; // stw @ 0x808FF1CC
    /* b 0x808ff36c */ // 0x808FF1D0
    r3 = r8 + 0x74; // 0x808FF1D4
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x808ff1ec;
    /* li r3, 0 */ // 0x808FF1E4
    /* b 0x808ff1f0 */ // 0x808FF1E8
    r3 = *(0xc + r3); // lwz @ 0x808FF1EC
    /* li r0, 0 */ // 0x808FF1F4
    if (==) goto 0x0x808ff204;
    if (!=) goto 0x0x808ff208;
    /* li r0, 1 */ // 0x808FF204
    if (==) goto 0x0x808ff22c;
    r3 = *(0x314 + r23); // lwz @ 0x808FF210
    /* lwzx r3, r3, r24 */ // 0x808FF214
    r12 = *(0 + r3); // lwz @ 0x808FF218
    r12 = *(0x80 + r12); // lwz @ 0x808FF21C
    /* mtctr r12 */ // 0x808FF220
    /* bctrl  */ // 0x808FF224
    /* b 0x808ff314 */ // 0x808FF228
    r0 = *(0x314 + r23); // lwz @ 0x808FF22C
    r3 = r0 + r24; // 0x808FF230
    r0 = *(4 + r3); // lbz @ 0x808FF234
    if (==) goto 0x0x808ff2f0;
    r3 = *(0 + r3); // lwz @ 0x808FF240
    r12 = *(0 + r3); // lwz @ 0x808FF244
    r12 = *(0xc + r12); // lwz @ 0x808FF248
    /* mtctr r12 */ // 0x808FF24C
    /* bctrl  */ // 0x808FF250
    r0 = *(0x314 + r23); // lwz @ 0x808FF254
    /* lwzx r3, r24, r0 */ // 0x808FF258
    r4 = r0 + r24; // 0x808FF25C
    r4 = r4 + 0x20; // 0x808FF260
    r12 = *(0 + r3); // lwz @ 0x808FF264
    r12 = *(0x70 + r12); // lwz @ 0x808FF268
    /* mtctr r12 */ // 0x808FF26C
    /* bctrl  */ // 0x808FF270
    r0 = *(0x314 + r23); // lwz @ 0x808FF274
    /* lwzx r3, r24, r0 */ // 0x808FF278
    r4 = r0 + r24; // 0x808FF27C
    r4 = r4 + 0x2c; // 0x808FF280
    r12 = *(0 + r3); // lwz @ 0x808FF284
    r12 = *(0x78 + r12); // lwz @ 0x808FF288
    /* mtctr r12 */ // 0x808FF28C
    /* bctrl  */ // 0x808FF290
    r0 = *(0x314 + r23); // lwz @ 0x808FF294
    /* lwzx r3, r24, r0 */ // 0x808FF298
    r4 = r0 + r24; // 0x808FF29C
    r4 = r4 + 0x14; // 0x808FF2A0
    r12 = *(0 + r3); // lwz @ 0x808FF2A4
    r12 = *(0x74 + r12); // lwz @ 0x808FF2A8
    /* mtctr r12 */ // 0x808FF2AC
    /* bctrl  */ // 0x808FF2B0
    r0 = *(0x314 + r23); // lwz @ 0x808FF2B4
    /* lwzx r3, r24, r0 */ // 0x808FF2B8
    r4 = r0 + r24; // 0x808FF2BC
    r4 = r4 + 0x5c; // 0x808FF2C0
    r12 = *(0 + r3); // lwz @ 0x808FF2C4
    r12 = *(0x58 + r12); // lwz @ 0x808FF2C8
    /* mtctr r12 */ // 0x808FF2CC
    /* bctrl  */ // 0x808FF2D0
    r3 = *(0x314 + r23); // lwz @ 0x808FF2D4
    /* lwzx r3, r3, r24 */ // 0x808FF2D8
    r12 = *(0 + r3); // lwz @ 0x808FF2DC
    r12 = *(0x80 + r12); // lwz @ 0x808FF2E0
    /* mtctr r12 */ // 0x808FF2E4
    /* bctrl  */ // 0x808FF2E8
    /* b 0x808ff314 */ // 0x808FF2EC
    r3 = *(0 + r3); // lwz @ 0x808FF2F0
    r12 = *(0 + r3); // lwz @ 0x808FF2F4
    r12 = *(0x10 + r12); // lwz @ 0x808FF2F8
    /* mtctr r12 */ // 0x808FF2FC
    /* bctrl  */ // 0x808FF300
    r0 = *(0x314 + r23); // lwz @ 0x808FF304
    r3 = r0 + r24; // 0x808FF308
    *(8 + r3) = r31; // stw @ 0x808FF30C
    /* b 0x808ff36c */ // 0x808FF310
    r0 = *(0x314 + r23); // lwz @ 0x808FF314
    r3 = r0 + r24; // 0x808FF318
    r4 = *(8 + r3); // lwz @ 0x808FF31C
}