/* Function at 0x808B40C8, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808B40C8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808B40DC
    r30 = r3;
    r3 = r5;
    FUN_8064A384(r3); // bl 0x8064A384
    /* li r0, -1 */ // 0x808B40EC
    *(0x3e8 + r30) = r0; // stw @ 0x808B40F0
    r3 = r30;
    r4 = r31;
    r12 = *(0 + r30); // lwz @ 0x808B40FC
    /* li r5, 1 */ // 0x808B4100
    r12 = *(0x1c + r12); // lwz @ 0x808B4104
    /* mtctr r12 */ // 0x808B4108
    /* bctrl  */ // 0x808B410C
    r0 = *(0x14 + r1); // lwz @ 0x808B4110
    r31 = *(0xc + r1); // lwz @ 0x808B4114
    r30 = *(8 + r1); // lwz @ 0x808B4118
    return;
}