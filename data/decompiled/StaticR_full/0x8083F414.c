/* Function at 0x8083F414, size=92 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8083F414(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8083F41C
    /* lfs f0, 8(r4) */ // 0x8083F420
    *(0x54 + r1) = r0; // stw @ 0x8083F424
    /* lfs f4, 0(r5) */ // 0x8083F428
    *(0x4c + r1) = r31; // stw @ 0x8083F42C
    r31 = r3;
    /* fmr f8, f4 */ // 0x8083F434
    /* lfs f1, 0(r4) */ // 0x8083F438
    /* stfs f0, 8(r1) */ // 0x8083F43C
    /* lfs f0, 0x14(r4) */ // 0x8083F444
    /* stfs f0, 0xc(r1) */ // 0x8083F448
    /* lfs f0, 0x20(r4) */ // 0x8083F44C
    /* stfs f0, 0x10(r1) */ // 0x8083F450
    /* lfs f2, 0xc(r4) */ // 0x8083F454
    /* stfs f4, 0x14(r1) */ // 0x8083F458
    /* lfs f3, 0x18(r4) */ // 0x8083F45C
    /* lfs f5, 4(r4) */ // 0x8083F460
    /* lfs f6, 0x10(r4) */ // 0x8083F464
    /* lfs f7, 0x1c(r4) */ // 0x8083F468
    FUN_805E3430(); // bl 0x805E3430
}