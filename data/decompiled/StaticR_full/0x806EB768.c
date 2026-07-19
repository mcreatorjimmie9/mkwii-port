/* Function at 0x806EB768, size=340 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 2 function(s) */

int FUN_806EB768(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x806EB774
    r29 = r3 + 0x304; // 0x806EB778
    /* li r28, 0 */ // 0x806EB77C
    /* li r26, 0 */ // 0x806EB780
    /* lis r30, 0 */ // 0x806EB784
    /* li r31, 1 */ // 0x806EB788
    /* lis r27, 0 */ // 0x806EB78C
    /* b 0x806eb8a0 */ // 0x806EB790
    r0 = *(0 + r30); // lwz @ 0x806EB798
    if (<) goto 0x0x806eb7b4;
    if (>=) goto 0x0x806eb7b4;
    r3 = r0 + r28; // 0x806EB7A8
    r4 = *(0x2920 + r3); // lbz @ 0x806EB7AC
    /* b 0x806eb7b8 */ // 0x806EB7B0
    /* li r4, 0xff */ // 0x806EB7B4
    r6 = *(0 + r30); // lwz @ 0x806EB7B8
    r3 = r31 << r4; // slw
    r0 = *(0x291c + r6); // lwz @ 0x806EB7C0
    /* mulli r0, r0, 0x58 */ // 0x806EB7C4
    r5 = r6 + r0; // 0x806EB7C8
    r0 = *(0x48 + r5); // lwz @ 0x806EB7CC
    /* and. r0, r3, r0 */ // 0x806EB7D0
    if (==) goto 0x0x806eb898;
    r0 = *(0x59 + r5); // lbz @ 0x806EB7D8
    if (==) goto 0x0x806eb898;
    r0 = r4 rlwinm 5; // rlwinm
    r3 = r4 rlwinm 2; // rlwinm
    r4 = r6 + r0; // 0x806EB7EC
    r0 = *(0x27b8 + r4); // lwz @ 0x806EB7F0
    /* mulli r0, r0, 0x30 */ // 0x806EB7F4
    r0 = r6 + r0; // 0x806EB7F8
    r3 = r3 + r0; // 0x806EB7FC
    r3 = *(0x150 + r3); // lwz @ 0x806EB800
    r3 = *(0x1c + r3); // lwz @ 0x806EB804
    r0 = *(8 + r3); // lwz @ 0x806EB808
    if (==) goto 0x0x806eb898;
    r24 = *(0 + r3); // lwz @ 0x806EB814
    r25 = r29;
    /* li r22, 0 */ // 0x806EB81C
    r23 = r24 + 0x18; // 0x806EB820
    r0 = *(0 + r24); // lbz @ 0x806EB824
    r24 = r24 + 1; // 0x806EB828
    /* clrlwi r3, r0, 0x1b */ // 0x806EB82C
    *(0x1a + r25) = r3; // stb @ 0x806EB830
    r0 = r0 rlwinm 0x1b; // rlwinm
    *(0x1b + r25) = r0; // stb @ 0x806EB83C
    if (!=) goto 0x0x806eb84c;
    *(0x1c + r25) = r26; // stb @ 0x806EB844
    /* b 0x806eb868 */ // 0x806EB848
    r4 = *(0x1b + r25); // lbz @ 0x806EB84C
    if (!=) goto 0x0x806eb860;
    *(0x1c + r25) = r26; // stb @ 0x806EB858
    /* b 0x806eb868 */ // 0x806EB85C
    FUN_80828800(); // bl 0x80828800
    *(0x1c + r25) = r3; // stb @ 0x806EB864
    r5 = *(0x1c + r25); // lbz @ 0x806EB868
    if (==) goto 0x0x806eb888;
    r4 = r23;
    r3 = r25 + 4; // 0x806EB878
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r0 = *(0x1c + r25); // lbz @ 0x806EB880
    r23 = r23 + r0; // 0x806EB884
    r22 = r22 + 1; // 0x806EB888
    r25 = r25 + 0x20; // 0x806EB88C
    if (<) goto 0x0x806eb824;
    r29 = r29 + 0x300; // 0x806EB898
    r28 = r28 + 1; // 0x806EB89C
    r3 = *(0 + r27); // lwz @ 0x806EB8A0
    r0 = *(0x24 + r3); // lbz @ 0x806EB8A4
    if (<) goto 0x0x806eb794;
    r0 = *(0x34 + r1); // lwz @ 0x806EB8B4
}