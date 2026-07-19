/* Function at 0x808C877C, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_808C877C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x808C878C
    *(0x18 + r1) = r30; // stw @ 0x808C8790
    /* li r30, 0 */ // 0x808C8794
    *(0x14 + r1) = r29; // stw @ 0x808C8798
    r29 = r3;
    /* b 0x808c87c4 */ // 0x808C87A0
    r3 = *(0x44 + r29); // lwz @ 0x808C87A4
    /* lwzx r3, r3, r31 */ // 0x808C87A8
    r12 = *(0 + r3); // lwz @ 0x808C87AC
    r12 = *(0x54 + r12); // lwz @ 0x808C87B0
    /* mtctr r12 */ // 0x808C87B4
    /* bctrl  */ // 0x808C87B8
    r31 = r31 + 4; // 0x808C87BC
    r30 = r30 + 1; // 0x808C87C0
    r0 = *(0x48 + r29); // lbz @ 0x808C87C4
    if (<) goto 0x0x808c87a4;
    r0 = *(0x24 + r1); // lwz @ 0x808C87D0
    r31 = *(0x1c + r1); // lwz @ 0x808C87D4
    r30 = *(0x18 + r1); // lwz @ 0x808C87D8
    r29 = *(0x14 + r1); // lwz @ 0x808C87DC
    return;
}