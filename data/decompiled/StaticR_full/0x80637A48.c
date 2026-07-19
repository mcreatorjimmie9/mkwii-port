/* Function at 0x80637A48, size=108 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80637A48(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lfs f7, 0(r4) */ // 0x80637A50
    /* lfs f0, 4(r5) */ // 0x80637A54
    *(0x34 + r1) = r0; // stw @ 0x80637A58
    /* lfs f2, 8(r4) */ // 0x80637A5C
    /* fmuls f6, f7, f0 */ // 0x80637A60
    *(0x2c + r1) = r31; // stw @ 0x80637A64
    r31 = r4;
    /* lfs f4, 0(r5) */ // 0x80637A6C
    /* fmuls f0, f2, f0 */ // 0x80637A70
    *(0x28 + r1) = r30; // stw @ 0x80637A74
    /* lfs f5, 4(r4) */ // 0x80637A78
    /* fmuls f3, f2, f4 */ // 0x80637A7C
    /* lfs f1, 8(r5) */ // 0x80637A80
    r30 = r3;
    /* fmuls f4, f5, f4 */ // 0x80637A88
    /* fmuls f2, f7, f1 */ // 0x80637A90
    /* fmuls f1, f5, f1 */ // 0x80637A94
    /* fsubs f4, f6, f4 */ // 0x80637A98
    /* fsubs f2, f3, f2 */ // 0x80637A9C
    /* fsubs f0, f1, f0 */ // 0x80637AA0
    /* stfs f4, 0x1c(r1) */ // 0x80637AA4
    /* stfs f0, 0x14(r1) */ // 0x80637AA8
    /* stfs f2, 0x18(r1) */ // 0x80637AAC
    FUN_805E3430(); // bl 0x805E3430
}