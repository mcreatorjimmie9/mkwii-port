/* Function at 0x807376FC, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807376FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80737708
    r31 = r3;
    r4 = *(0x1f4 + r3); // lwz @ 0x80737710
    if (==) goto 0x0x8073776c;
    r3 = r4 + 0x74; // 0x8073771C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80737734;
    /* li r3, 0 */ // 0x8073772C
    /* b 0x80737738 */ // 0x80737730
    r3 = *(0xc + r3); // lwz @ 0x80737734
}