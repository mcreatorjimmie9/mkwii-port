/* Function at 0x806C19D4, size=404 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_806C19D4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806C19DC
    *(0x14 + r1) = r0; // stw @ 0x806C19E0
    *(0xc + r1) = r31; // stw @ 0x806C19E4
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x806C19EC
    r4 = *(0 + r4); // lwz @ 0x806C19F0
    r0 = *(0 + r4); // lwz @ 0x806C19F4
    if (==) goto 0x0x806c1a48;
    if (>=) goto 0x0x806c1a28;
    if (==) goto 0x0x806c1a54;
    if (>=) goto 0x0x806c1a1c;
    if (>=) goto 0x0x806c1a48;
    /* b 0x806c1a88 */ // 0x806C1A18
    if (>=) goto 0x0x806c1a88;
    /* b 0x806c1a48 */ // 0x806C1A24
    if (>=) goto 0x0x806c1a40;
    if (==) goto 0x0x806c1a48;
    if (>=) goto 0x0x806c1a88;
    /* b 0x806c1a54 */ // 0x806C1A3C
    if (>=) goto 0x0x806c1a88;
    /* li r0, -1 */ // 0x806C1A48
    *(0x350 + r3) = r0; // stw @ 0x806C1A4C
    /* b 0x806c1a88 */ // 0x806C1A50
    /* lis r4, 0 */ // 0x806C1A54
    r4 = *(0 + r4); // lwz @ 0x806C1A58
    r0 = *(0x291c + r4); // lwz @ 0x806C1A5C
    /* mulli r0, r0, 0x58 */ // 0x806C1A60
    r4 = r4 + r0; // 0x806C1A64
    r0 = *(0x59 + r4); // lbz @ 0x806C1A68
    if (!=) goto 0x0x806c1a80;
    /* li r0, 2 */ // 0x806C1A74
    *(0x350 + r3) = r0; // stw @ 0x806C1A78
    /* b 0x806c1a88 */ // 0x806C1A7C
    /* li r0, 3 */ // 0x806C1A80
    *(0x350 + r3) = r0; // stw @ 0x806C1A84
    /* lis r4, 0 */ // 0x806C1A88
    r4 = *(0 + r4); // lwz @ 0x806C1A8C
    r4 = *(0 + r4); // lwz @ 0x806C1A90
    r0 = *(0 + r4); // lwz @ 0x806C1A94
    if (<) goto 0x0x806c1aa8;
    if (<=) goto 0x0x806c1ac8;
    if (<) goto 0x0x806c1ab8;
    if (<=) goto 0x0x806c1ad4;
    if (<) goto 0x0x806c1adc;
    if (>) goto 0x0x806c1adc;
    /* li r0, 1 */ // 0x806C1AC8
    *(0x358 + r3) = r0; // stb @ 0x806C1ACC
    /* b 0x806c1adc */ // 0x806C1AD0
    /* li r0, 2 */ // 0x806C1AD4
    *(0x358 + r3) = r0; // stb @ 0x806C1AD8
    r12 = *(0x44 + r3); // lwzu @ 0x806C1ADC
    /* li r4, 0 */ // 0x806C1AE0
    /* li r5, 0 */ // 0x806C1AE4
    r12 = *(0x10 + r12); // lwz @ 0x806C1AE8
    /* mtctr r12 */ // 0x806C1AEC
    /* bctrl  */ // 0x806C1AF0
    r3 = r31;
    r4 = r31 + 0x44; // 0x806C1AF8
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 2 */ // 0x806C1B04
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x54; // 0x806C1B10
    /* li r4, 0 */ // 0x806C1B14
    /* li r6, 0 */ // 0x806C1B18
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r4, 0 */ // 0x806C1B20
    r3 = r31 + 0x54; // 0x806C1B24
    r4 = r4 + 0; // 0x806C1B28
    r4 = r4 + 0x3ab; // 0x806C1B2C
    FUN_806775EC(r4, r3, r4, r4); // bl 0x806775EC
    r3 = r31;
    r5 = r31 + 0x1c8; // 0x806C1B38
    /* li r4, 1 */ // 0x806C1B3C
    /* li r6, 0 */ // 0x806C1B40
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x1c8; // 0x806C1B48
    r4 = r31 + 0x344; // 0x806C1B4C
    FUN_8064EEA8(r4, r6, r3, r4); // bl 0x8064EEA8
    r0 = *(0x14 + r1); // lwz @ 0x806C1B54
    r31 = *(0xc + r1); // lwz @ 0x806C1B58
    return;
}