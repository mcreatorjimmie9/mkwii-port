/* Function at 0x80743DF8, size=116 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80743DF8(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x38 + r1) = r30; // stw @ 0x80743E0C
    r30 = r4;
    *(0x34 + r1) = r29; // stw @ 0x80743E14
    r29 = r3;
    /* lfs f3, 0(r4) */ // 0x80743E1C
    /* lfs f2, 0(r3) */ // 0x80743E20
    /* lfs f1, 4(r4) */ // 0x80743E24
    /* lfs f0, 4(r3) */ // 0x80743E28
    /* fmuls f2, f3, f2 */ // 0x80743E2C
    /* lfs f4, 8(r4) */ // 0x80743E30
    r4 = r29;
    /* fmuls f0, f1, f0 */ // 0x80743E38
    /* lfs f3, 8(r3) */ // 0x80743E3C
    /* fmuls f1, f4, f3 */ // 0x80743E44
    /* fadds f0, f2, f0 */ // 0x80743E48
    /* fadds f1, f1, f0 */ // 0x80743E4C
    FUN_805A443C(r3); // bl 0x805A443C
    r4 = r30;
    FUN_805A4498(r4, r3, r5); // bl 0x805A4498
    FUN_805E3430(r4, r3, r5, r3); // bl 0x805E3430
}