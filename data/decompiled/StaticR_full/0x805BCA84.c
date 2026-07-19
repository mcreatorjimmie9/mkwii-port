/* Function at 0x805BCA84, size=160 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805BCA84(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x805BCA90
    *(0x2c + r1) = r31; // stw @ 0x805BCA94
    r31 = r6;
    r6 = r7;
    /* li r7, 1 */ // 0x805BCAA0
    *(0x28 + r1) = r30; // stw @ 0x805BCAA4
    r30 = r5;
    r5 = r31;
    *(0x24 + r1) = r29; // stw @ 0x805BCAB0
    r29 = r3;
    *(8 + r1) = r0; // stb @ 0x805BCABC
    *(0x10 + r1) = r0; // stw @ 0x805BCAC0
    FUN_805BC8D0(r3); // bl 0x805BC8D0
    r6 = r3;
    r4 = r30;
    r5 = r31;
    /* li r7, 4 */ // 0x805BCAD8
    FUN_805BC8D0(r6, r4, r5, r3, r7); // bl 0x805BC8D0
    r5 = *(8 + r1); // lbz @ 0x805BCAE0
    /* subfic r0, r30, 0x17 */ // 0x805BCAE4
    r4 = *(0x10 + r1); // lwz @ 0x805BCAE8
    r5 = r5 + 0x7f; // 0x805BCAEC
    /* slwi r5, r5, 0x17 */ // 0x805BCAF0
    r0 = r4 << r0; // slw
    r0 = r5 | r0; // 0x805BCAF8
    *(0xc + r1) = r0; // stw @ 0x805BCAFC
    /* lfs f0, 0xc(r1) */ // 0x805BCB00
    /* stfs f0, 0(r29) */ // 0x805BCB04
    r31 = *(0x2c + r1); // lwz @ 0x805BCB08
    r30 = *(0x28 + r1); // lwz @ 0x805BCB0C
    r29 = *(0x24 + r1); // lwz @ 0x805BCB10
    r0 = *(0x34 + r1); // lwz @ 0x805BCB14
    return;
}