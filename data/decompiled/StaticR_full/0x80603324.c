/* Function at 0x80603324, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80603324(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8060332C
    /* lis r5, 0 */ // 0x80603330
    /* lfs f2, 0(r4) */ // 0x80603334
    *(0x14 + r1) = r0; // stw @ 0x80603338
    /* fmr f3, f2 */ // 0x8060333C
    /* lfs f1, 0(r5) */ // 0x80603340
    *(0xc + r1) = r31; // stw @ 0x80603344
    r31 = r3;
    /* fmr f4, f2 */ // 0x8060334C
    r3 = r3 + 0x3c; // 0x80603350
    FUN_805E3430(r3); // bl 0x805E3430
}