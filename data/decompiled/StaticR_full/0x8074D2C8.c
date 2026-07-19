/* Function at 0x8074D2C8, size=136 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8074D2C8(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8074D2D8
    r31 = r31 + 0; // 0x8074D2DC
    *(0x28 + r1) = r30; // stw @ 0x8074D2E0
    r30 = r3;
    /* lfs f1, 0x78(r31) */ // 0x8074D2E8
    r4 = *(0x20 + r3); // lwz @ 0x8074D2EC
    r4 = r4 + 0x24; // 0x8074D2F4
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r4 = *(0x20 + r30); // lwz @ 0x8074D2FC
    r4 = r4 + 0x18; // 0x8074D308
    FUN_805A4464(r3, r5, r4); // bl 0x805A4464
    r3 = r30;
    FUN_8074C9DC(r5, r4, r3, r4); // bl 0x8074C9DC
    r3 = *(8 + r30); // lwz @ 0x8074D31C
    /* li r4, 0 */ // 0x8074D320
    /* lfs f1, 0(r31) */ // 0x8074D324
    /* li r5, 1 */ // 0x8074D328
    r3 = *(0x28 + r3); // lwz @ 0x8074D32C
    /* lfs f2, 0x60(r31) */ // 0x8074D330
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r0 = *(0x34 + r1); // lwz @ 0x8074D338
    r31 = *(0x2c + r1); // lwz @ 0x8074D33C
    r30 = *(0x28 + r1); // lwz @ 0x8074D340
    return;
}