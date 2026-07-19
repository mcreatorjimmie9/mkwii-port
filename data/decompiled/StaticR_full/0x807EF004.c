/* Function at 0x807EF004, size=476 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807EF004(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807EF018
    r4 = *(0xd0 + r3); // lwz @ 0x807EF01C
    /* addic. r0, r4, -1 */ // 0x807EF020
    *(0xd0 + r3) = r0; // stw @ 0x807EF024
    if (>) goto 0x0x807ef1c8;
    r5 = *(0xa0 + r3); // lwz @ 0x807EF02C
    /* li r4, 0 */ // 0x807EF030
    r30 = *(0xd8 + r3); // lwz @ 0x807EF034
    r5 = *(0 + r5); // lwz @ 0x807EF038
    r0 = *(0x34 + r5); // lha @ 0x807EF040
    *(0xd0 + r3) = r0; // stw @ 0x807EF044
    if (<) goto 0x0x807ef05c;
    r0 = *(0xc0 + r3); // lwz @ 0x807EF04C
    if (>=) goto 0x0x807ef05c;
    /* li r4, 1 */ // 0x807EF058
    if (!=) goto 0x0x807ef074;
    r12 = *(0xbc + r3); // lwzu @ 0x807EF064
    r12 = *(0x18 + r12); // lwz @ 0x807EF068
    /* mtctr r12 */ // 0x807EF06C
    /* bctrl  */ // 0x807EF070
    r5 = *(0xc4 + r31); // lwz @ 0x807EF074
    /* slwi r4, r30, 2 */ // 0x807EF078
    /* li r0, 1 */ // 0x807EF07C
    /* lis r3, 0 */ // 0x807EF080
    /* lwzx r30, r5, r4 */ // 0x807EF084
    *(0xb0 + r30) = r0; // stw @ 0x807EF088
    r3 = *(0 + r3); // lwz @ 0x807EF08C
    r0 = *(0x55 + r3); // lbz @ 0x807EF090
    if (!=) goto 0x0x807ef0dc;
    /* lis r3, 0 */ // 0x807EF09C
    r3 = *(0 + r3); // lwz @ 0x807EF0A0
    r0 = *(0xb80 + r3); // lwz @ 0x807EF0A4
    if (==) goto 0x0x807ef0dc;
    r12 = *(0 + r30); // lwz @ 0x807EF0B0
    r3 = r30;
    /* li r4, 1 */ // 0x807EF0B8
    r12 = *(0x68 + r12); // lwz @ 0x807EF0BC
    /* mtctr r12 */ // 0x807EF0C0
    /* bctrl  */ // 0x807EF0C4
    r12 = *(0 + r30); // lwz @ 0x807EF0C8
    r3 = r30;
    r12 = *(0x94 + r12); // lwz @ 0x807EF0D0
    /* mtctr r12 */ // 0x807EF0D4
    /* bctrl  */ // 0x807EF0D8
    r3 = *(0x20 + r30); // lwz @ 0x807EF0DC
    /* lis r4, 0 */ // 0x807EF0E0
    /* lfs f1, 0(r4) */ // 0x807EF0E4
    /* li r4, 0 */ // 0x807EF0E8
    r12 = *(0 + r3); // lwz @ 0x807EF0EC
    r12 = *(0x10 + r12); // lwz @ 0x807EF0F0
    /* mtctr r12 */ // 0x807EF0F4
    /* bctrl  */ // 0x807EF0F8
    r4 = *(0x20 + r30); // lwz @ 0x807EF0FC
    /* li r5, 1 */ // 0x807EF100
    /* li r3, 0 */ // 0x807EF104
    *(0x17 + r4) = r5; // stb @ 0x807EF108
    *(0xbc + r30) = r5; // stb @ 0x807EF10C
    r30 = *(0xd4 + r31); // lwz @ 0x807EF110
    if (<) goto 0x0x807ef12c;
    r0 = *(0xb4 + r31); // lwz @ 0x807EF11C
    if (>=) goto 0x0x807ef12c;
    r3 = r5;
    if (!=) goto 0x0x807ef148;
    r12 = *(0xb0 + r31); // lwz @ 0x807EF134
    r3 = r31 + 0xb0; // 0x807EF138
    r12 = *(0x18 + r12); // lwz @ 0x807EF13C
    /* mtctr r12 */ // 0x807EF140
    /* bctrl  */ // 0x807EF144
    r5 = *(0xb8 + r31); // lwz @ 0x807EF148
    /* slwi r4, r30, 2 */ // 0x807EF14C
    /* lis r3, 0 */ // 0x807EF150
    /* li r0, 2 */ // 0x807EF154
    /* lwzx r30, r5, r4 */ // 0x807EF158
    /* li r4, 0 */ // 0x807EF15C
    /* lfs f1, 0(r3) */ // 0x807EF160
    *(0xc8 + r30) = r0; // stw @ 0x807EF164
    r3 = *(0x20 + r30); // lwz @ 0x807EF168
    r12 = *(0 + r3); // lwz @ 0x807EF16C
    r12 = *(0x10 + r12); // lwz @ 0x807EF170
    /* mtctr r12 */ // 0x807EF174
    /* bctrl  */ // 0x807EF178
    r3 = *(0x20 + r30); // lwz @ 0x807EF17C
    /* li r0, 1 */ // 0x807EF180
    *(0x17 + r3) = r0; // stb @ 0x807EF184
    r3 = *(0xd4 + r31); // lwz @ 0x807EF188
    r0 = *(0xcc + r31); // lwz @ 0x807EF18C
    r3 = r3 + 1; // 0x807EF190
    *(0xd4 + r31) = r3; // stw @ 0x807EF194
    if (!=) goto 0x0x807ef1a8;
    /* li r0, 0 */ // 0x807EF1A0
    *(0xd4 + r31) = r0; // stw @ 0x807EF1A4
    r3 = *(0xd8 + r31); // lwz @ 0x807EF1A8
    r0 = *(0xcc + r31); // lwz @ 0x807EF1AC
    r3 = r3 + 1; // 0x807EF1B0
    *(0xd8 + r31) = r3; // stw @ 0x807EF1B4
    if (!=) goto 0x0x807ef1c8;
    /* li r0, 0 */ // 0x807EF1C0
    *(0xd8 + r31) = r0; // stw @ 0x807EF1C4
    r0 = *(0x14 + r1); // lwz @ 0x807EF1C8
    r31 = *(0xc + r1); // lwz @ 0x807EF1CC
    r30 = *(8 + r1); // lwz @ 0x807EF1D0
    return;
}