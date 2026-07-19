/* Function at 0x8078C8A8, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8078C8A8(int r3, int r4, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x8078C8B0
    *(0xc + r1) = r31; // stw @ 0x8078C8B8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8078C8C0
    r30 = r3;
    r4 = r30;
    r3 = *(0 + r6); // lwz @ 0x8078C8CC
    r12 = *(0 + r3); // lwz @ 0x8078C8D0
    r12 = *(0xb0 + r12); // lwz @ 0x8078C8D4
    /* mtctr r12 */ // 0x8078C8D8
    /* bctrl  */ // 0x8078C8DC
    /* mulli r0, r31, 0x1c */ // 0x8078C8E0
    /* lis r3, 0 */ // 0x8078C8E4
    /* lfs f0, 0(r3) */ // 0x8078C8E8
    r3 = r30 + r0; // 0x8078C8EC
    /* stfs f0, 0x18(r3) */ // 0x8078C8F0
    r31 = *(0xc + r1); // lwz @ 0x8078C8F4
    r30 = *(8 + r1); // lwz @ 0x8078C8F8
    r0 = *(0x14 + r1); // lwz @ 0x8078C8FC
    return;
}