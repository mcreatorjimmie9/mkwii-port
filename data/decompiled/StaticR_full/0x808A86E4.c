/* Function at 0x808A86E4, size=392 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_808A86E4(int r3, int r4, int r5)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0xb8 + r1) = r30; // stw @ 0x808A86F8
    /* lis r30, 0 */ // 0x808A86FC
    r30 = r30 + 0; // 0x808A8700
    r0 = *(0xb0 + r3); // lwz @ 0x808A8704
    if (==) goto 0x0x808a871c;
    if (==) goto 0x0x808a8880;
    /* b 0x808a8980 */ // 0x808A8718
    r0 = *(0xb4 + r3); // lwz @ 0x808A871C
    if (!=) goto 0x0x808a8770;
    r12 = *(0 + r3); // lwz @ 0x808A8728
    r12 = *(0x24 + r12); // lwz @ 0x808A872C
    /* mtctr r12 */ // 0x808A8730
    /* bctrl  */ // 0x808A8734
    /* clrlwi r0, r3, 0x10 */ // 0x808A8738
    if (!=) goto 0x0x808a8758;
    /* lfs f1, 0(r30) */ // 0x808A8744
    r3 = r31;
    /* li r4, 0x2dc */ // 0x808A874C
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    /* b 0x808a8770 */ // 0x808A8754
    if (!=) goto 0x0x808a8770;
    /* lfs f1, 0(r30) */ // 0x808A8760
    r3 = r31;
    /* li r4, 0x2b3 */ // 0x808A8768
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r3 = *(0xb4 + r31); // lwz @ 0x808A8770
    if (>=) goto 0x0x808a8874;
    r0 = r3 + 5; // 0x808A877C
    /* lis r4, 0 */ // 0x808A8780
    *(0xb4 + r31) = r0; // stw @ 0x808A8784
    /* lfs f1, 0x28(r30) */ // 0x808A878C
    r4 = r4 + 0; // 0x808A8790
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    r3 = *(0xb4 + r31); // lwz @ 0x808A8798
    /* lis r0, 0x4330 */ // 0x808A879C
    *(0xb4 + r1) = r3; // stw @ 0x808A87A0
    /* lfd f1, 0x30(r30) */ // 0x808A87A8
    *(0xb0 + r1) = r0; // stw @ 0x808A87B0
    /* lfd f0, 0xb0(r1) */ // 0x808A87B4
    /* fsubs f1, f0, f1 */ // 0x808A87B8
    FUN_805A443C(r4); // bl 0x805A443C
    /* lfs f1, 0x2c(r30) */ // 0x808A87C0
    FUN_80735EBC(r3, r4); // bl 0x80735EBC
    FUN_805E3430(r3, r4, r3, r4); // bl 0x805E3430
    r3 = r31 + 0xc4; // 0x808A87E0
    r5 = r4;
    FUN_805E3430(r4, r4, r3, r5); // bl 0x805E3430
    r3 = *(0x2c + r31); // lhz @ 0x808A87EC
    /* li r0, 0 */ // 0x808A87F0
    *(0x54 + r31) = r0; // stb @ 0x808A87F4
    r0 = r3 | 4; // 0x808A87F8
    *(0x2c + r31) = r0; // sth @ 0x808A87FC
    /* lfs f0, 0x80(r1) */ // 0x808A8800
    /* stfs f0, 0x58(r31) */ // 0x808A8804
    /* lfs f0, 0x84(r1) */ // 0x808A8808
    /* stfs f0, 0x5c(r31) */ // 0x808A880C
    /* lfs f0, 0x88(r1) */ // 0x808A8810
    /* stfs f0, 0x60(r31) */ // 0x808A8814
    /* lfs f0, 0x8c(r1) */ // 0x808A8818
    /* stfs f0, 0x64(r31) */ // 0x808A881C
    /* lfs f0, 0x90(r1) */ // 0x808A8820
    /* stfs f0, 0x68(r31) */ // 0x808A8824
    /* lfs f0, 0x94(r1) */ // 0x808A8828
    /* stfs f0, 0x6c(r31) */ // 0x808A882C
    /* lfs f0, 0x98(r1) */ // 0x808A8830
    /* stfs f0, 0x70(r31) */ // 0x808A8834
    /* lfs f0, 0x9c(r1) */ // 0x808A8838
    /* stfs f0, 0x74(r31) */ // 0x808A883C
    /* lfs f0, 0xa0(r1) */ // 0x808A8840
    /* stfs f0, 0x78(r31) */ // 0x808A8844
    /* lfs f0, 0xa4(r1) */ // 0x808A8848
    /* stfs f0, 0x7c(r31) */ // 0x808A884C
    /* lfs f0, 0xa8(r1) */ // 0x808A8850
    /* stfs f0, 0x80(r31) */ // 0x808A8854
    /* lfs f2, 0x30(r31) */ // 0x808A8858
    /* lfs f1, 0x34(r31) */ // 0x808A885C
    /* lfs f0, 0x38(r31) */ // 0x808A8860
    /* stfs f2, 0x64(r31) */ // 0x808A8864
    /* stfs f1, 0x74(r31) */ // 0x808A8868
}