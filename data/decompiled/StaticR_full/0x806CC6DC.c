/* Function at 0x806CC6DC, size=436 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r20 */
/* Calls: 8 function(s) */

int FUN_806CC6DC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r20 */
    /* stmw r20, 0x10(r1) */ // 0x806CC6E8
    /* lis r29, 0 */ // 0x806CC6EC
    r25 = r3;
    r4 = *(0 + r29); // lwz @ 0x806CC6F4
    r4 = *(0 + r4); // lwz @ 0x806CC6F8
    r0 = *(0 + r4); // lwz @ 0x806CC6FC
    if (<) goto 0x0x806cc710;
    if (<=) goto 0x0x806cc724;
    if (<) goto 0x0x806cc87c;
    if (<=) goto 0x0x806cc854;
    /* b 0x806cc87c */ // 0x806CC720
    /* li r28, 0 */ // 0x806CC724
    /* lis r31, 0 */ // 0x806CC728
    /* lis r30, 0 */ // 0x806CC72C
    /* li r22, 1 */ // 0x806CC730
    /* li r23, 0 */ // 0x806CC734
    /* lis r24, 0 */ // 0x806CC738
    /* b 0x806cc83c */ // 0x806CC73C
    r3 = *(0 + r29); // lwz @ 0x806CC740
    r4 = r28 rlwinm 2; // rlwinm
    r0 = *(0x98 + r3); // lwz @ 0x806CC748
    r3 = r0 + r4; // 0x806CC74C
    r27 = *(0x12c + r3); // lwz @ 0x806CC750
    r26 = *(0x13c + r3); // lwz @ 0x806CC754
    FUN_808CFEE0(); // bl 0x808CFEE0
    if (==) goto 0x0x806cc79c;
    r3 = *(0 + r30); // lwz @ 0x806CC764
    if (==) goto 0x0x806cc79c;
    r6 = *(0x18 + r3); // lwz @ 0x806CC770
    if (==) goto 0x0x806cc79c;
    /* clrlwi r3, r28, 0x18 */ // 0x806CC77C
    r5 = *(0 + r31); // lwz @ 0x806CC780
    /* mulli r4, r3, 0xf0 */ // 0x806CC784
    r0 = r28 rlwinm 4; // rlwinm
    r3 = r6 + r0; // 0x806CC78C
    r4 = r5 + r4; // 0x806CC790
    r0 = *(0xce4 + r4); // lwz @ 0x806CC794
    *(0x14 + r3) = r0; // stw @ 0x806CC798
    /* clrlwi r4, r28, 0x18 */ // 0x806CC79C
    /* mulli r0, r4, 0xc */ // 0x806CC7A0
    r20 = r25 + r0; // 0x806CC7A4
    *(0x54 + r20) = r27; // stw @ 0x806CC7A8
    r0 = *(0x90 + r25); // lbz @ 0x806CC7AC
    if (!=) goto 0x0x806cc7c4;
    r3 = *(0 + r30); // lwz @ 0x806CC7B8
    r5 = r27;
    FUN_806475F0(r5); // bl 0x806475F0
    r0 = *(0x90 + r25); // lbz @ 0x806CC7C4
    if (!=) goto 0x0x806cc818;
    r0 = *(0x5d + r20); // lbz @ 0x806CC7D0
    if (!=) goto 0x0x806cc818;
    *(0x5d + r20) = r22; // stb @ 0x806CC7DC
    /* clrlwi r4, r28, 0x18 */ // 0x806CC7E0
    *(0x5c + r20) = r23; // stb @ 0x806CC7E4
    r3 = *(0 + r30); // lwz @ 0x806CC7E8
    FUN_806475D8(); // bl 0x806475D8
    /* li r21, 2 */ // 0x806CC7F0
    FUN_808CFEE0(); // bl 0x808CFEE0
    if (==) goto 0x0x806cc804;
    /* li r21, 0 */ // 0x806CC800
    r3 = *(0 + r24); // lwz @ 0x806CC804
    r5 = r27;
    r6 = r21;
    /* clrlwi r4, r28, 0x18 */ // 0x806CC810
    FUN_805D0D74(r5, r6); // bl 0x805D0D74
    *(0x58 + r20) = r26; // stw @ 0x806CC818
    r0 = *(0x90 + r25); // lbz @ 0x806CC81C
    if (!=) goto 0x0x806cc838;
    r3 = *(0 + r30); // lwz @ 0x806CC828
    r5 = r26;
    /* clrlwi r4, r28, 0x18 */ // 0x806CC830
    FUN_80647608(r5); // bl 0x80647608
    r28 = r28 + 1; // 0x806CC838
    FUN_808CFA50(r5); // bl 0x808CFA50
    /* clrlwi r3, r3, 0x18 */ // 0x806CC840
    /* clrlwi r0, r28, 0x18 */ // 0x806CC844
    if (<) goto 0x0x806cc740;
    /* b 0x806cc87c */ // 0x806CC850
    r0 = *(0x90 + r3); // lbz @ 0x806CC854
    /* li r4, 0x19 */ // 0x806CC858
    *(0x54 + r3) = r4; // stw @ 0x806CC85C
    if (!=) goto 0x0x806cc87c;
    /* lis r3, 0 */ // 0x806CC868
    /* li r4, 0 */ // 0x806CC86C
    r3 = *(0 + r3); // lwz @ 0x806CC870
    /* li r5, 0x19 */ // 0x806CC874
    FUN_806475F0(r3, r4, r5); // bl 0x806475F0
    r0 = *(0x44 + r1); // lwz @ 0x806CC880
    return;
}