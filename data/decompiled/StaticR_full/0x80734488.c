/* Function at 0x80734488, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80734488(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8073449C
    r29 = r3;
    r4 = *(0x52c + r3); // lwz @ 0x807344A4
    r31 = *(0 + r4); // lwz @ 0x807344A8
    if (!=) goto 0x0x807344bc;
    /* li r30, 0 */ // 0x807344B4
    /* b 0x807344f8 */ // 0x807344B8
    r12 = *(0 + r31); // lwz @ 0x807344BC
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x807344C4
    /* mtctr r12 */ // 0x807344C8
    /* bctrl  */ // 0x807344CC
    r0 = *(0xb0 + r29); // lbz @ 0x807344D0
    r30 = r3;
    if (==) goto 0x0x807344f8;
    r12 = *(0 + r31); // lwz @ 0x807344E0
    r3 = r31;
    r4 = r29 + 0x72c; // 0x807344E8
    r12 = *(0x70 + r12); // lwz @ 0x807344EC
    /* mtctr r12 */ // 0x807344F0
    /* bctrl  */ // 0x807344F4
    if (==) goto 0x0x8073451c;
    r3 = *(0x52c + r29); // lwz @ 0x80734500
    r4 = r29 + 0x74c; // 0x80734504
    r3 = *(0 + r3); // lwz @ 0x80734508
    r12 = *(0 + r3); // lwz @ 0x8073450C
    r12 = *(0x78 + r12); // lwz @ 0x80734510
    /* mtctr r12 */ // 0x80734514
    /* bctrl  */ // 0x80734518
    r0 = *(0x24 + r1); // lwz @ 0x8073451C
    r31 = *(0x1c + r1); // lwz @ 0x80734520
    r30 = *(0x18 + r1); // lwz @ 0x80734524
    r29 = *(0x14 + r1); // lwz @ 0x80734528
    return;
}