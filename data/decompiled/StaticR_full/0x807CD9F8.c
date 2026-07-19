/* Function at 0x807CD9F8, size=92 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807CD9F8(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x807CDA04
    r31 = r3;
    r4 = r31;
    FUN_807CB4DC(r3, r4); // bl 0x807CB4DC
    r5 = r31 + 0x2ec; // 0x807CDA20
    FUN_805A4498(r4, r3, r4, r5); // bl 0x805A4498
    /* lis r3, 0 */ // 0x807CDA28
    /* lfs f0, 0x14(r1) */ // 0x807CDA2C
    /* lfs f3, 0(r3) */ // 0x807CDA30
    /* fmuls f1, f0, f0 */ // 0x807CDA34
    /* lfs f2, 0x1c(r1) */ // 0x807CDA38
    /* fmuls f0, f3, f3 */ // 0x807CDA3C
    /* stfs f3, 0x18(r1) */ // 0x807CDA40
    /* fmuls f2, f2, f2 */ // 0x807CDA44
    /* fadds f0, f1, f0 */ // 0x807CDA48
    /* fadds f1, f2, f0 */ // 0x807CDA4C
    FUN_805E3430(); // bl 0x805E3430
}