/* Function at 0x807DB624, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807DB624(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x807DB62C
    *(0xc + r1) = r31; // stw @ 0x807DB634
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807DB63C
    r30 = r3;
    r0 = *(0x34 + r3); // lwz @ 0x807DB644
    r6 = *(0x30 + r3); // lwz @ 0x807DB648
    if (==) goto 0x0x807db670;
    r3 = r0;
    r4 = r6;
    r12 = *(0 + r3); // lwz @ 0x807DB65C
    r12 = *(0x18 + r12); // lwz @ 0x807DB660
    /* mtctr r12 */ // 0x807DB664
    /* bctrl  */ // 0x807DB668
    r5 = r3;
    r3 = r30;
    r4 = r31;
    FUN_807DB844(r5, r3, r4); // bl 0x807DB844
    r0 = *(0x14 + r1); // lwz @ 0x807DB67C
    r31 = *(0xc + r1); // lwz @ 0x807DB680
    r30 = *(8 + r1); // lwz @ 0x807DB684
    return;
}