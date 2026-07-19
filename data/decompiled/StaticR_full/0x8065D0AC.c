/* Function at 0x8065D0AC, size=616 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_8065D0AC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8065D0BC
    r30 = r3;
    r0 = *(0x11ac + r3); // lwz @ 0x8065D0C4
    if (==) goto 0x0x8065d2fc;
    /* lis r4, 0x1b4f */ // 0x8065D0D0
    r5 = *(0x20 + r3); // lwz @ 0x8065D0D4
    r0 = r4 + -0x7e4b; // 0x8065D0D8
    /* mulhw r0, r0, r5 */ // 0x8065D0DC
    r0 = r0 >> 5; // srawi
    /* srwi r3, r0, 0x1f */ // 0x8065D0E4
    r0 = r0 + r3; // 0x8065D0E8
    /* mulli r0, r0, 0x12c */ // 0x8065D0EC
    /* subf. r0, r0, r5 */ // 0x8065D0F0
    if (!=) goto 0x0x8065d2fc;
    /* lis r31, 0 */ // 0x8065D0F8
    r3 = *(0 + r31); // lwz @ 0x8065D0FC
    r3 = *(0 + r3); // lwz @ 0x8065D100
    r3 = *(0x404 + r3); // lwz @ 0x8065D104
    FUN_806599D4(); // bl 0x806599D4
    r3 = *(0 + r31); // lwz @ 0x8065D10C
    r4 = *(0x1108 + r30); // lwz @ 0x8065D110
    r3 = *(0 + r3); // lwz @ 0x8065D114
    r3 = *(0x404 + r3); // lwz @ 0x8065D118
    FUN_8065984C(); // bl 0x8065984C
    r31 = r3;
    r3 = r30 + 0x42c; // 0x8065D124
    r4 = r31;
    FUN_8065C630(r3, r4); // bl 0x8065C630
    r3 = *(0x11ac + r30); // lwz @ 0x8065D130
    r0 = r3 + -0x15; // 0x8065D134
    if (<=) goto 0x0x8065d148;
    if (!=) goto 0x0x8065d150;
    /* li r0, 1 */ // 0x8065D148
    /* b 0x8065d154 */ // 0x8065D14C
    /* li r0, 0 */ // 0x8065D150
    if (!=) goto 0x0x8065d1c0;
    r0 = r31 + -0x15; // 0x8065D15C
    if (<=) goto 0x0x8065d170;
    if (!=) goto 0x0x8065d178;
    /* li r0, 1 */ // 0x8065D170
    /* b 0x8065d17c */ // 0x8065D174
    /* li r0, 0 */ // 0x8065D178
    if (!=) goto 0x0x8065d1c0;
    r0 = r31 + -0x15; // 0x8065D184
    if (<=) goto 0x0x8065d1ac;
    if (!=) goto 0x0x8065d220;
    r3 = r30;
    /* li r4, 0x3e */ // 0x8065D19C
    /* li r5, 0 */ // 0x8065D1A0
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    /* b 0x8065d220 */ // 0x8065D1A8
    r3 = r30;
    /* li r4, 0x3d */ // 0x8065D1B0
    /* li r5, 0 */ // 0x8065D1B4
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    /* b 0x8065d220 */ // 0x8065D1BC
    r0 = r3 + -0x15; // 0x8065D1C0
    if (<=) goto 0x0x8065d1d4;
    if (!=) goto 0x0x8065d1dc;
    /* li r0, 1 */ // 0x8065D1D4
    /* b 0x8065d1e0 */ // 0x8065D1D8
    /* li r0, 0 */ // 0x8065D1DC
    if (!=) goto 0x0x8065d220;
    r0 = r31 + -0x15; // 0x8065D1E8
    if (<=) goto 0x0x8065d1fc;
    if (!=) goto 0x0x8065d204;
    /* li r0, 1 */ // 0x8065D1FC
    /* b 0x8065d208 */ // 0x8065D200
    /* li r0, 0 */ // 0x8065D204
    if (!=) goto 0x0x8065d220;
    r3 = r30;
    /* li r4, 0x3f */ // 0x8065D214
    /* li r5, -1 */ // 0x8065D218
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    r0 = r31 + -0x15; // 0x8065D220
    if (<=) goto 0x0x8065d234;
    if (!=) goto 0x0x8065d23c;
    /* li r0, 1 */ // 0x8065D234
    /* b 0x8065d240 */ // 0x8065D238
    /* li r0, 0 */ // 0x8065D23C
    if (!=) goto 0x0x8065d280;
    r3 = *(0x11ac + r30); // lwz @ 0x8065D248
    r0 = r3 + -0x15; // 0x8065D24C
    if (<=) goto 0x0x8065d260;
    if (!=) goto 0x0x8065d268;
    /* li r0, 1 */ // 0x8065D260
    /* b 0x8065d26c */ // 0x8065D264
    /* li r0, 0 */ // 0x8065D268
    if (!=) goto 0x0x8065d280;
    /* li r0, 1 */ // 0x8065D274
    *(0xbb8 + r30) = r0; // stb @ 0x8065D278
    /* b 0x8065d2f8 */ // 0x8065D27C
    r0 = r31 + -0x15; // 0x8065D280
    if (<=) goto 0x0x8065d294;
    if (!=) goto 0x0x8065d29c;
    /* li r0, 1 */ // 0x8065D294
    /* b 0x8065d2a0 */ // 0x8065D298
    /* li r0, 0 */ // 0x8065D29C
    if (!=) goto 0x0x8065d2f8;
    r3 = *(0x11ac + r30); // lwz @ 0x8065D2A8
    r0 = r3 + -0x15; // 0x8065D2AC
    if (<=) goto 0x0x8065d2c0;
    if (!=) goto 0x0x8065d2c8;
    /* li r0, 1 */ // 0x8065D2C0
    /* b 0x8065d2cc */ // 0x8065D2C4
    /* li r0, 0 */ // 0x8065D2C8
    if (!=) goto 0x0x8065d2f8;
    r3 = r30 + 0x42c; // 0x8065D2D4
    FUN_8064A340(r3); // bl 0x8064A340
    if (==) goto 0x0x8065d2f0;
    r3 = r30 + 0x8d4; // 0x8065D2E4
    /* li r4, 0 */ // 0x8065D2E8
    FUN_80649F40(r3, r4); // bl 0x80649F40
    /* li r0, 0 */ // 0x8065D2F0
    *(0xbb8 + r30) = r0; // stb @ 0x8065D2F4
    *(0x11ac + r30) = r31; // stw @ 0x8065D2F8
    r0 = *(0x14 + r1); // lwz @ 0x8065D2FC
    r31 = *(0xc + r1); // lwz @ 0x8065D300
    r30 = *(8 + r1); // lwz @ 0x8065D304
    return;
}