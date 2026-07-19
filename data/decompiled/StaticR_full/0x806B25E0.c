/* Function at 0x806B25E0, size=580 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r14 */
/* Calls: 3 function(s) */

int FUN_806B25E0(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r14 */
    /* stmw r14, 8(r1) */ // 0x806B25EC
    /* lis r14, 0 */ // 0x806B25F0
    r15 = r3;
    r5 = *(0 + r14); // lwz @ 0x806B25F8
    r4 = *(0 + r5); // lwz @ 0x806B25FC
    r4 = *(0 + r4); // lwz @ 0x806B2600
    r0 = r4 + -0x58; // 0x806B2604
    if (>) goto 0x0x806b26a0;
    /* lis r4, 0 */ // 0x806B2610
    /* slwi r0, r0, 2 */ // 0x806B2614
    r4 = r4 + 0; // 0x806B2618
    /* lwzx r4, r4, r0 */ // 0x806B261C
    /* mtctr r4 */ // 0x806B2620
    /* bctr  */ // 0x806B2624
    /* lis r3, 0 */ // 0x806B2628
    r3 = *(0 + r3); // lwz @ 0x806B262C
    FUN_806EC5F0(r3); // bl 0x806EC5F0
    *(0x288 + r15) = r3; // stw @ 0x806B2634
    /* b 0x806b26a0 */ // 0x806B2638
    /* lis r3, 0 */ // 0x806B263C
    r3 = *(0 + r3); // lwz @ 0x806B2640
    FUN_806EC60C(r3); // bl 0x806EC60C
    *(0x28c + r15) = r3; // stw @ 0x806B2648
    /* b 0x806b26a0 */ // 0x806B264C
    r4 = *(0x98 + r5); // lwz @ 0x806B2650
    r0 = *(0x2d0 + r4); // lwz @ 0x806B2654
    if (<=) goto 0x0x806b266c;
    r0 = *(0x2d4 + r4); // lwz @ 0x806B2660
    *(0x288 + r3) = r0; // stw @ 0x806B2664
    /* b 0x806b26a0 */ // 0x806B2668
    /* lis r3, 0 */ // 0x806B266C
    r3 = *(0 + r3); // lwz @ 0x806B2670
    FUN_806EC5F0(r3); // bl 0x806EC5F0
    *(0x288 + r15) = r3; // stw @ 0x806B2678
    r4 = *(0 + r14); // lwz @ 0x806B267C
    r4 = *(0x98 + r4); // lwz @ 0x806B2680
    *(0x2d4 + r4) = r3; // stw @ 0x806B2684
    /* b 0x806b26a0 */ // 0x806B2688
    /* li r0, 0 */ // 0x806B268C
    *(0x28c + r3) = r0; // stw @ 0x806B2690
    /* b 0x806b26a0 */ // 0x806B2694
    /* li r0, 1 */ // 0x806B2698
    *(0x28c + r3) = r0; // stw @ 0x806B269C
    r22 = r15;
    /* li r18, 0 */ // 0x806B26A4
    /* li r17, 0 */ // 0x806B26A8
    /* lis r31, 0 */ // 0x806B26AC
    /* lis r27, 0 */ // 0x806B26B0
    /* lis r28, 1 */ // 0x806B26B4
    /* lis r26, 0 */ // 0x806B26B8
    /* lis r29, 0 */ // 0x806B26BC
    /* lis r30, 0 */ // 0x806B26C0
    /* lis r14, 0 */ // 0x806B26C4
    r3 = *(0 + r26); // lwz @ 0x806B26C8
    /* clrlwi r4, r17, 0x18 */ // 0x806B26CC
    r0 = *(0x291c + r3); // lwz @ 0x806B26D0
    /* mulli r0, r0, 0x58 */ // 0x806B26D4
    r3 = r3 + r0; // 0x806B26D8
    r0 = *(0x59 + r3); // lbz @ 0x806B26DC
    if (!=) goto 0x0x806b26f0;
    r24 = *(0x58 + r3); // lbz @ 0x806B26E8
    /* b 0x806b26fc */ // 0x806B26EC
    r0 = r17 rlwinm 2; // rlwinm
    r3 = r0 + r3; // 0x806B26F4
    r24 = *(0x5b + r3); // lbz @ 0x806B26F8
    /* clrlwi r25, r17, 0x18 */ // 0x806B26FC
    r20 = r17 rlwinm 3; // rlwinm
    /* mulli r21, r25, 0xc0 */ // 0x806B2704
    /* li r16, 0 */ // 0x806B2708
    /* b 0x806b2904 */ // 0x806B270C
    *(0x1f4 + r22) = r17; // stb @ 0x806B2710
    /* clrlwi. r0, r16, 0x18 */ // 0x806B2714
    *(0x1f5 + r22) = r16; // stb @ 0x806B2718
    if (!=) goto 0x0x806b27d8;
    r3 = *(0 + r26); // lwz @ 0x806B2720
    /* clrlwi r4, r17, 0x18 */ // 0x806B2724
    r0 = *(0x291c + r3); // lwz @ 0x806B2728
    /* mulli r0, r0, 0x58 */ // 0x806B272C
    r3 = r3 + r0; // 0x806B2730
    r0 = *(0x59 + r3); // lbz @ 0x806B2734
    if (!=) goto 0x0x806b27b4;
    r4 = *(0 + r27); // lwz @ 0x806B2740
    r0 = *(0x36 + r4); // lha @ 0x806B2744
    if (<) goto 0x0x806b2768;
    /* clrlwi r3, r0, 0x18 */ // 0x806B2750
    r0 = r28 + -0x6c10; // 0x806B2754
    r0 = r0 * r3; // 0x806B2758
    r3 = r4 + r0; // 0x806B275C
    r3 = r3 + 0x38; // 0x806B2760
    /* b 0x806b276c */ // 0x806B2764
    /* li r3, 0 */ // 0x806B2768
    /* addis r3, r3, 1 */ // 0x806B276C
    r0 = *(-0x6fe8 + r3); // lhz @ 0x806B2770
    *(0x1fc + r22) = r0; // sth @ 0x806B2774
    r4 = *(0 + r27); // lwz @ 0x806B2778
    r0 = *(0x36 + r4); // lha @ 0x806B277C
    if (<) goto 0x0x806b27a0;
    /* clrlwi r3, r0, 0x18 */ // 0x806B2788
    r0 = r28 + -0x6c10; // 0x806B278C
    r0 = r0 * r3; // 0x806B2790
    r3 = r4 + r0; // 0x806B2794
    r3 = r3 + 0x38; // 0x806B2798
    /* b 0x806b27a4 */ // 0x806B279C
    /* li r3, 0 */ // 0x806B27A0
    /* addis r3, r3, 1 */ // 0x806B27A4
    r0 = *(-0x6fe0 + r3); // lhz @ 0x806B27A8
    *(0x1fe + r22) = r0; // sth @ 0x806B27AC
    /* b 0x806b27e4 */ // 0x806B27B0
    r0 = *(0 + r29); // lwz @ 0x806B27B4
    r3 = r21 + r0; // 0x806B27B8
    r0 = *(0x180 + r3); // lhz @ 0x806B27BC
    *(0x1fc + r22) = r0; // sth @ 0x806B27C0
    r0 = *(0 + r29); // lwz @ 0x806B27C4
    r3 = r21 + r0; // 0x806B27C8
    r0 = *(0x182 + r3); // lhz @ 0x806B27CC
    *(0x1fe + r22) = r0; // sth @ 0x806B27D0
    /* b 0x806b27e4 */ // 0x806B27D4
    r0 = r28 + -1; // 0x806B27D8
    *(0x1fc + r22) = r0; // sth @ 0x806B27DC
    *(0x1fe + r22) = r0; // sth @ 0x806B27E0
    r4 = *(0 + r31); // lwz @ 0x806B27E4
    r3 = *(0 + r4); // lwz @ 0x806B27E8
    r3 = *(0 + r3); // lwz @ 0x806B27EC
    r0 = r3 + -0x58; // 0x806B27F0
    if (>) goto 0x0x806b28a8;
    /* slwi r0, r0, 2 */ // 0x806B2800
    /* lwzx r3, r3, r0 */ // 0x806B2804
    /* mtctr r3 */ // 0x806B2808
    /* bctr  */ // 0x806B280C
    /* li r0, 2 */ // 0x806B2810
    *(0x1f8 + r22) = r0; // stw @ 0x806B2814
    /* b 0x806b28a8 */ // 0x806B2818
    r23 = *(0x98 + r4); // lwz @ 0x806B281C
    r19 = r16 rlwinm 2; // rlwinm
}