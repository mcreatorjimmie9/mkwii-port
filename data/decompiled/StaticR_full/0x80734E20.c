/* Function at 0x80734E20, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80734E20(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80734E30
    r30 = r3;
    r31 = *(0x284 + r3); // lwz @ 0x80734E38
    if (==) goto 0x0x80734e94;
    r3 = r31 + 0x74; // 0x80734E44
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80734e5c;
    /* li r3, 0 */ // 0x80734E54
    /* b 0x80734e60 */ // 0x80734E58
    r3 = *(0xc + r3); // lwz @ 0x80734E5C
    /* li r0, 0 */ // 0x80734E64
    if (==) goto 0x0x80734e74;
    if (!=) goto 0x0x80734e78;
    /* li r0, 1 */ // 0x80734E74
    if (==) goto 0x0x80734e94;
    r12 = *(0 + r31); // lwz @ 0x80734E80
    r3 = r31;
    r12 = *(0x18 + r12); // lwz @ 0x80734E88
    /* mtctr r12 */ // 0x80734E8C
    /* bctrl  */ // 0x80734E90
    r31 = *(0x284 + r30); // lwz @ 0x80734E94
    if (==) goto 0x0x80734ed8;
    r12 = *(0 + r31); // lwz @ 0x80734EA0
    r3 = r31;
}