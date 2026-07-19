/* Function at 0x805D85CC, size=476 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_805D85CC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    *(0x34 + r1) = r0; // stw @ 0x805D85D8
    /* li r0, 0 */ // 0x805D85DC
    /* stmw r25, 0x14(r1) */ // 0x805D85E0
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r25 = r7;
    r8 = *(0x18 + r3); // lwz @ 0x805D85F8
    *(0 + r8) = r0; // stw @ 0x805D85FC
    if (==) goto 0x0x805d8618;
    if (==) goto 0x0x805d86a8;
    if (==) goto 0x0x805d86e0;
    /* b 0x805d872c */ // 0x805D8614
    /* li r27, 0 */ // 0x805D8618
    /* li r26, 0 */ // 0x805D861C
    /* clrlwi r3, r26, 0x18 */ // 0x805D8620
    FUN_805E0FBC(); // bl 0x805E0FBC
    if (!=) goto 0x0x805d863c;
    r31 = r26;
    /* li r27, 1 */ // 0x805D8634
    /* b 0x805d8648 */ // 0x805D8638
    r26 = r26 + 1; // 0x805D863C
    if (<) goto 0x0x805d8620;
    if (!=) goto 0x0x805d8668;
    /* addis r3, r28, 2 */ // 0x805D8650
    /* li r0, 0 */ // 0x805D8654
    *(0x5000 + r3) = r0; // stb @ 0x805D8658
    /* li r0, 0xa */ // 0x805D865C
    *(0x5004 + r3) = r0; // stw @ 0x805D8660
    /* b 0x805d8794 */ // 0x805D8664
    /* lis r3, 1 */ // 0x805D8668
    /* clrlwi r0, r31, 0x18 */ // 0x805D866C
    r4 = r3 + -0x6c10; // 0x805D8670
    r4 = r29 * r4; // 0x805D8674
    /* li r3, 1 */ // 0x805D8678
    r0 = r3 << r0; // slw
    r3 = r28 + r4; // 0x805D8680
    /* addis r3, r3, 1 */ // 0x805D8684
    r3 = *(-0x6d68 + r3); // lwz @ 0x805D8688
    /* and. r0, r3, r0 */ // 0x805D868C
    if (!=) goto 0x0x805d872c;
    /* addis r3, r28, 2 */ // 0x805D8694
    /* li r0, 0 */ // 0x805D8698
    *(0x5000 + r3) = r0; // stb @ 0x805D869C
    *(0x5004 + r3) = r0; // stw @ 0x805D86A0
    /* b 0x805d8794 */ // 0x805D86A4
    /* lis r7, 1 */ // 0x805D86A8
    /* li r5, 1 */ // 0x805D86AC
    r7 = r7 + -0x6c10; // 0x805D86B0
    r7 = r4 * r7; // 0x805D86B4
    r4 = r5 << r6; // slw
    r5 = r3 + r7; // 0x805D86BC
    /* addis r5, r5, 1 */ // 0x805D86C0
    r5 = *(-0x6d64 + r5); // lwz @ 0x805D86C4
    /* and. r4, r5, r4 */ // 0x805D86C8
    if (!=) goto 0x0x805d872c;
    /* addis r3, r3, 2 */ // 0x805D86D0
    *(0x5000 + r3) = r0; // stb @ 0x805D86D4
    *(0x5004 + r3) = r0; // stw @ 0x805D86D8
    /* b 0x805d8794 */ // 0x805D86DC
    if (<) goto 0x0x805d86fc;
    /* addis r4, r3, 2 */ // 0x805D86E8
    /* li r3, 0xa */ // 0x805D86EC
    *(0x5000 + r4) = r0; // stb @ 0x805D86F0
    *(0x5004 + r4) = r3; // stw @ 0x805D86F4
    /* b 0x805d8794 */ // 0x805D86F8
    /* lis r5, 1 */ // 0x805D86FC
    r5 = r5 + -0x6c10; // 0x805D8700
    r4 = r4 * r5; // 0x805D8704
    r4 = r3 + r4; // 0x805D8708
    /* addis r4, r4, 1 */ // 0x805D870C
    r4 = *(-0x6d60 + r4); // lbz @ 0x805D8710
    if (!=) goto 0x0x805d872c;
    /* addis r3, r3, 2 */ // 0x805D871C
    *(0x5000 + r3) = r0; // stb @ 0x805D8720
    *(0x5004 + r3) = r0; // stw @ 0x805D8724
    /* b 0x805d8794 */ // 0x805D8728
    r0 = r30 + -2; // 0x805D872C
    if (>) goto 0x0x805d8740;
    /* li r3, 0 */ // 0x805D8738
    /* b 0x805d876c */ // 0x805D873C
    /* lis r3, 0 */ // 0x805D8740
    /* slwi r0, r30, 2 */ // 0x805D8744
    r3 = r3 + 0; // 0x805D8748
    /* clrlwi r4, r31, 0x18 */ // 0x805D874C
    /* lwzx r0, r3, r0 */ // 0x805D8750
    /* mulli r3, r29, 0x42 */ // 0x805D8754
    r0 = r4 + r0; // 0x805D8758
    r0 = r3 + r0; // 0x805D875C
    /* mulli r3, r0, 0x2800 */ // 0x805D8760
    /* addis r3, r3, 3 */ // 0x805D8764
    r3 = r3 + -0x8000; // 0x805D8768
    /* addis r5, r28, 2 */ // 0x805D876C
    /* li r0, 1 */ // 0x805D8770
    /* lis r4, 0 */ // 0x805D8774
    *(0x20 + r28) = r3; // stw @ 0x805D8778
    r3 = *(0x1c + r28); // lwz @ 0x805D877C
    r4 = r4 + 0; // 0x805D8780
    *(0x5000 + r5) = r0; // stb @ 0x805D8784
    /* li r5, 0 */ // 0x805D8788
    /* li r6, 0 */ // 0x805D878C
    FUN_805E3430(r4, r5, r6); // bl 0x805E3430
    r0 = *(0x34 + r1); // lwz @ 0x805D8798
    return;
}