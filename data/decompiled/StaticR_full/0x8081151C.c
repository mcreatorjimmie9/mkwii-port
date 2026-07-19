/* Function at 0x8081151C, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8081151C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80811528
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80811530
    r12 = *(0x24 + r12); // lwz @ 0x80811534
    /* mtctr r12 */ // 0x80811538
    /* bctrl  */ // 0x8081153C
    /* clrlwi r0, r3, 0x10 */ // 0x80811540
    if (!=) goto 0x0x80811588;
    /* lis r4, 0 */ // 0x8081154C
    /* lis r3, 0 */ // 0x80811550
    r4 = r4 + 0; // 0x80811554
    r0 = *(0 + r3); // lbz @ 0x80811558
    r4 = *(0 + r4); // lwz @ 0x8081155C
    /* li r6, 0 */ // 0x80811560
    *(0x10 + r1) = r4; // stw @ 0x80811564
    r3 = r31;
    *(0xc + r1) = r6; // stw @ 0x80811574
    /* li r6, 1 */ // 0x8081157C
    *(8 + r1) = r0; // stb @ 0x80811580
    FUN_808A1444(r5, r7, r6); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x80811588
    r31 = *(0x1c + r1); // lwz @ 0x8081158C
    return;
}