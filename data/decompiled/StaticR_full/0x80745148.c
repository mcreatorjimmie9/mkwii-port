/* Function at 0x80745148, size=148 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80745148(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x8074515C
    r30 = r3;
    r5 = r30;
    FUN_805A4498(r5, r3); // bl 0x805A4498
    r4 = r31;
    r5 = r30;
    FUN_805A4498(r3, r4, r5, r3); // bl 0x805A4498
    /* lfs f5, 0x14(r1) */ // 0x80745180
    /* lfs f2, 0x18(r1) */ // 0x80745184
    /* lfs f1, 8(r1) */ // 0x80745188
    /* fmuls f4, f5, f5 */ // 0x8074518C
    /* lfs f0, 0xc(r1) */ // 0x80745190
    /* fmuls f3, f2, f2 */ // 0x80745194
    /* fmuls f1, f5, f1 */ // 0x80745198
    /* lfs f6, 0x1c(r1) */ // 0x8074519C
    /* fmuls f0, f2, f0 */ // 0x807451A0
    /* lfs f2, 0x10(r1) */ // 0x807451A4
    /* fmuls f5, f6, f6 */ // 0x807451A8
    /* fadds f3, f4, f3 */ // 0x807451AC
    /* fadds f0, f1, f0 */ // 0x807451B0
    r31 = *(0x2c + r1); // lwz @ 0x807451B4
    /* fmuls f2, f6, f2 */ // 0x807451B8
    r30 = *(0x28 + r1); // lwz @ 0x807451BC
    /* fadds f1, f5, f3 */ // 0x807451C0
    r0 = *(0x34 + r1); // lwz @ 0x807451C4
    /* fadds f0, f2, f0 */ // 0x807451C8
    /* fdivs f1, f0, f1 */ // 0x807451CC
    return;
}