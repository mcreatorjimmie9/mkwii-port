/* Function at 0x805A7484, size=1164 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 2 function(s) */

int FUN_805A7484(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* lis r6, 0 */ // 0x805A748C
    *(0x34 + r1) = r0; // stw @ 0x805A7490
    /* stmw r24, 0x10(r1) */ // 0x805A7494
    r24 = r3;
    r26 = r5;
    r25 = r4;
    /* li r3, 0 */ // 0x805A74A4
    r6 = *(0 + r6); // lwz @ 0x805A74A8
    r5 = *(0xc + r6); // lwz @ 0x805A74AC
    if (==) goto 0x0x805a74c8;
    r0 = *(4 + r5); // lhz @ 0x805A74B8
    if (==) goto 0x0x805a74c8;
    /* li r3, 1 */ // 0x805A74C4
    if (==) goto 0x0x805a74dc;
    r3 = *(0xc + r6); // lwz @ 0x805A74D0
    r0 = *(4 + r3); // lhz @ 0x805A74D4
    /* b 0x805a74e0 */ // 0x805A74D8
    /* li r0, 0 */ // 0x805A74DC
    if (>=) goto 0x0x805a7510;
    r3 = *(0xc + r6); // lwz @ 0x805A74E8
    r0 = *(4 + r3); // lhz @ 0x805A74EC
    if (>=) goto 0x0x805a7508;
    r3 = *(0 + r3); // lwz @ 0x805A74F8
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A7500
    /* b 0x805a7514 */ // 0x805A7504
    /* li r3, 0 */ // 0x805A7508
    /* b 0x805a7514 */ // 0x805A750C
    /* li r3, 0 */ // 0x805A7510
    r3 = *(0 + r3); // lwz @ 0x805A7514
    /* li r5, 0 */ // 0x805A751C
    r29 = *(0 + r3); // lbz @ 0x805A7520
    if (==) goto 0x0x805a753c;
    r3 = *(0xc + r6); // lwz @ 0x805A7528
    r0 = *(4 + r3); // lhz @ 0x805A752C
    if (==) goto 0x0x805a753c;
    /* li r5, 1 */ // 0x805A7538
    if (==) goto 0x0x805a7550;
    r3 = *(0xc + r6); // lwz @ 0x805A7544
    r0 = *(4 + r3); // lhz @ 0x805A7548
    /* b 0x805a7554 */ // 0x805A754C
    /* li r0, 0 */ // 0x805A7550
    if (>=) goto 0x0x805a7584;
    r3 = *(0xc + r6); // lwz @ 0x805A755C
    r0 = *(4 + r3); // lhz @ 0x805A7560
    if (>=) goto 0x0x805a757c;
    r3 = *(0 + r3); // lwz @ 0x805A756C
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A7574
    /* b 0x805a7588 */ // 0x805A7578
    /* li r3, 0 */ // 0x805A757C
    /* b 0x805a7588 */ // 0x805A7580
    /* li r3, 0 */ // 0x805A7584
    r4 = *(0 + r3); // lwz @ 0x805A7588
    /* li r27, 0 */ // 0x805A758C
    /* lis r31, 0 */ // 0x805A7590
    /* lis r30, 0 */ // 0x805A7594
    r3 = *(1 + r4); // lbz @ 0x805A7598
    r0 = *(0 + r4); // lbz @ 0x805A759C
    r3 = r0 + r3; // 0x805A75A0
    r0 = r3 + -1; // 0x805A75A4
    /* clrlwi r28, r0, 0x18 */ // 0x805A75A8
    r4 = *(0 + r24); // lwz @ 0x805A75AC
    r3 = r4 + r27; // 0x805A75B0
    r0 = *(2 + r3); // lbz @ 0x805A75B4
    if (!=) goto 0x0x805a779c;
    if (==) goto 0x0x805a7740;
    r3 = *(0 + r30); // lwz @ 0x805A75C8
    /* li r0, 1 */ // 0x805A75CC
    r3 = *(0xb70 + r3); // lwz @ 0x805A75D0
    if (==) goto 0x0x805a75e8;
    if (==) goto 0x0x805a75e8;
    /* li r0, 0 */ // 0x805A75E4
    if (==) goto 0x0x805a7698;
    r5 = *(0 + r31); // lwz @ 0x805A75F0
    r4 = *(0 + r4); // lbz @ 0x805A75F4
    r3 = *(0x10 + r5); // lwz @ 0x805A75F8
    if (==) goto 0x0x805a760c;
    r0 = *(4 + r3); // lhz @ 0x805A7604
    /* b 0x805a7610 */ // 0x805A7608
    /* li r0, 0 */ // 0x805A760C
    if (>=) goto 0x0x805a7640;
    r3 = *(0x10 + r5); // lwz @ 0x805A7618
    r0 = *(4 + r3); // lhz @ 0x805A761C
    if (>=) goto 0x0x805a7638;
    r3 = *(0 + r3); // lwz @ 0x805A7628
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r4, r3, r0 */ // 0x805A7630
    /* b 0x805a7644 */ // 0x805A7634
    /* li r4, 0 */ // 0x805A7638
    /* b 0x805a7644 */ // 0x805A763C
    /* li r4, 0 */ // 0x805A7640
    r6 = *(0x11 + r4); // lbz @ 0x805A7644
    /* li r5, 0 */ // 0x805A7648
    /* b 0x805a7668 */ // 0x805A764C
    r3 = *(0xc + r4); // lwz @ 0x805A7650
    /* clrlwi r0, r5, 0x18 */ // 0x805A7654
    /* lbzx r0, r3, r0 */ // 0x805A7658
    if (==) goto 0x0x805a779c;
    r5 = r5 + 1; // 0x805A7664
    /* clrlwi r0, r5, 0x18 */ // 0x805A7668
    if (<) goto 0x0x805a7650;
    r0 = *(0x13 + r4); // lbz @ 0x805A7674
    if (>=) goto 0x0x805a779c;
    r3 = *(0xc + r4); // lwz @ 0x805A7680
    /* stbx r28, r3, r6 */ // 0x805A7684
    r3 = *(0x11 + r4); // lbz @ 0x805A7688
    r0 = r3 + 1; // 0x805A768C
    *(0x11 + r4) = r0; // stb @ 0x805A7690
    /* b 0x805a779c */ // 0x805A7694
    r5 = *(0 + r31); // lwz @ 0x805A7698
    r4 = *(0 + r4); // lbz @ 0x805A769C
    r3 = *(0x10 + r5); // lwz @ 0x805A76A0
    if (==) goto 0x0x805a76b4;
    r0 = *(4 + r3); // lhz @ 0x805A76AC
    /* b 0x805a76b8 */ // 0x805A76B0
    /* li r0, 0 */ // 0x805A76B4
    if (>=) goto 0x0x805a76e8;
    r3 = *(0x10 + r5); // lwz @ 0x805A76C0
    r0 = *(4 + r3); // lhz @ 0x805A76C4
    if (>=) goto 0x0x805a76e0;
    r3 = *(0 + r3); // lwz @ 0x805A76D0
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r4, r3, r0 */ // 0x805A76D8
    /* b 0x805a76ec */ // 0x805A76DC
    /* li r4, 0 */ // 0x805A76E0
    /* b 0x805a76ec */ // 0x805A76E4
    /* li r4, 0 */ // 0x805A76E8
    r6 = *(0x10 + r4); // lbz @ 0x805A76EC
    /* li r5, 0 */ // 0x805A76F0
    /* b 0x805a7710 */ // 0x805A76F4
    r3 = *(8 + r4); // lwz @ 0x805A76F8
    /* clrlwi r0, r5, 0x18 */ // 0x805A76FC
    /* lbzx r0, r3, r0 */ // 0x805A7700
    if (==) goto 0x0x805a779c;
    r5 = r5 + 1; // 0x805A770C
    /* clrlwi r0, r5, 0x18 */ // 0x805A7710
    if (<) goto 0x0x805a76f8;
    r0 = *(0x12 + r4); // lbz @ 0x805A771C
    if (>=) goto 0x0x805a779c;
    r3 = *(8 + r4); // lwz @ 0x805A7728
    /* stbx r28, r3, r6 */ // 0x805A772C
    r3 = *(0x10 + r4); // lbz @ 0x805A7730
    r0 = r3 + 1; // 0x805A7734
    *(0x10 + r4) = r0; // stb @ 0x805A7738
    /* b 0x805a779c */ // 0x805A773C
    r5 = *(0 + r31); // lwz @ 0x805A7740
    r4 = *(0 + r4); // lbz @ 0x805A7744
    r3 = *(0x10 + r5); // lwz @ 0x805A7748
    if (==) goto 0x0x805a775c;
    r0 = *(4 + r3); // lhz @ 0x805A7754
    /* b 0x805a7760 */ // 0x805A7758
    /* li r0, 0 */ // 0x805A775C
    if (>=) goto 0x0x805a7790;
    r3 = *(0x10 + r5); // lwz @ 0x805A7768
    r0 = *(4 + r3); // lhz @ 0x805A776C
    if (>=) goto 0x0x805a7788;
    r3 = *(0 + r3); // lwz @ 0x805A7778
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A7780
    /* b 0x805a7794 */ // 0x805A7784
    /* li r3, 0 */ // 0x805A7788
    /* b 0x805a7794 */ // 0x805A778C
    /* li r3, 0 */ // 0x805A7790
    r4 = r28;
    FUN_805A79B8(r3, r3, r4); // bl 0x805A79B8
    r27 = r27 + 1; // 0x805A779C
    if (<) goto 0x0x805a75ac;
    /* li r27, 0 */ // 0x805A77A8
    /* lis r31, 0 */ // 0x805A77AC
    r5 = *(0 + r24); // lwz @ 0x805A77B0
    r3 = r5 + r27; // 0x805A77B4
    r0 = *(8 + r3); // lbz @ 0x805A77B8
    if (!=) goto 0x0x805a78f0;
    if (==) goto 0x0x805a7884;
    r6 = *(0 + r31); // lwz @ 0x805A77CC
    r4 = *(1 + r5); // lbz @ 0x805A77D0
    r0 = *(0 + r5); // lbz @ 0x805A77D4
    r3 = *(0x10 + r6); // lwz @ 0x805A77D8
    r4 = r0 + r4; // 0x805A77DC
    r0 = r4 + -1; // 0x805A77E0
    /* clrlwi r4, r0, 0x18 */ // 0x805A77E8
    if (==) goto 0x0x805a77f8;
    r0 = *(4 + r3); // lhz @ 0x805A77F0
    /* b 0x805a77fc */ // 0x805A77F4
    /* li r0, 0 */ // 0x805A77F8
    if (>=) goto 0x0x805a782c;
    r3 = *(0x10 + r6); // lwz @ 0x805A7804
    r0 = *(4 + r3); // lhz @ 0x805A7808
    if (>=) goto 0x0x805a7824;
    r3 = *(0 + r3); // lwz @ 0x805A7814
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r4, r3, r0 */ // 0x805A781C
    /* b 0x805a7830 */ // 0x805A7820
    /* li r4, 0 */ // 0x805A7824
    /* b 0x805a7830 */ // 0x805A7828
    /* li r4, 0 */ // 0x805A782C
    r6 = *(0x11 + r4); // lbz @ 0x805A7830
    /* li r5, 0 */ // 0x805A7834
    /* b 0x805a7854 */ // 0x805A7838
    r3 = *(0xc + r4); // lwz @ 0x805A783C
    /* clrlwi r0, r5, 0x18 */ // 0x805A7840
    /* lbzx r0, r3, r0 */ // 0x805A7844
    if (==) goto 0x0x805a78f0;
    r5 = r5 + 1; // 0x805A7850
    /* clrlwi r0, r5, 0x18 */ // 0x805A7854
    if (<) goto 0x0x805a783c;
    r0 = *(0x13 + r4); // lbz @ 0x805A7860
    if (>=) goto 0x0x805a78f0;
    r3 = *(0xc + r4); // lwz @ 0x805A786C
    /* stbx r29, r3, r6 */ // 0x805A7870
    r3 = *(0x11 + r4); // lbz @ 0x805A7874
    r0 = r3 + 1; // 0x805A7878
    *(0x11 + r4) = r0; // stb @ 0x805A787C
    /* b 0x805a78f0 */ // 0x805A7880
    r6 = *(0 + r31); // lwz @ 0x805A7884
    r4 = *(1 + r5); // lbz @ 0x805A7888
    r0 = *(0 + r5); // lbz @ 0x805A788C
    r3 = *(0x10 + r6); // lwz @ 0x805A7890
    r4 = r0 + r4; // 0x805A7894
    r0 = r4 + -1; // 0x805A7898
    /* clrlwi r4, r0, 0x18 */ // 0x805A78A0
    if (==) goto 0x0x805a78b0;
    r0 = *(4 + r3); // lhz @ 0x805A78A8
    /* b 0x805a78b4 */ // 0x805A78AC
    /* li r0, 0 */ // 0x805A78B0
    if (>=) goto 0x0x805a78e4;
    r3 = *(0x10 + r6); // lwz @ 0x805A78BC
    r0 = *(4 + r3); // lhz @ 0x805A78C0
    if (>=) goto 0x0x805a78dc;
    r3 = *(0 + r3); // lwz @ 0x805A78CC
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A78D4
    /* b 0x805a78e8 */ // 0x805A78D8
    /* li r3, 0 */ // 0x805A78DC
    /* b 0x805a78e8 */ // 0x805A78E0
    /* li r3, 0 */ // 0x805A78E4
    r4 = r29;
    FUN_805A79B8(r3, r3, r4); // bl 0x805A79B8
    r27 = r27 + 1; // 0x805A78F0
    if (<) goto 0x0x805a77b0;
    r0 = *(0x34 + r1); // lwz @ 0x805A7900
    return;
}