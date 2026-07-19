/* Function at 0x80736A54, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80736A54(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80736A64
    r30 = r3;
    r0 = *(7 + r3); // lbz @ 0x80736A6C
    if (!=) goto 0x0x80736ae8;
    /* lis r4, 0 */ // 0x80736A78
    r4 = *(0 + r4); // lwz @ 0x80736A7C
    r0 = *(0x10 + r4); // lbz @ 0x80736A80
    if (!=) goto 0x0x80736ae8;
    r0 = *(0x12b + r3); // lbz @ 0x80736A8C
    if (==) goto 0x0x80736a9c;
    /* b 0x80736ae8 */ // 0x80736A98
    r31 = *(0x264 + r3); // lwz @ 0x80736A9C
    if (==) goto 0x0x80736ae0;
    r12 = *(0 + r31); // lwz @ 0x80736AA8
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80736AB0
    /* mtctr r12 */ // 0x80736AB4
    /* bctrl  */ // 0x80736AB8
    r0 = *(0xb0 + r30); // lbz @ 0x80736ABC
    if (==) goto 0x0x80736ae0;
    r12 = *(0 + r31); // lwz @ 0x80736AC8
    r3 = r31;
    r4 = r30 + 0x72c; // 0x80736AD0
    r12 = *(0x70 + r12); // lwz @ 0x80736AD4
    /* mtctr r12 */ // 0x80736AD8
    /* bctrl  */ // 0x80736ADC
    /* li r0, 1 */ // 0x80736AE0
    *(0x93 + r30) = r0; // stb @ 0x80736AE4
    r0 = *(0x14 + r1); // lwz @ 0x80736AE8
    r31 = *(0xc + r1); // lwz @ 0x80736AEC
    r30 = *(8 + r1); // lwz @ 0x80736AF0
    return;
}