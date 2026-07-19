/* Function at 0x808756C0, size=624 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 16 function(s) */

int FUN_808756C0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 0 */ // 0x808756C8
    r30 = r3;
    r3 = r3 + 0x98; // 0x808756DC
    *(0x74 + r1) = r29; // stw @ 0x808756E0
    *(0x70 + r1) = r28; // stw @ 0x808756E4
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x808756EC
    /* li r4, 0 */ // 0x808756F0
    /* lfs f1, 0(r31) */ // 0x808756F4
    FUN_8069F7A0(r4); // bl 0x8069F7A0
    r3 = r30 + 0x98; // 0x808756FC
    /* li r4, 1 */ // 0x80875700
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80875708
    /* li r4, 0 */ // 0x8087570C
    FUN_8069F7A0(r3, r4, r4); // bl 0x8069F7A0
    /* lis r31, 0 */ // 0x80875714
    r3 = r30 + 0xa8; // 0x80875718
    r31 = r31 + 0; // 0x8087571C
    r4 = r31 + 0xaa; // 0x80875720
    FUN_80665D1C(r3, r4); // bl 0x80665D1C
    *(0x1b8 + r30) = r3; // stw @ 0x80875728
    r4 = r31 + 0xb4; // 0x8087572C
    r3 = r30 + 0xa8; // 0x80875730
    FUN_80665D1C(r4, r4, r3); // bl 0x80665D1C
    *(0x1bc + r30) = r3; // stw @ 0x80875738
    r4 = r31 + 0xc5; // 0x8087573C
    r3 = r30 + 0xa8; // 0x80875740
    FUN_80665D1C(r3, r4, r3); // bl 0x80665D1C
    *(0x1c0 + r30) = r3; // stw @ 0x80875748
    r4 = r31 + 0xd6; // 0x8087574C
    r3 = r30 + 0xa8; // 0x80875750
    FUN_80665D1C(r3, r4, r3); // bl 0x80665D1C
    *(0x1c4 + r30) = r3; // stw @ 0x80875758
    /* lis r3, 0 */ // 0x8087575C
    r4 = *(0x1b4 + r30); // lbz @ 0x80875760
    r3 = *(0 + r3); // lwz @ 0x80875764
    FUN_805C1470(r3); // bl 0x805C1470
    /* extsb. r28, r3 */ // 0x8087576C
    if (<) goto 0x0x808758a0;
    r6 = r28;
    r5 = r31 + 0xdc; // 0x8087577C
    /* li r4, 0x20 */ // 0x80875780
    /* crclr cr1eq */ // 0x80875784
    FUN_805E3430(r6, r3, r5, r4); // bl 0x805E3430
    r3 = r30;
    r4 = r28 + 0x254e; // 0x80875790
    /* li r5, 0 */ // 0x80875794
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r3 = r28;
    FUN_80669A0C(r5, r3, r4, r5); // bl 0x80669A0C
    r3 = *(0x18 + r1); // lha @ 0x808757AC
    /* lis r7, 0x4330 */ // 0x808757B0
    r0 = *(0x10 + r1); // lha @ 0x808757B4
    /* lis r9, 0 */ // 0x808757B8
    /* lis r6, 0 */ // 0x808757BC
    *(0x40 + r1) = r7; // stw @ 0x808757C0
    r0 = r3 + r0; // 0x808757C4
    r5 = *(0x1a + r1); // lha @ 0x808757C8
    /* xoris r8, r0, 0x8000 */ // 0x808757CC
    *(0x44 + r1) = r8; // stw @ 0x808757D0
    r4 = *(0x12 + r1); // lha @ 0x808757D4
    /* lfd f4, 0(r9) */ // 0x808757D8
    /* lfd f0, 0x40(r1) */ // 0x808757DC
    r4 = r5 + r4; // 0x808757E0
    /* xoris r4, r4, 0x8000 */ // 0x808757E4
    r3 = *(0x1c + r1); // lha @ 0x808757E8
    r0 = *(0x14 + r1); // lha @ 0x808757EC
    /* fsubs f0, f0, f4 */ // 0x808757F0
    /* lfs f3, 0(r6) */ // 0x808757F4
    r0 = r3 + r0; // 0x808757F8
    *(0x54 + r1) = r4; // stw @ 0x808757FC
    /* xoris r0, r0, 0x8000 */ // 0x80875800
    /* fmuls f2, f3, f0 */ // 0x80875804
    *(0x50 + r1) = r7; // stw @ 0x80875808
    r3 = *(0x1c4 + r30); // lwz @ 0x8087580C
    /* lfd f0, 0x50(r1) */ // 0x80875810
    /* fctiwz f2, f2 */ // 0x80875814
    *(0x64 + r1) = r0; // stw @ 0x80875818
    /* fsubs f1, f0, f4 */ // 0x8087581C
    r12 = *(0 + r3); // lwz @ 0x80875820
    *(0x60 + r1) = r7; // stw @ 0x80875824
    r12 = *(0x68 + r12); // lwz @ 0x80875828
    /* lfd f0, 0x60(r1) */ // 0x8087582C
    /* fmuls f1, f3, f1 */ // 0x80875830
    /* stfd f2, 0x48(r1) */ // 0x80875834
    /* fsubs f0, f0, f4 */ // 0x80875838
    /* fctiwz f1, f1 */ // 0x8087583C
    r31 = *(0x4c + r1); // lwz @ 0x80875840
    /* fmuls f0, f3, f0 */ // 0x80875844
    /* stfd f1, 0x58(r1) */ // 0x80875848
    r29 = *(0x5c + r1); // lwz @ 0x8087584C
    /* fctiwz f0, f0 */ // 0x80875850
    /* stfd f0, 0x68(r1) */ // 0x80875854
    r28 = *(0x6c + r1); // lwz @ 0x80875858
    /* mtctr r12 */ // 0x8087585C
    /* bctrl  */ // 0x80875860
    *(0x10 + r3) = r31; // sth @ 0x80875864
    /* li r0, 0 */ // 0x80875868
    *(0x12 + r3) = r29; // sth @ 0x8087586C
    *(0x14 + r3) = r28; // sth @ 0x80875870
    *(0x16 + r3) = r0; // sth @ 0x80875874
    r3 = *(0x1c4 + r30); // lwz @ 0x80875878
    r12 = *(0 + r3); // lwz @ 0x8087587C
    r12 = *(0x68 + r12); // lwz @ 0x80875880
    /* mtctr r12 */ // 0x80875884
    /* bctrl  */ // 0x80875888
    *(0x18 + r3) = r31; // sth @ 0x8087588C
    /* li r0, 0xff */ // 0x80875890
    *(0x1a + r3) = r29; // sth @ 0x80875894
    *(0x1c + r3) = r28; // sth @ 0x80875898
    *(0x1e + r3) = r0; // sth @ 0x8087589C
    /* lis r31, 0 */ // 0x808758A0
    r3 = r30 + 0xa8; // 0x808758A4
    r31 = r31 + 0; // 0x808758A8
    r4 = r31 + 0xeb; // 0x808758AC
    FUN_80665D1C(r3, r4); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x808758B4
    r4 = r31 + 0xf9; // 0x808758B8
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x808758C0
    r3 = r30 + 0xa8; // 0x808758C4
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x808758CC
    r4 = r31 + 0x107; // 0x808758D0
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x808758D8
    r3 = r30 + 0xa8; // 0x808758DC
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x808758E4
    r4 = r31 + 0x115; // 0x808758E8
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x808758F0
    r3 = r30 + 0xa8; // 0x808758F4
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    r6 = *(0xbb + r3); // lbz @ 0x808758FC
    /* lis r5, 0 */ // 0x80875900
    /* li r0, 0xb4 */ // 0x80875904
    /* lis r4, 0 */ // 0x80875908
    r6 = r6 rlwinm 0; // rlwinm
    *(0xbb + r3) = r6; // stb @ 0x80875910
    r6 = *(0x1c4 + r30); // lwz @ 0x80875914
    r3 = *(0xbb + r6); // lbz @ 0x80875918
    r3 = r3 rlwinm 0; // rlwinm
    *(0xbb + r6) = r3; // stb @ 0x80875920
    r3 = *(0x1c4 + r30); // lwz @ 0x80875924
    /* lfs f0, 0(r5) */ // 0x80875928
    /* stfs f0, 0x44(r3) */ // 0x8087592C
}