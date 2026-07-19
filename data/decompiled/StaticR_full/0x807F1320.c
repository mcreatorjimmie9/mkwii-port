/* Function at 0x807F1320, size=400 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_807F1320(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x807F1338
    r30 = r3;
    *(0x34 + r1) = r29; // stw @ 0x807F1340
    r29 = r7;
    *(0x30 + r1) = r28; // stw @ 0x807F1348
    r28 = r5;
    if (==) goto 0x0x807f1368;
    if (==) goto 0x0x807f1434;
    if (==) goto 0x0x807f1434;
    /* b 0x807f148c */ // 0x807F1364
    /* lis r4, 0 */ // 0x807F1368
    /* lfs f1, 0x3c(r3) */ // 0x807F136C
    /* lfs f0, 0(r4) */ // 0x807F1370
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807F1374
    if (>=) goto 0x0x807f148c;
    /* lis r4, 0 */ // 0x807F137C
    r4 = *(0 + r4); // lwz @ 0x807F1380
    r0 = *(0x55 + r4); // lbz @ 0x807F1384
    if (!=) goto 0x0x807f139c;
    r0 = *(0x54 + r4); // lbz @ 0x807F1390
    if (==) goto 0x0x807f13ec;
    r3 = r31;
    FUN_8061DEF4(r3); // bl 0x8061DEF4
    if (==) goto 0x0x807f13c0;
    /* lis r3, 0 */ // 0x807F13AC
    r3 = *(0 + r3); // lwz @ 0x807F13B0
    FUN_805C1588(r3); // bl 0x805C1588
    if (==) goto 0x0x807f13e4;
    r5 = *(0 + r29); // lwz @ 0x807F13C0
    r3 = r30;
    r0 = *(4 + r29); // lwz @ 0x807F13C8
    *(0x24 + r1) = r0; // stw @ 0x807F13D0
    *(0x20 + r1) = r5; // stw @ 0x807F13D4
    r0 = *(8 + r29); // lwz @ 0x807F13D8
    *(0x28 + r1) = r0; // stw @ 0x807F13DC
    FUN_807F1048(r4); // bl 0x807F1048
    /* li r28, 0 */ // 0x807F13E4
    /* b 0x807f148c */ // 0x807F13E8
    r5 = *(0 + r7); // lwz @ 0x807F13EC
    r0 = *(4 + r7); // lwz @ 0x807F13F4
    *(0x18 + r1) = r0; // stw @ 0x807F13F8
    *(0x14 + r1) = r5; // stw @ 0x807F13FC
    r0 = *(8 + r7); // lwz @ 0x807F1400
    *(0x1c + r1) = r0; // stw @ 0x807F1404
    FUN_807F1048(); // bl 0x807F1048
    r0 = *(0x10c + r30); // lbz @ 0x807F140C
    if (==) goto 0x0x807f142c;
    r3 = r31;
    /* li r4, 0 */ // 0x807F141C
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* li r0, 0 */ // 0x807F1424
    *(0x10c + r30) = r0; // stb @ 0x807F1428
    /* li r28, 0x12 */ // 0x807F142C
    /* b 0x807f148c */ // 0x807F1430
    r5 = *(0 + r7); // lwz @ 0x807F1434
    r3 = r30;
    r0 = *(4 + r7); // lwz @ 0x807F143C
    *(0xc + r1) = r0; // stw @ 0x807F1444
    *(8 + r1) = r5; // stw @ 0x807F1448
    r0 = *(8 + r7); // lwz @ 0x807F144C
    *(0x10 + r1) = r0; // stw @ 0x807F1450
    FUN_807F1048(r4); // bl 0x807F1048
    r0 = *(0x10c + r30); // lbz @ 0x807F1458
    if (==) goto 0x0x807f148c;
    /* lis r3, 0 */ // 0x807F1464
    /* lfs f1, 0x3c(r30) */ // 0x807F1468
    /* lfs f0, 0(r3) */ // 0x807F146C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807F1470
    if (<=) goto 0x0x807f148c;
    r3 = r31;
    /* li r4, 1 */ // 0x807F147C
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* li r0, 0 */ // 0x807F1484
    *(0x10c + r30) = r0; // stb @ 0x807F1488
    r31 = *(0x3c + r1); // lwz @ 0x807F148C
    r3 = r28;
    r30 = *(0x38 + r1); // lwz @ 0x807F1494
    r29 = *(0x34 + r1); // lwz @ 0x807F1498
    r28 = *(0x30 + r1); // lwz @ 0x807F149C
    r0 = *(0x44 + r1); // lwz @ 0x807F14A0
    return;
}