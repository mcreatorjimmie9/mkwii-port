/* Function at 0x806D569C, size=344 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_806D569C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x806D56B0
    r29 = r3;
    r0 = *(8 + r3); // lwz @ 0x806D56B8
    if (!=) goto 0x0x806d57d8;
    r0 = *(0x54 + r3); // lwz @ 0x806D56C4
    if (!=) goto 0x0x806d57d8;
    /* lis r3, 0 */ // 0x806D56D0
    r3 = *(0 + r3); // lwz @ 0x806D56D4
    FUN_806F58E0(r3); // bl 0x806F58E0
    if (==) goto 0x0x806d57d8;
    /* lis r3, 0 */ // 0x806D56E4
    r3 = *(0 + r3); // lwz @ 0x806D56E8
    r3 = *(0 + r3); // lwz @ 0x806D56EC
    r30 = *(0x148 + r3); // lwz @ 0x806D56F0
    if (!=) goto 0x0x806d5704;
    /* li r30, 0 */ // 0x806D56FC
    /* b 0x806d5758 */ // 0x806D5700
    /* lis r31, 0 */ // 0x806D5704
    r31 = r31 + 0; // 0x806D5708
    if (==) goto 0x0x806d5754;
    r12 = *(0 + r30); // lwz @ 0x806D5710
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D5718
    /* mtctr r12 */ // 0x806D571C
    /* bctrl  */ // 0x806D5720
    /* b 0x806d573c */ // 0x806D5724
    if (!=) goto 0x0x806d5738;
    /* li r0, 1 */ // 0x806D5730
    /* b 0x806d5748 */ // 0x806D5734
    r3 = *(0 + r3); // lwz @ 0x806D5738
    if (!=) goto 0x0x806d5728;
    /* li r0, 0 */ // 0x806D5744
    if (==) goto 0x0x806d5754;
    /* b 0x806d5758 */ // 0x806D5750
    /* li r30, 0 */ // 0x806D5754
    r3 = r30;
    FUN_80649164(r3); // bl 0x80649164
    /* lis r3, 0 */ // 0x806D5760
    r3 = *(0 + r3); // lwz @ 0x806D5764
    FUN_806F58E8(r3, r3); // bl 0x806F58E8
    r0 = r3 + -3; // 0x806D576C
    if (<=) goto 0x0x806d57c4;
    if (==) goto 0x0x806d578c;
    if (==) goto 0x0x806d57d0;
    /* b 0x806d57d8 */ // 0x806D5788
    r0 = *(0x474 + r29); // lwz @ 0x806D578C
    if (==) goto 0x0x806d57a4;
    if (==) goto 0x0x806d57b0;
    /* b 0x806d57b8 */ // 0x806D57A0
    r3 = r29;
    FUN_806D5D64(r3); // bl 0x806D5D64
    /* b 0x806d57b8 */ // 0x806D57AC
    r3 = r29;
    FUN_806D617C(r3, r3); // bl 0x806D617C
    /* li r0, 3 */ // 0x806D57B8
    *(0x54 + r29) = r0; // stw @ 0x806D57BC
    /* b 0x806d57d8 */ // 0x806D57C0
    /* li r0, 4 */ // 0x806D57C4
    *(0x54 + r29) = r0; // stw @ 0x806D57C8
    /* b 0x806d57d8 */ // 0x806D57CC
    /* li r0, 4 */ // 0x806D57D0
    *(0x54 + r29) = r0; // stw @ 0x806D57D4
    r0 = *(0x24 + r1); // lwz @ 0x806D57D8
    r31 = *(0x1c + r1); // lwz @ 0x806D57DC
    r30 = *(0x18 + r1); // lwz @ 0x806D57E0
    r29 = *(0x14 + r1); // lwz @ 0x806D57E4
    return;
}