/* Function at 0x807DD73C, size=256 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807DD73C(int r3, int r4, int r5)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807DD744
    r4 = r4 + 0; // 0x807DD74C
    *(0xbc + r1) = r31; // stw @ 0x807DD750
    /* lis r31, 0 */ // 0x807DD754
    r31 = r31 + 0; // 0x807DD758
    *(0xb8 + r1) = r30; // stw @ 0x807DD75C
    r30 = r3;
    *(0xb4 + r1) = r29; // stw @ 0x807DD764
    *(0xb0 + r1) = r28; // stw @ 0x807DD768
    r5 = *(0x78 + r3); // lwz @ 0x807DD76C
    r0 = r5 + 1; // 0x807DD770
    *(0x78 + r3) = r0; // stw @ 0x807DD774
    r0 = *(4 + r4); // lwz @ 0x807DD778
    if (>) goto 0x0x807dd798;
    r12 = *(0 + r4); // lwz @ 0x807DD784
    r3 = r4;
    r12 = *(0x18 + r12); // lwz @ 0x807DD78C
    /* mtctr r12 */ // 0x807DD790
    /* bctrl  */ // 0x807DD794
    /* lis r29, 0 */ // 0x807DD798
    /* lis r4, 0 */ // 0x807DD79C
    r29 = r29 + 0; // 0x807DD7A0
    /* lis r0, 0x4330 */ // 0x807DD7A4
    r5 = *(8 + r29); // lwz @ 0x807DD7A8
    r3 = r4 + 0; // 0x807DD7AC
    /* lfs f6, 0(r4) */ // 0x807DD7B0
    r4 = *(0 + r5); // lwz @ 0x807DD7B4
    /* lfs f5, 4(r3) */ // 0x807DD7B8
    r28 = *(0x6c + r4); // lwz @ 0x807DD7BC
    /* lfs f4, 8(r3) */ // 0x807DD7C0
    r4 = *(0x64 + r28); // lwz @ 0x807DD7C4
    r3 = *(0x68 + r28); // lwz @ 0x807DD7C8
    *(0x68 + r1) = r3; // stw @ 0x807DD7CC
    /* lfs f3, 0x274(r31) */ // 0x807DD7D0
    *(0x64 + r1) = r4; // stw @ 0x807DD7D4
    /* lfs f1, 0x270(r31) */ // 0x807DD7D8
    r3 = *(0x6c + r28); // lwz @ 0x807DD7DC
    *(0x6c + r1) = r3; // stw @ 0x807DD7E0
    /* lfd f2, 0x298(r31) */ // 0x807DD7E4
    r4 = *(0x70 + r28); // lwz @ 0x807DD7E8
    r3 = *(0x74 + r28); // lwz @ 0x807DD7EC
    *(0x5c + r1) = r3; // stw @ 0x807DD7F0
    /* lfs f0, 0x284(r31) */ // 0x807DD7F4
    *(0x58 + r1) = r4; // stw @ 0x807DD7F8
    r3 = *(0x78 + r28); // lwz @ 0x807DD7FC
    *(0x60 + r1) = r3; // stw @ 0x807DD800
    /* stfs f6, 0x7c(r1) */ // 0x807DD804
    /* stfs f5, 0x8c(r1) */ // 0x807DD808
    /* stfs f4, 0x9c(r1) */ // 0x807DD80C
    /* stfs f3, 0x4c(r1) */ // 0x807DD810
    /* stfs f1, 0x50(r1) */ // 0x807DD814
    /* stfs f1, 0x54(r1) */ // 0x807DD818
    r3 = *(0x78 + r30); // lwz @ 0x807DD81C
    *(0xa0 + r1) = r0; // stw @ 0x807DD820
    /* xoris r0, r3, 0x8000 */ // 0x807DD824
    *(0xa4 + r1) = r0; // stw @ 0x807DD828
    /* lfd f1, 0xa0(r1) */ // 0x807DD82C
    /* fsubs f1, f1, f2 */ // 0x807DD830
    /* fmuls f1, f1, f0 */ // 0x807DD834
    FUN_805E3430(); // bl 0x805E3430
}