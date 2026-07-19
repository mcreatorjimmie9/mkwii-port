/* Function at 0x808D56EC, size=344 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_808D56EC(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, -1 */ // 0x808D56FC
    *(0xd8 + r1) = r30; // stw @ 0x808D5700
    r30 = r3;
    r0 = *(0x174 + r3); // lwz @ 0x808D5708
    /* clrlwi. r0, r0, 0x1f */ // 0x808D570C
    if (==) goto 0x0x808d5738;
    /* lis r3, 0 */ // 0x808D5714
    /* li r4, 0 */ // 0x808D5718
    r3 = *(0 + r3); // lwz @ 0x808D571C
    r3 = r3 + 0x34; // 0x808D5720
    FUN_8067F3BC(r3, r4, r3); // bl 0x8067F3BC
    if (==) goto 0x0x808d5738;
    /* li r31, 0 */ // 0x808D5730
    /* b 0x808d57f4 */ // 0x808D5734
    r0 = *(0x174 + r30); // lwz @ 0x808D5738
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x808D573C
    if (==) goto 0x0x808d5768;
    /* lis r3, 0 */ // 0x808D5744
    /* li r4, 1 */ // 0x808D5748
    r3 = *(0 + r3); // lwz @ 0x808D574C
    r3 = r3 + 0x34; // 0x808D5750
    FUN_8067F3BC(r3, r4, r3); // bl 0x8067F3BC
    if (==) goto 0x0x808d5768;
    /* li r31, 1 */ // 0x808D5760
    /* b 0x808d57f4 */ // 0x808D5764
    r0 = *(0x174 + r30); // lwz @ 0x808D5768
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x808D576C
    if (==) goto 0x0x808d5798;
    /* lis r3, 0 */ // 0x808D5774
    /* li r4, 2 */ // 0x808D5778
    r3 = *(0 + r3); // lwz @ 0x808D577C
    r3 = r3 + 0x34; // 0x808D5780
    FUN_8067F3BC(r3, r4, r3); // bl 0x8067F3BC
    if (==) goto 0x0x808d5798;
    /* li r31, 2 */ // 0x808D5790
    /* b 0x808d57f4 */ // 0x808D5794
    r0 = *(0x174 + r30); // lwz @ 0x808D5798
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x808D579C
    if (==) goto 0x0x808d57c8;
    /* lis r3, 0 */ // 0x808D57A4
    /* li r4, 3 */ // 0x808D57A8
    r3 = *(0 + r3); // lwz @ 0x808D57AC
    r3 = r3 + 0x34; // 0x808D57B0
    FUN_8067F3BC(r3, r4, r3); // bl 0x8067F3BC
    if (==) goto 0x0x808d57c8;
    /* li r31, 3 */ // 0x808D57C0
    /* b 0x808d57f4 */ // 0x808D57C4
    r0 = *(0x174 + r30); // lwz @ 0x808D57C8
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x808D57CC
    if (==) goto 0x0x808d57f4;
    /* lis r3, 0 */ // 0x808D57D4
    /* li r4, 4 */ // 0x808D57D8
    r3 = *(0 + r3); // lwz @ 0x808D57DC
    r3 = r3 + 0x34; // 0x808D57E0
    FUN_8067F3BC(r3, r4, r3); // bl 0x8067F3BC
    if (==) goto 0x0x808d57f4;
    /* li r31, 4 */ // 0x808D57F0
    if (==) goto 0x0x808d5824;
    FUN_80654ECC(r3); // bl 0x80654ECC
    *(0x80 + r1) = r31; // stw @ 0x808D5804
    r3 = r30;
    /* li r4, 0x7d1 */ // 0x808D5810
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* li r0, 0 */ // 0x808D5818
    *(0x80 + r30) = r0; // stb @ 0x808D581C
    /* b 0x808d582c */ // 0x808D5820
    /* li r0, 1 */ // 0x808D5824
    *(0x80 + r30) = r0; // stb @ 0x808D5828
    r0 = *(0xe4 + r1); // lwz @ 0x808D582C
    r31 = *(0xdc + r1); // lwz @ 0x808D5830
    r30 = *(0xd8 + r1); // lwz @ 0x808D5834
    return;
}