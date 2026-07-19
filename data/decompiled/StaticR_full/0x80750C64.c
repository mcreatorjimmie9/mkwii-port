/* Function at 0x80750C64, size=276 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80750C64(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80750C6C
    /* lis r4, 0 */ // 0x80750C70
    *(0x24 + r1) = r0; // stw @ 0x80750C74
    /* lis r0, 0x4330 */ // 0x80750C78
    /* lfd f2, 0(r5) */ // 0x80750C7C
    /* lis r5, 0 */ // 0x80750C80
    *(0x1c + r1) = r31; // stw @ 0x80750C84
    r31 = r3;
    /* lfs f0, 0(r4) */ // 0x80750C8C
    r6 = *(0xd8 + r3); // lha @ 0x80750C90
    *(0x10 + r1) = r0; // stw @ 0x80750C94
    r6 = r6 + 1; // 0x80750C98
    /* extsh r0, r6 */ // 0x80750C9C
    *(0xd8 + r3) = r6; // sth @ 0x80750CA0
    /* xoris r0, r0, 0x8000 */ // 0x80750CA4
    *(0x14 + r1) = r0; // stw @ 0x80750CA8
    /* lfd f1, 0x10(r1) */ // 0x80750CAC
    /* fsubs f2, f1, f2 */ // 0x80750CB0
    /* lfs f1, 0(r5) */ // 0x80750CB4
    /* fmuls f1, f1, f2 */ // 0x80750CB8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80750CBC
    /* cror cr0eq, cr0gt, cr0eq */ // 0x80750CC0
    if (!=) goto 0x0x80750d08;
    /* li r5, 0xff */ // 0x80750CC8
    /* li r0, 0 */ // 0x80750CCC
    /* li r4, -1 */ // 0x80750CD0
    /* li r6, 1 */ // 0x80750CD4
    *(0xd8 + r3) = r4; // sth @ 0x80750CD8
    r4 = r3 + 0xd4; // 0x80750CDC
    *(0xda + r3) = r6; // stb @ 0x80750CE0
    *(0xd4 + r3) = r5; // stb @ 0x80750CE4
    *(0xd5 + r3) = r0; // stb @ 0x80750CE8
    *(0xd6 + r3) = r0; // stb @ 0x80750CEC
    *(0xd7 + r3) = r5; // stb @ 0x80750CF0
    r12 = *(0 + r3); // lwz @ 0x80750CF4
    r12 = *(0xf4 + r12); // lwz @ 0x80750CF8
    /* mtctr r12 */ // 0x80750CFC
    /* bctrl  */ // 0x80750D00
    /* b 0x80750d64 */ // 0x80750D04
    /* li r0, -1 */ // 0x80750D08
    *(0xc + r1) = r0; // stw @ 0x80750D0C
    /* li r6, 0 */ // 0x80750D10
    *(8 + r1) = r0; // stw @ 0x80750D18
    /* li r0, 0xff */ // 0x80750D1C
    r3 = r3 + 0xd4; // 0x80750D24
    *(0xc + r1) = r6; // stb @ 0x80750D28
    *(0xd + r1) = r6; // stb @ 0x80750D2C
    *(0xe + r1) = r6; // stb @ 0x80750D30
    *(0xf + r1) = r0; // stb @ 0x80750D34
    *(8 + r1) = r0; // stb @ 0x80750D38
    *(9 + r1) = r6; // stb @ 0x80750D3C
    *(0xa + r1) = r6; // stb @ 0x80750D40
    *(0xb + r1) = r0; // stb @ 0x80750D44
    FUN_80637E8C(); // bl 0x80637E8C
    r12 = *(0 + r31); // lwz @ 0x80750D4C
    r3 = r31;
    r4 = r31 + 0xd4; // 0x80750D54
    r12 = *(0xf4 + r12); // lwz @ 0x80750D58
    /* mtctr r12 */ // 0x80750D5C
    /* bctrl  */ // 0x80750D60
    r0 = *(0x24 + r1); // lwz @ 0x80750D64
    r31 = *(0x1c + r1); // lwz @ 0x80750D68
    return;
}