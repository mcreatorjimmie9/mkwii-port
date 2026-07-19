/* Function at 0x80734538, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80734538(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80734548
    r30 = r3;
    r4 = *(0x52c + r3); // lwz @ 0x80734550
    r31 = *(0 + r4); // lwz @ 0x80734554
    if (==) goto 0x0x807345c8;
    r3 = r31 + 0x74; // 0x80734560
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80734578;
    /* li r3, 0 */ // 0x80734570
    /* b 0x8073457c */ // 0x80734574
    r3 = *(0xc + r3); // lwz @ 0x80734578
}