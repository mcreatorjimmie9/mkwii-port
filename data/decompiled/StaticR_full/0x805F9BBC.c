/* Function at 0x805F9BBC, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805F9BBC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x805F9BC8
    r31 = r3;
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* lfs f0, 0x44(r3) */ // 0x805F9BD4
    /* lis r4, 0 */ // 0x805F9BD8
    /* lfs f7, 0xe8(r31) */ // 0x805F9BDC
    /* lfs f1, 0x48(r3) */ // 0x805F9BE0
    /* lfs f6, 0xec(r31) */ // 0x805F9BE4
    /* fsubs f4, f0, f7 */ // 0x805F9BE8
    /* lfs f0, 0x4c(r3) */ // 0x805F9BEC
    r3 = r31 + 0xe8; // 0x805F9BF0
    /* lfs f5, 0xf0(r31) */ // 0x805F9BF4
    /* fsubs f3, f1, f6 */ // 0x805F9BF8
    /* lfs f1, 0(r4) */ // 0x805F9BFC
    /* fsubs f2, f0, f5 */ // 0x805F9C00
    /* fmuls f0, f4, f1 */ // 0x805F9C04
    /* fmuls f4, f3, f1 */ // 0x805F9C08
    /* fmuls f3, f2, f1 */ // 0x805F9C0C
    /* stfs f0, 8(r1) */ // 0x805F9C10
    /* fadds f2, f7, f0 */ // 0x805F9C14
    /* fadds f1, f6, f4 */ // 0x805F9C18
    /* stfs f4, 0xc(r1) */ // 0x805F9C1C
    /* fadds f0, f5, f3 */ // 0x805F9C20
    /* stfs f3, 0x10(r1) */ // 0x805F9C24
    /* stfs f2, 0xe8(r31) */ // 0x805F9C28
    /* stfs f1, 0xec(r31) */ // 0x805F9C2C
    /* stfs f0, 0xf0(r31) */ // 0x805F9C30
    FUN_805E3430(); // bl 0x805E3430
}