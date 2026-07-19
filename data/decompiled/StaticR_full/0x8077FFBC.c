/* Function at 0x8077FFBC, size=136 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8077FFBC(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* stfd f31, 0x38(r1) */ // 0x8077FFC8
    /* fmr f31, f1 */ // 0x8077FFCC
    *(0x34 + r1) = r31; // stw @ 0x8077FFD0
    r31 = r4;
    r4 = r5;
    *(0x30 + r1) = r30; // stw @ 0x8077FFDC
    r30 = r3;
    r5 = r31;
    FUN_805A4498(r4, r5, r3); // bl 0x805A4498
    /* fmr f1, f31 */ // 0x8077FFF0
    FUN_805A443C(r3, r3, r4); // bl 0x805A443C
    r4 = r31;
    FUN_805A4464(r4, r4, r3, r5); // bl 0x805A4464
    r3 = *(8 + r1); // lwz @ 0x80780010
    r0 = *(0xc + r1); // lwz @ 0x80780014
    *(4 + r30) = r0; // stw @ 0x80780018
    *(0 + r30) = r3; // stw @ 0x8078001C
    r0 = *(0x10 + r1); // lwz @ 0x80780020
    *(8 + r30) = r0; // stw @ 0x80780024
    /* lfd f31, 0x38(r1) */ // 0x80780028
    r31 = *(0x34 + r1); // lwz @ 0x8078002C
    r30 = *(0x30 + r1); // lwz @ 0x80780030
    r0 = *(0x44 + r1); // lwz @ 0x80780034
    return;
}