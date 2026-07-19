/* Function at 0x8081E270, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8081E270(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x8081E278
    *(0xc + r1) = r31; // stw @ 0x8081E280
    /* lis r31, 0 */ // 0x8081E284
    r31 = r31 + 0; // 0x8081E288
    *(8 + r1) = r30; // stw @ 0x8081E28C
    r30 = r3;
    /* lfs f2, 0x1c(r31) */ // 0x8081E294
    /* lfs f0, 0x70(r3) */ // 0x8081E298
    /* lfs f1, 0x74(r3) */ // 0x8081E29C
    /* stfs f0, 0xe4(r3) */ // 0x8081E2A0
    /* lfs f0, 0x18(r31) */ // 0x8081E2A4
    /* stfs f1, 0xe8(r3) */ // 0x8081E2A8
    /* lfs f3, 0x78(r3) */ // 0x8081E2AC
}