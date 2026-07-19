/* Function at 0x807D1508, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807D1508(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r30, 0 */ // 0x807D151C
    r30 = r30 + 0; // 0x807D1520
    *(0x14 + r1) = r29; // stw @ 0x807D1524
    r29 = r3;
    r0 = *(0x150 + r3); // lwz @ 0x807D152C
    r4 = *(0x14c + r3); // lwz @ 0x807D1530
    r4 = r4 + 1; // 0x807D1538
    *(0x14c + r3) = r4; // stw @ 0x807D153C
    if (==) goto 0x0x807d1550;
    if (==) goto 0x0x807d15a0;
    /* b 0x807d15bc */ // 0x807D154C
    /* li r31, 0 */ // 0x807D1550
    *(0x158 + r3) = r31; // stb @ 0x807D1554
    r0 = *(0x20 + r30); // lha @ 0x807D1558
    if (<=) goto 0x0x807d15bc;
    r4 = r3 + 0x11c; // 0x807D1564
    r5 = r3 + 0x128; // 0x807D1568
    r6 = r3 + 0x134; // 0x807D156C
    FUN_807D0CF8(r4, r5, r6); // bl 0x807D0CF8
    /* lfs f0, 0x140(r29) */ // 0x807D1574
    r3 = *(0x150 + r29); // lwz @ 0x807D1578
    /* fmuls f1, f0, f1 */ // 0x807D157C
    r0 = r3 + 1; // 0x807D1580
    /* stfs f1, 0x15c(r29) */ // 0x807D1584
    /* lfs f0, 4(r30) */ // 0x807D1588
    /* fmuls f0, f1, f0 */ // 0x807D158C
    *(0x14c + r29) = r31; // stw @ 0x807D1590
    /* stfs f0, 0x15c(r29) */ // 0x807D1594
    *(0x150 + r29) = r0; // stw @ 0x807D1598
    /* b 0x807d15bc */ // 0x807D159C
    /* li r0, 1 */ // 0x807D15A0
    *(0x158 + r3) = r0; // stb @ 0x807D15A4
    r0 = *(0x22 + r30); // lha @ 0x807D15A8
    if (<=) goto 0x0x807d15bc;
    r4 = r3 + 0x38; // 0x807D15B4
    FUN_807CF1B4(r4); // bl 0x807CF1B4
    r0 = *(0x24 + r1); // lwz @ 0x807D15BC
    r31 = *(0x1c + r1); // lwz @ 0x807D15C0
    r30 = *(0x18 + r1); // lwz @ 0x807D15C4
    r29 = *(0x14 + r1); // lwz @ 0x807D15C8
    return;
}