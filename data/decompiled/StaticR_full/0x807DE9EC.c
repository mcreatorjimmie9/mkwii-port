/* Function at 0x807DE9EC, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807DE9EC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807DE9FC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807DEA04
    r30 = r3;
    if (==) goto 0x0x807dea98;
    /* lis r5, 0 */ // 0x807DEA10
    /* lis r4, 0 */ // 0x807DEA14
    r5 = r5 + 0; // 0x807DEA18
    *(0x10 + r3) = r5; // stw @ 0x807DEA1C
    r3 = *(0x14 + r3); // lwz @ 0x807DEA20
    r4 = r4 + 0; // 0x807DEA24
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807DEA2C
    r3 = *(0 + r3); // lwz @ 0x807DEA30
    FUN_805D10E8(r4, r3); // bl 0x805D10E8
    if (==) goto 0x0x807dea88;
    /* lis r3, 0 */ // 0x807DEA40
    /* lis r4, 0 */ // 0x807DEA44
}