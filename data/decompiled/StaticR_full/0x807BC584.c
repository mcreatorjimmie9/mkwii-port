/* Function at 0x807BC584, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807BC584(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807BC598
    r30 = r3;
    r5 = *(0x140 + r3); // lwz @ 0x807BC5A0
    r3 = *(0 + r5); // lwz @ 0x807BC5A4
    FUN_807B5FA8(); // bl 0x807B5FA8
    if (==) goto 0x0x807bc5e8;
    r3 = *(0x144 + r30); // lwz @ 0x807BC5B4
    r4 = r31;
    r12 = *(0x34 + r3); // lwz @ 0x807BC5BC
    r12 = *(0x2c + r12); // lwz @ 0x807BC5C0
    /* mtctr r12 */ // 0x807BC5C4
    /* bctrl  */ // 0x807BC5C8
    r3 = *(0x154 + r30); // lwz @ 0x807BC5CC
    r12 = *(0 + r3); // lwz @ 0x807BC5D0
    r12 = *(0x14 + r12); // lwz @ 0x807BC5D4
    /* mtctr r12 */ // 0x807BC5D8
    /* bctrl  */ // 0x807BC5DC
    r3 = *(0x14c + r30); // lwz @ 0x807BC5E0
    FUN_807BDA48(); // bl 0x807BDA48
    r3 = *(0x158 + r30); // lwz @ 0x807BC5E8
    r12 = *(0x34 + r3); // lwz @ 0x807BC5EC
    r12 = *(0x20 + r12); // lwz @ 0x807BC5F0
    /* mtctr r12 */ // 0x807BC5F4
    /* bctrl  */ // 0x807BC5F8
    r0 = *(0x14 + r1); // lwz @ 0x807BC5FC
    r31 = *(0xc + r1); // lwz @ 0x807BC600
    r30 = *(8 + r1); // lwz @ 0x807BC604
    return;
}