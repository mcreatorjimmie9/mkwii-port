/* Function at 0x808E14C0, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808E14C0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x808E14D0
    *(8 + r1) = r30; // stw @ 0x808E14D4
    r30 = r3;
    /* b 0x808e1500 */ // 0x808E14DC
    /* clrlwi r0, r31, 0x18 */ // 0x808E14E0
    r3 = *(4 + r30); // lwz @ 0x808E14E4
    /* mulli r0, r0, 0x28 */ // 0x808E14E8
    /* lwzux r12, r3, r0 */ // 0x808E14EC
    r12 = *(0xc + r12); // lwz @ 0x808E14F0
    /* mtctr r12 */ // 0x808E14F4
    /* bctrl  */ // 0x808E14F8
    r31 = r31 + 1; // 0x808E14FC
    r0 = *(9 + r30); // lbz @ 0x808E1500
    /* clrlwi r3, r31, 0x18 */ // 0x808E1504
    if (<) goto 0x0x808e14e0;
    r0 = *(0x14 + r1); // lwz @ 0x808E1510
    r31 = *(0xc + r1); // lwz @ 0x808E1514
    r30 = *(8 + r1); // lwz @ 0x808E1518
    return;
}