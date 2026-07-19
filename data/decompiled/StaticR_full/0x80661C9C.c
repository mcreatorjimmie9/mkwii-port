/* Function at 0x80661C9C, size=448 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80661C9C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0x26 */ // 0x80661CAC
    /* lis r30, 0 */ // 0x80661CB4
    *(0x14 + r1) = r29; // stw @ 0x80661CB8
    /* li r29, 0 */ // 0x80661CBC
    *(0x10 + r1) = r28; // stw @ 0x80661CC0
    r28 = r3;
    r4 = r29;
    r3 = r28 + 0x188; // 0x80661CCC
    FUN_8066E0EC(r4, r3); // bl 0x8066E0EC
    /* neg r0, r3 */ // 0x80661CD4
    r0 = r0 | r3; // 0x80661CD8
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x80661CDC
    if (==) goto 0x0x80661e30;
    r4 = r29;
    r3 = r28 + 0x188; // 0x80661CE8
    FUN_8066E0EC(r4, r3); // bl 0x8066E0EC
    /* clrlwi r0, r29, 0x18 */ // 0x80661CF0
    r5 = *(0 + r30); // lwz @ 0x80661CF4
    /* mulli r4, r0, 0xf0 */ // 0x80661CF8
    r0 = *(4 + r3); // lwz @ 0x80661CFC
    r6 = r3 + 0xf; // 0x80661D00
    r4 = r5 + r4; // 0x80661D04
    *(0xc30 + r4) = r0; // stw @ 0x80661D08
    r7 = r4 + 0xc3b; // 0x80661D0C
    r0 = *(8 + r3); // lbz @ 0x80661D10
    *(0xc34 + r4) = r0; // stb @ 0x80661D14
    r0 = *(9 + r3); // lbz @ 0x80661D18
    *(0xc35 + r4) = r0; // stb @ 0x80661D1C
    r0 = *(0xc + r3); // lwz @ 0x80661D20
    *(0xc38 + r4) = r0; // stw @ 0x80661D24
    /* mtctr r31 */ // 0x80661D28
    r5 = *(1 + r6); // lbz @ 0x80661D2C
    /* lbzu r0, 2(r6) */ // 0x80661D30
    *(1 + r7) = r5; // stb @ 0x80661D34
    /* stbu r0, 2(r7) */ // 0x80661D38
    if (counter-- != 0) goto 0x0x80661d2c;
    r0 = *(0x5c + r3); // lwz @ 0x80661D40
    *(0xc88 + r4) = r0; // stw @ 0x80661D44
    r0 = *(0x60 + r3); // lbz @ 0x80661D48
    *(0xc8c + r4) = r0; // stb @ 0x80661D4C
    r0 = *(0x61 + r3); // lbz @ 0x80661D50
    *(0xc8d + r4) = r0; // stb @ 0x80661D54
    r0 = *(0x62 + r3); // lbz @ 0x80661D58
    *(0xc8e + r4) = r0; // stb @ 0x80661D5C
    r0 = *(0x63 + r3); // lbz @ 0x80661D60
    *(0xc8f + r4) = r0; // stb @ 0x80661D64
    r0 = *(0x64 + r3); // lwz @ 0x80661D68
    *(0xc90 + r4) = r0; // stw @ 0x80661D6C
    r0 = *(0x6c + r3); // lwz @ 0x80661D70
    r5 = *(0x68 + r3); // lwz @ 0x80661D74
    *(0xc94 + r4) = r5; // stw @ 0x80661D78
    *(0xc98 + r4) = r0; // stw @ 0x80661D7C
    r0 = *(0x74 + r3); // lwz @ 0x80661D80
    r5 = *(0x70 + r3); // lwz @ 0x80661D84
    *(0xc9c + r4) = r5; // stw @ 0x80661D88
    *(0xca0 + r4) = r0; // stw @ 0x80661D8C
    r0 = *(0x7c + r3); // lwz @ 0x80661D90
    r5 = *(0x78 + r3); // lwz @ 0x80661D94
    *(0xca4 + r4) = r5; // stw @ 0x80661D98
    *(0xca8 + r4) = r0; // stw @ 0x80661D9C
    r0 = *(0x84 + r3); // lwz @ 0x80661DA0
    r5 = *(0x80 + r3); // lwz @ 0x80661DA4
    *(0xcac + r4) = r5; // stw @ 0x80661DA8
    *(0xcb0 + r4) = r0; // stw @ 0x80661DAC
    r0 = *(0x8c + r3); // lwz @ 0x80661DB0
    r5 = *(0x88 + r3); // lwz @ 0x80661DB4
    *(0xcb4 + r4) = r5; // stw @ 0x80661DB8
    *(0xcb8 + r4) = r0; // stw @ 0x80661DBC
    r0 = *(0x94 + r3); // lwz @ 0x80661DC0
    r5 = *(0x90 + r3); // lwz @ 0x80661DC4
    *(0xcbc + r4) = r5; // stw @ 0x80661DC8
    *(0xcc0 + r4) = r0; // stw @ 0x80661DCC
    r0 = *(0x9c + r3); // lwz @ 0x80661DD0
    r5 = *(0x98 + r3); // lwz @ 0x80661DD4
    *(0xcc4 + r4) = r5; // stw @ 0x80661DD8
    *(0xcc8 + r4) = r0; // stw @ 0x80661DDC
    r0 = *(0xa0 + r3); // lwz @ 0x80661DE0
    *(0xccc + r4) = r0; // stw @ 0x80661DE4
    r0 = *(0xa4 + r3); // lbz @ 0x80661DE8
    *(0xcd0 + r4) = r0; // stb @ 0x80661DEC
    r0 = *(0xa5 + r3); // lbz @ 0x80661DF0
    *(0xcd1 + r4) = r0; // stb @ 0x80661DF4
    r0 = *(0xa6 + r3); // lbz @ 0x80661DF8
    *(0xcd2 + r4) = r0; // stb @ 0x80661DFC
    r0 = *(0xa8 + r3); // lwz @ 0x80661E00
    *(0xcd4 + r4) = r0; // stw @ 0x80661E04
    r0 = *(0xac + r3); // lbz @ 0x80661E08
    *(0xcd8 + r4) = r0; // stb @ 0x80661E0C
    r0 = *(0xad + r3); // lbz @ 0x80661E10
    *(0xcd9 + r4) = r0; // stb @ 0x80661E14
    r0 = *(0xae + r3); // lbz @ 0x80661E18
    *(0xcda + r4) = r0; // stb @ 0x80661E1C
    r0 = *(0xb0 + r3); // lwz @ 0x80661E20
    *(0xcdc + r4) = r0; // stw @ 0x80661E24
    r0 = *(0xb4 + r3); // lwz @ 0x80661E28
    *(0xce0 + r4) = r0; // stw @ 0x80661E2C
    r29 = r29 + 1; // 0x80661E30
    if (<) goto 0x0x80661cc8;
    r0 = *(0x24 + r1); // lwz @ 0x80661E3C
    r31 = *(0x1c + r1); // lwz @ 0x80661E40
    r30 = *(0x18 + r1); // lwz @ 0x80661E44
    r29 = *(0x14 + r1); // lwz @ 0x80661E48
    r28 = *(0x10 + r1); // lwz @ 0x80661E4C
    return;
}