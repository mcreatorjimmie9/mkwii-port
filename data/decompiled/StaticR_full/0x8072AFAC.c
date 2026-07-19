/* Function at 0x8072AFAC, size=948 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 17 function(s) */

int FUN_8072AFAC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8072AFB4
    *(0xc + r1) = r31; // stw @ 0x8072AFBC
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8072AFC4
    /* li r30, 0 */ // 0x8072AFC8
    r0 = *(0x15 + r3); // lbz @ 0x8072AFCC
    *(0xba + r3) = r4; // stb @ 0x8072AFD0
    if (==) goto 0x0x8072afec;
    r0 = *(0x16 + r3); // lha @ 0x8072AFDC
    if (!=) goto 0x0x8072afec;
    /* li r30, 1 */ // 0x8072AFE8
    r0 = *(0x129 + r3); // lbz @ 0x8072AFEC
    if (!=) goto 0x0x8072b010;
    r0 = *(0x12a + r3); // lbz @ 0x8072AFF8
    if (==) goto 0x0x8072b348;
    if (!=) goto 0x0x8072b010;
    /* b 0x8072b348 */ // 0x8072B00C
    /* lis r3, 0 */ // 0x8072B010
    r3 = *(0 + r3); // lwz @ 0x8072B014
    r0 = *(0x20 + r3); // lwz @ 0x8072B018
    if (>) goto 0x0x8072b348;
    FUN_805C25E8(r3); // bl 0x805C25E8
    if (<=) goto 0x0x8072b168;
    r3 = *(0x118 + r31); // lwz @ 0x8072B030
    FUN_8061DC70(); // bl 0x8061DC70
    r0 = *(0x2c + r3); // lhz @ 0x8072B038
    /* clrlwi. r0, r0, 0x1f */ // 0x8072B03C
    if (==) goto 0x0x8072b168;
    r0 = *(0x124 + r31); // lwz @ 0x8072B044
    if (!=) goto 0x0x8072b104;
    r0 = *(0x7b9 + r31); // lbz @ 0x8072B050
    if (==) goto 0x0x8072b088;
    r4 = *(0x530 + r31); // lwz @ 0x8072B05C
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8072B064
    r8 = r31 + 0x7bc; // 0x8072B068
    /* li r5, 0x1a */ // 0x8072B06C
    /* li r6, 0x1d */ // 0x8072B070
    /* li r9, 1 */ // 0x8072B074
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* li r0, 1 */ // 0x8072B07C
    *(0xba + r31) = r0; // stb @ 0x8072B080
    /* b 0x8072b0a8 */ // 0x8072B084
    r4 = *(0x530 + r31); // lwz @ 0x8072B088
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8072B090
    r8 = r31 + 0x7bc; // 0x8072B094
    /* li r5, 0x1a */ // 0x8072B098
    /* li r6, 0x1d */ // 0x8072B09C
    /* li r9, 1 */ // 0x8072B0A0
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x7ba + r31); // lbz @ 0x8072B0A8
    if (==) goto 0x0x8072b0e0;
    r4 = *(0x530 + r31); // lwz @ 0x8072B0B4
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8072B0BC
    r8 = r31 + 0x7c8; // 0x8072B0C0
    /* li r5, 0x1d */ // 0x8072B0C4
    /* li r6, 0x20 */ // 0x8072B0C8
    /* li r9, 1 */ // 0x8072B0CC
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* li r0, 1 */ // 0x8072B0D4
    *(0xba + r31) = r0; // stb @ 0x8072B0D8
    /* b 0x8072b328 */ // 0x8072B0DC
    r4 = *(0x530 + r31); // lwz @ 0x8072B0E0
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8072B0E8
    r8 = r31 + 0x7c8; // 0x8072B0EC
    /* li r5, 0x1d */ // 0x8072B0F0
    /* li r6, 0x20 */ // 0x8072B0F4
    /* li r9, 1 */ // 0x8072B0F8
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    /* b 0x8072b328 */ // 0x8072B100
    if (!=) goto 0x0x8072b328;
    r0 = *(0x7ba + r31); // lbz @ 0x8072B10C
    if (==) goto 0x0x8072b144;
    r4 = *(0x614 + r31); // lwz @ 0x8072B118
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8072B120
    r8 = r31 + 0x7c8; // 0x8072B124
    /* li r5, 0x16 */ // 0x8072B128
    /* li r6, 0x19 */ // 0x8072B12C
    /* li r9, 1 */ // 0x8072B130
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* li r0, 1 */ // 0x8072B138
    *(0xba + r31) = r0; // stb @ 0x8072B13C
    /* b 0x8072b328 */ // 0x8072B140
    r4 = *(0x614 + r31); // lwz @ 0x8072B144
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8072B14C
    r8 = r31 + 0x7c8; // 0x8072B150
    /* li r5, 0x16 */ // 0x8072B154
    /* li r6, 0x19 */ // 0x8072B158
    /* li r9, 1 */ // 0x8072B15C
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    /* b 0x8072b328 */ // 0x8072B164
    if (!=) goto 0x0x8072b328;
    r0 = *(0x15 + r31); // lbz @ 0x8072B170
    if (==) goto 0x0x8072b2b0;
    r3 = *(0x16 + r31); // lha @ 0x8072B17C
    r0 = *(0x18 + r31); // lha @ 0x8072B180
    if (>=) goto 0x0x8072b2b0;
    r0 = *(0x124 + r31); // lwz @ 0x8072B18C
    if (!=) goto 0x0x8072b24c;
    r0 = *(0x7b9 + r31); // lbz @ 0x8072B198
    if (==) goto 0x0x8072b1d0;
    r4 = *(0x530 + r31); // lwz @ 0x8072B1A4
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8072B1AC
    r8 = r31 + 0x7bc; // 0x8072B1B0
    /* li r5, 0x1a */ // 0x8072B1B4
    /* li r6, 0x1d */ // 0x8072B1B8
    /* li r9, 1 */ // 0x8072B1BC
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* li r0, 1 */ // 0x8072B1C4
    *(0xba + r31) = r0; // stb @ 0x8072B1C8
    /* b 0x8072b1f0 */ // 0x8072B1CC
    r4 = *(0x530 + r31); // lwz @ 0x8072B1D0
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8072B1D8
    r8 = r31 + 0x7bc; // 0x8072B1DC
    /* li r5, 0x1a */ // 0x8072B1E0
    /* li r6, 0x1d */ // 0x8072B1E4
    /* li r9, 1 */ // 0x8072B1E8
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x7ba + r31); // lbz @ 0x8072B1F0
    if (==) goto 0x0x8072b228;
    r4 = *(0x530 + r31); // lwz @ 0x8072B1FC
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8072B204
    r8 = r31 + 0x7c8; // 0x8072B208
    /* li r5, 0x1d */ // 0x8072B20C
    /* li r6, 0x20 */ // 0x8072B210
    /* li r9, 1 */ // 0x8072B214
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* li r0, 1 */ // 0x8072B21C
    *(0xba + r31) = r0; // stb @ 0x8072B220
    /* b 0x8072b328 */ // 0x8072B224
    r4 = *(0x530 + r31); // lwz @ 0x8072B228
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8072B230
    r8 = r31 + 0x7c8; // 0x8072B234
    /* li r5, 0x1d */ // 0x8072B238
    /* li r6, 0x20 */ // 0x8072B23C
    /* li r9, 1 */ // 0x8072B240
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    /* b 0x8072b328 */ // 0x8072B248
    if (!=) goto 0x0x8072b328;
    r0 = *(0x7ba + r31); // lbz @ 0x8072B254
    if (==) goto 0x0x8072b28c;
    r4 = *(0x614 + r31); // lwz @ 0x8072B260
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8072B268
    r8 = r31 + 0x7c8; // 0x8072B26C
    /* li r5, 0x16 */ // 0x8072B270
    /* li r6, 0x19 */ // 0x8072B274
    /* li r9, 1 */ // 0x8072B278
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* li r0, 1 */ // 0x8072B280
    *(0xba + r31) = r0; // stb @ 0x8072B284
    /* b 0x8072b328 */ // 0x8072B288
    r4 = *(0x614 + r31); // lwz @ 0x8072B28C
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8072B294
    r8 = r31 + 0x7c8; // 0x8072B298
    /* li r5, 0x16 */ // 0x8072B29C
    /* li r6, 0x19 */ // 0x8072B2A0
    /* li r9, 1 */ // 0x8072B2A4
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    /* b 0x8072b328 */ // 0x8072B2AC
    r0 = *(0x124 + r31); // lwz @ 0x8072B2B0
    if (!=) goto 0x0x8072b300;
    r4 = *(0x530 + r31); // lwz @ 0x8072B2BC
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8072B2C4
    r8 = r31 + 0x7bc; // 0x8072B2C8
    /* li r5, 0x1a */ // 0x8072B2CC
    /* li r6, 0x1d */ // 0x8072B2D0
    /* li r9, 1 */ // 0x8072B2D4
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r4 = *(0x530 + r31); // lwz @ 0x8072B2DC
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8072B2E4
    r8 = r31 + 0x7c8; // 0x8072B2E8
    /* li r5, 0x1d */ // 0x8072B2EC
    /* li r6, 0x20 */ // 0x8072B2F0
    /* li r9, 1 */ // 0x8072B2F4
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    /* b 0x8072b328 */ // 0x8072B2FC
    if (!=) goto 0x0x8072b328;
    r4 = *(0x614 + r31); // lwz @ 0x8072B308
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x8072B310
    r8 = r31 + 0x7c8; // 0x8072B314
    /* li r5, 0x16 */ // 0x8072B318
    /* li r6, 0x19 */ // 0x8072B31C
    /* li r9, 1 */ // 0x8072B320
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r3 = *(0x16 + r31); // lha @ 0x8072B328
    r0 = r3 + 1; // 0x8072B32C
    *(0x16 + r31) = r0; // sth @ 0x8072B330
    /* extsh r0, r0 */ // 0x8072B334
    if (<=) goto 0x0x8072b348;
    /* li r0, 0x3e8 */ // 0x8072B340
    *(0x16 + r31) = r0; // sth @ 0x8072B344
    r0 = *(0x14 + r1); // lwz @ 0x8072B348
    r31 = *(0xc + r1); // lwz @ 0x8072B34C
    r30 = *(8 + r1); // lwz @ 0x8072B350
    return;
}