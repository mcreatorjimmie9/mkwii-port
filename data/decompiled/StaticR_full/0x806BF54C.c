/* Function at 0x806BF54C, size=716 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 4 function(s) */

int FUN_806BF54C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* lis r4, 0 */ // 0x806BF554
    *(0x34 + r1) = r0; // stw @ 0x806BF558
    /* stmw r24, 0x10(r1) */ // 0x806BF55C
    r25 = r3;
    r3 = *(0 + r4); // lwz @ 0x806BF564
    r3 = *(0 + r3); // lwz @ 0x806BF568
    r28 = *(0x278 + r3); // lwz @ 0x806BF56C
    if (!=) goto 0x0x806bf580;
    /* li r28, 0 */ // 0x806BF578
    /* b 0x806bf5d4 */ // 0x806BF57C
    /* lis r24, 0 */ // 0x806BF580
    r24 = r24 + 0; // 0x806BF584
    if (==) goto 0x0x806bf5d0;
    r12 = *(0 + r28); // lwz @ 0x806BF58C
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x806BF594
    /* mtctr r12 */ // 0x806BF598
    /* bctrl  */ // 0x806BF59C
    /* b 0x806bf5b8 */ // 0x806BF5A0
    if (!=) goto 0x0x806bf5b4;
    /* li r0, 1 */ // 0x806BF5AC
    /* b 0x806bf5c4 */ // 0x806BF5B0
    r3 = *(0 + r3); // lwz @ 0x806BF5B4
    if (!=) goto 0x0x806bf5a4;
    /* li r0, 0 */ // 0x806BF5C0
    if (==) goto 0x0x806bf5d0;
    /* b 0x806bf5d4 */ // 0x806BF5CC
    /* li r28, 0 */ // 0x806BF5D0
    /* li r26, 0 */ // 0x806BF5D4
    /* lis r30, 0 */ // 0x806BF5D8
    /* lis r24, 0 */ // 0x806BF5DC
    /* li r29, 1 */ // 0x806BF5E0
    r3 = *(0 + r24); // lwz @ 0x806BF5E4
    /* clrlwi r0, r26, 0x18 */ // 0x806BF5E8
    r4 = r29 << r0; // slw
    r0 = *(0x291c + r3); // lwz @ 0x806BF5F0
    /* mulli r0, r0, 0x58 */ // 0x806BF5F4
    r3 = r3 + r0; // 0x806BF5F8
    r0 = *(0x48 + r3); // lwz @ 0x806BF5FC
    /* and. r0, r4, r0 */ // 0x806BF600
    if (==) goto 0x0x806bf7f8;
    r3 = r28 + 0x2a44; // 0x806BF608
    r4 = r26 rlwinm 1; // rlwinm
    FUN_8066E0EC(r3); // bl 0x8066E0EC
    /* neg r0, r3 */ // 0x806BF614
    r0 = r0 | r3; // 0x806BF618
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x806BF61C
    if (==) goto 0x0x806bf7f8;
    r3 = *(0 + r24); // lwz @ 0x806BF624
    /* clrlwi r4, r26, 0x18 */ // 0x806BF628
    r0 = *(0x291c + r3); // lwz @ 0x806BF62C
    /* mulli r0, r0, 0x58 */ // 0x806BF630
    r3 = r3 + r0; // 0x806BF634
    r0 = *(0x59 + r3); // lbz @ 0x806BF638
    if (!=) goto 0x0x806bf720;
    r0 = r26 rlwinm 2; // rlwinm
    r31 = *(0x158 + r25); // lwz @ 0x806BF648
    r27 = r25 + r0; // 0x806BF64C
    r0 = *(0xf4 + r27); // lwz @ 0x806BF650
    if (!=) goto 0x0x806bf66c;
    r3 = *(0x15c + r25); // lbz @ 0x806BF65C
    r0 = *(0x154 + r25); // lbz @ 0x806BF660
    if (==) goto 0x0x806bf7f8;
    /* srwi r0, r31, 0x18 */ // 0x806BF66C
    if (!=) goto 0x0x806bf6f8;
    r7 = r25;
    /* li r6, 0 */ // 0x806BF67C
    /* li r3, 0 */ // 0x806BF680
    /* b 0x806bf6ec */ // 0x806BF684
    r0 = *(0 + r7); // lwz @ 0x806BF688
    /* srwi r4, r0, 0x18 */ // 0x806BF68C
    r0 = r4 + -3; // 0x806BF690
    if (>) goto 0x0x806bf6e0;
    r5 = r6;
    r8 = r25 + r3; // 0x806BF6A0
    /* b 0x806bf6c8 */ // 0x806BF6A4
    r0 = *(8 + r8); // lwz @ 0x806BF6A8
    r5 = r5 + 1; // 0x806BF6AC
    *(0 + r8) = r0; // stw @ 0x806BF6B0
    r0 = *(0xc + r8); // lbz @ 0x806BF6B4
    *(4 + r8) = r0; // stb @ 0x806BF6B8
    r0 = *(0xd + r8); // lbz @ 0x806BF6BC
    *(5 + r8) = r0; // stb @ 0x806BF6C0
    r8 = r8 + 8; // 0x806BF6C4
    r4 = *(0xf0 + r25); // lwz @ 0x806BF6C8
    r0 = r4 + -1; // 0x806BF6CC
    if (<) goto 0x0x806bf6a8;
    *(0xf0 + r25) = r0; // stw @ 0x806BF6D8
    /* b 0x806bf6ec */ // 0x806BF6DC
    r7 = r7 + 8; // 0x806BF6E0
    r6 = r6 + 1; // 0x806BF6E4
    r3 = r3 + 8; // 0x806BF6E8
    r0 = *(0xf0 + r25); // lwz @ 0x806BF6EC
    if (<) goto 0x0x806bf688;
    *(0xc + r1) = r31; // stw @ 0x806BF6F8
    r3 = r25;
    /* clrlwi r4, r26, 0x18 */ // 0x806BF700
    r5 = *(0x15c + r25); // lbz @ 0x806BF708
    FUN_806BF96C(r3, r6); // bl 0x806BF96C
    *(0xf4 + r27) = r31; // stw @ 0x806BF710
    r0 = *(0x15c + r25); // lbz @ 0x806BF714
    *(0x154 + r25) = r0; // stb @ 0x806BF718
    /* b 0x806bf7f8 */ // 0x806BF71C
    r3 = *(0 + r30); // lwz @ 0x806BF720
    FUN_806EAB7C(); // bl 0x806EAB7C
    r0 = r26 rlwinm 2; // rlwinm
    r31 = r3;
    r27 = r25 + r0; // 0x806BF730
    r0 = *(0xf4 + r27); // lwz @ 0x806BF734
    if (==) goto 0x0x806bf7f8;
    /* srwi r0, r3, 0x18 */ // 0x806BF740
    if (!=) goto 0x0x806bf7cc;
    r8 = r25;
    /* li r7, 0 */ // 0x806BF750
    /* li r4, 0 */ // 0x806BF754
    /* b 0x806bf7c0 */ // 0x806BF758
    r0 = *(0 + r8); // lwz @ 0x806BF75C
    /* srwi r5, r0, 0x18 */ // 0x806BF760
    r0 = r5 + -3; // 0x806BF764
    if (>) goto 0x0x806bf7b4;
    r6 = r7;
    r9 = r25 + r4; // 0x806BF774
    /* b 0x806bf79c */ // 0x806BF778
    r0 = *(8 + r9); // lwz @ 0x806BF77C
    r6 = r6 + 1; // 0x806BF780
    *(0 + r9) = r0; // stw @ 0x806BF784
    r0 = *(0xc + r9); // lbz @ 0x806BF788
    *(4 + r9) = r0; // stb @ 0x806BF78C
    r0 = *(0xd + r9); // lbz @ 0x806BF790
    *(5 + r9) = r0; // stb @ 0x806BF794
    r9 = r9 + 8; // 0x806BF798
    r5 = *(0xf0 + r25); // lwz @ 0x806BF79C
    r0 = r5 + -1; // 0x806BF7A0
    if (<) goto 0x0x806bf77c;
    *(0xf0 + r25) = r0; // stw @ 0x806BF7AC
    /* b 0x806bf7c0 */ // 0x806BF7B0
    r8 = r8 + 8; // 0x806BF7B4
    r7 = r7 + 1; // 0x806BF7B8
    r4 = r4 + 8; // 0x806BF7BC
    r0 = *(0xf0 + r25); // lwz @ 0x806BF7C0
    if (<) goto 0x0x806bf75c;
    *(8 + r1) = r3; // stw @ 0x806BF7CC
    r3 = r25;
    r5 = *(0 + r24); // lwz @ 0x806BF7D4
    /* clrlwi r4, r26, 0x18 */ // 0x806BF7D8
    r0 = *(0x291c + r5); // lwz @ 0x806BF7E0
    /* mulli r0, r0, 0x58 */ // 0x806BF7E4
    r5 = r5 + r0; // 0x806BF7E8
    r5 = *(0x59 + r5); // lbz @ 0x806BF7EC
    FUN_806BF96C(r6); // bl 0x806BF96C
    *(0xf4 + r27) = r31; // stw @ 0x806BF7F4
    r26 = r26 + 1; // 0x806BF7F8
    if (<) goto 0x0x806bf5e4;
    r0 = *(0x34 + r1); // lwz @ 0x806BF808
    return;
}