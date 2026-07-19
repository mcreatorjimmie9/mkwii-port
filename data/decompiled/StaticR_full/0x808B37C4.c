/* Function at 0x808B37C4, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808B37C4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x808B37CC
    /* slwi r0, r4, 2 */ // 0x808B37D4
    /* stfd f31, 0x18(r1) */ // 0x808B37D8
    /* fmr f31, f1 */ // 0x808B37DC
    *(0x14 + r1) = r31; // stw @ 0x808B37E0
    *(0x10 + r1) = r30; // stw @ 0x808B37E4
    *(0xc + r1) = r29; // stw @ 0x808B37E8
    r29 = r3;
    *(0x3e8 + r3) = r4; // stw @ 0x808B37F0
    r4 = *(0 + r5); // lwz @ 0x808B37F4
    r3 = *(0 + r4); // lwz @ 0x808B37F8
    r3 = r3 + r0; // 0x808B37FC
    r30 = *(8 + r3); // lwz @ 0x808B3800
    if (!=) goto 0x0x808b3814;
    /* li r30, 0 */ // 0x808B380C
    /* b 0x808b3868 */ // 0x808B3810
    /* lis r31, 0 */ // 0x808B3814
    r31 = r31 + 0; // 0x808B3818
    if (==) goto 0x0x808b3864;
    r12 = *(0 + r30); // lwz @ 0x808B3820
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B3828
    /* mtctr r12 */ // 0x808B382C
    /* bctrl  */ // 0x808B3830
    /* b 0x808b384c */ // 0x808B3834
    if (!=) goto 0x0x808b3848;
    /* li r0, 1 */ // 0x808B3840
    /* b 0x808b3858 */ // 0x808B3844
    r3 = *(0 + r3); // lwz @ 0x808B3848
    if (!=) goto 0x0x808b3838;
    /* li r0, 0 */ // 0x808B3854
    if (==) goto 0x0x808b3864;
    /* b 0x808b3868 */ // 0x808B3860
    /* li r30, 0 */ // 0x808B3864
    if (==) goto 0x0x808b3878;
    r0 = *(4 + r29); // lwz @ 0x808B3870
    *(0x3ec + r30) = r0; // stw @ 0x808B3874
    r0 = *(0x42c + r29); // lbz @ 0x808B3878
    if (!=) goto 0x0x808b38a8;
    r0 = *(8 + r29); // lwz @ 0x808B3884
    if (!=) goto 0x0x808b38a8;
    /* fmr f1, f31 */ // 0x808B3890
    r3 = r29;
    /* li r4, 0 */ // 0x808B3898
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* li r0, 1 */ // 0x808B38A0
    *(0x42c + r29) = r0; // stb @ 0x808B38A4
    r0 = *(0x24 + r1); // lwz @ 0x808B38A8
    /* lfd f31, 0x18(r1) */ // 0x808B38AC
    r31 = *(0x14 + r1); // lwz @ 0x808B38B0
    r30 = *(0x10 + r1); // lwz @ 0x808B38B4
    r29 = *(0xc + r1); // lwz @ 0x808B38B8
    return;
}