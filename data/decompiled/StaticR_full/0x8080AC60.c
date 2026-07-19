/* Function at 0x8080AC60, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8080AC60(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8080AC70
    r4 = r31 + 0; // 0x8080AC74
    *(0x18 + r1) = r30; // stw @ 0x8080AC78
    /* lis r30, 0 */ // 0x8080AC7C
    r30 = r30 + 0; // 0x8080AC80
    *(0x14 + r1) = r29; // stw @ 0x8080AC84
    /* lis r29, 0 */ // 0x8080AC88
    r29 = r29 + 0; // 0x8080AC8C
    r3 = r30 + 0xc; // 0x8080AC90
    /* lfs f2, 0x38(r29) */ // 0x8080AC94
    r5 = r30 + 0; // 0x8080AC98
    /* lfs f1, 0x3c(r29) */ // 0x8080AC9C
    /* lfs f0, 0x40(r29) */ // 0x8080ACA0
    /* stfs f2, 0xc(r30) */ // 0x8080ACA4
    /* stfs f1, 4(r3) */ // 0x8080ACA8
    /* stfs f0, 8(r3) */ // 0x8080ACAC
    FUN_8091EFA4(); // bl 0x8091EFA4
    /* lfs f2, 0x44(r29) */ // 0x8080ACB4
    r3 = r30 + 0x24; // 0x8080ACB8
    /* lfs f1, 0x48(r29) */ // 0x8080ACBC
    r4 = r31 + 0; // 0x8080ACC0
    /* lfs f0, 0x4c(r29) */ // 0x8080ACC4
    r5 = r30 + 0x18; // 0x8080ACC8
    /* stfs f2, 0x24(r30) */ // 0x8080ACCC
    /* stfs f1, 4(r3) */ // 0x8080ACD0
    /* stfs f0, 8(r3) */ // 0x8080ACD4
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x44(r29) */ // 0x8080ACDC
    r3 = r30 + 0x3c; // 0x8080ACE0
    /* lfs f1, 0x48(r29) */ // 0x8080ACE4
    r4 = r31 + 0; // 0x8080ACE8
    /* lfs f0, 0x50(r29) */ // 0x8080ACEC
    r5 = r30 + 0x30; // 0x8080ACF0
    /* stfs f2, 0x3c(r30) */ // 0x8080ACF4
    /* stfs f1, 4(r3) */ // 0x8080ACF8
    /* stfs f0, 8(r3) */ // 0x8080ACFC
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x8080AD04
    r31 = *(0x1c + r1); // lwz @ 0x8080AD08
    r30 = *(0x18 + r1); // lwz @ 0x8080AD0C
    r29 = *(0x14 + r1); // lwz @ 0x8080AD10
    return;
}