/* Function at 0x80737948, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80737948(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80737958
    r30 = r3;
    r31 = *(0x280 + r3); // lwz @ 0x80737960
    if (==) goto 0x0x807379d4;
    r3 = r31 + 0x74; // 0x8073796C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80737984;
    /* li r3, 0 */ // 0x8073797C
    /* b 0x80737988 */ // 0x80737980
    r3 = *(0xc + r3); // lwz @ 0x80737984
}