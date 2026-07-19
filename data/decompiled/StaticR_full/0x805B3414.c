/* Function at 0x805B3414, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 4 function(s) */

int FUN_805B3414(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805B3420
    r30 = r3;
    r31 = r4;
    /* li r29, 0 */ // 0x805B342C
    /* clrlwi r0, r29, 0x18 */ // 0x805B3430
    /* mulli r0, r0, 0x920 */ // 0x805B3434
    r3 = r30 + r0; // 0x805B3438
    r3 = r3 + 0x1720; // 0x805B343C
    FUN_805AE940(r3); // bl 0x805AE940
    r29 = r29 + 1; // 0x805B3444
    if (<) goto 0x0x805b3430;
    /* lis r29, 0 */ // 0x805B3450
    /* li r28, 0 */ // 0x805B3454
    r29 = r29 + 0; // 0x805B3458
    /* li r27, 0 */ // 0x805B345C
    /* clrlwi r0, r27, 0x18 */ // 0x805B3460
    /* mulli r0, r0, 0xb0 */ // 0x805B3464
    r3 = r30 + r0; // 0x805B3468
    r3 = r3 + 0x3ba0; // 0x805B346C
    FUN_805AE940(r3); // bl 0x805AE940
    /* clrlwi r0, r27, 0x18 */ // 0x805B3474
    /* mulli r0, r0, 0xc */ // 0x805B3478
    r3 = r30 + r0; // 0x805B347C
    r0 = *(0x412a + r3); // lbz @ 0x805B3480
    /* extsb. r0, r0 */ // 0x805B3484
    if (==) goto 0x0x805b3498;
    if (==) goto 0x0x805b34a0;
    /* b 0x805b34a8 */ // 0x805B3494
    /* li r0, 0 */ // 0x805B3498
    /* b 0x805b34ac */ // 0x805B349C
    /* li r0, 2 */ // 0x805B34A0
    /* b 0x805b34ac */ // 0x805B34A4
    /* li r0, 1 */ // 0x805B34A8
    if (!=) goto 0x0x805b34c0;
    r0 = r27 rlwinm 2; // rlwinm
    /* lwzx r0, r29, r0 */ // 0x805B34B8
    r28 = r28 | r0; // 0x805B34BC
    r27 = r27 + 1; // 0x805B34C0
    if (<) goto 0x0x805b3460;
    if (==) goto 0x0x805b34dc;
    r3 = r28;
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x805b3508;
    /* li r27, 0 */ // 0x805B34E4
    /* clrlwi r0, r27, 0x18 */ // 0x805B34E8
    /* mulli r0, r0, 0xa8 */ // 0x805B34EC
    r3 = r30 + r0; // 0x805B34F0
    r3 = r3 + 0x3e60; // 0x805B34F4
    FUN_805AE940(r3); // bl 0x805AE940
    r27 = r27 + 1; // 0x805B34FC
    if (<) goto 0x0x805b34e8;
    r0 = *(0x24 + r1); // lwz @ 0x805B350C
    return;
}