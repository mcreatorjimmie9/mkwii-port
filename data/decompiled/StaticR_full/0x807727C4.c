/* Function at 0x807727C4, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807727C4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807727D0
    r31 = r3;
    r4 = r31 + 0x40; // 0x807727DC
    r5 = r31 + 0x68; // 0x807727E0
    FUN_805A4498(r3, r4, r5); // bl 0x805A4498
    /* lfs f1, 0x28(r31) */ // 0x807727E8
    /* lis r4, 0 */ // 0x807727EC
    /* lfs f0, 8(r1) */ // 0x807727F0
    /* lis r3, 0 */ // 0x807727F4
    /* lfs f4, 0x2c(r31) */ // 0x807727F8
    /* fadds f6, f1, f0 */ // 0x807727FC
    /* lfs f5, 0x30(r31) */ // 0x80772800
    /* lfs f3, 0x10(r31) */ // 0x80772804
    /* stfs f6, 0x28(r31) */ // 0x80772808
    /* lfs f2, 0x14(r31) */ // 0x8077280C
    /* lfs f0, 0xc(r1) */ // 0x80772810
    /* lfs f1, 0x18(r31) */ // 0x80772814
    /* fadds f7, f4, f0 */ // 0x80772818
    /* lfs f0, 0(r3) */ // 0x8077281C
    /* stfs f7, 0x2c(r31) */ // 0x80772820
    /* lfs f4, 0x10(r1) */ // 0x80772824
    /* fadds f4, f5, f4 */ // 0x80772828
    /* stfs f4, 0x30(r31) */ // 0x8077282C
    /* lfs f8, 0(r4) */ // 0x80772830
    /* fmuls f6, f6, f8 */ // 0x80772834
    /* stfs f0, 0x48(r31) */ // 0x80772838
    /* fmuls f5, f7, f8 */ // 0x8077283C
    /* fmuls f4, f4, f8 */ // 0x80772840
    /* stfs f6, 0x28(r31) */ // 0x80772844
    /* fadds f3, f3, f6 */ // 0x80772848
    /* fadds f2, f2, f5 */ // 0x8077284C
    /* stfs f5, 0x2c(r31) */ // 0x80772850
    /* fadds f1, f1, f4 */ // 0x80772854
    /* stfs f4, 0x30(r31) */ // 0x80772858
    /* stfs f3, 0x10(r31) */ // 0x8077285C
    /* stfs f2, 0x14(r31) */ // 0x80772860
    /* stfs f1, 0x18(r31) */ // 0x80772864
    /* stfs f0, 0x44(r31) */ // 0x80772868
    /* stfs f0, 0x40(r31) */ // 0x8077286C
    r31 = *(0x1c + r1); // lwz @ 0x80772870
    r0 = *(0x24 + r1); // lwz @ 0x80772874
    return;
}