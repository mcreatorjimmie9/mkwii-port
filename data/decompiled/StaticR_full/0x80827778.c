/* Function at 0x80827778, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80827778(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r6 = r7 | r6; // 0x80827780
    r4 = r4 rlwinm 0xc; // rlwinm
    *(0x24 + r1) = r0; // stw @ 0x80827788
    r0 = r5 rlwinm 4; // rlwinm
    r4 = r6 | r4; // 0x80827790
    *(0x1c + r1) = r31; // stw @ 0x80827794
    /* lis r31, 0 */ // 0x80827798
    r0 = r8 | r0; // 0x8082779C
    *(0x18 + r1) = r30; // stw @ 0x808277A0
    *(0x14 + r1) = r29; // stw @ 0x808277A4
    r29 = r3;
    r5 = *(0 + r31); // lwz @ 0x808277AC
    *(2 + r5) = r4; // sth @ 0x808277B0
    /* lis r5, 0 */ // 0x808277B4
    /* lis r4, 0 */ // 0x808277B8
    r6 = *(0 + r31); // lwz @ 0x808277BC
    *(4 + r6) = r0; // stb @ 0x808277C0
    r3 = *(0 + r31); // lwz @ 0x808277C4
    r0 = *(0 + r5); // lwz @ 0x808277C8
    *(0 + r3) = r0; // sth @ 0x808277CC
    r30 = *(0 + r4); // lwz @ 0x808277D0
    r3 = r30;
    FUN_806E4428(r3); // bl 0x806E4428
    /* li r0, 5 */ // 0x808277DC
    if (<) goto 0x0x80827814;
    r3 = r30;
    FUN_806E4370(r3); // bl 0x806E4370
    if (==) goto 0x0x80827814;
    r6 = *(0 + r31); // lwz @ 0x808277F8
    r3 = r30;
    r4 = r29;
    /* li r5, 5 */ // 0x80827804
    /* li r7, 5 */ // 0x80827808
    FUN_806E4364(r3, r4, r5, r7); // bl 0x806E4364
    /* b 0x80827834 */ // 0x80827810
    /* lis r3, 0 */ // 0x80827814
    /* lis r5, 0 */ // 0x80827818
    r6 = *(0 + r5); // lwz @ 0x8082781C
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x80827824
    /* li r5, 5 */ // 0x80827828
    /* li r7, 5 */ // 0x8082782C
    FUN_80827080(r4, r5, r7); // bl 0x80827080
    r31 = *(0x1c + r1); // lwz @ 0x80827834
    /* lis r3, 0 */ // 0x80827838
    r30 = *(0x18 + r1); // lwz @ 0x8082783C
    r29 = *(0x14 + r1); // lwz @ 0x80827840
    r0 = *(0x24 + r1); // lwz @ 0x80827844
    r3 = *(0 + r3); // lwz @ 0x80827848
    return;
}