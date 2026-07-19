/* Function at 0x80732524, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80732524(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x80732538
    r29 = r3;
    r0 = *(0x7b9 + r3); // lbz @ 0x80732540
    r5 = *(0x530 + r3); // lwz @ 0x80732544
    if (!=) goto 0x0x80732560;
    r4 = *(0x80 + r3); // lwz @ 0x80732550
    r0 = *(0xae0 + r3); // lbz @ 0x80732554
    if (>=) goto 0x0x80732594;
    r30 = r5 + 0x40; // 0x80732560
    /* li r31, 0x10 */ // 0x80732564
    r3 = *(0 + r30); // lwz @ 0x80732568
    if (==) goto 0x0x80732584;
    r12 = *(0 + r3); // lwz @ 0x80732574
    r12 = *(0xc + r12); // lwz @ 0x80732578
    /* mtctr r12 */ // 0x8073257C
    /* bctrl  */ // 0x80732580
    r31 = r31 + 1; // 0x80732584
    r30 = r30 + 4; // 0x80732588
    if (<) goto 0x0x80732568;
    r0 = *(0x7ba + r29); // lbz @ 0x80732594
    r4 = *(0x530 + r29); // lwz @ 0x80732598
    if (!=) goto 0x0x807325b4;
    r3 = *(0x84 + r29); // lwz @ 0x807325A4
    r0 = *(0xae0 + r29); // lbz @ 0x807325A8
    if (>=) goto 0x0x807325e8;
    r30 = r4 + 0x4c; // 0x807325B4
    /* li r31, 0x13 */ // 0x807325B8
    r3 = *(0 + r30); // lwz @ 0x807325BC
    if (==) goto 0x0x807325d8;
    r12 = *(0 + r3); // lwz @ 0x807325C8
    r12 = *(0xc + r12); // lwz @ 0x807325CC
    /* mtctr r12 */ // 0x807325D0
    /* bctrl  */ // 0x807325D4
    r31 = r31 + 1; // 0x807325D8
    r30 = r30 + 4; // 0x807325DC
    if (<) goto 0x0x807325bc;
    r0 = *(0x24 + r1); // lwz @ 0x807325E8
    r31 = *(0x1c + r1); // lwz @ 0x807325EC
    r30 = *(0x18 + r1); // lwz @ 0x807325F0
    r29 = *(0x14 + r1); // lwz @ 0x807325F4
    return;
}