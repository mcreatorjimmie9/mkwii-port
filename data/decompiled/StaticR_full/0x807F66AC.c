/* Function at 0x807F66AC, size=592 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_807F66AC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x807F66C0
    *(0x14 + r1) = r29; // stw @ 0x807F66C4
    r3 = *(0x20 + r3); // lwz @ 0x807F66C8
    r12 = *(0 + r3); // lwz @ 0x807F66CC
    r12 = *(0x14 + r12); // lwz @ 0x807F66D0
    /* mtctr r12 */ // 0x807F66D4
    /* bctrl  */ // 0x807F66D8
    if (!=) goto 0x0x807f68e0;
    r4 = *(0x20 + r31); // lwz @ 0x807F66E4
    r0 = *(0x46 + r4); // lha @ 0x807F66E8
    r3 = *(8 + r4); // lwz @ 0x807F66EC
    /* slwi r0, r0, 4 */ // 0x807F66F0
    r3 = r3 + r0; // 0x807F66F4
    r0 = *(0xc + r3); // lhz @ 0x807F66F8
    if (!=) goto 0x0x807f6798;
    r0 = *(0xb0 + r31); // lwz @ 0x807F6704
    if (==) goto 0x0x807f6718;
    if (!=) goto 0x0x807f6798;
    r3 = *(8 + r31); // lwz @ 0x807F6718
    /* lis r30, 0 */ // 0x807F671C
    /* lis r29, 0 */ // 0x807F6720
    /* lfs f1, 0(r30) */ // 0x807F6724
    r3 = *(0x28 + r3); // lwz @ 0x807F6728
    /* li r4, 3 */ // 0x807F672C
    /* lfs f2, 0(r29) */ // 0x807F6730
    /* li r5, 1 */ // 0x807F6734
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r3 = *(0xe8 + r31); // lwz @ 0x807F673C
    /* li r4, 3 */ // 0x807F6740
    /* lfs f1, 0(r30) */ // 0x807F6744
    /* li r5, 1 */ // 0x807F6748
    r3 = *(8 + r3); // lwz @ 0x807F674C
    /* lfs f2, 0(r29) */ // 0x807F6750
    r3 = *(0x28 + r3); // lwz @ 0x807F6754
    FUN_805E73A4(r5); // bl 0x805E73A4
    r3 = *(8 + r31); // lwz @ 0x807F675C
    /* li r4, 0 */ // 0x807F6760
    r3 = *(0x28 + r3); // lwz @ 0x807F6764
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807F676C
    r12 = *(8 + r12); // lwz @ 0x807F6770
    /* mtctr r12 */ // 0x807F6774
    /* bctrl  */ // 0x807F6778
    /* fctiwz f0, f1 */ // 0x807F677C
    /* li r0, 4 */ // 0x807F6780
    *(0xb0 + r31) = r0; // stw @ 0x807F6784
    /* stfd f0, 8(r1) */ // 0x807F6788
    r0 = *(0xc + r1); // lwz @ 0x807F678C
    *(0xdc + r31) = r0; // stw @ 0x807F6790
    /* b 0x807f689c */ // 0x807F6794
    r0 = *(0x46 + r4); // lha @ 0x807F6798
    r3 = *(8 + r4); // lwz @ 0x807F679C
    /* slwi r0, r0, 4 */ // 0x807F67A0
    r3 = r3 + r0; // 0x807F67A4
    r0 = *(0xc + r3); // lhz @ 0x807F67A8
    if (!=) goto 0x0x807f6860;
    r0 = *(0xb0 + r31); // lwz @ 0x807F67B4
    if (==) goto 0x0x807f67d0;
    if (==) goto 0x0x807f67d0;
    if (!=) goto 0x0x807f6860;
    r3 = *(8 + r31); // lwz @ 0x807F67D0
    /* lis r29, 0 */ // 0x807F67D4
    /* lis r30, 0 */ // 0x807F67D8
    /* lfs f1, 0(r29) */ // 0x807F67DC
    r3 = *(0x28 + r3); // lwz @ 0x807F67E0
    /* li r4, 1 */ // 0x807F67E4
    /* lfs f2, 0(r30) */ // 0x807F67E8
    /* li r5, 1 */ // 0x807F67EC
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r3 = *(0xe8 + r31); // lwz @ 0x807F67F4
    /* li r4, 1 */ // 0x807F67F8
    /* lfs f1, 0(r29) */ // 0x807F67FC
    /* li r5, 1 */ // 0x807F6800
    r3 = *(8 + r3); // lwz @ 0x807F6804
    /* lfs f2, 0(r30) */ // 0x807F6808
    r3 = *(0x28 + r3); // lwz @ 0x807F680C
    FUN_805E73A4(r5); // bl 0x805E73A4
    r3 = *(8 + r31); // lwz @ 0x807F6814
    /* li r4, 0 */ // 0x807F6818
    r3 = *(0x28 + r3); // lwz @ 0x807F681C
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807F6824
    r12 = *(8 + r12); // lwz @ 0x807F6828
    /* mtctr r12 */ // 0x807F682C
    /* bctrl  */ // 0x807F6830
    /* fctiwz f0, f1 */ // 0x807F6834
    /* li r0, 2 */ // 0x807F6838
    *(0xb0 + r31) = r0; // stw @ 0x807F683C
    r3 = r31;
    /* lfs f1, 0(r29) */ // 0x807F6844
    /* li r4, 0x348 */ // 0x807F6848
    /* stfd f0, 8(r1) */ // 0x807F684C
    r0 = *(0xc + r1); // lwz @ 0x807F6850
    *(0xdc + r31) = r0; // stw @ 0x807F6854
    FUN_808A0A88(r4); // bl 0x808A0A88
    /* b 0x807f689c */ // 0x807F685C
    r0 = *(0x46 + r4); // lha @ 0x807F6860
    r3 = *(8 + r4); // lwz @ 0x807F6864
    /* slwi r0, r0, 4 */ // 0x807F6868
    r3 = r3 + r0; // 0x807F686C
    r0 = *(0xc + r3); // lhz @ 0x807F6870
    if (!=) goto 0x0x807f689c;
    r0 = *(0xb0 + r31); // lwz @ 0x807F687C
    if (!=) goto 0x0x807f689c;
    /* lis r3, 0 */ // 0x807F6888
    /* li r0, 1 */ // 0x807F688C
    /* lfs f0, 0(r3) */ // 0x807F6890
    *(0xb0 + r31) = r0; // stw @ 0x807F6894
    /* stfs f0, 0xe0(r31) */ // 0x807F6898
    r3 = *(0x20 + r31); // lwz @ 0x807F689C
    /* lis r0, 0x4330 */ // 0x807F68A0
    *(8 + r1) = r0; // stw @ 0x807F68A4
    /* lis r4, 0 */ // 0x807F68A8
    r0 = *(0x46 + r3); // lha @ 0x807F68AC
    r5 = *(8 + r3); // lwz @ 0x807F68B0
    /* slwi r0, r0, 4 */ // 0x807F68B4
    r12 = *(0 + r3); // lwz @ 0x807F68B8
    r5 = r5 + r0; // 0x807F68BC
    /* lfd f1, 0(r4) */ // 0x807F68C0
    r0 = *(0xe + r5); // lhz @ 0x807F68C4
    *(0xc + r1) = r0; // stw @ 0x807F68C8
    r12 = *(0x18 + r12); // lwz @ 0x807F68CC
    /* lfd f0, 8(r1) */ // 0x807F68D0
    /* fsubs f1, f0, f1 */ // 0x807F68D4
    /* mtctr r12 */ // 0x807F68D8
    /* bctrl  */ // 0x807F68DC
    r0 = *(0x24 + r1); // lwz @ 0x807F68E0
    r31 = *(0x1c + r1); // lwz @ 0x807F68E4
    r30 = *(0x18 + r1); // lwz @ 0x807F68E8
    r29 = *(0x14 + r1); // lwz @ 0x807F68EC
    return;
}