/* Function at 0x807B3114, size=244 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 8 function(s) */

int FUN_807B3114(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807B3120
    r31 = r3;
    r0 = *(0x1f4 + r3); // lwz @ 0x807B3128
    if (==) goto 0x0x807b3174;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x807B3138
    r12 = *(0x10 + r12); // lwz @ 0x807B313C
    /* mtctr r12 */ // 0x807B3140
    /* bctrl  */ // 0x807B3144
    r3 = *(0x1f4 + r31); // lwz @ 0x807B3148
    FUN_807B56CC(); // bl 0x807B56CC
    if (==) goto 0x0x807b3174;
    r5 = *(0x1f4 + r31); // lwz @ 0x807B3158
    /* li r0, 1 */ // 0x807B315C
    r3 = r31 + 0x60; // 0x807B3160
    r4 = r31 + 0xc4; // 0x807B3164
    *(6 + r5) = r0; // stb @ 0x807B3168
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807b31f4 */ // 0x807B3170
    r3 = *(0x200 + r31); // lwz @ 0x807B3174
    if (==) goto 0x0x807b3198;
    FUN_807B56CC(); // bl 0x807B56CC
    if (==) goto 0x0x807b3198;
    r3 = r31 + 0x60; // 0x807B318C
    r4 = r31 + 0x148; // 0x807B3190
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r3 = *(0x1f8 + r31); // lwz @ 0x807B3198
    if (==) goto 0x0x807b31d0;
    r12 = *(0 + r3); // lwz @ 0x807B31A4
    r12 = *(0x10 + r12); // lwz @ 0x807B31A8
    /* mtctr r12 */ // 0x807B31AC
    /* bctrl  */ // 0x807B31B0
    r3 = *(0x1f8 + r31); // lwz @ 0x807B31B4
    FUN_807B56CC(); // bl 0x807B56CC
    if (==) goto 0x0x807b31d0;
    r3 = r31 + 0x60; // 0x807B31C4
    r4 = r31 + 0xf0; // 0x807B31C8
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r3 = *(0x204 + r31); // lwz @ 0x807B31D0
    if (==) goto 0x0x807b31f4;
    FUN_807B56CC(r4); // bl 0x807B56CC
    if (==) goto 0x0x807b31f4;
    r3 = r31 + 0x60; // 0x807B31E8
    r4 = r31 + 0x174; // 0x807B31EC
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807B31F4
    r31 = *(0xc + r1); // lwz @ 0x807B31F8
    return;
}