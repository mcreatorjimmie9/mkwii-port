/* Function at 0x807349C4, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_807349C4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807349D8
    r29 = r3;
    r4 = *(0x610 + r3); // lwz @ 0x807349E0
    r31 = *(0xc + r4); // lwz @ 0x807349E4
    if (!=) goto 0x0x807349f8;
    /* li r30, 0 */ // 0x807349F0
    /* b 0x80734a34 */ // 0x807349F4
    r12 = *(0 + r31); // lwz @ 0x807349F8
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80734A00
    /* mtctr r12 */ // 0x80734A04
    /* bctrl  */ // 0x80734A08
    r0 = *(0xb0 + r29); // lbz @ 0x80734A0C
    r30 = r3;
    if (==) goto 0x0x80734a34;
    r12 = *(0 + r31); // lwz @ 0x80734A1C
    r3 = r31;
    r4 = r29 + 0x72c; // 0x80734A24
    r12 = *(0x70 + r12); // lwz @ 0x80734A28
    /* mtctr r12 */ // 0x80734A2C
    /* bctrl  */ // 0x80734A30
    if (==) goto 0x0x80734a58;
    r3 = *(0x610 + r29); // lwz @ 0x80734A3C
    r4 = r29 + 0x74c; // 0x80734A40
    r3 = *(0xc + r3); // lwz @ 0x80734A44
    r12 = *(0 + r3); // lwz @ 0x80734A48
    r12 = *(0x78 + r12); // lwz @ 0x80734A4C
    /* mtctr r12 */ // 0x80734A50
    /* bctrl  */ // 0x80734A54
    r0 = *(0x24 + r1); // lwz @ 0x80734A58
    r31 = *(0x1c + r1); // lwz @ 0x80734A5C
    r30 = *(0x18 + r1); // lwz @ 0x80734A60
    r29 = *(0x14 + r1); // lwz @ 0x80734A64
    return;
}