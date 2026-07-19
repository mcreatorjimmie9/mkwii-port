/* Function at 0x8076A420, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8076A420(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x8076A428
    *(0x1c + r1) = r31; // stw @ 0x8076A430
    /* lis r31, 0 */ // 0x8076A434
    r31 = r31 + 0; // 0x8076A438
    *(0x18 + r1) = r30; // stw @ 0x8076A43C
    r30 = r3;
    /* lfs f1, 4(r31) */ // 0x8076A444
    r4 = r30 + 0x474; // 0x8076A448
    /* lfs f0, 0xd4(r31) */ // 0x8076A44C
    r5 = r30 + 0x30; // 0x8076A450
    /* stfs f1, 0xf4(r3) */ // 0x8076A454
    /* stfs f1, 0xfc(r3) */ // 0x8076A458
    /* stfs f1, 0x100(r3) */ // 0x8076A45C
    /* stfs f1, 0x108(r3) */ // 0x8076A460
    /* stfs f0, 0x10c(r3) */ // 0x8076A464
    /* lfs f0, 0(r6) */ // 0x8076A468
    /* fneg f0, f0 */ // 0x8076A46C
    /* stfs f0, 0x110(r3) */ // 0x8076A470
    FUN_805A4498(r3); // bl 0x805A4498
    /* lfs f0, 8(r1) */ // 0x8076A47C
    r3 = r30 + 0x4ec; // 0x8076A480
    /* stfs f0, 0x4ec(r30) */ // 0x8076A484
    /* lfs f0, 4(r31) */ // 0x8076A488
    /* lfs f1, 0xc(r1) */ // 0x8076A48C
    /* stfs f1, 0x4f0(r30) */ // 0x8076A490
    /* lfs f1, 0x10(r1) */ // 0x8076A494
    /* stfs f1, 0x4f4(r30) */ // 0x8076A498
    /* stfs f0, 0x4f0(r30) */ // 0x8076A49C
    FUN_805E3430(); // bl 0x805E3430
}