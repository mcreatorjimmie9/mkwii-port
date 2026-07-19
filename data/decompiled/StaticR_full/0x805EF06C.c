/* Function at 0x805EF06C, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805EF06C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* cntlzw r0, r4 */ // 0x805EF078
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805EF088
    /* srwi r29, r0, 5 */ // 0x805EF08C
    *(0x10 + r1) = r28; // stw @ 0x805EF090
    /* li r28, 0 */ // 0x805EF094
    r3 = *(0x14 + r30); // lwz @ 0x805EF098
    r5 = r29;
    /* li r4, 6 */ // 0x805EF0A0
    r31 = *(0 + r3); // lwz @ 0x805EF0A4
    r12 = *(0 + r31); // lwz @ 0x805EF0A8
    r3 = r31;
    r12 = *(0x20 + r12); // lwz @ 0x805EF0B0
    /* mtctr r12 */ // 0x805EF0B4
    /* bctrl  */ // 0x805EF0B8
    r12 = *(0 + r31); // lwz @ 0x805EF0BC
    r3 = r31;
    r5 = r29;
    /* li r4, 7 */ // 0x805EF0C8
    r12 = *(0x20 + r12); // lwz @ 0x805EF0CC
    /* mtctr r12 */ // 0x805EF0D0
    /* bctrl  */ // 0x805EF0D4
    r28 = r28 + 1; // 0x805EF0D8
    r30 = r30 + 4; // 0x805EF0DC
    if (<) goto 0x0x805ef098;
    r0 = *(0x24 + r1); // lwz @ 0x805EF0E8
    r31 = *(0x1c + r1); // lwz @ 0x805EF0EC
    r30 = *(0x18 + r1); // lwz @ 0x805EF0F0
    r29 = *(0x14 + r1); // lwz @ 0x805EF0F4
    r28 = *(0x10 + r1); // lwz @ 0x805EF0F8
    return;
}