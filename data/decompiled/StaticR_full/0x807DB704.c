/* Function at 0x807DB704, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807DB704(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x807DB70C
    *(0xc + r1) = r31; // stw @ 0x807DB714
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807DB71C
    r30 = r3;
    r0 = *(0x34 + r3); // lwz @ 0x807DB724
    r6 = *(0x30 + r3); // lwz @ 0x807DB728
    if (==) goto 0x0x807db750;
    r3 = r0;
    r4 = r6;
    r12 = *(0 + r3); // lwz @ 0x807DB73C
    r12 = *(0x1c + r12); // lwz @ 0x807DB740
    /* mtctr r12 */ // 0x807DB744
    /* bctrl  */ // 0x807DB748
    r5 = r3;
    r3 = r30;
    r4 = r31;
    FUN_807DB8F8(r5, r3, r4); // bl 0x807DB8F8
    r0 = *(0x14 + r1); // lwz @ 0x807DB75C
    r31 = *(0xc + r1); // lwz @ 0x807DB760
    r30 = *(8 + r1); // lwz @ 0x807DB764
    return;
}