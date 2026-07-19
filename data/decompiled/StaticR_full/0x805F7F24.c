/* Function at 0x805F7F24, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805F7F24(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x805F7F34
    *(0x18 + r1) = r30; // stw @ 0x805F7F38
    r30 = r3;
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* lfs f0, 0x44(r3) */ // 0x805F7F44
    /* lis r4, 0 */ // 0x805F7F48
    /* lfs f7, 0xe8(r30) */ // 0x805F7F4C
    /* lfs f1, 0x48(r3) */ // 0x805F7F50
    /* lfs f6, 0xec(r30) */ // 0x805F7F54
    /* fsubs f4, f0, f7 */ // 0x805F7F58
    /* lfs f0, 0x4c(r3) */ // 0x805F7F5C
    r3 = r30 + 0xe8; // 0x805F7F60
    /* lfs f5, 0xf0(r30) */ // 0x805F7F64
    /* fsubs f3, f1, f6 */ // 0x805F7F68
    /* lfs f1, 0(r4) */ // 0x805F7F6C
    /* fsubs f2, f0, f5 */ // 0x805F7F70
    /* fmuls f0, f4, f1 */ // 0x805F7F74
    /* fmuls f4, f3, f1 */ // 0x805F7F78
    /* fmuls f3, f2, f1 */ // 0x805F7F7C
    /* stfs f0, 8(r1) */ // 0x805F7F80
    /* fadds f2, f7, f0 */ // 0x805F7F84
    /* fadds f1, f6, f4 */ // 0x805F7F88
    /* stfs f4, 0xc(r1) */ // 0x805F7F8C
    /* fadds f0, f5, f3 */ // 0x805F7F90
    /* stfs f3, 0x10(r1) */ // 0x805F7F94
    /* stfs f2, 0xe8(r30) */ // 0x805F7F98
    /* stfs f1, 0xec(r30) */ // 0x805F7F9C
    /* stfs f0, 0xf0(r30) */ // 0x805F7FA0
    FUN_805E3430(); // bl 0x805E3430
}