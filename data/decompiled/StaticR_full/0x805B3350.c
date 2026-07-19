/* Function at 0x805B3350, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_805B3350(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x805B3360
    *(8 + r1) = r30; // stw @ 0x805B3364
    r30 = r3;
    /* clrlwi r0, r31, 0x18 */ // 0x805B336C
    /* mulli r0, r0, 0x920 */ // 0x805B3370
    r3 = r30 + r0; // 0x805B3374
    r12 = *(0x1720 + r3); // lwzu @ 0x805B3378
    r12 = *(0x20 + r12); // lwz @ 0x805B337C
    /* mtctr r12 */ // 0x805B3380
    /* bctrl  */ // 0x805B3384
    r31 = r31 + 1; // 0x805B3388
    if (<) goto 0x0x805b336c;
    /* li r31, 0 */ // 0x805B3394
    /* clrlwi r0, r31, 0x18 */ // 0x805B3398
    /* mulli r0, r0, 0xb0 */ // 0x805B339C
    r3 = r30 + r0; // 0x805B33A0
    r12 = *(0x3ba0 + r3); // lwzu @ 0x805B33A4
    r12 = *(0x20 + r12); // lwz @ 0x805B33A8
    /* mtctr r12 */ // 0x805B33AC
    /* bctrl  */ // 0x805B33B0
    r31 = r31 + 1; // 0x805B33B4
    if (<) goto 0x0x805b3398;
    r0 = *(0x14 + r1); // lwz @ 0x805B33C0
    r31 = *(0xc + r1); // lwz @ 0x805B33C4
    r30 = *(8 + r1); // lwz @ 0x805B33C8
    return;
}