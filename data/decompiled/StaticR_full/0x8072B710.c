/* Function at 0x8072B710, size=896 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_8072B710(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 0 */ // 0x8072B718
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8072B72C
    *(0x10 + r1) = r28; // stw @ 0x8072B730
    r0 = *(0x2c + r3); // lbz @ 0x8072B734
    *(0x3a + r3) = r4; // stb @ 0x8072B738
    if (==) goto 0x0x8072b760;
    /* lis r3, 0 */ // 0x8072B744
    r3 = *(0 + r3); // lwz @ 0x8072B748
    FUN_805C25E8(r3); // bl 0x805C25E8
    if (<=) goto 0x0x8072b760;
    /* li r0, 1 */ // 0x8072B758
    *(0x3a + r30) = r0; // stb @ 0x8072B75C
    r0 = *(0x1c + r30); // lwz @ 0x8072B760
    /* li r4, 0 */ // 0x8072B764
    r5 = *(0x1a + r30); // lhz @ 0x8072B768
    r3 = *(0x118 + r30); // lwz @ 0x8072B76C
    r0 = r5 ^ r0; // 0x8072B770
    /* cntlzw r0, r0 */ // 0x8072B774
    r0 = r5 << r0; // slw
    /* srwi r0, r0, 0x1f */ // 0x8072B77C
    *(0x3b + r30) = r0; // stb @ 0x8072B780
    r3 = *(0 + r3); // lwz @ 0x8072B784
    r3 = *(4 + r3); // lwz @ 0x8072B788
    r0 = *(4 + r3); // lwz @ 0x8072B78C
    /* rlwinm. r0, r0, 0, 0x17, 0x17 */ // 0x8072B790
    if (==) goto 0x0x8072b7a8;
    r0 = *(0x10e + r30); // lbz @ 0x8072B798
    if (!=) goto 0x0x8072b7a8;
    /* li r4, 1 */ // 0x8072B7A4
    *(0x10e + r30) = r4; // stb @ 0x8072B7AC
    /* li r4, 0 */ // 0x8072B7B0
    if (==) goto 0x0x8072b7c8;
    r0 = *(0x3b + r30); // lbz @ 0x8072B7B8
    if (!=) goto 0x0x8072b7c8;
    /* li r4, 1 */ // 0x8072B7C4
    r0 = *(0x3a + r30); // lbz @ 0x8072B7C8
    /* li r5, 0 */ // 0x8072B7CC
    if (!=) goto 0x0x8072b7e8;
    r0 = *(0x3b + r30); // lbz @ 0x8072B7D8
    if (!=) goto 0x0x8072b7e8;
    /* li r5, 1 */ // 0x8072B7E4
    r0 = *(0xbc + r30); // lbz @ 0x8072B7E8
    /* li r6, 0 */ // 0x8072B7EC
    r8 = *(0xbb + r30); // lbz @ 0x8072B7F0
    if (==) goto 0x0x8072b80c;
    r0 = *(0xb9 + r30); // lbz @ 0x8072B7FC
    if (==) goto 0x0x8072b80c;
    /* li r6, 1 */ // 0x8072B808
    /* lis r3, 0 */ // 0x8072B80C
    /* li r7, 0 */ // 0x8072B810
    r3 = *(0 + r3); // lwz @ 0x8072B814
    r0 = *(0xb70 + r3); // lwz @ 0x8072B818
    if (!=) goto 0x0x8072b834;
    r0 = *(0xb74 + r3); // lwz @ 0x8072B824
    if (!=) goto 0x0x8072b834;
    /* li r7, 1 */ // 0x8072B830
    /* li r31, 1 */ // 0x8072B838
    /* li r3, 0 */ // 0x8072B83C
    if (!=) goto 0x0x8072b878;
    if (!=) goto 0x0x8072b878;
    if (!=) goto 0x0x8072b878;
    r0 = *(0x794 + r30); // lbz @ 0x8072B854
    if (!=) goto 0x0x8072b878;
    r0 = *(0x156 + r30); // lbz @ 0x8072B860
    if (==) goto 0x0x8072b87c;
    r0 = *(0xc + r30); // lbz @ 0x8072B86C
    if (==) goto 0x0x8072b87c;
    /* li r3, 1 */ // 0x8072B878
    if (!=) goto 0x0x8072b894;
    r0 = *(0x130 + r30); // lwz @ 0x8072B884
    if (==) goto 0x0x8072b894;
    /* li r31, 0 */ // 0x8072B890
    /* li r8, 1 */ // 0x8072B898
    /* li r3, 0 */ // 0x8072B89C
    if (!=) goto 0x0x8072b8c0;
    if (!=) goto 0x0x8072b8c0;
    if (!=) goto 0x0x8072b8c0;
    r0 = *(0x794 + r30); // lbz @ 0x8072B8B4
    if (==) goto 0x0x8072b8c4;
    /* li r3, 1 */ // 0x8072B8C0
    if (!=) goto 0x0x8072b8dc;
    r0 = *(0x130 + r30); // lwz @ 0x8072B8CC
    if (==) goto 0x0x8072b8dc;
    /* li r8, 0 */ // 0x8072B8D8
    if (==) goto 0x0x8072b954;
    if (!=) goto 0x0x8072b954;
    r28 = r30 + 0x10; // 0x8072B8EC
    /* li r29, 4 */ // 0x8072B8F0
    r3 = *(0x2d8 + r28); // lwz @ 0x8072B8F4
    if (==) goto 0x0x8072b940;
    /* slwi r0, r29, 0x1e */ // 0x8072B900
    /* srwi r4, r29, 0x1f */ // 0x8072B904
    /* subf r0, r4, r0 */ // 0x8072B908
    /* rotlwi r0, r0, 2 */ // 0x8072B90C
    r0 = r0 + r4; // 0x8072B910
    r4 = r30 + r0; // 0x8072B914
    r0 = *(0x848 + r4); // lbz @ 0x8072B918
    if (==) goto 0x0x8072b940;
    r0 = *(0x96d + r4); // lbz @ 0x8072B924
    if (!=) goto 0x0x8072b940;
    r12 = *(0 + r3); // lwz @ 0x8072B930
    r12 = *(0xc + r12); // lwz @ 0x8072B934
    /* mtctr r12 */ // 0x8072B938
    /* bctrl  */ // 0x8072B93C
    r29 = r29 + 1; // 0x8072B940
    r28 = r28 + 4; // 0x8072B944
    if (<) goto 0x0x8072b8f4;
    /* b 0x8072b978 */ // 0x8072B950
    if (==) goto 0x0x8072b978;
    r0 = *(0xad0 + r30); // lhz @ 0x8072B95C
    if (!=) goto 0x0x8072b978;
    if (!=) goto 0x0x8072b978;
    r3 = r30;
    FUN_80733960(r3); // bl 0x80733960
    r0 = *(0xad0 + r30); // lhz @ 0x8072B978
    if (==) goto 0x0x8072b98c;
    if (==) goto 0x0x8072b9e4;
    r31 = r30;
    /* li r29, 0 */ // 0x8072B990
    r3 = *(0x2d8 + r31); // lwz @ 0x8072B994
    if (==) goto 0x0x8072b9d4;
    /* slwi r0, r29, 0x1e */ // 0x8072B9A0
    /* srwi r4, r29, 0x1f */ // 0x8072B9A4
    /* subf r0, r4, r0 */ // 0x8072B9A8
    /* rotlwi r0, r0, 2 */ // 0x8072B9AC
    r0 = r0 + r4; // 0x8072B9B0
    r4 = r30 + r0; // 0x8072B9B4
    r0 = *(0x848 + r4); // lbz @ 0x8072B9B8
    if (==) goto 0x0x8072b9d4;
    r12 = *(0 + r3); // lwz @ 0x8072B9C4
    r12 = *(0x18 + r12); // lwz @ 0x8072B9C8
    /* mtctr r12 */ // 0x8072B9CC
    /* bctrl  */ // 0x8072B9D0
    r29 = r29 + 1; // 0x8072B9D4
    r31 = r31 + 4; // 0x8072B9D8
    if (<) goto 0x0x8072b994;
    r31 = r30 + 0x10; // 0x8072B9E4
    /* li r29, 4 */ // 0x8072B9E8
    r3 = *(0x2d8 + r31); // lwz @ 0x8072B9EC
    if (==) goto 0x0x8072ba98;
    r3 = r3 + 0x74; // 0x8072B9F8
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072ba10;
    /* li r3, 0 */ // 0x8072BA08
    /* b 0x8072ba14 */ // 0x8072BA0C
    r3 = *(0xc + r3); // lwz @ 0x8072BA10
    /* li r0, 0 */ // 0x8072BA18
    if (==) goto 0x0x8072ba28;
    if (!=) goto 0x0x8072ba2c;
    /* li r0, 1 */ // 0x8072BA28
    if (==) goto 0x0x8072ba98;
    /* slwi r0, r29, 0x1e */ // 0x8072BA34
    /* srwi r3, r29, 0x1f */ // 0x8072BA38
    /* subf r0, r3, r0 */ // 0x8072BA3C
    /* rotlwi r0, r0, 2 */ // 0x8072BA40
    r4 = r0 + r3; // 0x8072BA44
    r3 = r30 + r4; // 0x8072BA48
    r0 = *(0x848 + r3); // lbz @ 0x8072BA4C
    if (==) goto 0x0x8072ba98;
    r0 = *(0x96d + r3); // lbz @ 0x8072BA58
    if (!=) goto 0x0x8072ba98;
    r3 = *(0x2d8 + r31); // lwz @ 0x8072BA64
    /* mulli r0, r4, 0x30 */ // 0x8072BA68
    r12 = *(0 + r3); // lwz @ 0x8072BA6C
    r4 = r30 + r0; // 0x8072BA70
    r12 = *(0x78 + r12); // lwz @ 0x8072BA74
    r4 = r4 + 0x8ac; // 0x8072BA78
    /* mtctr r12 */ // 0x8072BA7C
    /* bctrl  */ // 0x8072BA80
    r3 = *(0x2d8 + r31); // lwz @ 0x8072BA84
    r12 = *(0 + r3); // lwz @ 0x8072BA88
    r12 = *(0x80 + r12); // lwz @ 0x8072BA8C
}