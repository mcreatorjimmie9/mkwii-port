/* Function at 0x80801D90, size=64 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80801D90(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x80801D98
    /* lfs f1, 0(r5) */ // 0x80801DA0
    *(0x3c + r1) = r31; // stw @ 0x80801DA4
    *(0x38 + r1) = r30; // stw @ 0x80801DA8
    r30 = r3;
    r4 = r30 + 0x38; // 0x80801DB0
    /* lfs f2, 0x44(r3) */ // 0x80801DB4
    /* lfs f0, 0x3c(r3) */ // 0x80801DB8
    /* fmuls f1, f2, f1 */ // 0x80801DBC
    /* fadds f0, f0, f1 */ // 0x80801DC0
    /* stfs f0, 0x3c(r3) */ // 0x80801DC4
    FUN_805E3430(r3); // bl 0x805E3430
}