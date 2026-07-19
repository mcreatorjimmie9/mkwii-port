/* Function at 0x80869558, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80869558(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 3 */ // 0x80869564
    *(0xc + r1) = r31; // stw @ 0x80869568
    r31 = r3;
    *(0 + r3) = r0; // stw @ 0x80869570
    r3 = *(4 + r3); // lwz @ 0x80869574
    r4 = *(8 + r31); // lwz @ 0x80869578
    FUN_805ECA18(); // bl 0x805ECA18
    r12 = *(0x20 + r31); // lwz @ 0x80869580
    r3 = r31 + 0x20; // 0x80869584
    r4 = r31;
    /* li r5, 0x271a */ // 0x8086958C
    r12 = *(0x118 + r12); // lwz @ 0x80869590
    /* mtctr r12 */ // 0x80869594
    /* bctrl  */ // 0x80869598
    r0 = *(0x14 + r1); // lwz @ 0x8086959C
    r31 = *(0xc + r1); // lwz @ 0x808695A0
    return;
}