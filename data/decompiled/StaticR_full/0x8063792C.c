/* Function at 0x8063792C, size=108 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8063792C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lfs f7, 0(r5) */ // 0x80637934
    /* lfs f0, 4(r4) */ // 0x80637938
    *(0x34 + r1) = r0; // stw @ 0x8063793C
    /* lfs f2, 8(r5) */ // 0x80637940
    /* fmuls f6, f7, f0 */ // 0x80637944
    *(0x2c + r1) = r31; // stw @ 0x80637948
    r31 = r4;
    /* lfs f4, 0(r4) */ // 0x80637950
    /* fmuls f0, f2, f0 */ // 0x80637954
    *(0x28 + r1) = r30; // stw @ 0x80637958
    /* lfs f5, 4(r5) */ // 0x8063795C
    /* fmuls f3, f2, f4 */ // 0x80637960
    /* lfs f1, 8(r4) */ // 0x80637964
    r30 = r3;
    /* fmuls f4, f5, f4 */ // 0x8063796C
    /* fmuls f2, f7, f1 */ // 0x80637974
    /* fmuls f1, f5, f1 */ // 0x80637978
    /* fsubs f4, f6, f4 */ // 0x8063797C
    /* fsubs f2, f3, f2 */ // 0x80637980
    /* fsubs f0, f1, f0 */ // 0x80637984
    /* stfs f4, 0x1c(r1) */ // 0x80637988
    /* stfs f0, 0x14(r1) */ // 0x8063798C
    /* stfs f2, 0x18(r1) */ // 0x80637990
    FUN_805E3430(); // bl 0x805E3430
}