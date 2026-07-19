/* Function at 0x805CE69C, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_805CE69C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805CE6AC
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x805CE6B4
    r30 = r4;
    if (>=) goto 0x0x805ce6d0;
    r12 = *(0 + r3); // lwz @ 0x805CE6C0
    r12 = *(0xc + r12); // lwz @ 0x805CE6C4
    /* mtctr r12 */ // 0x805CE6C8
    /* bctrl  */ // 0x805CE6CC
    /* subf r0, r31, r30 */ // 0x805CE6D0
    /* orc r3, r30, r31 */ // 0x805CE6D4
    /* srwi r0, r0, 1 */ // 0x805CE6D8
    r31 = *(0xc + r1); // lwz @ 0x805CE6DC
    /* subf r0, r0, r3 */ // 0x805CE6E0
    r30 = *(8 + r1); // lwz @ 0x805CE6E4
    /* srwi r3, r0, 0x1f */ // 0x805CE6E8
    r0 = *(0x14 + r1); // lwz @ 0x805CE6EC
    return;
}