/* Function at 0x805B45F4, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_805B45F4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x805B4604
    *(8 + r1) = r30; // stw @ 0x805B4608
    r30 = r3;
    /* clrlwi r0, r31, 0x18 */ // 0x805B4610
    /* mulli r0, r0, 0xb0 */ // 0x805B4614
    r3 = r30 + r0; // 0x805B4618
    r12 = *(0x3ba0 + r3); // lwzu @ 0x805B461C
    r12 = *(0x20 + r12); // lwz @ 0x805B4620
    /* mtctr r12 */ // 0x805B4624
    /* bctrl  */ // 0x805B4628
    r31 = r31 + 1; // 0x805B462C
    if (<) goto 0x0x805b4610;
    /* li r31, 0 */ // 0x805B4638
    /* clrlwi r0, r31, 0x18 */ // 0x805B463C
    /* mulli r0, r0, 0x920 */ // 0x805B4640
    r3 = r30 + r0; // 0x805B4644
    r12 = *(0x1720 + r3); // lwzu @ 0x805B4648
    r12 = *(0x20 + r12); // lwz @ 0x805B464C
    /* mtctr r12 */ // 0x805B4650
    /* bctrl  */ // 0x805B4654
    r31 = r31 + 1; // 0x805B4658
    if (<) goto 0x0x805b463c;
    r0 = *(0x14 + r1); // lwz @ 0x805B4664
    r31 = *(0xc + r1); // lwz @ 0x805B4668
    r30 = *(8 + r1); // lwz @ 0x805B466C
    return;
}