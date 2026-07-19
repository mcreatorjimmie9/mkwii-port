/* Function at 0x807CCDA8, size=280 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807CCDA8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x807CCDBC
    /* lis r30, 0 */ // 0x807CCDC0
    r30 = r30 + 0; // 0x807CCDC4
    r0 = *(0x34b + r3); // lbz @ 0x807CCDC8
    if (==) goto 0x0x807cce98;
    r4 = r3;
    FUN_807CB4DC(r4, r3); // bl 0x807CB4DC
    /* lfs f1, 8(r1) */ // 0x807CCDE0
    /* lis r3, 0x51ec */ // 0x807CCDE4
    /* lfs f0, 0x10(r1) */ // 0x807CCDE8
    /* lis r0, 0x4330 */ // 0x807CCDEC
    /* lfs f3, 0x18(r30) */ // 0x807CCDF0
    r6 = r3 + -0x7ae1; // 0x807CCDF4
    /* fadds f0, f1, f0 */ // 0x807CCDF8
    /* lfs f1, 0x1c(r30) */ // 0x807CCDFC
    *(0x28 + r1) = r0; // stw @ 0x807CCE00
    /* lfd f2, 0x10(r30) */ // 0x807CCE04
    /* fabs f4, f0 */ // 0x807CCE08
    /* lfs f0, 0x20(r30) */ // 0x807CCE0C
    /* fmuls f3, f3, f4 */ // 0x807CCE10
    /* fmuls f1, f1, f4 */ // 0x807CCE14
    /* fctiwz f3, f3 */ // 0x807CCE18
    /* fctiwz f1, f1 */ // 0x807CCE1C
    /* stfd f3, 0x18(r1) */ // 0x807CCE20
    r7 = *(0x1c + r1); // lwz @ 0x807CCE24
    /* stfd f1, 0x20(r1) */ // 0x807CCE28
    /* mulhw r0, r6, r7 */ // 0x807CCE2C
    r4 = *(0x24 + r1); // lwz @ 0x807CCE30
    r3 = r0 >> 5; // srawi
    /* mulhw r0, r6, r4 */ // 0x807CCE38
    /* srwi r5, r3, 0x1f */ // 0x807CCE3C
    r5 = r3 + r5; // 0x807CCE40
    r0 = r0 >> 5; // srawi
    /* srwi r3, r0, 0x1f */ // 0x807CCE48
    r0 = r0 + r3; // 0x807CCE4C
    /* mulli r3, r5, 0x64 */ // 0x807CCE50
    /* mulli r0, r0, 0x64 */ // 0x807CCE54
    /* subf r3, r3, r7 */ // 0x807CCE58
    /* subf r0, r0, r4 */ // 0x807CCE5C
    r0 = r3 + r0; // 0x807CCE60
    r4 = r31 * r0; // 0x807CCE64
    /* mulhw r0, r6, r4 */ // 0x807CCE68
    r0 = r0 >> 5; // srawi
    /* srwi r3, r0, 0x1f */ // 0x807CCE70
    r0 = r0 + r3; // 0x807CCE74
    /* mulli r0, r0, 0x64 */ // 0x807CCE78
    /* subf r0, r0, r4 */ // 0x807CCE7C
    /* xoris r0, r0, 0x8000 */ // 0x807CCE80
    *(0x2c + r1) = r0; // stw @ 0x807CCE84
    /* lfd f1, 0x28(r1) */ // 0x807CCE88
    /* fsubs f1, f1, f2 */ // 0x807CCE8C
    /* fmuls f1, f0, f1 */ // 0x807CCE90
    /* b 0x807ccea8 */ // 0x807CCE94
    /* lis r3, 0 */ // 0x807CCE98
    r3 = *(0 + r3); // lwz @ 0x807CCE9C
    r3 = *(4 + r3); // lwz @ 0x807CCEA0
    FUN_805E36A8(r3); // bl 0x805E36A8
    r0 = *(0x44 + r1); // lwz @ 0x807CCEA8
    r31 = *(0x3c + r1); // lwz @ 0x807CCEAC
    r30 = *(0x38 + r1); // lwz @ 0x807CCEB0
    return;
}