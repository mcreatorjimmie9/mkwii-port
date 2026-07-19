/* Function at 0x806E14A4, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806E14A4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806E14AC
    *(0x14 + r1) = r0; // stw @ 0x806E14B0
    /* li r0, 0 */ // 0x806E14B4
    *(0xc + r1) = r31; // stw @ 0x806E14B8
    r31 = r3;
    *(0x15f8 + r3) = r0; // stb @ 0x806E14C0
    r4 = *(0 + r4); // lwz @ 0x806E14C4
    r4 = *(0 + r4); // lwz @ 0x806E14C8
    r0 = *(0 + r4); // lwz @ 0x806E14CC
    if (>=) goto 0x0x806e14ec;
    if (>=) goto 0x0x806e1528;
    if (>=) goto 0x0x806e14fc;
    /* b 0x806e1558 */ // 0x806E14E8
    if (>=) goto 0x0x806e1558;
    if (>=) goto 0x0x806e1528;
    /* lis r4, 0 */ // 0x806E14FC
    /* li r0, 3 */ // 0x806E1500
    r5 = *(0 + r4); // lwz @ 0x806E1504
    /* li r4, 0 */ // 0x806E1508
    r5 = *(0x98 + r5); // lwz @ 0x806E150C
    r6 = *(0x2d0 + r5); // lwz @ 0x806E1510
    r5 = r6 >> 0x1f; // srawi
    /* subfc r0, r0, r6 */ // 0x806E1518
    /* adde r0, r5, r4 */ // 0x806E151C
    *(0x15f7 + r3) = r0; // stb @ 0x806E1520
    /* b 0x806e1558 */ // 0x806E1524
    /* lis r4, 0 */ // 0x806E1528
    /* li r5, 1 */ // 0x806E152C
    r4 = *(0 + r4); // lwz @ 0x806E1530
    r4 = *(0x98 + r4); // lwz @ 0x806E1534
    r0 = *(0x68 + r4); // lwz @ 0x806E1538
    if (>=) goto 0x0x806e1554;
    r0 = *(0x6c + r4); // lwz @ 0x806E1544
    if (>=) goto 0x0x806e1554;
    /* li r5, 0 */ // 0x806E1550
    *(0x15f7 + r3) = r5; // stb @ 0x806E1554
    r0 = *(0x15f7 + r3); // lbz @ 0x806E1558
    if (==) goto 0x0x806e157c;
    r3 = r31;
    FUN_806E16C0(r3); // bl 0x806E16C0
    r3 = r31;
    FUN_806E17E8(r3, r3); // bl 0x806E17E8
    r3 = r31;
    FUN_806E1A28(r3, r3, r3); // bl 0x806E1A28
    r0 = *(0x14 + r1); // lwz @ 0x806E157C
    r31 = *(0xc + r1); // lwz @ 0x806E1580
    return;
}