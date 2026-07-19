/* Function at 0x80771478, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80771478(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80771484
    r31 = r3;
    r4 = r31 + 0x40; // 0x80771490
    r5 = r31 + 0x68; // 0x80771494
    FUN_805A4498(r3, r4, r5); // bl 0x805A4498
    /* lfs f1, 0x28(r31) */ // 0x8077149C
    /* lis r4, 0 */ // 0x807714A0
    /* lfs f0, 8(r1) */ // 0x807714A4
    /* lis r3, 0 */ // 0x807714A8
    /* lfs f4, 0x2c(r31) */ // 0x807714AC
    /* fadds f6, f1, f0 */ // 0x807714B0
    /* lfs f5, 0x30(r31) */ // 0x807714B4
    /* lfs f3, 0x10(r31) */ // 0x807714B8
    /* stfs f6, 0x28(r31) */ // 0x807714BC
    /* lfs f2, 0x14(r31) */ // 0x807714C0
    /* lfs f0, 0xc(r1) */ // 0x807714C4
    /* lfs f1, 0x18(r31) */ // 0x807714C8
    /* fadds f7, f4, f0 */ // 0x807714CC
    /* lfs f0, 0(r3) */ // 0x807714D0
    /* stfs f7, 0x2c(r31) */ // 0x807714D4
    /* lfs f4, 0x10(r1) */ // 0x807714D8
    /* fadds f4, f5, f4 */ // 0x807714DC
    /* stfs f4, 0x30(r31) */ // 0x807714E0
    /* lfs f8, 0(r4) */ // 0x807714E4
    /* fmuls f6, f6, f8 */ // 0x807714E8
    /* stfs f0, 0x48(r31) */ // 0x807714EC
    /* fmuls f5, f7, f8 */ // 0x807714F0
    /* fmuls f4, f4, f8 */ // 0x807714F4
    /* stfs f6, 0x28(r31) */ // 0x807714F8
    /* fadds f3, f3, f6 */ // 0x807714FC
    /* fadds f2, f2, f5 */ // 0x80771500
    /* stfs f5, 0x2c(r31) */ // 0x80771504
    /* fadds f1, f1, f4 */ // 0x80771508
    /* stfs f4, 0x30(r31) */ // 0x8077150C
    /* stfs f3, 0x10(r31) */ // 0x80771510
    /* stfs f2, 0x14(r31) */ // 0x80771514
    /* stfs f1, 0x18(r31) */ // 0x80771518
    /* stfs f0, 0x44(r31) */ // 0x8077151C
    /* stfs f0, 0x40(r31) */ // 0x80771520
    r31 = *(0x1c + r1); // lwz @ 0x80771524
    r0 = *(0x24 + r1); // lwz @ 0x80771528
    return;
}