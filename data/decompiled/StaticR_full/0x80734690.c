/* Function at 0x80734690, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80734690(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807346A0
    r30 = r3;
    r4 = *(0x52c + r3); // lwz @ 0x807346A8
    r31 = *(4 + r4); // lwz @ 0x807346AC
    if (==) goto 0x0x80734720;
    r3 = r31 + 0x74; // 0x807346B8
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x807346d0;
    /* li r3, 0 */ // 0x807346C8
    /* b 0x807346d4 */ // 0x807346CC
    r3 = *(0xc + r3); // lwz @ 0x807346D0
}