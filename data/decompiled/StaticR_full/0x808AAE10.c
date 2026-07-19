/* Function at 0x808AAE10, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808AAE10(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x808AAE20
    *(8 + r1) = r30; // stw @ 0x808AAE24
    r30 = r3;
    /* b 0x808aae58 */ // 0x808AAE2C
    r3 = *(0x34 + r30); // lwz @ 0x808AAE30
    r0 = r31 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x808AAE38
    if (==) goto 0x0x808aae54;
    r12 = *(0 + r3); // lwz @ 0x808AAE44
    r12 = *(0x10 + r12); // lwz @ 0x808AAE48
    /* mtctr r12 */ // 0x808AAE4C
    /* bctrl  */ // 0x808AAE50
    r31 = r31 + 1; // 0x808AAE54
    r0 = *(0x30 + r30); // lhz @ 0x808AAE58
    /* clrlwi r3, r31, 0x10 */ // 0x808AAE5C
    if (<) goto 0x0x808aae30;
    r0 = *(0x14 + r1); // lwz @ 0x808AAE68
    r31 = *(0xc + r1); // lwz @ 0x808AAE6C
    r30 = *(8 + r1); // lwz @ 0x808AAE70
    return;
}