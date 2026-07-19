/* Function at 0x80734B38, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80734B38(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x80734B4C
    r29 = r3;
    r4 = *(0x610 + r3); // lwz @ 0x80734B54
    r31 = *(4 + r4); // lwz @ 0x80734B58
    if (!=) goto 0x0x80734b6c;
    /* li r30, 0 */ // 0x80734B64
    /* b 0x80734ba8 */ // 0x80734B68
    r12 = *(0 + r31); // lwz @ 0x80734B6C
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80734B74
    /* mtctr r12 */ // 0x80734B78
    /* bctrl  */ // 0x80734B7C
    r0 = *(0xb0 + r29); // lbz @ 0x80734B80
    r30 = r3;
    if (==) goto 0x0x80734ba8;
    r12 = *(0 + r31); // lwz @ 0x80734B90
    r3 = r31;
    r4 = r29 + 0x72c; // 0x80734B98
    r12 = *(0x70 + r12); // lwz @ 0x80734B9C
    /* mtctr r12 */ // 0x80734BA0
    /* bctrl  */ // 0x80734BA4
    if (==) goto 0x0x80734bcc;
    r3 = *(0x610 + r29); // lwz @ 0x80734BB0
    r4 = r29 + 0x74c; // 0x80734BB4
    r3 = *(4 + r3); // lwz @ 0x80734BB8
    r12 = *(0 + r3); // lwz @ 0x80734BBC
    r12 = *(0x78 + r12); // lwz @ 0x80734BC0
    /* mtctr r12 */ // 0x80734BC4
    /* bctrl  */ // 0x80734BC8
    r0 = *(0x24 + r1); // lwz @ 0x80734BCC
    r31 = *(0x1c + r1); // lwz @ 0x80734BD0
    r30 = *(0x18 + r1); // lwz @ 0x80734BD4
    r29 = *(0x14 + r1); // lwz @ 0x80734BD8
    return;
}