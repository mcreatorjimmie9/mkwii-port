/* Function at 0x807AF69C, size=412 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807AF69C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r7, 0 */ // 0x807AF6A4
    r7 = r7 + 0; // 0x807AF6AC
    *(0x3c + r1) = r31; // stw @ 0x807AF6B0
    /* lis r31, 0 */ // 0x807AF6B4
    r31 = r31 + 0; // 0x807AF6B8
    *(0x38 + r1) = r30; // stw @ 0x807AF6BC
    r30 = r3;
    r0 = *(0x154 + r3); // lwz @ 0x807AF6C4
    if (==) goto 0x0x807af6e4;
    if (==) goto 0x0x807af7b0;
    if (==) goto 0x0x807af834;
    /* b 0x807af8a0 */ // 0x807AF6E0
    /* lfs f0, 4(r7) */ // 0x807AF6E4
    /* stfs f0, 0x15c(r3) */ // 0x807AF6EC
    /* stfs f0, 0x160(r3) */ // 0x807AF6F0
    if (==) goto 0x0x807af8a0;
    r9 = *(0 + r6); // lwz @ 0x807AF6F8
    r8 = *(4 + r6); // lwz @ 0x807AF700
    r7 = *(8 + r6); // lwz @ 0x807AF704
    r6 = *(0 + r5); // lwz @ 0x807AF708
    r4 = *(4 + r5); // lwz @ 0x807AF70C
    r0 = *(8 + r5); // lwz @ 0x807AF710
    *(0x20 + r1) = r9; // stw @ 0x807AF714
    *(0x24 + r1) = r8; // stw @ 0x807AF718
    *(0x28 + r1) = r7; // stw @ 0x807AF71C
    *(0x14 + r1) = r6; // stw @ 0x807AF720
    *(0x18 + r1) = r4; // stw @ 0x807AF724
    *(0x1c + r1) = r0; // stw @ 0x807AF728
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f0, 0x54(r31) */ // 0x807AF730
    /* fsubs f1, f0, f1 */ // 0x807AF73C
    FUN_805A443C(r3, r4); // bl 0x805A443C
    /* lfs f1, 0x18(r1) */ // 0x807AF744
    /* li r5, 1 */ // 0x807AF748
    /* lfs f0, 0xc(r1) */ // 0x807AF74C
    /* li r4, 0 */ // 0x807AF750
    r3 = *(0x154 + r30); // lwz @ 0x807AF754
    /* fsubs f3, f1, f0 */ // 0x807AF758
    /* lfs f0, 0x5c(r31) */ // 0x807AF75C
    /* lfs f5, 0x14(r1) */ // 0x807AF760
    r0 = r3 + 1; // 0x807AF764
    /* lfs f4, 8(r1) */ // 0x807AF768
    /* lfs f1, 0x10(r1) */ // 0x807AF76C
    /* fsubs f4, f5, f4 */ // 0x807AF770
    /* lfs f6, 0x18(r30) */ // 0x807AF774
    /* fadds f5, f3, f0 */ // 0x807AF778
    /* lfs f2, 0x1c(r1) */ // 0x807AF77C
    /* stfs f4, 0x14(r1) */ // 0x807AF780
    /* fsubs f0, f2, f1 */ // 0x807AF784
    /* lfs f1, 0x10(r30) */ // 0x807AF788
    /* stfs f3, 0x18(r1) */ // 0x807AF78C
    /* stfs f0, 0x1c(r1) */ // 0x807AF790
    /* stfs f1, 4(r30) */ // 0x807AF794
    /* stfs f5, 8(r30) */ // 0x807AF798
    /* stfs f6, 0xc(r30) */ // 0x807AF79C
    *(0x151 + r30) = r5; // stb @ 0x807AF7A0
    *(0x158 + r30) = r4; // stw @ 0x807AF7A4
    *(0x154 + r30) = r0; // stw @ 0x807AF7A8
    /* b 0x807af8a0 */ // 0x807AF7AC
    /* lfs f2, 0x160(r3) */ // 0x807AF7B0
    /* lfs f1, 0x60(r31) */ // 0x807AF7B4
    /* lfs f0, 0x10(r7) */ // 0x807AF7B8
    /* fsubs f1, f2, f1 */ // 0x807AF7BC
    /* stfs f1, 0x160(r3) */ // 0x807AF7C0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807AF7C4
    if (>=) goto 0x0x807af7d0;
    /* stfs f0, 0x160(r3) */ // 0x807AF7CC
    /* lfs f2, 0x15c(r3) */ // 0x807AF7D0
    /* lfs f1, 0x60(r31) */ // 0x807AF7D4
    /* lfs f0, 0x14(r7) */ // 0x807AF7D8
    /* fadds f1, f2, f1 */ // 0x807AF7DC
    /* stfs f1, 0x15c(r3) */ // 0x807AF7E0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807AF7E4
    if (<=) goto 0x0x807af7f0;
    /* stfs f0, 0x15c(r3) */ // 0x807AF7EC
    r4 = *(0x158 + r3); // lwz @ 0x807AF7F0
    r4 = r4 + 1; // 0x807AF7F4
    *(0x158 + r3) = r4; // stw @ 0x807AF7F8
    r0 = *(0x68 + r31); // lha @ 0x807AF7FC
    if (<=) goto 0x0x807af8a0;
    r4 = *(0x154 + r3); // lwz @ 0x807AF808
    /* li r5, 0 */ // 0x807AF80C
    /* lfs f1, 0x18(r7) */ // 0x807AF810
    /* lfs f0, 0(r7) */ // 0x807AF814
    r0 = r4 + 1; // 0x807AF818
    /* stfs f1, 0xe8(r3) */ // 0x807AF81C
    /* stfs f0, 0xec(r3) */ // 0x807AF820
    *(0x151 + r3) = r5; // stb @ 0x807AF824
    *(0x158 + r3) = r5; // stw @ 0x807AF828
    *(0x154 + r3) = r0; // stw @ 0x807AF82C
    /* b 0x807af8a0 */ // 0x807AF830
    /* lfs f2, 0x160(r3) */ // 0x807AF834
}