/* Function at 0x807D13CC, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807D13CC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x807D13D4
    /* li r4, 1 */ // 0x807D13D8
    *(0x14 + r1) = r0; // stw @ 0x807D13DC
    *(0xc + r1) = r31; // stw @ 0x807D13E0
    r31 = r3;
    r0 = *(0x148 + r3); // lwz @ 0x807D13E8
    *(0x14c + r3) = r5; // stw @ 0x807D13EC
    *(0x150 + r3) = r5; // stw @ 0x807D13F4
    *(0x158 + r3) = r4; // stb @ 0x807D13F8
    if (!=) goto 0x0x807d1418;
    r4 = r3 + 0x11c; // 0x807D1400
    r5 = r3 + 0x128; // 0x807D1404
    r6 = r3 + 0x134; // 0x807D1408
    FUN_807D0E1C(r4, r5, r6); // bl 0x807D0E1C
    /* stfs f1, 0x15c(r31) */ // 0x807D1410
    /* b 0x807d1434 */ // 0x807D1414
    r4 = r3 + 0x11c; // 0x807D1418
    r5 = r3 + 0x128; // 0x807D141C
    r6 = r3 + 0x134; // 0x807D1420
    FUN_807D0CF8(r4, r5, r6); // bl 0x807D0CF8
    /* lfs f0, 0x140(r31) */ // 0x807D1428
    /* fmuls f0, f0, f1 */ // 0x807D142C
    /* stfs f0, 0x15c(r31) */ // 0x807D1430
    /* lis r3, 0 */ // 0x807D1434
    /* lfs f1, 0x15c(r31) */ // 0x807D1438
    /* lfs f0, 0(r3) */ // 0x807D143C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807D1440
    if (<=) goto 0x0x807d1450;
    /* fmr f1, f0 */ // 0x807D1448
    /* b 0x807d1464 */ // 0x807D144C
    /* lis r3, 0 */ // 0x807D1450
    /* lfs f0, 0(r3) */ // 0x807D1454
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807D1458
    if (>=) goto 0x0x807d1464;
    /* fmr f1, f0 */ // 0x807D1460
    /* stfs f1, 0x15c(r31) */ // 0x807D1464
    r31 = *(0xc + r1); // lwz @ 0x807D1468
    r0 = *(0x14 + r1); // lwz @ 0x807D146C
    return;
}