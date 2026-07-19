/* Function at 0x806BE534, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806BE534(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806BE53C
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806BE54C
    *(0x14 + r1) = r29; // stw @ 0x806BE550
    r3 = *(0 + r4); // lwz @ 0x806BE554
    r3 = *(0 + r3); // lwz @ 0x806BE558
    r29 = *(0x274 + r3); // lwz @ 0x806BE55C
    if (!=) goto 0x0x806be570;
    /* li r29, 0 */ // 0x806BE568
    /* b 0x806be5c4 */ // 0x806BE56C
    /* lis r30, 0 */ // 0x806BE570
    r30 = r30 + 0; // 0x806BE574
    if (==) goto 0x0x806be5c0;
    r12 = *(0 + r29); // lwz @ 0x806BE57C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806BE584
    /* mtctr r12 */ // 0x806BE588
    /* bctrl  */ // 0x806BE58C
    /* b 0x806be5a8 */ // 0x806BE590
    if (!=) goto 0x0x806be5a4;
    /* li r0, 1 */ // 0x806BE59C
    /* b 0x806be5b4 */ // 0x806BE5A0
    r3 = *(0 + r3); // lwz @ 0x806BE5A4
    if (!=) goto 0x0x806be594;
    /* li r0, 0 */ // 0x806BE5B0
    if (==) goto 0x0x806be5c0;
    /* b 0x806be5c4 */ // 0x806BE5BC
    /* li r29, 0 */ // 0x806BE5C0
    r0 = *(0x350 + r29); // lwz @ 0x806BE5C4
    if (!=) goto 0x0x806be620;
    r3 = *(0x2af8 + r31); // lbz @ 0x806BE5D0
    /* li r0, 3 */ // 0x806BE5D4
    r4 = *(8 + r1); // lwz @ 0x806BE5D8
    r4 = r0 rlwimi 0x18; // rlwimi
    r0 = r3 + 1; // 0x806BE5E0
    *(0x2af8 + r31) = r0; // stb @ 0x806BE5E4
    /* lis r3, 0 */ // 0x806BE5E8
    r30 = r4 rlwinm 0; // rlwinm
    r30 = r0 rlwimi 0; // rlwimi
    r3 = *(0 + r3); // lwz @ 0x806BE5F4
    r4 = r30;
    FUN_806EAA88(r3, r4); // bl 0x806EAA88
    *(0x2c60 + r31) = r30; // stw @ 0x806BE600
    /* lis r3, 0 */ // 0x806BE604
    r3 = *(0 + r3); // lwz @ 0x806BE608
    r0 = *(0x291c + r3); // lwz @ 0x806BE60C
    /* mulli r0, r0, 0x58 */ // 0x806BE610
    r3 = r3 + r0; // 0x806BE614
    r0 = *(0x59 + r3); // lbz @ 0x806BE618
    *(0x2c64 + r31) = r0; // stb @ 0x806BE61C
    r0 = *(0x24 + r1); // lwz @ 0x806BE620
    r31 = *(0x1c + r1); // lwz @ 0x806BE624
    r30 = *(0x18 + r1); // lwz @ 0x806BE628
    r29 = *(0x14 + r1); // lwz @ 0x806BE62C
    return;
}