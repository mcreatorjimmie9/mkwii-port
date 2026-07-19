/* Function at 0x805BBB70, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805BBB70(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805BBB80
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805BBB88
    r30 = r3;
    if (==) goto 0x0x805bbc08;
    /* lis r4, 0 */ // 0x805BBB94
    r4 = r4 + 0; // 0x805BBB98
    *(0x10 + r3) = r4; // stw @ 0x805BBB9C
    r3 = *(0x20 + r3); // lwz @ 0x805BBBA0
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (==) goto 0x0x805bbbf8;
    /* lis r3, 0 */ // 0x805BBBB0
    /* lis r4, 0 */ // 0x805BBBB4
    r3 = r3 + 0; // 0x805BBBB8
    *(0 + r30) = r3; // stw @ 0x805BBBBC
    r3 = *(0 + r4); // lwz @ 0x805BBBC0
}