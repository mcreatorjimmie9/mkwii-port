/* Function at 0x806E76C8, size=408 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r18 */
/* Calls: 2 function(s) */

int FUN_806E76C8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -80(r1) */
    /* saved r18 */
    /* li r5, 1 */ // 0x806E76D0
    /* li r6, 0 */ // 0x806E76D4
    *(0x54 + r1) = r0; // stw @ 0x806E76D8
    /* stmw r18, 0x18(r1) */ // 0x806E76DC
    r21 = r3;
    r0 = *(0x291c + r3); // lwz @ 0x806E76E4
    /* mulli r0, r0, 0x58 */ // 0x806E76E8
    r4 = r3 + r0; // 0x806E76EC
    r3 = *(0x59 + r4); // lbz @ 0x806E76F0
    r0 = *(0x48 + r4); // lwz @ 0x806E76F4
    r3 = r5 << r3; // slw
    /* and. r0, r3, r0 */ // 0x806E76FC
    if (==) goto 0x0x806e7714;
    r0 = *(0x40 + r4); // lwz @ 0x806E7704
    if (<=) goto 0x0x806e7714;
    /* li r6, 1 */ // 0x806E7710
    if (==) goto 0x0x806e7a34;
    /* li r23, 0 */ // 0x806E771C
    /* li r19, 0 */ // 0x806E7720
    /* li r31, 0x10 */ // 0x806E7724
    /* lis r28, -0x8000 */ // 0x806E7728
    /* lis r29, 0x1062 */ // 0x806E772C
    /* li r30, 0x3e8 */ // 0x806E7730
    /* li r27, 1 */ // 0x806E7734
    /* li r20, 2 */ // 0x806E7738
    r4 = *(0x291c + r21); // lwz @ 0x806E773C
    /* clrlwi r0, r23, 0x18 */ // 0x806E7740
    r3 = r27 << r0; // slw
    /* mulli r0, r4, 0x58 */ // 0x806E7748
    r4 = r21 + r0; // 0x806E774C
    r0 = *(0x48 + r4); // lwz @ 0x806E7750
    /* and. r0, r3, r0 */ // 0x806E7754
    if (==) goto 0x0x806e7a28;
    r0 = *(0x59 + r4); // lbz @ 0x806E775C
    if (==) goto 0x0x806e7a28;
    r25 = r23 rlwinm 2; // rlwinm
    r24 = r21 + r25; // 0x806E776C
    r0 = *(0x276c + r24); // lwz @ 0x806E7770
    /* mulli r0, r0, 0x30 */ // 0x806E7774
    r3 = r0 + r24; // 0x806E7778
    r3 = *(0xf0 + r3); // lwz @ 0x806E777C
    r4 = *(0 + r3); // lwz @ 0x806E7780
    r9 = *(8 + r3); // lwz @ 0x806E7784
    r10 = *(4 + r3); // lwz @ 0x806E7788
    r0 = *(8 + r4); // lwz @ 0x806E778C
    r4 = *(8 + r10); // lwz @ 0x806E7790
    r7 = *(0x10 + r3); // lwz @ 0x806E7794
    r5 = *(0x18 + r3); // lwz @ 0x806E7798
    r4 = r0 + r4; // 0x806E779C
    r8 = *(0xc + r3); // lwz @ 0x806E77A0
    r9 = *(8 + r9); // lwz @ 0x806E77A4
    r6 = *(0x14 + r3); // lwz @ 0x806E77A8
    r0 = *(8 + r8); // lwz @ 0x806E77AC
    r4 = r4 + r9; // 0x806E77B0
    r7 = *(8 + r7); // lwz @ 0x806E77B4
    r4 = r4 + r0; // 0x806E77B8
    r3 = *(0x1c + r3); // lwz @ 0x806E77BC
    r0 = *(8 + r6); // lwz @ 0x806E77C0
    r4 = r4 + r7; // 0x806E77C4
    r5 = *(8 + r5); // lwz @ 0x806E77C8
    r4 = r4 + r0; // 0x806E77CC
    r0 = *(8 + r3); // lwz @ 0x806E77D0
    r4 = r4 + r5; // 0x806E77D4
    /* add. r4, r4, r0 */ // 0x806E77D8
    if (!=) goto 0x0x806e7840;
    r0 = r23 rlwinm 3; // rlwinm
    r3 = r21 + r0; // 0x806E77E4
    r18 = *(0x1e0 + r3); // lwz @ 0x806E77E8
    r22 = *(0x1e4 + r3); // lwz @ 0x806E77EC
    /* or. r0, r22, r18 */ // 0x806E77F0
    if (!=) goto 0x0x806e7804;
    /* li r4, -1 */ // 0x806E77F8
    r3 = r4;
    /* b 0x806e782c */ // 0x806E7800
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r0 = *(0xf8 + r28); // lwz @ 0x806E7808
    /* subfc r4, r22, r4 */ // 0x806E780C
    r6 = r29 + 0x4dd3; // 0x806E7810
    /* subfe r3, r18, r3 */ // 0x806E7814
    /* srwi r0, r0, 2 */ // 0x806E7818
    /* li r5, 0 */ // 0x806E781C
    r0 = r6 * r0; // 0x806E7820
    /* srwi r6, r0, 6 */ // 0x806E7824
    FUN_805E3430(r5); // bl 0x805E3430
    /* subfc r0, r4, r30 */ // 0x806E782C
    /* subfe r0, r3, r19 */ // 0x806E7830
    /* subfe r0, r30, r30 */ // 0x806E7834
    /* neg. r0, r0 */ // 0x806E7838
    if (==) goto 0x0x806e7a28;
    r0 = *(0x276c + r24); // lwz @ 0x806E7840
    r26 = r21 + r25; // 0x806E7844
    /* li r4, 0 */ // 0x806E7848
    /* xori r0, r0, 1 */ // 0x806E784C
    *(0x276c + r24) = r0; // stw @ 0x806E7850
    r18 = *(0x1b0 + r26); // lwz @ 0x806E7854
    r3 = *(0 + r18); // lwz @ 0x806E7858
    r5 = *(4 + r18); // lwz @ 0x806E785C
}