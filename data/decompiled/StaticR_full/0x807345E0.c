/* Function at 0x807345E0, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_807345E0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807345F4
    r29 = r3;
    r4 = *(0x52c + r3); // lwz @ 0x807345FC
    r31 = *(4 + r4); // lwz @ 0x80734600
    if (!=) goto 0x0x80734614;
    /* li r30, 0 */ // 0x8073460C
    /* b 0x80734650 */ // 0x80734610
    r12 = *(0 + r31); // lwz @ 0x80734614
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x8073461C
    /* mtctr r12 */ // 0x80734620
    /* bctrl  */ // 0x80734624
    r0 = *(0xb0 + r29); // lbz @ 0x80734628
    r30 = r3;
    if (==) goto 0x0x80734650;
    r12 = *(0 + r31); // lwz @ 0x80734638
    r3 = r31;
    r4 = r29 + 0x72c; // 0x80734640
    r12 = *(0x70 + r12); // lwz @ 0x80734644
    /* mtctr r12 */ // 0x80734648
    /* bctrl  */ // 0x8073464C
    if (==) goto 0x0x80734674;
    r3 = *(0x52c + r29); // lwz @ 0x80734658
    r4 = r29 + 0x74c; // 0x8073465C
    r3 = *(4 + r3); // lwz @ 0x80734660
    r12 = *(0 + r3); // lwz @ 0x80734664
    r12 = *(0x78 + r12); // lwz @ 0x80734668
    /* mtctr r12 */ // 0x8073466C
    /* bctrl  */ // 0x80734670
    r0 = *(0x24 + r1); // lwz @ 0x80734674
    r31 = *(0x1c + r1); // lwz @ 0x80734678
    r30 = *(0x18 + r1); // lwz @ 0x8073467C
    r29 = *(0x14 + r1); // lwz @ 0x80734680
    return;
}