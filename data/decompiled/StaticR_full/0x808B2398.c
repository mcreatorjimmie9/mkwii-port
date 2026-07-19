/* Function at 0x808B2398, size=124 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808B2398(int r3, int r4, int r5)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lfs f1, 0(r5) */ // 0x808B23A0
    r31 = r5;
    *(0x78 + r1) = r30; // stw @ 0x808B23B0
    r30 = r4;
    *(0x74 + r1) = r29; // stw @ 0x808B23B8
    r29 = r3;
    r4 = r29 + 0x28; // 0x808B23C4
    FUN_805A443C(r3, r4); // bl 0x805A443C
    /* lfs f0, 0x5c(r1) */ // 0x808B23CC
    r4 = r30;
    /* stfs f0, 0x3c(r29) */ // 0x808B23D4
    /* lfs f1, 0x24(r29) */ // 0x808B23DC
    r5 = r29 + 0x3c; // 0x808B23E0
    /* lfs f0, 0x60(r1) */ // 0x808B23E4
    /* stfs f0, 0x40(r29) */ // 0x808B23E8
    /* lfs f0, 4(r31) */ // 0x808B23EC
    /* lfs f3, 0x64(r1) */ // 0x808B23F0
    /* fmuls f2, f1, f0 */ // 0x808B23F4
    /* lfs f1, 0x20(r29) */ // 0x808B23F8
    /* lfs f0, 0(r31) */ // 0x808B23FC
    /* stfs f3, 0x44(r29) */ // 0x808B2400
    /* fmuls f0, f1, f0 */ // 0x808B2404
    /* stfs f2, 0x38(r29) */ // 0x808B2408
    /* stfs f0, 0x34(r29) */ // 0x808B240C
    FUN_805E3430(); // bl 0x805E3430
}