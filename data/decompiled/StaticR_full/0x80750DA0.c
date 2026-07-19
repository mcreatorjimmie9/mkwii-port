/* Function at 0x80750DA0, size=288 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80750DA0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80750DA8
    /* lis r4, 0 */ // 0x80750DAC
    *(0x24 + r1) = r0; // stw @ 0x80750DB0
    /* lis r0, 0x4330 */ // 0x80750DB4
    /* lfd f2, 0(r5) */ // 0x80750DB8
    /* lis r5, 0 */ // 0x80750DBC
    *(0x1c + r1) = r31; // stw @ 0x80750DC0
    r31 = r3;
    /* lfs f0, 0(r4) */ // 0x80750DC8
    r6 = *(0xdc + r3); // lha @ 0x80750DCC
    *(0x10 + r1) = r0; // stw @ 0x80750DD0
    r6 = r6 + 1; // 0x80750DD4
    /* extsh r0, r6 */ // 0x80750DD8
    *(0xdc + r3) = r6; // sth @ 0x80750DDC
    /* xoris r0, r0, 0x8000 */ // 0x80750DE0
    *(0x14 + r1) = r0; // stw @ 0x80750DE4
    /* lfd f1, 0x10(r1) */ // 0x80750DE8
    /* fsubs f2, f1, f2 */ // 0x80750DEC
    /* lfs f1, 0(r5) */ // 0x80750DF0
    /* fmuls f1, f1, f2 */ // 0x80750DF4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80750DF8
    /* cror cr0eq, cr0gt, cr0eq */ // 0x80750DFC
    if (!=) goto 0x0x80750e48;
    /* li r5, 0 */ // 0x80750E04
    /* li r6, 1 */ // 0x80750E08
    /* li r4, -1 */ // 0x80750E0C
    /* li r0, 0xff */ // 0x80750E10
    *(0xdc + r3) = r4; // sth @ 0x80750E14
    r4 = r3 + 0xd4; // 0x80750E18
    *(0xde + r3) = r6; // stb @ 0x80750E1C
    *(0xdf + r3) = r6; // stb @ 0x80750E20
    *(0xd4 + r3) = r5; // stb @ 0x80750E24
    *(0xd5 + r3) = r5; // stb @ 0x80750E28
    *(0xd6 + r3) = r5; // stb @ 0x80750E2C
    *(0xd7 + r3) = r0; // stb @ 0x80750E30
    r12 = *(0 + r3); // lwz @ 0x80750E34
    r12 = *(0xf4 + r12); // lwz @ 0x80750E38
    /* mtctr r12 */ // 0x80750E3C
    /* bctrl  */ // 0x80750E40
    /* b 0x80750eac */ // 0x80750E44
    /* li r0, -1 */ // 0x80750E48
    /* lis r5, 0 */ // 0x80750E4C
    *(0xc + r1) = r0; // stw @ 0x80750E50
    /* li r7, 0 */ // 0x80750E54
    /* li r6, 0xff */ // 0x80750E58
    *(8 + r1) = r0; // stw @ 0x80750E60
    r3 = r3 + 0xd4; // 0x80750E64
    r0 = *(0 + r5); // lbz @ 0x80750E68
    *(0xc + r1) = r7; // stb @ 0x80750E70
    *(0xd + r1) = r7; // stb @ 0x80750E74
    *(0xe + r1) = r7; // stb @ 0x80750E78
    *(0xf + r1) = r6; // stb @ 0x80750E7C
    *(8 + r1) = r0; // stb @ 0x80750E80
    *(9 + r1) = r7; // stb @ 0x80750E84
    *(0xa + r1) = r7; // stb @ 0x80750E88
    *(0xb + r1) = r6; // stb @ 0x80750E8C
    FUN_80637E8C(); // bl 0x80637E8C
    r12 = *(0 + r31); // lwz @ 0x80750E94
    r3 = r31;
    r4 = r31 + 0xd4; // 0x80750E9C
    r12 = *(0xf4 + r12); // lwz @ 0x80750EA0
    /* mtctr r12 */ // 0x80750EA4
    /* bctrl  */ // 0x80750EA8
    r0 = *(0x24 + r1); // lwz @ 0x80750EAC
    r31 = *(0x1c + r1); // lwz @ 0x80750EB0
    return;
}