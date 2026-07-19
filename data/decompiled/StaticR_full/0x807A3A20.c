/* Function at 0x807A3A20, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807A3A20(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807A3A30
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807A3A38
    r30 = r3;
    if (==) goto 0x0x807a3a80;
    /* lis r12, 0 */ // 0x807A3A44
    *(0 + r3) = r12; // stw @ 0x807A3A4C
    r12 = *(0x10 + r12); // lwz @ 0x807A3A50
    /* mtctr r12 */ // 0x807A3A54
    /* bctrl  */ // 0x807A3A58
    r12 = *(0 + r30); // lwz @ 0x807A3A5C
    r3 = r30;
    r12 = *(0x20 + r12); // lwz @ 0x807A3A64
    /* mtctr r12 */ // 0x807A3A68
    /* bctrl  */ // 0x807A3A6C
    if (<=) goto 0x0x807a3a80;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807A3A84
    r30 = *(8 + r1); // lwz @ 0x807A3A88
    r0 = *(0x14 + r1); // lwz @ 0x807A3A8C
    return;
}