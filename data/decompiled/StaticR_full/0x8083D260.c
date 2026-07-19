/* Function at 0x8083D260, size=340 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 5 function(s) */

int FUN_8083D260(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* lis r4, 0 */ // 0x8083D268
    *(0x34 + r1) = r0; // stw @ 0x8083D26C
    /* stmw r24, 0x10(r1) */ // 0x8083D270
    /* mulli r29, r3, 0xf0 */ // 0x8083D274
    r25 = r3;
    /* li r28, 0 */ // 0x8083D27C
    /* li r27, 0 */ // 0x8083D280
    /* lis r31, 0 */ // 0x8083D284
    /* lis r30, 0 */ // 0x8083D288
    /* lis r24, 0 */ // 0x8083D28C
    r26 = *(0 + r4); // lbz @ 0x8083D290
    /* b 0x8083d324 */ // 0x8083D294
    if (==) goto 0x0x8083d320;
    r0 = *(0 + r30); // lbz @ 0x8083D2A0
    if (==) goto 0x0x8083d2f4;
    r5 = *(0 + r31); // lwz @ 0x8083D2AC
    r3 = r5 + r29; // 0x8083D2B0
    r4 = *(0xf4 + r3); // lwz @ 0x8083D2B4
    if (!=) goto 0x0x8083d2c8;
    /* li r0, 0 */ // 0x8083D2C0
    /* b 0x8083d2f4 */ // 0x8083D2C4
    /* clrlwi r0, r27, 0x18 */ // 0x8083D2C8
    /* mulli r0, r0, 0xf0 */ // 0x8083D2CC
    r3 = r5 + r0; // 0x8083D2D0
    r0 = *(0xf4 + r3); // lwz @ 0x8083D2D4
    if (!=) goto 0x0x8083d2e8;
    /* li r0, 0 */ // 0x8083D2E0
    /* b 0x8083d2f4 */ // 0x8083D2E4
    /* subf r0, r4, r0 */ // 0x8083D2E8
    /* cntlzw r0, r0 */ // 0x8083D2EC
    /* srwi r0, r0, 5 */ // 0x8083D2F0
    if (!=) goto 0x0x8083d320;
    /* clrlwi r0, r27, 0x18 */ // 0x8083D2FC
    r3 = *(0 + r24); // lwz @ 0x8083D300
    /* mulli r0, r0, 0x248 */ // 0x8083D304
    r3 = *(0x14 + r3); // lwz @ 0x8083D308
    r3 = r3 + r0; // 0x8083D30C
    FUN_808237BC(); // bl 0x808237BC
    if (==) goto 0x0x8083d320;
    /* li r28, 1 */ // 0x8083D31C
    r27 = r27 + 1; // 0x8083D320
    if (<) goto 0x0x8083d298;
    /* lis r3, 0 */ // 0x8083D32C
    /* li r4, 6 */ // 0x8083D330
    r3 = *(0 + r3); // lwz @ 0x8083D334
    FUN_808AB820(r3, r4); // bl 0x808AB820
    /* lis r3, 0 */ // 0x8083D33C
    /* li r4, 0x114 */ // 0x8083D340
    r3 = *(0 + r3); // lwz @ 0x8083D344
    FUN_8078BCD8(r3, r4); // bl 0x8078BCD8
    /* lis r3, 0 */ // 0x8083D34C
    /* li r24, 0 */ // 0x8083D350
    r3 = *(0 + r3); // lwz @ 0x8083D354
    /* lis r26, 0 */ // 0x8083D358
    r27 = *(0x25 + r3); // lbz @ 0x8083D35C
    /* b 0x8083d378 */ // 0x8083D360
    r3 = *(0 + r26); // lwz @ 0x8083D364
    r4 = r24;
    r3 = *(0x30 + r3); // lwz @ 0x8083D36C
    FUN_805DE5F8(r4); // bl 0x805DE5F8
    r24 = r24 + 1; // 0x8083D374
    if (<) goto 0x0x8083d364;
    if (==) goto 0x0x8083d3a0;
    /* lis r3, 0 */ // 0x8083D388
    r0 = r25 rlwinm 2; // rlwinm
    r3 = *(0 + r3); // lwz @ 0x8083D390
    r3 = r3 + r0; // 0x8083D394
    r3 = *(0x10 + r3); // lwz @ 0x8083D398
    FUN_8061F138(r3); // bl 0x8061F138
    r0 = *(0x34 + r1); // lwz @ 0x8083D3A4
    return;
}