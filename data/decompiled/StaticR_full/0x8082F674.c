/* Function at 0x8082F674, size=340 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_8082F674(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8082F684
    r31 = r31 + 0; // 0x8082F688
    *(0x28 + r1) = r30; // stw @ 0x8082F68C
    /* lfs f0, 4(r31) */ // 0x8082F690
    *(0x24 + r1) = r29; // stw @ 0x8082F694
    r29 = r3;
    /* lfs f1, 0(r31) */ // 0x8082F69C
    r0 = *(0x78 + r3); // lwz @ 0x8082F6A0
    r4 = *(0x1c4 + r3); // lwz @ 0x8082F6A4
    r0 = r0 | 0x400; // 0x8082F6A8
    *(0x78 + r3) = r0; // stw @ 0x8082F6AC
    r0 = r4 + 2; // 0x8082F6B0
    /* li r4, 1 */ // 0x8082F6B4
    /* stfs f1, 0x140(r3) */ // 0x8082F6B8
    /* clrlwi r30, r0, 0x10 */ // 0x8082F6BC
    /* stfs f0, 0x5c(r3) */ // 0x8082F6C0
    /* stfs f0, 0x60(r3) */ // 0x8082F6C4
    /* stfs f0, 0x64(r3) */ // 0x8082F6C8
    r3 = *(0x1d4 + r3); // lwz @ 0x8082F6CC
    r12 = *(0 + r3); // lwz @ 0x8082F6D0
    r12 = *(0xc + r12); // lwz @ 0x8082F6D4
    /* mtctr r12 */ // 0x8082F6D8
    /* bctrl  */ // 0x8082F6DC
    r3 = *(0xa4 + r29); // lwz @ 0x8082F6E0
    FUN_808179C0(); // bl 0x808179C0
    r3 = *(0x1d4 + r29); // lwz @ 0x8082F6E8
    /* lfs f0, 0xa0(r31) */ // 0x8082F6F0
    /* stfs f0, 8(r1) */ // 0x8082F6F4
    /* stfs f0, 0xc(r1) */ // 0x8082F6F8
    /* stfs f0, 0x10(r1) */ // 0x8082F6FC
    r12 = *(0 + r3); // lwz @ 0x8082F700
    r12 = *(0x14 + r12); // lwz @ 0x8082F704
    /* mtctr r12 */ // 0x8082F708
    /* bctrl  */ // 0x8082F70C
    r3 = *(0x1d4 + r29); // lwz @ 0x8082F710
    /* li r4, 0 */ // 0x8082F714
    /* lfs f1, 0(r31) */ // 0x8082F718
    r3 = *(0x28 + r3); // lwz @ 0x8082F71C
    /* lfs f2, 4(r31) */ // 0x8082F720
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(0x1d4 + r29); // lwz @ 0x8082F728
    /* li r4, 1 */ // 0x8082F72C
    /* lfs f1, 0(r31) */ // 0x8082F730
    r3 = *(0x28 + r3); // lwz @ 0x8082F734
    /* lfs f2, 4(r31) */ // 0x8082F738
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(0x1d4 + r29); // lwz @ 0x8082F740
    r4 = r30;
    /* lfs f1, 0(r31) */ // 0x8082F748
    r3 = *(0x28 + r3); // lwz @ 0x8082F74C
    /* lfs f2, 4(r31) */ // 0x8082F750
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* lfs f1, 0(r31) */ // 0x8082F758
    r3 = r29;
    /* li r4, 0x109 */ // 0x8082F760
    FUN_8082DFAC(r3, r4); // bl 0x8082DFAC
    r3 = r29;
    /* li r4, 0x106 */ // 0x8082F76C
    FUN_8082DF94(r3, r4, r3, r4); // bl 0x8082DF94
    r0 = *(0x7c + r29); // lwz @ 0x8082F774
    /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x8082F778
    if (==) goto 0x0x8082f788;
    /* lfs f0, 0xa4(r31) */ // 0x8082F780
    /* b 0x8082f790 */ // 0x8082F784
    /* lis r3, 0 */ // 0x8082F788
    /* lfs f0, 0(r3) */ // 0x8082F78C
    /* lis r4, 0 */ // 0x8082F790
    r3 = *(0xb0 + r29); // lwz @ 0x8082F794
    r4 = r4 + 0; // 0x8082F798
    /* lfs f2, 0(r31) */ // 0x8082F79C
    /* lfs f1, 0x454(r4) */ // 0x8082F7A0
    /* fmuls f1, f0, f1 */ // 0x8082F7A4
    FUN_80816BEC(r4); // bl 0x80816BEC
    r0 = *(0x34 + r1); // lwz @ 0x8082F7AC
    r31 = *(0x2c + r1); // lwz @ 0x8082F7B0
    r30 = *(0x28 + r1); // lwz @ 0x8082F7B4
    r29 = *(0x24 + r1); // lwz @ 0x8082F7B8
    return;
}