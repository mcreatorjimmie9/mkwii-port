/* Function at 0x8089C89C, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8089C89C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x8089C8AC
    *(8 + r1) = r30; // stw @ 0x8089C8B0
    r30 = r3;
    /* b 0x8089c8e4 */ // 0x8089C8B8
    r3 = *(0x18 + r30); // lwz @ 0x8089C8BC
    r0 = r31 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x8089C8C4
    if (==) goto 0x0x8089c8e0;
    r12 = *(0 + r3); // lwz @ 0x8089C8D0
    r12 = *(0x10 + r12); // lwz @ 0x8089C8D4
    /* mtctr r12 */ // 0x8089C8D8
    /* bctrl  */ // 0x8089C8DC
    r31 = r31 + 1; // 0x8089C8E0
    r0 = *(0x14 + r30); // lhz @ 0x8089C8E4
    /* clrlwi r3, r31, 0x10 */ // 0x8089C8E8
    if (<) goto 0x0x8089c8bc;
    r0 = *(0x14 + r1); // lwz @ 0x8089C8F4
    r31 = *(0xc + r1); // lwz @ 0x8089C8F8
    r30 = *(8 + r1); // lwz @ 0x8089C8FC
    return;
}