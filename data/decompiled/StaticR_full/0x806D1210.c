/* Function at 0x806D1210, size=580 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 17 function(s) */

int FUN_806D1210(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* stmw r27, 0x1c(r1) */ // 0x806D121C
    r31 = r3;
    r0 = *(4 + r3); // lwz @ 0x806D1224
    if (==) goto 0x0x806d123c;
    if (==) goto 0x0x806d1248;
    /* b 0x806d1250 */ // 0x806D1238
    /* li r0, 2 */ // 0x806D123C
    *(0xee4 + r3) = r0; // stw @ 0x806D1240
    /* b 0x806d1250 */ // 0x806D1244
    /* li r0, 3 */ // 0x806D1248
    *(0xee4 + r3) = r0; // stw @ 0x806D124C
    r12 = *(0x6c + r3); // lwzu @ 0x806D1250
    /* li r4, 1 */ // 0x806D1254
    /* li r5, 0 */ // 0x806D1258
    r12 = *(0x10 + r12); // lwz @ 0x806D125C
    /* mtctr r12 */ // 0x806D1260
    /* bctrl  */ // 0x806D1264
    r3 = r31;
    r4 = r31 + 0x6c; // 0x806D126C
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r0 = *(4 + r31); // lwz @ 0x806D1274
    if (==) goto 0x0x806d128c;
    if (==) goto 0x0x806d129c;
    /* b 0x806d12a8 */ // 0x806D1288
    r3 = r31 + 0x6c; // 0x806D128C
    /* li r4, 2 */ // 0x806D1290
    FUN_8066A380(r3, r4); // bl 0x8066A380
    /* b 0x806d12a8 */ // 0x806D1298
    r3 = r31 + 0x6c; // 0x806D129C
    /* li r4, 1 */ // 0x806D12A0
    FUN_8066A380(r4, r3, r4); // bl 0x8066A380
    r3 = r31 + 0x6c; // 0x806D12A8
    r5 = r31 + 0x58; // 0x806D12AC
    /* li r4, 1 */ // 0x806D12B0
    /* li r6, 0 */ // 0x806D12B4
    /* li r7, 0 */ // 0x806D12B8
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r0 = *(4 + r31); // lwz @ 0x806D12C0
    if (==) goto 0x0x806d12d8;
    if (==) goto 0x0x806d12e8;
    /* b 0x806d12f4 */ // 0x806D12D4
    r3 = r31;
    /* li r4, 5 */ // 0x806D12DC
    FUN_80671C1C(r3, r4); // bl 0x80671C1C
    /* b 0x806d12f4 */ // 0x806D12E4
    r3 = r31;
    /* li r4, 6 */ // 0x806D12EC
    FUN_80671C1C(r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x290; // 0x806D12F8
    /* li r4, 0 */ // 0x806D12FC
    /* li r6, 0 */ // 0x806D1300
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x290; // 0x806D1308
    /* li r4, 1 */ // 0x806D130C
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r31;
    r5 = r31 + 0x404; // 0x806D1318
    /* li r4, 1 */ // 0x806D131C
    /* li r6, 0 */ // 0x806D1320
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r0 = *(4 + r31); // lwz @ 0x806D1328
    if (==) goto 0x0x806d1340;
    if (==) goto 0x0x806d1360;
    /* b 0x806d137c */ // 0x806D133C
    /* lis r6, 0 */ // 0x806D1340
    r3 = r31 + 0x404; // 0x806D1344
    r6 = r6 + 0; // 0x806D1348
    r4 = r6 + 0x1bd; // 0x806D134C
    r5 = r6 + 0x1cc; // 0x806D1350
    r6 = r6 + 0x1e4; // 0x806D1354
    FUN_8066CF50(r3, r6, r4, r5, r6); // bl 0x8066CF50
    /* b 0x806d137c */ // 0x806D135C
    /* lis r6, 0 */ // 0x806D1360
    r3 = r31 + 0x404; // 0x806D1364
    r6 = r6 + 0; // 0x806D1368
    r4 = r6 + 0x1f6; // 0x806D136C
    r5 = r6 + 0x205; // 0x806D1370
    r6 = r6 + 0x220; // 0x806D1374
    FUN_8066CF50(r3, r6, r4, r5, r6); // bl 0x8066CF50
    /* lis r30, 0 */ // 0x806D137C
    r28 = r31;
    r29 = r31 + 0x578; // 0x806D1384
    /* li r27, 0 */ // 0x806D1388
    r30 = r30 + 0; // 0x806D138C
    /* b 0x806d1404 */ // 0x806D1390
    r3 = r31;
    r5 = r29;
    r4 = r27 + 3; // 0x806D139C
    /* li r6, 0 */ // 0x806D13A0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r7 = *(0xee4 + r31); // lwz @ 0x806D13A8
    r6 = r27;
    r5 = r30 + 0x235; // 0x806D13B4
    /* li r4, 0xf */ // 0x806D13B8
    /* crclr cr1eq */ // 0x806D13BC
    FUN_805E3430(r6, r3, r5, r4); // bl 0x805E3430
    r3 = r29;
    r4 = r30 + 0x241; // 0x806D13C8
    r5 = r30 + 0x248; // 0x806D13CC
    /* li r7, 1 */ // 0x806D13D4
    /* li r8, 0 */ // 0x806D13D8
    /* li r9, 0 */ // 0x806D13DC
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    *(0x7b8 + r28) = r27; // stw @ 0x806D13E4
    r3 = r29;
    r4 = r31 + 0x44; // 0x806D13EC
    /* li r5, 0 */ // 0x806D13F0
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r29 = r29 + 0x254; // 0x806D13F8
    r28 = r28 + 0x254; // 0x806D13FC
    r27 = r27 + 1; // 0x806D1400
    r0 = *(0xee4 + r31); // lwz @ 0x806D1404
    if (<) goto 0x0x806d1394;
    r3 = r31;
    r5 = r31 + 0xc74; // 0x806D1414
    /* li r4, 2 */ // 0x806D1418
    /* li r6, 0 */ // 0x806D141C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r6, 0 */ // 0x806D1424
    r3 = r31 + 0xc74; // 0x806D1428
    r6 = r6 + 0; // 0x806D142C
    /* li r7, 1 */ // 0x806D1430
    r4 = r6 + 0x25b; // 0x806D1434
    /* li r8, 0 */ // 0x806D1438
    r5 = r6 + 0x262; // 0x806D143C
    r6 = r6 + 0x267; // 0x806D1440
    /* li r9, 1 */ // 0x806D1444
    FUN_80649914(r4, r8, r5, r6, r9); // bl 0x80649914
    /* li r0, -1 */ // 0x806D144C
    *(0xeb4 + r31) = r0; // stw @ 0x806D1450
}