/* Function at 0x80730040, size=372 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80730040(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80730054
    r0 = *(0x4c + r3); // lwz @ 0x80730058
    if (<) goto 0x0x807300b0;
    r0 = *(0x50 + r3); // lwz @ 0x80730064
    if (<) goto 0x0x807300b0;
    r3 = *(0x238 + r3); // lwz @ 0x80730070
    r3 = r3 + 0x74; // 0x80730074
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073008c;
    /* li r3, 0 */ // 0x80730084
    /* b 0x80730090 */ // 0x80730088
    r3 = *(0xc + r3); // lwz @ 0x8073008C
    /* li r0, 0 */ // 0x80730094
    if (==) goto 0x0x807300a4;
    if (!=) goto 0x0x807300a8;
    /* li r0, 1 */ // 0x807300A4
    if (==) goto 0x0x80730110;
    r30 = *(0x260 + r31); // lwz @ 0x807300B0
    if (==) goto 0x0x80730184;
    r3 = r30 + 0x74; // 0x807300BC
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x807300d4;
    /* li r3, 0 */ // 0x807300CC
    /* b 0x807300d8 */ // 0x807300D0
    r3 = *(0xc + r3); // lwz @ 0x807300D4
    /* li r0, 0 */ // 0x807300DC
    if (==) goto 0x0x807300ec;
    if (!=) goto 0x0x807300f0;
    /* li r0, 1 */ // 0x807300EC
    if (==) goto 0x0x80730184;
    r12 = *(0 + r30); // lwz @ 0x807300F8
    r3 = r30;
    r12 = *(0x18 + r12); // lwz @ 0x80730100
    /* mtctr r12 */ // 0x80730104
    /* bctrl  */ // 0x80730108
    /* b 0x80730184 */ // 0x8073010C
    r30 = *(0x260 + r31); // lwz @ 0x80730110
    if (==) goto 0x0x80730184;
    r3 = r30 + 0x74; // 0x8073011C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80730134;
    /* li r3, 0 */ // 0x8073012C
    /* b 0x80730138 */ // 0x80730130
    r3 = *(0xc + r3); // lwz @ 0x80730134
    /* li r0, 0 */ // 0x8073013C
    if (==) goto 0x0x8073014c;
    if (!=) goto 0x0x80730150;
    /* li r0, 1 */ // 0x8073014C
    if (==) goto 0x0x80730184;
    r12 = *(0 + r30); // lwz @ 0x80730158
    r3 = r30;
    r4 = r31 + 0x6f4; // 0x80730160
    r12 = *(0x78 + r12); // lwz @ 0x80730164
    /* mtctr r12 */ // 0x80730168
    /* bctrl  */ // 0x8073016C
    r12 = *(0 + r30); // lwz @ 0x80730170
    r3 = r30;
    r12 = *(0x80 + r12); // lwz @ 0x80730178
    /* mtctr r12 */ // 0x8073017C
    /* bctrl  */ // 0x80730180
    r0 = *(0x4c + r31); // lwz @ 0x80730184
    if (<) goto 0x0x807301dc;
    r0 = *(0x50 + r31); // lwz @ 0x80730190
    if (<) goto 0x0x807301dc;
    r3 = *(0x238 + r31); // lwz @ 0x8073019C
    r3 = r3 + 0x74; // 0x807301A0
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x807301b8;
    /* li r3, 0 */ // 0x807301B0
}