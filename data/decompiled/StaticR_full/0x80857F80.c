/* Function at 0x80857F80, size=360 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80857F80(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80857F94
    r0 = *(0xa8 + r3); // lbz @ 0x80857F98
    if (!=) goto 0x0x808580d0;
    r0 = *(0xb4 + r3); // lbz @ 0x80857FA4
    if (!=) goto 0x0x808580d0;
    /* li r30, 0x19 */ // 0x80857FB4
    if (==) goto 0x0x80857fc0;
    /* li r30, 0x18 */ // 0x80857FBC
    r3 = *(0xc + r3); // lwz @ 0x80857FC0
    r4 = r30;
    FUN_808F5118(r4); // bl 0x808F5118
    r3 = *(0x6c + r31); // lwz @ 0x80857FCC
    r4 = r30;
    r3 = *(0x28 + r3); // lwz @ 0x80857FD4
    FUN_805E6F54(r4, r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x80857FDC
    if (==) goto 0x0x808580d0;
    /* li r0, 0 */ // 0x80857FEC
    if (<=) goto 0x0x80858004;
    if (<) goto 0x0x80858008;
    if (>) goto 0x0x80858008;
    /* li r0, 1 */ // 0x80858004
    if (==) goto 0x0x80858018;
    /* li r0, 0 */ // 0x80858010
    *(0x2d8 + r31) = r0; // stw @ 0x80858014
    r0 = *(0xfa + r31); // lhz @ 0x80858018
    /* lis r3, 0 */ // 0x8085801C
    *(0xfc + r31) = r0; // sth @ 0x80858020
    /* lis r5, 0 */ // 0x80858024
    r6 = *(0x6c + r31); // lwz @ 0x80858028
    r4 = r30;
    /* lfs f1, 0(r3) */ // 0x80858030
    r3 = *(0x28 + r6); // lwz @ 0x80858034
    /* lfs f2, 0(r5) */ // 0x80858038
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(0x2e4 + r31); // lwz @ 0x80858040
    /* li r4, 0xff */ // 0x80858044
    /* li r0, 0 */ // 0x80858048
    *(0x1c8 + r31) = r4; // sth @ 0x8085804C
    *(0x1ca + r31) = r4; // sth @ 0x80858054
    *(0xf8 + r31) = r0; // stb @ 0x80858058
    *(0xfa + r31) = r30; // sth @ 0x8085805C
    if (==) goto 0x0x80858074;
    r12 = *(0xc + r3); // lwz @ 0x80858064
    r12 = *(0x30 + r12); // lwz @ 0x80858068
    /* mtctr r12 */ // 0x8085806C
    /* bctrl  */ // 0x80858070
    r3 = *(0xfc + r31); // lhz @ 0x80858074
    /* li r0, 0 */ // 0x80858078
    if (==) goto 0x0x8085808c;
    if (!=) goto 0x0x80858090;
    /* li r0, 1 */ // 0x8085808C
    if (==) goto 0x0x808580d0;
    r3 = *(0xfa + r31); // lhz @ 0x80858098
    /* li r0, 0 */ // 0x8085809C
    if (==) goto 0x0x808580b0;
    if (!=) goto 0x0x808580b4;
    /* li r0, 1 */ // 0x808580B0
    if (!=) goto 0x0x808580d0;
    r3 = r31;
    /* li r4, 1 */ // 0x808580C0
    /* li r5, 0 */ // 0x808580C4
    /* li r6, 1 */ // 0x808580C8
    FUN_8061E8CC(r3, r4, r5, r6); // bl 0x8061E8CC
    r0 = *(0x14 + r1); // lwz @ 0x808580D0
    r31 = *(0xc + r1); // lwz @ 0x808580D4
    r30 = *(8 + r1); // lwz @ 0x808580D8
    return;
}