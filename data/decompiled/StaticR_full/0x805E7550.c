/* Function at 0x805E7550, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_805E7550(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805E7564
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x805E756C
    r12 = *(0xc + r12); // lwz @ 0x805E7570
    /* mtctr r12 */ // 0x805E7574
    /* bctrl  */ // 0x805E7578
    r3 = *(0x2c + r30); // lwz @ 0x805E757C
    if (==) goto 0x0x805e75a8;
    /* slwi r0, r31, 2 */ // 0x805E7588
    /* lwzx r3, r3, r0 */ // 0x805E758C
    if (==) goto 0x0x805e75a8;
    r12 = *(0 + r3); // lwz @ 0x805E7598
    r12 = *(0x18 + r12); // lwz @ 0x805E759C
    /* mtctr r12 */ // 0x805E75A0
    /* bctrl  */ // 0x805E75A4
    r4 = *(0x24 + r30); // lwz @ 0x805E75A8
    /* slwi r5, r31, 2 */ // 0x805E75AC
    r3 = *(0x28 + r30); // lwz @ 0x805E75B0
    /* li r0, 1 */ // 0x805E75B4
    /* lwzx r4, r4, r5 */ // 0x805E75B8
    r0 = r0 << r31; // slw
    /* stwx r4, r3, r5 */ // 0x805E75C0
    /* li r4, 0 */ // 0x805E75C4
    /* clrlwi r0, r0, 0x10 */ // 0x805E75C8
    r3 = *(0x24 + r30); // lwz @ 0x805E75CC
    /* stwx r4, r3, r5 */ // 0x805E75D0
    r3 = *(0x38 + r30); // lhz @ 0x805E75D4
    /* andc r0, r3, r0 */ // 0x805E75D8
    *(0x38 + r30) = r0; // sth @ 0x805E75DC
    r31 = *(0xc + r1); // lwz @ 0x805E75E0
    r30 = *(8 + r1); // lwz @ 0x805E75E4
    r0 = *(0x14 + r1); // lwz @ 0x805E75E8
    return;
}