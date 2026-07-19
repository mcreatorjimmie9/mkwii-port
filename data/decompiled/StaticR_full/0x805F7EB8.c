/* Function at 0x805F7EB8, size=108 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_805F7EB8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x805F7EC0
    /* lis r4, 0 */ // 0x805F7EC4
    /* lfs f1, 0(r5) */ // 0x805F7EC8
    /* lfs f0, 0(r4) */ // 0x805F7ECC
    *(0x24 + r1) = r0; // stw @ 0x805F7ED0
    /* stfs f1, 8(r1) */ // 0x805F7ED4
    /* stfs f0, 0xc(r1) */ // 0x805F7ED8
    /* stfs f1, 0x10(r1) */ // 0x805F7EDC
    FUN_8061DC48(); // bl 0x8061DC48
    /* lfs f2, 0x74(r3) */ // 0x805F7EE4
    /* lfs f0, 8(r1) */ // 0x805F7EE8
    /* lfs f1, 0xc(r1) */ // 0x805F7EEC
    /* fadds f2, f2, f0 */ // 0x805F7EF0
    /* lfs f0, 0x10(r1) */ // 0x805F7EF4
    /* stfs f2, 0x74(r3) */ // 0x805F7EF8
    /* lfs f2, 0x78(r3) */ // 0x805F7EFC
    /* fadds f1, f2, f1 */ // 0x805F7F00
    /* stfs f1, 0x78(r3) */ // 0x805F7F04
    /* lfs f1, 0x7c(r3) */ // 0x805F7F08
    /* fadds f0, f1, f0 */ // 0x805F7F0C
    /* stfs f0, 0x7c(r3) */ // 0x805F7F10
    r0 = *(0x24 + r1); // lwz @ 0x805F7F14
    return;
}