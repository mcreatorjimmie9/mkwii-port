/* Function at 0x80780C28, size=280 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80780C28(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80780C34
    r31 = r3;
    r0 = *(0xc0 + r3); // lbz @ 0x80780C3C
    if (==) goto 0x0x80780ccc;
    r12 = *(0 + r3); // lwz @ 0x80780C48
    r12 = *(0x24 + r12); // lwz @ 0x80780C4C
    /* mtctr r12 */ // 0x80780C50
    /* bctrl  */ // 0x80780C54
    /* lis r4, 0 */ // 0x80780C58
    r7 = r3;
    r4 = *(0 + r4); // lwz @ 0x80780C60
    /* lis r0, 0x4330 */ // 0x80780C64
    /* lis r5, 0 */ // 0x80780C68
    /* lis r6, 0 */ // 0x80780C6C
    r9 = *(4 + r4); // lwz @ 0x80780C70
    /* lis r4, 0 */ // 0x80780C74
    r12 = *(0 + r31); // lwz @ 0x80780C78
    r7 = r7 rlwinm 1; // rlwinm
    r8 = *(0xc + r9); // lwz @ 0x80780C80
    r3 = r31;
    *(8 + r1) = r0; // stw @ 0x80780C88
    /* lhax r7, r8, r7 */ // 0x80780C8C
    r9 = *(8 + r9); // lwz @ 0x80780C90
    /* mulli r0, r7, 0x74 */ // 0x80780C94
    /* lfs f0, 0(r5) */ // 0x80780C98
    /* lfd f3, 0(r6) */ // 0x80780C9C
    r12 = *(0x88 + r12); // lwz @ 0x80780CA0
    r5 = r9 + r0; // 0x80780CA4
    /* lfs f2, 0(r4) */ // 0x80780CA8
    r0 = *(0x6c + r5); // lha @ 0x80780CAC
    /* xoris r0, r0, 0x8000 */ // 0x80780CB0
    *(0xc + r1) = r0; // stw @ 0x80780CB4
    /* lfd f1, 8(r1) */ // 0x80780CB8
    /* fsubs f1, f1, f3 */ // 0x80780CBC
    /* fmuls f1, f0, f1 */ // 0x80780CC0
    /* mtctr r12 */ // 0x80780CC4
    /* bctrl  */ // 0x80780CC8
    /* li r3, 0x12c */ // 0x80780CCC
    /* li r4, 0xb4 */ // 0x80780CD0
    /* li r0, 0x1e0 */ // 0x80780CD4
    *(0xcc + r31) = r3; // stw @ 0x80780CD8
    /* lis r3, 0 */ // 0x80780CDC
    *(0xd0 + r31) = r4; // stw @ 0x80780CE0
    *(0xc8 + r31) = r0; // stw @ 0x80780CE4
    r3 = *(0 + r3); // lwz @ 0x80780CE8
    r0 = *(0xb74 + r3); // lwz @ 0x80780CEC
    if (!=) goto 0x0x80780d00;
    /* li r0, 0 */ // 0x80780CF8
    *(0xc8 + r31) = r0; // stw @ 0x80780CFC
    r0 = *(0xc0 + r31); // lbz @ 0x80780D00
    if (==) goto 0x0x80780d20;
    r12 = *(0 + r31); // lwz @ 0x80780D0C
    r3 = r31;
    r12 = *(0x90 + r12); // lwz @ 0x80780D14
    /* mtctr r12 */ // 0x80780D18
    /* bctrl  */ // 0x80780D1C
    r3 = r31;
    /* li r4, 0 */ // 0x80780D24
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x24 + r1); // lwz @ 0x80780D2C
    r31 = *(0x1c + r1); // lwz @ 0x80780D30
    return;
}