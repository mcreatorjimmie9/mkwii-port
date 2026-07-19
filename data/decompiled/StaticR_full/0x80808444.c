/* Function at 0x80808444, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80808444(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8080844C
    *(0xc + r1) = r31; // stw @ 0x80808454
    /* li r31, 0 */ // 0x80808458
    *(8 + r1) = r30; // stw @ 0x8080845C
    r30 = r3;
    *(0xb4 + r3) = r31; // stw @ 0x80808464
    r12 = *(0 + r3); // lwz @ 0x80808468
    r12 = *(0x68 + r12); // lwz @ 0x8080846C
    /* mtctr r12 */ // 0x80808470
    /* bctrl  */ // 0x80808474
    r12 = *(0 + r30); // lwz @ 0x80808478
    r3 = r30;
    r12 = *(0x30 + r12); // lwz @ 0x80808480
    /* mtctr r12 */ // 0x80808484
    /* bctrl  */ // 0x80808488
    r0 = *(0x20 + r3); // lwz @ 0x8080848C
    r0 = r0 | 0x2121; // 0x80808490
    r0 = r0 | 0x2121; // 0x80808494
    *(0x20 + r3) = r0; // stw @ 0x80808498
    r3 = r30;
    r12 = *(0 + r30); // lwz @ 0x808084A0
    r12 = *(0x90 + r12); // lwz @ 0x808084A4
    /* mtctr r12 */ // 0x808084A8
    /* bctrl  */ // 0x808084AC
    *(0x114 + r30) = r31; // stb @ 0x808084B0
    r31 = *(0xc + r1); // lwz @ 0x808084B4
    r30 = *(8 + r1); // lwz @ 0x808084B8
    r0 = *(0x14 + r1); // lwz @ 0x808084BC
    return;
}