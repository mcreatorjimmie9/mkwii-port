/* Function at 0x807340C8, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807340C8(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3 + 0x20; // 0x807340D8
    *(0x18 + r1) = r30; // stw @ 0x807340DC
    /* li r30, 8 */ // 0x807340E0
    *(0x14 + r1) = r29; // stw @ 0x807340E4
    r29 = r3;
    r3 = *(0x2d8 + r31); // lwz @ 0x807340EC
    if (==) goto 0x0x8073416c;
    r3 = r3 + 0x74; // 0x807340F8
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80734110;
    /* li r3, 0 */ // 0x80734108
    /* b 0x80734114 */ // 0x8073410C
    r3 = *(0xc + r3); // lwz @ 0x80734110
    /* li r0, 0 */ // 0x80734118
    if (==) goto 0x0x80734128;
    if (!=) goto 0x0x8073412c;
    /* li r0, 1 */ // 0x80734128
}