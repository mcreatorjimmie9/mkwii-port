/* Function at 0x807DC828, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807DC828(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807DC838
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807DC840
    r30 = r3;
    if (==) goto 0x0x807dc88c;
    /* lis r4, 0 */ // 0x807DC84C
    r4 = r4 + 0; // 0x807DC850
    *(0 + r3) = r4; // stw @ 0x807DC854
    r3 = r3 + 0xf4; // 0x807DC858
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
    if (==) goto 0x0x807dc87c;
    /* lis r4, 0 */ // 0x807DC868
    r3 = *(0x14 + r30); // lwz @ 0x807DC86C
    r4 = r4 + 0; // 0x807DC870
    *(0 + r30) = r4; // stw @ 0x807DC874
    FUN_805E3430(r4, r4); // bl 0x805E3430
}