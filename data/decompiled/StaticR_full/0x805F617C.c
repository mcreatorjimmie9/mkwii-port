/* Function at 0x805F617C, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F617C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805F6190
    r30 = r3;
    /* li r3, 3 */ // 0x805F6198
    FUN_805F520C(r3); // bl 0x805F520C
    r0 = *(4 + r30); // lwz @ 0x805F61A0
    /* li r3, 0 */ // 0x805F61A4
    *(0 + r30) = r3; // stw @ 0x805F61A8
    if (==) goto 0x0x805f61c4;
    r0 = *(0x34 + r30); // lhz @ 0x805F61B4
    *(4 + r30) = r31; // stw @ 0x805F61B8
    r0 = r0 | 1; // 0x805F61BC
    *(0x34 + r30) = r0; // sth @ 0x805F61C0
    r12 = *(0x38 + r30); // lwz @ 0x805F61C4
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x805F61CC
    /* mtctr r12 */ // 0x805F61D0
    /* bctrl  */ // 0x805F61D4
    r12 = *(0x70 + r30); // lwz @ 0x805F61D8
    r3 = r30 + 0x70; // 0x805F61DC
    r12 = *(0x18 + r12); // lwz @ 0x805F61E0
    /* mtctr r12 */ // 0x805F61E4
    /* bctrl  */ // 0x805F61E8
    r0 = *(0x14 + r1); // lwz @ 0x805F61EC
    r31 = *(0xc + r1); // lwz @ 0x805F61F0
    r30 = *(8 + r1); // lwz @ 0x805F61F4
    return;
}