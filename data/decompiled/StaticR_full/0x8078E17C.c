/* Function at 0x8078E17C, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078E17C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8078E188
    r31 = r3;
    r3 = r3 + 0x94; // 0x8078E190
    FUN_807900D0(r3); // bl 0x807900D0
    r12 = *(0 + r31); // lwz @ 0x8078E198
    r4 = r3;
    r3 = r31;
    r12 = *(0x30 + r12); // lwz @ 0x8078E1A4
    /* mtctr r12 */ // 0x8078E1A8
    /* bctrl  */ // 0x8078E1AC
    r0 = *(0x14 + r1); // lwz @ 0x8078E1B0
    r31 = *(0xc + r1); // lwz @ 0x8078E1B4
    return;
}