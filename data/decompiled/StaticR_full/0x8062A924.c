/* Function at 0x8062A924, size=284 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8062A924(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r7, 0 */ // 0x8062A92C
    /* lis r6, 0 */ // 0x8062A930
    *(0x14 + r1) = r0; // stw @ 0x8062A934
    r7 = r7 + 0; // 0x8062A93C
    r6 = r6 + 0; // 0x8062A940
    *(0xc + r1) = r31; // stw @ 0x8062A944
    /* lis r31, 0 */ // 0x8062A948
    r31 = r31 + 0; // 0x8062A94C
    *(8 + r1) = r30; // stw @ 0x8062A950
    r30 = r3;
    /* lfs f2, 0(r31) */ // 0x8062A958
    /* lfs f1, 4(r31) */ // 0x8062A95C
    /* lfs f0, 8(r31) */ // 0x8062A960
    *(0 + r3) = r7; // stw @ 0x8062A964
    /* stfs f2, 0x64(r3) */ // 0x8062A968
    /* stfs f1, 0x68(r3) */ // 0x8062A96C
    /* stfs f2, 0x6c(r3) */ // 0x8062A970
    /* stfs f2, 0x70(r3) */ // 0x8062A974
    /* stfs f2, 0x74(r3) */ // 0x8062A978
    /* stfs f2, 0x78(r3) */ // 0x8062A97C
    /* stfs f2, 0x7c(r3) */ // 0x8062A980
    /* stfs f0, 0x80(r3) */ // 0x8062A984
    /* stfs f2, 0x84(r3) */ // 0x8062A988
    *(0x88 + r3) = r6; // stw @ 0x8062A98C
    *(0x8c + r3) = r4; // stw @ 0x8062A990
    *(0x90 + r3) = r3; // stw @ 0x8062A994
    if (==) goto 0x0x8062a9ac;
    /* lis r3, 0 */ // 0x8062A99C
    r4 = r30 + 0x88; // 0x8062A9A0
    r3 = r3 + 0; // 0x8062A9A4
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x8062A9AC
    /* lfs f3, 0(r31) */ // 0x8062A9B0
    r3 = r3 + 0; // 0x8062A9B4
    /* lfs f2, 0xc(r31) */ // 0x8062A9B8
    r0 = r3 + 0x30; // 0x8062A9BC
    /* lfs f1, 8(r31) */ // 0x8062A9C0
    *(0 + r30) = r3; // stw @ 0x8062A9C4
    r3 = r30;
    r4 = *(0x8c + r30); // lwz @ 0x8062A9CC
    *(0x88 + r30) = r0; // stw @ 0x8062A9D0
    /* lfs f0, 0x10(r31) */ // 0x8062A9D4
    /* stfs f3, 0x64(r30) */ // 0x8062A9D8
    /* stfs f3, 0x68(r30) */ // 0x8062A9DC
    /* stfs f2, 0x6c(r30) */ // 0x8062A9E0
    /* stfs f3, 0x70(r30) */ // 0x8062A9E4
    /* stfs f3, 0x74(r30) */ // 0x8062A9E8
    /* stfs f3, 0x78(r30) */ // 0x8062A9EC
    /* stfs f3, 0x7c(r30) */ // 0x8062A9F0
    /* stfs f3, 0x84(r30) */ // 0x8062A9F4
    /* stfs f1, 0x80(r30) */ // 0x8062A9F8
    /* stfs f1, 0x18(r4) */ // 0x8062A9FC
    r4 = *(0x8c + r30); // lwz @ 0x8062AA00
    /* stfs f0, 0x1c(r4) */ // 0x8062AA04
    r12 = *(0 + r30); // lwz @ 0x8062AA08
    r12 = *(0x14 + r12); // lwz @ 0x8062AA0C
    /* mtctr r12 */ // 0x8062AA10
    /* bctrl  */ // 0x8062AA14
    r4 = *(0x8c + r30); // lwz @ 0x8062AA18
    r3 = r30;
    r0 = *(0x90 + r30); // lwz @ 0x8062AA20
    *(0x6c + r4) = r0; // stw @ 0x8062AA24
    r31 = *(0xc + r1); // lwz @ 0x8062AA28
    r30 = *(8 + r1); // lwz @ 0x8062AA2C
    r0 = *(0x14 + r1); // lwz @ 0x8062AA30
    return;
}