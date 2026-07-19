/* Function at 0x80798798, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80798798(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807987A0
    *(0x14 + r1) = r0; // stw @ 0x807987A4
    /* lfs f1, 0(r4) */ // 0x807987A8
    /* li r4, 0x182 */ // 0x807987AC
    *(0xc + r1) = r31; // stw @ 0x807987B0
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x807987B8
    r12 = *(0xe0 + r12); // lwz @ 0x807987BC
    /* mtctr r12 */ // 0x807987C0
    /* bctrl  */ // 0x807987C4
    if (==) goto 0x0x807987e4;
    r0 = *(0xf4 + r31); // lwz @ 0x807987D0
    if (==) goto 0x0x807987e4;
    r4 = r0 | 1; // 0x807987DC
    FUN_807A027C(); // bl 0x807A027C
    r0 = *(0x14 + r1); // lwz @ 0x807987E4
    r31 = *(0xc + r1); // lwz @ 0x807987E8
    return;
}