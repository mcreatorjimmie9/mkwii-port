/* Function at 0x80734850, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80734850(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x80734864
    r29 = r3;
    r4 = *(0x610 + r3); // lwz @ 0x8073486C
    r31 = *(0 + r4); // lwz @ 0x80734870
    if (!=) goto 0x0x80734884;
    /* li r30, 0 */ // 0x8073487C
    /* b 0x807348c0 */ // 0x80734880
    r12 = *(0 + r31); // lwz @ 0x80734884
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x8073488C
    /* mtctr r12 */ // 0x80734890
    /* bctrl  */ // 0x80734894
    r0 = *(0xb0 + r29); // lbz @ 0x80734898
    r30 = r3;
    if (==) goto 0x0x807348c0;
    r12 = *(0 + r31); // lwz @ 0x807348A8
    r3 = r31;
    r4 = r29 + 0x72c; // 0x807348B0
    r12 = *(0x70 + r12); // lwz @ 0x807348B4
    /* mtctr r12 */ // 0x807348B8
    /* bctrl  */ // 0x807348BC
    if (==) goto 0x0x807348e4;
    r3 = *(0x610 + r29); // lwz @ 0x807348C8
    r4 = r29 + 0x74c; // 0x807348CC
    r3 = *(0 + r3); // lwz @ 0x807348D0
    r12 = *(0 + r3); // lwz @ 0x807348D4
    r12 = *(0x78 + r12); // lwz @ 0x807348D8
    /* mtctr r12 */ // 0x807348DC
    /* bctrl  */ // 0x807348E0
    r0 = *(0x24 + r1); // lwz @ 0x807348E4
    r31 = *(0x1c + r1); // lwz @ 0x807348E8
    r30 = *(0x18 + r1); // lwz @ 0x807348EC
    r29 = *(0x14 + r1); // lwz @ 0x807348F0
    return;
}