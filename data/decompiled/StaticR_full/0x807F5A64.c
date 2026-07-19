/* Function at 0x807F5A64, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807F5A64(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x807F5A7C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807F5A84
    r29 = r3;
    if (==) goto 0x0x807f5a98;
    if (!=) goto 0x0x807f5acc;
    r12 = *(0 + r29); // lwz @ 0x807F5A98
    r3 = r29;
    r12 = *(0x108 + r12); // lwz @ 0x807F5AA0
    /* mtctr r12 */ // 0x807F5AA4
    /* bctrl  */ // 0x807F5AA8
    r0 = *(0xd4 + r29); // lbz @ 0x807F5AAC
    if (==) goto 0x0x807f5acc;
    r3 = r30;
    /* li r4, 0 */ // 0x807F5ABC
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* li r0, 0 */ // 0x807F5AC4
    *(0xd4 + r29) = r0; // stb @ 0x807F5AC8
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x807F5AD0
    r30 = *(0x18 + r1); // lwz @ 0x807F5AD4
    r29 = *(0x14 + r1); // lwz @ 0x807F5AD8
    r0 = *(0x24 + r1); // lwz @ 0x807F5ADC
    return;
}