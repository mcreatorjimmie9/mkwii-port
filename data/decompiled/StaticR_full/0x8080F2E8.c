/* Function at 0x8080F2E8, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8080F2E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 1 */ // 0x8080F2F8
    *(8 + r1) = r30; // stw @ 0x8080F2FC
    r30 = r3;
    *(0xb0 + r3) = r31; // stw @ 0x8080F304
    r12 = *(0 + r3); // lwz @ 0x8080F308
    r12 = *(0x94 + r12); // lwz @ 0x8080F30C
    /* mtctr r12 */ // 0x8080F310
    /* bctrl  */ // 0x8080F314
    r12 = *(0 + r30); // lwz @ 0x8080F318
    r3 = r30;
    /* li r4, 1 */ // 0x8080F320
    r12 = *(0x68 + r12); // lwz @ 0x8080F324
    /* mtctr r12 */ // 0x8080F328
    /* bctrl  */ // 0x8080F32C
    *(0xbc + r30) = r31; // stb @ 0x8080F330
    r31 = *(0xc + r1); // lwz @ 0x8080F334
    r30 = *(8 + r1); // lwz @ 0x8080F338
    r0 = *(0x14 + r1); // lwz @ 0x8080F33C
    return;
}