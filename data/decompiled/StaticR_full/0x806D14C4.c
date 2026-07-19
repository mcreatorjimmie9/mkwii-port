/* Function at 0x806D14C4, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806D14C4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806D14CC
    *(0x18 + r1) = r30; // stw @ 0x806D14D8
    *(0x14 + r1) = r29; // stw @ 0x806D14DC
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806D14E4
    r3 = *(0 + r3); // lwz @ 0x806D14E8
    r30 = *(0x140 + r3); // lwz @ 0x806D14EC
    if (!=) goto 0x0x806d1500;
    /* li r30, 0 */ // 0x806D14F8
    /* b 0x806d1554 */ // 0x806D14FC
    /* lis r31, 0 */ // 0x806D1500
    r31 = r31 + 0; // 0x806D1504
    if (==) goto 0x0x806d1550;
    r12 = *(0 + r30); // lwz @ 0x806D150C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D1514
    /* mtctr r12 */ // 0x806D1518
    /* bctrl  */ // 0x806D151C
    /* b 0x806d1538 */ // 0x806D1520
    if (!=) goto 0x0x806d1534;
    /* li r0, 1 */ // 0x806D152C
    /* b 0x806d1544 */ // 0x806D1530
    r3 = *(0 + r3); // lwz @ 0x806D1534
    if (!=) goto 0x0x806d1524;
    /* li r0, 0 */ // 0x806D1540
    if (==) goto 0x0x806d1550;
    /* b 0x806d1554 */ // 0x806D154C
    /* li r30, 0 */ // 0x806D1550
    r0 = *(0x270 + r30); // lwz @ 0x806D1554
    if (!=) goto 0x0x806d1578;
    /* lis r4, 0 */ // 0x806D1560
    r3 = r29;
    /* lfs f1, 0(r4) */ // 0x806D1568
    /* li r4, 0 */ // 0x806D156C
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    /* b 0x806d1580 */ // 0x806D1574
    /* li r0, -1 */ // 0x806D1578
    *(0xee8 + r29) = r0; // stw @ 0x806D157C
    r0 = *(0x24 + r1); // lwz @ 0x806D1580
    r31 = *(0x1c + r1); // lwz @ 0x806D1584
    r30 = *(0x18 + r1); // lwz @ 0x806D1588
    r29 = *(0x14 + r1); // lwz @ 0x806D158C
    return;
}