/* Function at 0x808D1420, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808D1420(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x808D1428
    /* lis r4, 0 */ // 0x808D142C
    *(0x24 + r1) = r0; // stw @ 0x808D1430
    r4 = r4 + 0; // 0x808D1434
    /* lfs f0, 0(r5) */ // 0x808D1438
    r4 = r4 + 0xef; // 0x808D143C
    *(0x1c + r1) = r31; // stw @ 0x808D1440
    r31 = r3;
    /* stfs f0, 0x174(r3) */ // 0x808D1448
    r3 = r3 + 0xa8; // 0x808D144C
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    /* li r0, 0 */ // 0x808D1454
    *(0x189 + r31) = r0; // stb @ 0x808D1458
    /* lis r6, 0 */ // 0x808D145C
    /* lis r4, 0 */ // 0x808D1460
    *(0x178 + r31) = r3; // stw @ 0x808D1464
    r5 = r6 + 0; // 0x808D1468
    /* lfs f0, 0(r4) */ // 0x808D146C
    /* li r0, 0xff */ // 0x808D1470
    /* lfs f1, 0(r6) */ // 0x808D1474
    /* stfs f1, 0x2c(r3) */ // 0x808D1478
    /* lfs f1, 4(r5) */ // 0x808D147C
    /* stfs f1, 0x30(r3) */ // 0x808D1480
    /* lfs f1, 8(r5) */ // 0x808D1484
    /* stfs f1, 0x34(r3) */ // 0x808D1488
    r3 = *(0x178 + r31); // lwz @ 0x808D148C
    /* stfs f0, 8(r1) */ // 0x808D1490
    *(0xb8 + r3) = r0; // stb @ 0x808D1494
    r3 = *(0x178 + r31); // lwz @ 0x808D1498
    /* stfs f0, 0xc(r1) */ // 0x808D149C
    /* stfs f0, 0x44(r3) */ // 0x808D14A0
    /* stfs f0, 0x48(r3) */ // 0x808D14A4
    r31 = *(0x1c + r1); // lwz @ 0x808D14A8
    r0 = *(0x24 + r1); // lwz @ 0x808D14AC
    return;
}