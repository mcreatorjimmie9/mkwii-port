/* Function at 0x8070E288, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8070E288(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8070E29C
    r30 = r3;
    *(0xbc + r3) = r4; // stb @ 0x8070E2A4
    r12 = *(0 + r3); // lwz @ 0x8070E2A8
    r12 = *(0x68 + r12); // lwz @ 0x8070E2AC
    /* mtctr r12 */ // 0x8070E2B0
    /* bctrl  */ // 0x8070E2B4
    if (==) goto 0x0x8070e2d8;
    r12 = *(0 + r30); // lwz @ 0x8070E2C0
    r3 = r30;
    r12 = *(0x94 + r12); // lwz @ 0x8070E2C8
    /* mtctr r12 */ // 0x8070E2CC
    /* bctrl  */ // 0x8070E2D0
    /* b 0x8070e2ec */ // 0x8070E2D4
    r12 = *(0 + r30); // lwz @ 0x8070E2D8
    r3 = r30;
    r12 = *(0x90 + r12); // lwz @ 0x8070E2E0
    /* mtctr r12 */ // 0x8070E2E4
    /* bctrl  */ // 0x8070E2E8
    r0 = *(0x14 + r1); // lwz @ 0x8070E2EC
    r31 = *(0xc + r1); // lwz @ 0x8070E2F0
    r30 = *(8 + r1); // lwz @ 0x8070E2F4
    return;
}