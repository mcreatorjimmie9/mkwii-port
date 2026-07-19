/* Function at 0x8066A214, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8066A214(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r7, 0 */ // 0x8066A21C
    /* li r6, 1 */ // 0x8066A220
    r0 = r6 << r7; // slw
    /* and. r0, r4, r0 */ // 0x8066A22C
    *(0x1c + r1) = r31; // stw @ 0x8066A230
    *(0x18 + r1) = r30; // stw @ 0x8066A234
    *(0x14 + r1) = r29; // stw @ 0x8066A238
    r29 = r3;
    if (==) goto 0x0x8066a248;
    /* li r7, 1 */ // 0x8066A244
    /* li r0, 1 */ // 0x8066A248
    r0 = r6 << r0; // slw
    /* and. r0, r4, r0 */ // 0x8066A250
    if (==) goto 0x0x8066a25c;
    r7 = r7 + 1; // 0x8066A258
    /* li r0, 2 */ // 0x8066A25C
    r0 = r6 << r0; // slw
    /* and. r0, r4, r0 */ // 0x8066A264
    if (==) goto 0x0x8066a270;
    r7 = r7 + 1; // 0x8066A26C
    /* li r0, 3 */ // 0x8066A270
    r0 = r6 << r0; // slw
    /* and. r0, r4, r0 */ // 0x8066A278
    if (==) goto 0x0x8066a284;
    r7 = r7 + 1; // 0x8066A280
    /* li r0, 4 */ // 0x8066A284
    r0 = r6 << r0; // slw
    /* and. r0, r4, r0 */ // 0x8066A28C
    if (==) goto 0x0x8066a298;
    r7 = r7 + 1; // 0x8066A294
    if (<=) goto 0x0x8066a2a4;
    /* li r5, 1 */ // 0x8066A2A0
    *(4 + r3) = r4; // stw @ 0x8066A2A4
    r31 = r3 + 0x5c; // 0x8066A2A8
    /* li r30, 0 */ // 0x8066A2AC
    *(8 + r3) = r4; // stw @ 0x8066A2B0
    *(0xd + r3) = r5; // stb @ 0x8066A2B4
    r12 = *(0 + r31); // lwz @ 0x8066A2B8
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x8066A2C0
    /* mtctr r12 */ // 0x8066A2C4
    /* bctrl  */ // 0x8066A2C8
    r30 = r30 + 1; // 0x8066A2CC
    r31 = r31 + 0x5c; // 0x8066A2D0
    if (<) goto 0x0x8066a2b8;
    /* lis r3, 0 */ // 0x8066A2DC
    r3 = r3 + 0; // 0x8066A2E0
    *(0x220 + r29) = r3; // stw @ 0x8066A2E4
    r31 = *(0x1c + r1); // lwz @ 0x8066A2E8
    r30 = *(0x18 + r1); // lwz @ 0x8066A2EC
    r29 = *(0x14 + r1); // lwz @ 0x8066A2F0
    r0 = *(0x24 + r1); // lwz @ 0x8066A2F4
    return;
}