/* Function at 0x808E66D4, size=340 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_808E66D4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    /* li r3, 0x78 */ // 0x808E66E8
    *(0x18 + r1) = r30; // stw @ 0x808E66EC
    *(0x14 + r1) = r29; // stw @ 0x808E66F0
    FUN_808E4258(r3); // bl 0x808E4258
    r0 = *(0x1750 + r3); // lwz @ 0x808E66F8
    /* lis r4, 0 */ // 0x808E66FC
    r4 = r4 + 0; // 0x808E6700
    r3 = r31;
    /* slwi r0, r0, 2 */ // 0x808E6708
    /* li r5, 1 */ // 0x808E670C
    r4 = r4 + r0; // 0x808E6710
    FUN_808B4A2C(r4, r3, r5); // bl 0x808B4A2C
    /* lis r30, 0 */ // 0x808E6718
    r3 = *(0 + r30); // lwz @ 0x808E671C
    r3 = *(0 + r3); // lwz @ 0x808E6720
    r3 = *(0 + r3); // lwz @ 0x808E6724
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (!=) goto 0x0x808e6760;
    /* lis r4, 0 */ // 0x808E6734
    r3 = *(0x2bc + r31); // lwz @ 0x808E6738
    r4 = *(0 + r4); // lwz @ 0x808E673C
    /* li r5, 0 */ // 0x808E6740
    r0 = *(0x1768 + r4); // lwz @ 0x808E6744
    /* cntlzw r0, r0 */ // 0x808E6748
    r0 = r0 rlwinm 0x1b; // rlwinm
    /* neg r4, r0 */ // 0x808E6750
    r4 = r4 + 0xd25; // 0x808E6754
    FUN_808D5A00(r4); // bl 0x808D5A00
    /* b 0x808e67e8 */ // 0x808E675C
    r3 = *(0 + r30); // lwz @ 0x808E6760
    r3 = *(0 + r3); // lwz @ 0x808E6764
    r29 = *(0x248 + r3); // lwz @ 0x808E6768
    if (!=) goto 0x0x808e677c;
    /* li r29, 0 */ // 0x808E6774
    /* b 0x808e67d0 */ // 0x808E6778
    /* lis r30, 0 */ // 0x808E677C
    r30 = r30 + 0; // 0x808E6780
    if (==) goto 0x0x808e67cc;
    r12 = *(0 + r29); // lwz @ 0x808E6788
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808E6790
    /* mtctr r12 */ // 0x808E6794
    /* bctrl  */ // 0x808E6798
    /* b 0x808e67b4 */ // 0x808E679C
    if (!=) goto 0x0x808e67b0;
    /* li r0, 1 */ // 0x808E67A8
    /* b 0x808e67c0 */ // 0x808E67AC
    r3 = *(0 + r3); // lwz @ 0x808E67B0
    if (!=) goto 0x0x808e67a0;
    /* li r0, 0 */ // 0x808E67BC
    if (==) goto 0x0x808e67cc;
    /* b 0x808e67d0 */ // 0x808E67C8
    /* li r29, 0 */ // 0x808E67CC
    r3 = r29;
    FUN_806B196C(r3); // bl 0x806B196C
    r4 = r3;
    r3 = *(0x2bc + r31); // lwz @ 0x808E67DC
    /* li r5, 0 */ // 0x808E67E0
    FUN_808D5A00(r3, r4, r5); // bl 0x808D5A00
    r3 = r31;
    FUN_808B3318(r4, r5, r3); // bl 0x808B3318
    r12 = *(0 + r31); // lwz @ 0x808E67F0
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x808E67F8
    /* mtctr r12 */ // 0x808E67FC
    /* bctrl  */ // 0x808E6800
    /* li r4, 1 */ // 0x808E6804
    FUN_8066A380(r3, r4); // bl 0x8066A380
    r0 = *(0x24 + r1); // lwz @ 0x808E680C
    r31 = *(0x1c + r1); // lwz @ 0x808E6810
    r30 = *(0x18 + r1); // lwz @ 0x808E6814
    r29 = *(0x14 + r1); // lwz @ 0x808E6818
    return;
}