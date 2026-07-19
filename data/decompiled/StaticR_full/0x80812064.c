/* Function at 0x80812064, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80812064(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80812070
    r31 = r3;
    r3 = *(0xbc + r3); // lwz @ 0x80812078
    r12 = *(0 + r3); // lwz @ 0x8081207C
    r12 = *(0xc + r12); // lwz @ 0x80812080
    /* mtctr r12 */ // 0x80812084
    /* bctrl  */ // 0x80812088
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xbc + r31); // lwz @ 0x80812094
    r4 = r31 + 0x58; // 0x80812098
    r12 = *(0 + r3); // lwz @ 0x8081209C
    r12 = *(0x78 + r12); // lwz @ 0x808120A0
    /* mtctr r12 */ // 0x808120A4
    /* bctrl  */ // 0x808120A8
    r3 = *(0xbc + r31); // lwz @ 0x808120AC
    r12 = *(0 + r3); // lwz @ 0x808120B0
    r12 = *(0x80 + r12); // lwz @ 0x808120B4
    /* mtctr r12 */ // 0x808120B8
    /* bctrl  */ // 0x808120BC
    r0 = *(0x14 + r1); // lwz @ 0x808120C0
    r31 = *(0xc + r1); // lwz @ 0x808120C4
    return;
}