/* Function at 0x807DB694, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807DB694(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x807DB69C
    *(0xc + r1) = r31; // stw @ 0x807DB6A4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807DB6AC
    r30 = r3;
    r0 = *(0x34 + r3); // lwz @ 0x807DB6B4
    r6 = *(0x30 + r3); // lwz @ 0x807DB6B8
    if (==) goto 0x0x807db6e0;
    r3 = r0;
    r4 = r6;
    r12 = *(0 + r3); // lwz @ 0x807DB6CC
    r12 = *(0x1c + r12); // lwz @ 0x807DB6D0
    /* mtctr r12 */ // 0x807DB6D4
    /* bctrl  */ // 0x807DB6D8
    r5 = r3;
    r3 = r30;
    r4 = r31;
    FUN_807DB844(r5, r3, r4); // bl 0x807DB844
    r0 = *(0x14 + r1); // lwz @ 0x807DB6EC
    r31 = *(0xc + r1); // lwz @ 0x807DB6F0
    r30 = *(8 + r1); // lwz @ 0x807DB6F4
    return;
}