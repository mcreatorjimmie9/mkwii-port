/* Function at 0x807C22A8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807C22A8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807C22B0
    /* clrlwi r4, r4, 0x18 */ // 0x807C22B4
    *(0x14 + r1) = r0; // stw @ 0x807C22B8
    *(0xc + r1) = r31; // stw @ 0x807C22BC
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x807C22C4
    FUN_805C5B20(); // bl 0x805C5B20
    r4 = r3;
    r3 = *(8 + r31); // lwz @ 0x807C22D0
    FUN_807DBEA4(r4); // bl 0x807DBEA4
    r0 = *(0x14 + r1); // lwz @ 0x807C22D8
    r31 = *(0xc + r1); // lwz @ 0x807C22DC
    return;
}