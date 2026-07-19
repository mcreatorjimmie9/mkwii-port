/* Function at 0x805B4504, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805B4504(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x805B4514
    *(0x18 + r1) = r30; // stw @ 0x805B4518
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805B4520
    r29 = r3;
    /* clrlwi r3, r31, 0x18 */ // 0x805B4528
    /* mulli r0, r3, 0x920 */ // 0x805B452C
    /* lbzx r4, r30, r3 */ // 0x805B4530
    r3 = r29 + r0; // 0x805B4534
    r12 = *(0x1720 + r3); // lwzu @ 0x805B4538
    r12 = *(0x28 + r12); // lwz @ 0x805B453C
    /* mtctr r12 */ // 0x805B4540
    /* bctrl  */ // 0x805B4544
    r31 = r31 + 1; // 0x805B4548
    if (<) goto 0x0x805b4528;
    r0 = *(0x24 + r1); // lwz @ 0x805B4554
    r31 = *(0x1c + r1); // lwz @ 0x805B4558
    r30 = *(0x18 + r1); // lwz @ 0x805B455C
    r29 = *(0x14 + r1); // lwz @ 0x805B4560
    return;
}