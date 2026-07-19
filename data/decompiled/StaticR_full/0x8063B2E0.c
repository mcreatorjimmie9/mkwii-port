/* Function at 0x8063B2E0, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8063B2E0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8063B2E8
    /* li r5, 0x18 */ // 0x8063B2EC
    *(0x14 + r1) = r0; // stw @ 0x8063B2F0
    r4 = r4 + 0; // 0x8063B2F4
    /* li r6, 3 */ // 0x8063B2F8
    *(0xc + r1) = r31; // stw @ 0x8063B2FC
    /* lis r31, 0 */ // 0x8063B300
    r31 = r31 + 0; // 0x8063B304
    *(8 + r1) = r30; // stw @ 0x8063B308
    r30 = r3;
    FUN_805F1C60(); // bl 0x805F1C60
    /* lfs f0, 0x20(r31) */ // 0x8063B314
    /* lis r4, 0 */ // 0x8063B318
    /* lfs f2, 4(r31) */ // 0x8063B31C
    r4 = r4 + 0; // 0x8063B320
    /* lfs f1, 0x1c(r31) */ // 0x8063B324
    /* li r0, 0 */ // 0x8063B328
    *(0xc8 + r30) = r0; // stw @ 0x8063B32C
    r3 = r30;
    *(0 + r30) = r4; // stw @ 0x8063B334
    /* stfs f2, 0x144(r30) */ // 0x8063B338
    /* stfs f1, 0x148(r30) */ // 0x8063B33C
    /* stfs f0, 0x14c(r30) */ // 0x8063B340
    /* stfs f0, 0x150(r30) */ // 0x8063B344
    r31 = *(0xc + r1); // lwz @ 0x8063B348
    r30 = *(8 + r1); // lwz @ 0x8063B34C
    r0 = *(0x14 + r1); // lwz @ 0x8063B350
    return;
}