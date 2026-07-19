/* Function at 0x80801C28, size=68 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80801C28(int r3)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80801C38
    /* lfs f0, 0(r31) */ // 0x80801C3C
    *(0x58 + r1) = r30; // stw @ 0x80801C40
    /* lis r30, 0 */ // 0x80801C44
    r30 = r30 + 0; // 0x80801C48
    *(0x54 + r1) = r29; // stw @ 0x80801C4C
    r29 = r3;
    /* lfs f2, 0x48(r3) */ // 0x80801C54
    /* lfs f1, 0x10(r30) */ // 0x80801C58
    /* fadds f1, f2, f1 */ // 0x80801C5C
    /* stfs f1, 0x48(r3) */ // 0x80801C60
    /* fmuls f1, f1, f0 */ // 0x80801C64
    FUN_805E3430(); // bl 0x805E3430
}