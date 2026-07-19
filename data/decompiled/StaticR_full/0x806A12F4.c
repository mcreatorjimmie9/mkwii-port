/* Function at 0x806A12F4, size=308 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_806A12F4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806A12FC
    /* lis r5, 0 */ // 0x806A1300
    *(0x24 + r1) = r0; // stw @ 0x806A1304
    /* li r0, 0xff */ // 0x806A1308
    /* lfs f0, 0(r4) */ // 0x806A130C
    r5 = r5 + 0; // 0x806A1310
    *(0x1c + r1) = r31; // stw @ 0x806A1314
    /* li r31, 0 */ // 0x806A1318
    *(0x18 + r1) = r30; // stw @ 0x806A131C
    /* lis r30, 0 */ // 0x806A1320
    /* lfs f1, 0(r30) */ // 0x806A1324
    *(0x14 + r1) = r29; // stw @ 0x806A1328
    r29 = r3;
    *(0 + r3) = r5; // stw @ 0x806A1330
    /* stfs f1, 4(r3) */ // 0x806A1334
    /* stfs f1, 8(r3) */ // 0x806A1338
    /* stfs f1, 0xc(r3) */ // 0x806A133C
    /* stfs f0, 0x10(r3) */ // 0x806A1340
    /* stfs f0, 0x14(r3) */ // 0x806A1344
    *(0x18 + r3) = r0; // stb @ 0x806A1348
    /* stfs f1, 0x1c(r3) */ // 0x806A134C
    /* stfs f1, 0x20(r3) */ // 0x806A1350
    /* stfs f1, 0x24(r3) */ // 0x806A1354
    /* stfs f0, 0x28(r3) */ // 0x806A1358
    /* stfs f0, 0x2c(r3) */ // 0x806A135C
    *(0x30 + r3) = r0; // stb @ 0x806A1360
    /* stfs f1, 0x34(r3) */ // 0x806A1364
    /* stfs f1, 0x38(r3) */ // 0x806A1368
    /* stfs f1, 0x3c(r3) */ // 0x806A136C
    /* stfs f0, 0x40(r3) */ // 0x806A1370
    /* stfs f0, 0x44(r3) */ // 0x806A1374
    *(0x48 + r3) = r0; // stb @ 0x806A1378
    /* stfs f1, 0x4c(r3) */ // 0x806A137C
    /* stfs f1, 0x50(r3) */ // 0x806A1380
    /* stfs f1, 0x54(r3) */ // 0x806A1384
    /* stfs f0, 0x58(r3) */ // 0x806A1388
    /* stfs f0, 0x5c(r3) */ // 0x806A138C
    *(0x60 + r3) = r0; // stb @ 0x806A1390
    *(0x64 + r3) = r31; // stw @ 0x806A1394
    r3 = r3 + 0x68; // 0x806A1398
    FUN_8064DAF0(r3); // bl 0x8064DAF0
    /* lfs f0, 0(r30) */ // 0x806A13A0
    /* lis r4, 0 */ // 0x806A13A4
    /* li r0, -1 */ // 0x806A13A8
    /* li r5, 1 */ // 0x806A13AC
    r4 = r4 + 0; // 0x806A13B0
    /* stfs f0, 0x7c(r29) */ // 0x806A13B4
    r3 = r29 + 0x98; // 0x806A13B8
    *(0x80 + r29) = r31; // stb @ 0x806A13BC
    *(0x84 + r29) = r31; // stw @ 0x806A13C0
    *(0x88 + r29) = r5; // stb @ 0x806A13C4
    /* stfs f0, 0x8c(r29) */ // 0x806A13C8
    *(0x90 + r29) = r0; // stw @ 0x806A13CC
    *(0x94 + r29) = r0; // stw @ 0x806A13D0
    *(0 + r29) = r4; // stw @ 0x806A13D4
    FUN_8069F06C(); // bl 0x8069F06C
    r3 = r29 + 0xa8; // 0x806A13DC
    FUN_80665F5C(r3); // bl 0x80665F5C
    r3 = r29 + 0x144; // 0x806A13E4
    FUN_8066C2F0(r3, r3); // bl 0x8066C2F0
    r3 = r29 + 0x158; // 0x806A13EC
    FUN_8066C2F0(r3, r3, r3); // bl 0x8066C2F0
    /* lis r4, 0 */ // 0x806A13F4
    *(0x16c + r29) = r31; // stw @ 0x806A13F8
    r4 = r4 + 0; // 0x806A13FC
    r3 = r29;
    *(0x170 + r29) = r31; // stw @ 0x806A1404
    *(0 + r29) = r4; // stw @ 0x806A1408
    r31 = *(0x1c + r1); // lwz @ 0x806A140C
    r30 = *(0x18 + r1); // lwz @ 0x806A1410
    r29 = *(0x14 + r1); // lwz @ 0x806A1414
    r0 = *(0x24 + r1); // lwz @ 0x806A1418
    return;
}