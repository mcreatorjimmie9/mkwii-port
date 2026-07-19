/* Function at 0x8076A9A8, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8076A9A8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8076A9B4
    r31 = r3;
    r0 = *(0x48c + r3); // lbz @ 0x8076A9BC
    if (==) goto 0x0x8076aa20;
    /* lis r5, 0 */ // 0x8076A9C8
    /* lis r4, 0 */ // 0x8076A9CC
    /* lfs f0, 0(r5) */ // 0x8076A9D0
    /* lis r5, 0 */ // 0x8076A9D4
    /* stfs f0, 0xf8(r3) */ // 0x8076A9D8
    r4 = r4 + 0; // 0x8076A9E0
    /* lfs f1, 0(r5) */ // 0x8076A9E4
    FUN_805A443C(r5, r3, r4); // bl 0x805A443C
    /* lfs f1, 0x100(r31) */ // 0x8076A9EC
    /* lfs f0, 8(r1) */ // 0x8076A9F0
    /* lfs f2, 0x104(r31) */ // 0x8076A9F4
    /* fadds f0, f1, f0 */ // 0x8076A9F8
    /* lfs f1, 0x108(r31) */ // 0x8076A9FC
    /* stfs f0, 0x100(r31) */ // 0x8076AA00
    /* lfs f0, 0xc(r1) */ // 0x8076AA04
    /* fadds f0, f2, f0 */ // 0x8076AA08
    /* stfs f0, 0x104(r31) */ // 0x8076AA0C
    /* lfs f0, 0x10(r1) */ // 0x8076AA10
    /* fadds f0, f1, f0 */ // 0x8076AA14
    /* stfs f0, 0x108(r31) */ // 0x8076AA18
    /* b 0x8076aa2c */ // 0x8076AA1C
    /* lis r4, 0 */ // 0x8076AA20
    /* lfs f0, 0(r4) */ // 0x8076AA24
    /* stfs f0, 0x104(r3) */ // 0x8076AA28
    r0 = *(0x24 + r1); // lwz @ 0x8076AA2C
    r31 = *(0x1c + r1); // lwz @ 0x8076AA30
    return;
}