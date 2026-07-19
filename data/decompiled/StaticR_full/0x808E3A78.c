/* Function at 0x808E3A78, size=316 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r16 */
/* Calls: 5 function(s) */

int FUN_808E3A78(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r16 */
    /* lis r4, 0 */ // 0x808E3A80
    *(0x54 + r1) = r0; // stw @ 0x808E3A84
    /* stmw r16, 0x10(r1) */ // 0x808E3A88
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x808E3A90
    r4 = *(0 + r4); // lwz @ 0x808E3A94
    r0 = *(0 + r4); // lwz @ 0x808E3A98
    if (<) goto 0x0x808e3ab8;
    if (>) goto 0x0x808e3ab8;
    /* li r0, 0x10 */ // 0x808E3AAC
    *(0x48 + r3) = r0; // sth @ 0x808E3AB0
    *(0x4a + r3) = r0; // sth @ 0x808E3AB4
    /* li r18, 0 */ // 0x808E3AB8
    /* lis r25, 0 */ // 0x808E3ABC
    /* lis r21, 0 */ // 0x808E3AC0
    /* li r22, -1 */ // 0x808E3AC4
    /* lis r23, 0 */ // 0x808E3AC8
    /* lis r24, 0 */ // 0x808E3ACC
    /* lis r26, 0 */ // 0x808E3AD0
    /* lis r27, 0 */ // 0x808E3AD4
    /* li r28, 0 */ // 0x808E3AD8
    /* li r29, 1 */ // 0x808E3ADC
    /* b 0x808e3cec */ // 0x808E3AE0
    r0 = r18 rlwinm 4; // rlwinm
    r20 = r31 + r0; // 0x808E3AE8
    r0 = *(0x10 + r20); // lbz @ 0x808E3AEC
    if (==) goto 0x0x808e3ce8;
    r0 = *(0x11 + r20); // lbz @ 0x808E3AF8
    if (!=) goto 0x0x808e3ce8;
    /* clrlwi r0, r18, 0x18 */ // 0x808E3B04
    r3 = *(0 + r21); // lwz @ 0x808E3B08
    /* mulli r0, r0, 0x18 */ // 0x808E3B0C
    /* li r4, 0 */ // 0x808E3B10
    r3 = r3 + r0; // 0x808E3B14
    r0 = *(0x5b0 + r3); // lwz @ 0x808E3B18
    if (==) goto 0x0x808e3b34;
    r0 = *(0x5b8 + r3); // lwz @ 0x808E3B24
    if (!=) goto 0x0x808e3b34;
    /* li r4, 1 */ // 0x808E3B30
    if (==) goto 0x0x808e3ce8;
    FUN_808CFA50(r4); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x808E3B40
    if (!=) goto 0x0x808e3b60;
    /* clrlwi. r0, r18, 0x18 */ // 0x808E3B4C
    if (!=) goto 0x0x808e3b60;
    r3 = *(0 + r25); // lwz @ 0x808E3B54
    r3 = *(0x3c + r3); // lwz @ 0x808E3B58
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0 + r21); // lwz @ 0x808E3B60
    /* clrlwi r4, r18, 0x18 */ // 0x808E3B64
    FUN_805D0FE0(); // bl 0x805D0FE0
    *(0xc + r20) = r22; // stw @ 0x808E3B6C
    r30 = r3;
    r4 = r30;
    /* li r5, 4 */ // 0x808E3B78
    r16 = *(4 + r31); // lbz @ 0x808E3B7C
    /* mulli r3, r16, 0x2c */ // 0x808E3B80
    r3 = r3 + 0x10; // 0x808E3B84
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
    r7 = r16;
    r4 = r23 + 0; // 0x808E3B90
    r5 = r24 + 0; // 0x808E3B94
    /* li r6, 0x2c */ // 0x808E3B98
    FUN_805E3430(r7, r4, r5, r6); // bl 0x805E3430
    /* clrlwi r0, r18, 0x18 */ // 0x808E3BA0
    *(8 + r20) = r3; // stw @ 0x808E3BA4
    /* mulli r19, r0, 0xc */ // 0x808E3BA8
    /* li r17, 0 */ // 0x808E3BAC
    /* b 0x808e3c00 */ // 0x808E3BB0
}