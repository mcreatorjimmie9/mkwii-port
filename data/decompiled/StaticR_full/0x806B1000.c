/* Function at 0x806B1000, size=1324 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 10 function(s) */

int FUN_806B1000(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806B1014
    *(0x14 + r1) = r29; // stw @ 0x806B1018
    r0 = *(0x68 + r3); // lwz @ 0x806B101C
    if (==) goto 0x0x806b103c;
    if (==) goto 0x0x806b130c;
    if (==) goto 0x0x806b1478;
    /* b 0x806b1510 */ // 0x806B1038
    r0 = *(0x20 + r3); // lwz @ 0x806B103C
    if (!=) goto 0x0x806b10d8;
    /* lis r3, 0 */ // 0x806B1048
    r3 = *(0 + r3); // lwz @ 0x806B104C
    r3 = *(0 + r3); // lwz @ 0x806B1050
    r29 = *(0x148 + r3); // lwz @ 0x806B1054
    if (!=) goto 0x0x806b1068;
    /* li r29, 0 */ // 0x806B1060
    /* b 0x806b10bc */ // 0x806B1064
    /* lis r30, 0 */ // 0x806B1068
    r30 = r30 + 0; // 0x806B106C
    if (==) goto 0x0x806b10b8;
    r12 = *(0 + r29); // lwz @ 0x806B1074
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B107C
    /* mtctr r12 */ // 0x806B1080
    /* bctrl  */ // 0x806B1084
    /* b 0x806b10a0 */ // 0x806B1088
    if (!=) goto 0x0x806b109c;
    /* li r0, 1 */ // 0x806B1094
    /* b 0x806b10ac */ // 0x806B1098
    r3 = *(0 + r3); // lwz @ 0x806B109C
    if (!=) goto 0x0x806b108c;
    /* li r0, 0 */ // 0x806B10A8
    if (==) goto 0x0x806b10b8;
    /* b 0x806b10bc */ // 0x806B10B4
    /* li r29, 0 */ // 0x806B10B8
    r12 = *(0 + r29); // lwz @ 0x806B10BC
    r3 = r29;
    /* li r4, 0x106c */ // 0x806B10C4
    /* li r5, 0 */ // 0x806B10C8
    r12 = *(0x68 + r12); // lwz @ 0x806B10CC
    /* mtctr r12 */ // 0x806B10D0
    /* bctrl  */ // 0x806B10D4
    /* lis r3, 0 */ // 0x806B10D8
    /* li r7, 0 */ // 0x806B10DC
    r3 = *(0 + r3); // lwz @ 0x806B10E0
    r3 = *(0 + r3); // lwz @ 0x806B10E4
    r0 = *(0 + r3); // lwz @ 0x806B10E8
    if (<) goto 0x0x806b10fc;
    if (<=) goto 0x0x806b1150;
    if (<) goto 0x0x806b110c;
    if (<=) goto 0x0x806b111c;
    if (<) goto 0x0x806b11a4;
    if (>) goto 0x0x806b11a4;
    /* lis r4, 0 */ // 0x806B111C
    /* li r3, 1 */ // 0x806B1120
    r4 = *(0 + r4); // lwz @ 0x806B1124
    r0 = *(0x291c + r4); // lwz @ 0x806B1128
    /* mulli r0, r0, 0x58 */ // 0x806B112C
    r4 = r4 + r0; // 0x806B1130
    r4 = *(0x40 + r4); // lwz @ 0x806B1134
    /* subfic r0, r4, 1 */ // 0x806B1138
    /* orc r3, r3, r4 */ // 0x806B113C
    /* srwi r0, r0, 1 */ // 0x806B1140
    /* subf r0, r0, r3 */ // 0x806B1144
    /* srwi r7, r0, 0x1f */ // 0x806B1148
    /* b 0x806b11a4 */ // 0x806B114C
    /* lis r3, 0 */ // 0x806B1150
    /* li r7, 1 */ // 0x806B1154
    r6 = *(0 + r3); // lwz @ 0x806B1158
    /* li r4, 1 */ // 0x806B115C
    r0 = *(0x291c + r6); // lwz @ 0x806B1160
    /* mulli r5, r0, 0x58 */ // 0x806B1164
    r3 = r6 + r5; // 0x806B1168
    r0 = *(0x40 + r3); // lwz @ 0x806B116C
    if (<=) goto 0x0x806b1188;
    r0 = *(0x48 + r3); // lwz @ 0x806B1178
    /* clrlwi. r0, r0, 0x1f */ // 0x806B117C
    if (==) goto 0x0x806b1188;
    /* li r4, 0 */ // 0x806B1184
    if (!=) goto 0x0x806b11a4;
    r3 = r6 + r5; // 0x806B1190
    r0 = *(0x5a + r3); // lbz @ 0x806B1194
    if (!=) goto 0x0x806b11a4;
    /* li r7, 0 */ // 0x806B11A0
    r5 = *(0x20 + r31); // lwz @ 0x806B11A4
    /* li r0, 0x2a30 */ // 0x806B11AC
    /* li r3, 0 */ // 0x806B11B0
    r4 = r5 >> 0x1f; // srawi
    /* subfc r0, r0, r5 */ // 0x806B11B8
    /* adde r0, r4, r3 */ // 0x806B11BC
    if (!=) goto 0x0x806b11cc;
    if (==) goto 0x0x806b11e4;
    /* li r0, 7 */ // 0x806B11CC
    *(0x68 + r31) = r0; // stw @ 0x806B11D0
    /* lis r3, 0 */ // 0x806B11D4
    r3 = *(0 + r3); // lwz @ 0x806B11D8
    FUN_806E64B0(r3); // bl 0x806E64B0
    /* b 0x806b1510 */ // 0x806B11E0
    /* lis r30, 0 */ // 0x806B11E4
    r3 = *(0 + r30); // lwz @ 0x806B11E8
    FUN_806EC7F0(); // bl 0x806EC7F0
    if (==) goto 0x0x806b1510;
    /* lis r3, 0 */ // 0x806B11F8
    r3 = *(0 + r3); // lwz @ 0x806B11FC
    FUN_806F4C44(r3); // bl 0x806F4C44
    if (==) goto 0x0x806b1510;
    r3 = *(0 + r30); // lwz @ 0x806B120C
    FUN_806EC874(); // bl 0x806EC874
    if (==) goto 0x0x806b1510;
    r3 = r31;
    FUN_806B25E0(r3); // bl 0x806B25E0
    /* lis r3, 0 */ // 0x806B1224
    /* li r4, 0 */ // 0x806B1228
    r3 = *(0 + r3); // lwz @ 0x806B122C
    r3 = *(0 + r3); // lwz @ 0x806B1230
    r0 = *(0 + r3); // lwz @ 0x806B1234
    if (<) goto 0x0x806b1248;
    if (<=) goto 0x0x806b1258;
    if (<) goto 0x0x806b12e0;
    if (>) goto 0x0x806b12e0;
    r0 = *(0x284 + r31); // lwz @ 0x806B1258
    /* lis r3, 0 */ // 0x806B125C
    r6 = r31;
    r7 = *(0 + r3); // lwz @ 0x806B1264
    /* li r8, 0 */ // 0x806B1268
    /* li r9, 0 */ // 0x806B126C
    /* li r5, 1 */ // 0x806B1270
    /* mtctr r0 */ // 0x806B1274
    if (<=) goto 0x0x806b12c8;
    r0 = *(0x291c + r7); // lwz @ 0x806B1280
    r3 = *(0x1f4 + r6); // lbz @ 0x806B1284
    /* mulli r0, r0, 0x58 */ // 0x806B1288
    r4 = r5 << r3; // slw
    r3 = r7 + r0; // 0x806B1290
    r0 = *(0x48 + r3); // lwz @ 0x806B1294
    /* and. r0, r4, r0 */ // 0x806B1298
    if (==) goto 0x0x806b12c0;
    r0 = *(0x1f8 + r6); // lwz @ 0x806B12A0
    if (!=) goto 0x0x806b12b4;
    /* li r8, 1 */ // 0x806B12AC
    /* b 0x806b12c0 */ // 0x806B12B0
    if (!=) goto 0x0x806b12c0;
    /* li r9, 1 */ // 0x806B12BC
    r6 = r6 + 0xc; // 0x806B12C0
    if (counter-- != 0) goto 0x0x806b1280;
    /* li r4, 0 */ // 0x806B12CC
    if (==) goto 0x0x806b12dc;
    if (!=) goto 0x0x806b12e0;
    /* li r4, 1 */ // 0x806B12DC
    if (==) goto 0x0x806b1300;
    /* li r0, 7 */ // 0x806B12E8
    *(0x68 + r31) = r0; // stw @ 0x806B12EC
    /* lis r3, 0 */ // 0x806B12F0
    r3 = *(0 + r3); // lwz @ 0x806B12F4
    FUN_806E64B0(r3); // bl 0x806E64B0
    /* b 0x806b1510 */ // 0x806B12FC
    /* li r0, 1 */ // 0x806B1300
    *(0x68 + r31) = r0; // stw @ 0x806B1304
    /* b 0x806b1510 */ // 0x806B1308
    r0 = *(0x20 + r3); // lwz @ 0x806B130C
    if (!=) goto 0x0x806b13a8;
    /* lis r3, 0 */ // 0x806B1318
    r3 = *(0 + r3); // lwz @ 0x806B131C
    r3 = *(0 + r3); // lwz @ 0x806B1320
    r29 = *(0x148 + r3); // lwz @ 0x806B1324
    if (!=) goto 0x0x806b1338;
    /* li r29, 0 */ // 0x806B1330
    /* b 0x806b138c */ // 0x806B1334
    /* lis r30, 0 */ // 0x806B1338
    r30 = r30 + 0; // 0x806B133C
    if (==) goto 0x0x806b1388;
    r12 = *(0 + r29); // lwz @ 0x806B1344
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B134C
    /* mtctr r12 */ // 0x806B1350
    /* bctrl  */ // 0x806B1354
    /* b 0x806b1370 */ // 0x806B1358
    if (!=) goto 0x0x806b136c;
    /* li r0, 1 */ // 0x806B1364
    /* b 0x806b137c */ // 0x806B1368
    r3 = *(0 + r3); // lwz @ 0x806B136C
    if (!=) goto 0x0x806b135c;
    /* li r0, 0 */ // 0x806B1378
    if (==) goto 0x0x806b1388;
    /* b 0x806b138c */ // 0x806B1384
    /* li r29, 0 */ // 0x806B1388
    r12 = *(0 + r29); // lwz @ 0x806B138C
    r3 = r29;
    /* li r4, 0x106c */ // 0x806B1394
    /* li r5, 0 */ // 0x806B1398
    r12 = *(0x68 + r12); // lwz @ 0x806B139C
    /* mtctr r12 */ // 0x806B13A0
    /* bctrl  */ // 0x806B13A4
    /* li r29, 1 */ // 0x806B13A8
    /* li r30, 0 */ // 0x806B13AC
    /* b 0x806b13dc */ // 0x806B13B0
    r4 = r30;
    r3 = r31 + 0x290; // 0x806B13B8
    FUN_8066E0EC(r4, r3); // bl 0x8066E0EC
    /* neg r0, r3 */ // 0x806B13C0
    r0 = r0 | r3; // 0x806B13C4
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x806B13C8
    if (!=) goto 0x0x806b13d8;
    /* li r29, 0 */ // 0x806B13D0
    /* b 0x806b13e8 */ // 0x806B13D4
    r30 = r30 + 1; // 0x806B13D8
    r0 = *(0x284 + r31); // lwz @ 0x806B13DC
    if (<) goto 0x0x806b13b4;
    if (==) goto 0x0x806b1510;
    /* lis r3, 0 */ // 0x806B13F0
    r3 = *(0 + r3); // lwz @ 0x806B13F4
    r3 = *(0 + r3); // lwz @ 0x806B13F8
    r29 = *(0x148 + r3); // lwz @ 0x806B13FC
    if (!=) goto 0x0x806b1410;
    /* li r29, 0 */ // 0x806B1408
    /* b 0x806b1464 */ // 0x806B140C
    /* lis r30, 0 */ // 0x806B1410
    r30 = r30 + 0; // 0x806B1414
    if (==) goto 0x0x806b1460;
    r12 = *(0 + r29); // lwz @ 0x806B141C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B1424
    /* mtctr r12 */ // 0x806B1428
    /* bctrl  */ // 0x806B142C
    /* b 0x806b1448 */ // 0x806B1430
    if (!=) goto 0x0x806b1444;
    /* li r0, 1 */ // 0x806B143C
    /* b 0x806b1454 */ // 0x806B1440
    r3 = *(0 + r3); // lwz @ 0x806B1444
    if (!=) goto 0x0x806b1434;
    /* li r0, 0 */ // 0x806B1450
    if (==) goto 0x0x806b1460;
    /* b 0x806b1464 */ // 0x806B145C
    /* li r29, 0 */ // 0x806B1460
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* li r0, 2 */ // 0x806B146C
    *(0x68 + r31) = r0; // stw @ 0x806B1470
    /* b 0x806b1510 */ // 0x806B1474
    /* lis r3, 0 */ // 0x806B1478
    r3 = *(0 + r3); // lwz @ 0x806B147C
    FUN_806E6A88(r3); // bl 0x806E6A88
    if (!=) goto 0x0x806b1510;
    /* lis r3, 0 */ // 0x806B148C
    r3 = *(0 + r3); // lwz @ 0x806B1490
    r3 = *(0 + r3); // lwz @ 0x806B1494
    r29 = *(0x148 + r3); // lwz @ 0x806B1498
    if (!=) goto 0x0x806b14ac;
    /* li r29, 0 */ // 0x806B14A4
    /* b 0x806b1500 */ // 0x806B14A8
    /* lis r30, 0 */ // 0x806B14AC
    r30 = r30 + 0; // 0x806B14B0
    if (==) goto 0x0x806b14fc;
    r12 = *(0 + r29); // lwz @ 0x806B14B8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B14C0
    /* mtctr r12 */ // 0x806B14C4
    /* bctrl  */ // 0x806B14C8
    /* b 0x806b14e4 */ // 0x806B14CC
    if (!=) goto 0x0x806b14e0;
    /* li r0, 1 */ // 0x806B14D8
    /* b 0x806b14f0 */ // 0x806B14DC
    r3 = *(0 + r3); // lwz @ 0x806B14E0
    if (!=) goto 0x0x806b14d0;
    /* li r0, 0 */ // 0x806B14EC
    if (==) goto 0x0x806b14fc;
    /* b 0x806b1500 */ // 0x806B14F8
    /* li r29, 0 */ // 0x806B14FC
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* li r0, 6 */ // 0x806B1508
    *(0x68 + r31) = r0; // stw @ 0x806B150C
    r0 = *(0x24 + r1); // lwz @ 0x806B1510
    r31 = *(0x1c + r1); // lwz @ 0x806B1514
    r30 = *(0x18 + r1); // lwz @ 0x806B1518
    r29 = *(0x14 + r1); // lwz @ 0x806B151C
    return;
}