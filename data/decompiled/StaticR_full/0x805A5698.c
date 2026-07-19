/* Function at 0x805A5698, size=440 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_805A5698(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* stmw r23, 0xc(r1) */ // 0x805A56A4
    r26 = r3;
    r5 = *(0 + r3); // lwz @ 0x805A56AC
    r5 = *(0x11 + r5); // lbz @ 0x805A56B0
    /* extsb r0, r5 */ // 0x805A56B4
    if (!=) goto 0x0x805a56c8;
    *(0x1c + r3) = r4; // stb @ 0x805A56C0
    /* b 0x805a56cc */ // 0x805A56C4
    *(0x1c + r3) = r5; // stb @ 0x805A56C8
    r0 = *(0x18 + r3); // lhz @ 0x805A56CC
    r29 = r26;
    /* li r27, 0 */ // 0x805A56D4
    r0 = r0 | 1; // 0x805A56D8
    *(0x18 + r3) = r0; // sth @ 0x805A56DC
    /* b 0x805a5830 */ // 0x805A56E0
    if (>=) goto 0x0x805a56f4;
    r3 = *(0x38 + r29); // lwz @ 0x805A56EC
    /* b 0x805a56f8 */ // 0x805A56F0
    /* li r3, 0 */ // 0x805A56F4
    r0 = *(0x18 + r3); // lhz @ 0x805A56F8
    /* clrlwi. r0, r0, 0x1f */ // 0x805A56FC
    if (!=) goto 0x0x805a5828;
    if (>=) goto 0x0x805a5714;
    r31 = *(0x38 + r29); // lwz @ 0x805A570C
    /* b 0x805a5718 */ // 0x805A5710
    /* li r31, 0 */ // 0x805A5714
    r3 = *(0 + r31); // lwz @ 0x805A5718
    r4 = *(0x1c + r26); // lbz @ 0x805A571C
    r3 = *(0x11 + r3); // lbz @ 0x805A5720
    /* extsb r0, r3 */ // 0x805A5724
    if (!=) goto 0x0x805a5738;
    *(0x1c + r31) = r4; // stb @ 0x805A5730
    /* b 0x805a573c */ // 0x805A5734
    *(0x1c + r31) = r3; // stb @ 0x805A5738
    r0 = *(0x18 + r31); // lhz @ 0x805A573C
    r28 = r31;
    /* li r30, 0 */ // 0x805A5744
    r0 = r0 | 1; // 0x805A5748
    *(0x18 + r31) = r0; // sth @ 0x805A574C
    /* b 0x805a581c */ // 0x805A5750
    if (>=) goto 0x0x805a5764;
    r3 = *(0x38 + r28); // lwz @ 0x805A575C
    /* b 0x805a5768 */ // 0x805A5760
    /* li r3, 0 */ // 0x805A5764
    r0 = *(0x18 + r3); // lhz @ 0x805A5768
    /* clrlwi. r0, r0, 0x1f */ // 0x805A576C
    if (!=) goto 0x0x805a5814;
    if (>=) goto 0x0x805a5784;
    r25 = *(0x38 + r28); // lwz @ 0x805A577C
    /* b 0x805a5788 */ // 0x805A5780
    /* li r25, 0 */ // 0x805A5784
    r3 = *(0 + r25); // lwz @ 0x805A5788
    r4 = *(0x1c + r31); // lbz @ 0x805A578C
    r3 = *(0x11 + r3); // lbz @ 0x805A5790
    /* extsb r0, r3 */ // 0x805A5794
    if (!=) goto 0x0x805a57a8;
    *(0x1c + r25) = r4; // stb @ 0x805A57A0
    /* b 0x805a57ac */ // 0x805A57A4
    *(0x1c + r25) = r3; // stb @ 0x805A57A8
    r0 = *(0x18 + r25); // lhz @ 0x805A57AC
    r23 = r25;
    /* li r24, 0 */ // 0x805A57B4
    r0 = r0 | 1; // 0x805A57B8
    *(0x18 + r25) = r0; // sth @ 0x805A57BC
    /* b 0x805a5808 */ // 0x805A57C0
    if (>=) goto 0x0x805a57d4;
    r3 = *(0x38 + r23); // lwz @ 0x805A57CC
    /* b 0x805a57d8 */ // 0x805A57D0
    /* li r3, 0 */ // 0x805A57D4
    r0 = *(0x18 + r3); // lhz @ 0x805A57D8
    /* clrlwi. r0, r0, 0x1f */ // 0x805A57DC
    if (!=) goto 0x0x805a5800;
    if (>=) goto 0x0x805a57f4;
    r3 = *(0x38 + r23); // lwz @ 0x805A57EC
    /* b 0x805a57f8 */ // 0x805A57F0
    /* li r3, 0 */ // 0x805A57F4
    r4 = *(0x1c + r25); // lbz @ 0x805A57F8
    FUN_805A5698(r3); // bl 0x805A5698
    r23 = r23 + 0x18; // 0x805A5800
    r24 = r24 + 1; // 0x805A5804
    r4 = *(4 + r25); // lhz @ 0x805A5808
    if (<) goto 0x0x805a57c4;
    r28 = r28 + 0x18; // 0x805A5814
    r30 = r30 + 1; // 0x805A5818
    r4 = *(4 + r31); // lhz @ 0x805A581C
    if (<) goto 0x0x805a5754;
    r29 = r29 + 0x18; // 0x805A5828
    r27 = r27 + 1; // 0x805A582C
    r4 = *(4 + r26); // lhz @ 0x805A5830
    if (<) goto 0x0x805a56e4;
    r0 = *(0x34 + r1); // lwz @ 0x805A5840
    return;
}