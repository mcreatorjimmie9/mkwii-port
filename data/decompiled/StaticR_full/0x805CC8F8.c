/* Function at 0x805CC8F8, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805CC8F8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805CC904
    r27 = r3;
    /* li r28, 0 */ // 0x805CC90C
    /* lis r29, 0 */ // 0x805CC910
    /* li r30, 1 */ // 0x805CC914
    /* lis r31, 0 */ // 0x805CC918
    /* b 0x805cc958 */ // 0x805CC91C
    /* clrlwi r4, r28, 0x18 */ // 0x805CC920
    r3 = *(0 + r29); // lwz @ 0x805CC924
    /* mulli r0, r4, 0x18 */ // 0x805CC928
    /* li r5, 0 */ // 0x805CC92C
    /* li r6, 1 */ // 0x805CC930
    /* li r7, 0 */ // 0x805CC934
    r8 = r3 + r0; // 0x805CC938
    /* li r9, 0 */ // 0x805CC93C
    r8 = *(0x3c4 + r8); // lbz @ 0x805CC940
    FUN_808F9C40(r6, r7, r9); // bl 0x808F9C40
    r0 = r28 rlwinm 2; // rlwinm
    r28 = r28 + 1; // 0x805CC94C
    r3 = r27 + r0; // 0x805CC950
    *(0xd4 + r3) = r30; // stw @ 0x805CC954
    r3 = *(0 + r31); // lwz @ 0x805CC958
    /* clrlwi r4, r28, 0x18 */ // 0x805CC95C
    r0 = *(0x24 + r3); // lbz @ 0x805CC960
    if (<) goto 0x0x805cc920;
    r0 = *(0x24 + r1); // lwz @ 0x805CC970
    return;
}