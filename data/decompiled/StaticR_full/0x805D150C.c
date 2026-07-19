/* Function at 0x805D150C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805D150C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805D151C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805D1524
    r30 = r3;
    if (==) goto 0x0x805d1558;
    /* lis r4, 0 */ // 0x805D1530
    /* li r0, 0 */ // 0x805D1534
    *(0 + r4) = r0; // stw @ 0x805D1538
    if (==) goto 0x0x805d1548;
    /* li r4, 0 */ // 0x805D1540
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x805d1558;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805D155C
    r30 = *(8 + r1); // lwz @ 0x805D1560
    r0 = *(0x14 + r1); // lwz @ 0x805D1564
    return;
}