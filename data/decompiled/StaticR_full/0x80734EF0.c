/* Function at 0x80734EF0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80734EF0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80734F00
    r30 = r3;
    r31 = *(0x284 + r3); // lwz @ 0x80734F08
    if (==) goto 0x0x80734f7c;
    r3 = r31 + 0x74; // 0x80734F14
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80734f2c;
    /* li r3, 0 */ // 0x80734F24
    /* b 0x80734f30 */ // 0x80734F28
    r3 = *(0xc + r3); // lwz @ 0x80734F2C
}