/* Function at 0x807A7FE0, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807A7FE0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807A7FF0
    r30 = r3;
    r0 = *(8 + r3); // lwz @ 0x807A7FF8
    if (==) goto 0x0x807a8040;
    r3 = *(4 + r3); // lwz @ 0x807A8004
    r31 = *(0xf4 + r3); // lwz @ 0x807A8008
    if (==) goto 0x0x807a8040;
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r0, r3, 0x18 */ // 0x807A8018
    if (<=) goto 0x0x807a8034;
    r4 = r31;
    r3 = r30 + 8; // 0x807A8028
    FUN_807A027C(r4, r3); // bl 0x807A027C
}