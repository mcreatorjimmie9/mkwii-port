/* Function at 0x80734CAC, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80734CAC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x80734CC0
    r29 = r3;
    r4 = *(0x610 + r3); // lwz @ 0x80734CC8
    r31 = *(8 + r4); // lwz @ 0x80734CCC
    if (!=) goto 0x0x80734ce0;
    /* li r30, 0 */ // 0x80734CD8
    /* b 0x80734d1c */ // 0x80734CDC
    r12 = *(0 + r31); // lwz @ 0x80734CE0
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80734CE8
    /* mtctr r12 */ // 0x80734CEC
    /* bctrl  */ // 0x80734CF0
    r0 = *(0xb0 + r29); // lbz @ 0x80734CF4
    r30 = r3;
    if (==) goto 0x0x80734d1c;
    r12 = *(0 + r31); // lwz @ 0x80734D04
    r3 = r31;
    r4 = r29 + 0x72c; // 0x80734D0C
    r12 = *(0x70 + r12); // lwz @ 0x80734D10
    /* mtctr r12 */ // 0x80734D14
    /* bctrl  */ // 0x80734D18
    if (==) goto 0x0x80734d40;
    r3 = *(0x610 + r29); // lwz @ 0x80734D24
    r4 = r29 + 0x74c; // 0x80734D28
    r3 = *(8 + r3); // lwz @ 0x80734D2C
    r12 = *(0 + r3); // lwz @ 0x80734D30
    r12 = *(0x78 + r12); // lwz @ 0x80734D34
    /* mtctr r12 */ // 0x80734D38
    /* bctrl  */ // 0x80734D3C
    r0 = *(0x24 + r1); // lwz @ 0x80734D40
    r31 = *(0x1c + r1); // lwz @ 0x80734D44
    r30 = *(0x18 + r1); // lwz @ 0x80734D48
    r29 = *(0x14 + r1); // lwz @ 0x80734D4C
    return;
}