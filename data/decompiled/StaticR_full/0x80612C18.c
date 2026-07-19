/* Function at 0x80612C18, size=164 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80612C18(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x78 + r1) = r30; // stw @ 0x80612C2C
    r30 = r4;
    *(0x74 + r1) = r29; // stw @ 0x80612C34
    r29 = r3;
    /* lis r3, 0 */ // 0x80612C3C
    r6 = *(0 + r29); // lwz @ 0x80612C40
    r3 = *(0 + r3); // lwz @ 0x80612C44
    r4 = *(4 + r6); // lwz @ 0x80612C48
    r0 = *(0x80 + r4); // lwz @ 0x80612C4C
    /* clrlwi r4, r0, 0x10 */ // 0x80612C50
    FUN_805A870C(); // bl 0x805A870C
    r5 = *(0 + r3); // lwz @ 0x80612C58
    /* lis r4, 0 */ // 0x80612C5C
    /* lfs f2, 0(r4) */ // 0x80612C60
    /* lfs f0, 8(r5) */ // 0x80612C68
    /* lfs f1, 4(r5) */ // 0x80612C6C
    /* lfs f3, 0(r5) */ // 0x80612C70
    /* stfs f3, 0(r30) */ // 0x80612C74
    /* stfs f1, 4(r30) */ // 0x80612C78
    /* stfs f0, 8(r30) */ // 0x80612C7C
    r5 = *(0 + r3); // lwz @ 0x80612C80
    /* lfs f3, 0x14(r5) */ // 0x80612C88
    /* lfs f4, 0x10(r5) */ // 0x80612C8C
    /* lfs f5, 0xc(r5) */ // 0x80612C90
    /* fmuls f0, f2, f3 */ // 0x80612C94
    /* fmuls f1, f2, f4 */ // 0x80612C98
    /* stfs f5, 0(r31) */ // 0x80612C9C
    /* fmuls f2, f2, f5 */ // 0x80612CA0
    /* stfs f4, 4(r31) */ // 0x80612CA4
    /* stfs f3, 8(r31) */ // 0x80612CA8
    /* stfs f2, 0x2c(r1) */ // 0x80612CAC
    /* stfs f1, 0x30(r1) */ // 0x80612CB0
    /* stfs f0, 0x34(r1) */ // 0x80612CB4
    FUN_805E3430(); // bl 0x805E3430
}