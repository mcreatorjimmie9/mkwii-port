/* Function at 0x808C12C8, size=420 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 10 function(s) */

int FUN_808C12C8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* slwi r8, r5, 2 */ // 0x808C12D0
    *(0x34 + r1) = r0; // stw @ 0x808C12D4
    /* stfd f31, 0x28(r1) */ // 0x808C12D8
    /* stmw r27, 0x14(r1) */ // 0x808C12DC
    /* lis r29, 0 */ // 0x808C12E0
    r27 = r4;
    r30 = r3;
    r31 = r5;
    r0 = *(0x204 + r4); // lwz @ 0x808C12F0
    r6 = *(0 + r29); // lwz @ 0x808C12F4
    /* slwi r0, r0, 4 */ // 0x808C12F8
    r7 = r3 + r0; // 0x808C12FC
    r0 = *(0x98 + r6); // lwz @ 0x808C1300
    r6 = r7 + r8; // 0x808C1304
    r4 = r0 + r8; // 0x808C1308
    r28 = *(0x6d8 + r6); // lwz @ 0x808C130C
    *(0x13c + r4) = r28; // stw @ 0x808C1310
    r12 = *(0 + r3); // lwz @ 0x808C1314
    r12 = *(0x70 + r12); // lwz @ 0x808C1318
    /* mtctr r12 */ // 0x808C131C
    /* bctrl  */ // 0x808C1320
    r4 = r31;
    /* li r5, 0 */ // 0x808C1328
    FUN_8066B6CC(r4, r5); // bl 0x8066B6CC
    /* li r0, 0 */ // 0x808C1330
    *(0x211 + r27) = r0; // stb @ 0x808C1334
    r3 = *(0 + r29); // lwz @ 0x808C1338
    r3 = *(0 + r3); // lwz @ 0x808C133C
    r3 = *(0 + r3); // lwz @ 0x808C1340
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808c1368;
    r3 = *(0 + r29); // lwz @ 0x808C1350
    /* mulli r0, r31, 0xc */ // 0x808C1354
    r3 = *(0x98 + r3); // lwz @ 0x808C1358
    r3 = r3 + r0; // 0x808C135C
    *(0x224 + r3) = r28; // stw @ 0x808C1360
    /* b 0x808c1380 */ // 0x808C1364
    /* clrlwi r0, r31, 0x18 */ // 0x808C1368
    /* lis r3, 0 */ // 0x808C136C
    /* mulli r0, r0, 0xf0 */ // 0x808C1370
    r3 = *(0 + r3); // lwz @ 0x808C1374
    r3 = r3 + r0; // 0x808C1378
    *(0xc20 + r3) = r28; // stw @ 0x808C137C
    /* lis r3, 0 */ // 0x808C1380
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x808C1388
    FUN_808F7FF8(r3, r4); // bl 0x808F7FF8
    r3 = r30;
    FUN_808B4A98(r3, r4, r3); // bl 0x808B4A98
    if (==) goto 0x0x808c1418;
    r12 = *(0x24b0 + r30); // lwz @ 0x808C13A0
    r3 = r30 + 0x24b0; // 0x808C13A4
    r12 = *(0x88 + r12); // lwz @ 0x808C13A8
    /* mtctr r12 */ // 0x808C13AC
    /* bctrl  */ // 0x808C13B0
    /* lis r3, 0 */ // 0x808C13B4
    /* fmr f31, f1 */ // 0x808C13B8
    r3 = *(0 + r3); // lwz @ 0x808C13BC
    r3 = *(0 + r3); // lwz @ 0x808C13C0
    r3 = *(0 + r3); // lwz @ 0x808C13C4
    FUN_808CF8D8(r3); // bl 0x808CF8D8
    if (==) goto 0x0x808c13e8;
    /* fmr f1, f31 */ // 0x808C13D4
    r3 = r30;
    /* li r4, 0x82 */ // 0x808C13DC
    FUN_808B37C4(r3, r4); // bl 0x808B37C4
    /* b 0x808c1418 */ // 0x808C13E4
    /* lis r3, 0 */ // 0x808C13E8
    r3 = *(0 + r3); // lwz @ 0x808C13EC
    r0 = *(0x1760 + r3); // lwz @ 0x808C13F0
    if (!=) goto 0x0x808c1404;
    FUN_808E614C(r3); // bl 0x808E614C
    /* b 0x808c1408 */ // 0x808C1400
    FUN_808BE624(); // bl 0x808BE624
    /* fmr f1, f31 */ // 0x808C1408
    r3 = r30;
    /* li r4, 0x82 */ // 0x808C1410
    FUN_808B37C4(r3, r4); // bl 0x808B37C4
    /* lis r3, 0 */ // 0x808C1418
    r3 = *(0 + r3); // lwz @ 0x808C141C
    if (==) goto 0x0x808c1454;
    r3 = *(0x14 + r3); // lwz @ 0x808C1428
    if (==) goto 0x0x808c1454;
    /* clrlwi r4, r31, 0x18 */ // 0x808C1434
    /* mulli r0, r4, 0xc */ // 0x808C1438
    r3 = r3 + r0; // 0x808C143C
    r3 = *(0x18 + r3); // lwz @ 0x808C1440
    if (==) goto 0x0x808c1454;
    /* li r5, 3 */ // 0x808C144C
    FUN_808E08F0(r5); // bl 0x808E08F0
    /* lfd f31, 0x28(r1) */ // 0x808C1454
    r0 = *(0x34 + r1); // lwz @ 0x808C145C
    return;
}