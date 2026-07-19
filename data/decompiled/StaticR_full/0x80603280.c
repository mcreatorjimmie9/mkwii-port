/* Function at 0x80603280, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80603280(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8060328C
    r31 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r3, 0 */ // 0x80603298
    /* lis r4, 0 */ // 0x8060329C
    /* lfs f2, 0(r3) */ // 0x806032A0
    /* lis r3, 0 */ // 0x806032A4
    r4 = r4 + 0; // 0x806032A8
    /* lfs f1, 0(r3) */ // 0x806032AC
    /* fmr f3, f2 */ // 0x806032B0
    *(0xc + r31) = r4; // stw @ 0x806032B4
    /* fmr f4, f2 */ // 0x806032B8
    r3 = r31 + 0x3c; // 0x806032BC
    FUN_805E3430(r3); // bl 0x805E3430
}