/* Function at 0x806035B8, size=364 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806035B8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806035CC
    r30 = r3;
    r5 = *(0 + r3); // lwz @ 0x806035D4
    r4 = *(4 + r5); // lwz @ 0x806035D8
    r0 = *(0x14 + r4); // lwz @ 0x806035DC
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x806035E0
    if (==) goto 0x0x80603690;
    FUN_8061ECE4(); // bl 0x8061ECE4
    r0 = *(0x1c + r3); // lwz @ 0x806035EC
    r4 = *(0x18 + r3); // lwz @ 0x806035F0
    r0 = r0 rlwinm 0x17; // rlwinm
    r3 = r4 rlwinm 0x17; // rlwinm
    if (==) goto 0x0x80603678;
    r3 = *(0 + r30); // lwz @ 0x80603604
    r3 = *(4 + r3); // lwz @ 0x80603608
    r0 = *(8 + r3); // lwz @ 0x8060360C
    /* rlwinm. r0, r0, 0, 9, 9 */ // 0x80603610
    if (!=) goto 0x0x80603678;
    r3 = r30;
    FUN_8061ECC8(r3); // bl 0x8061ECC8
    r3 = r30;
    FUN_8061ECC8(r3, r3); // bl 0x8061ECC8
    r0 = *(0x9f + r3); // lbz @ 0x80603628
    r3 = r30;
    *(0x14 + r30) = r0; // stw @ 0x80603630
    FUN_8061ECC8(r3, r3); // bl 0x8061ECC8
    r0 = *(0x9e + r3); // lbz @ 0x80603638
    *(0x18 + r30) = r0; // stb @ 0x8060363C
    if (>=) goto 0x0x80603650;
    /* li r0, 1 */ // 0x80603648
    /* b 0x8060365c */ // 0x8060364C
    if (<=) goto 0x0x8060365c;
    /* li r0, 4 */ // 0x80603658
    *(0x18 + r30) = r0; // stb @ 0x8060365C
    r3 = r30;
    r4 = r31;
    r12 = *(0xc + r30); // lwz @ 0x80603668
    r12 = *(0xc + r12); // lwz @ 0x8060366C
    /* mtctr r12 */ // 0x80603670
    /* bctrl  */ // 0x80603674
    r3 = *(0 + r30); // lwz @ 0x80603678
    r3 = *(4 + r3); // lwz @ 0x8060367C
    r0 = *(8 + r3); // lwz @ 0x80603680
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r3) = r0; // stw @ 0x80603688
    /* b 0x8060370c */ // 0x8060368C
    r0 = *(8 + r4); // lwz @ 0x80603690
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x80603694
    if (==) goto 0x0x8060370c;
    FUN_8061E63C(); // bl 0x8061E63C
    /* lis r3, 0 */ // 0x806036A0
    /* lfs f0, 0(r3) */ // 0x806036A4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806036A8
    if (<=) goto 0x0x806036f8;
    r3 = *(0 + r30); // lwz @ 0x806036B0
    /* li r0, 0 */ // 0x806036B4
    r3 = *(4 + r3); // lwz @ 0x806036B8
    r3 = *(0x74 + r3); // lwz @ 0x806036BC
    if (!=) goto 0x0x806036d0;
    /* li r0, 2 */ // 0x806036C8
    /* b 0x806036dc */ // 0x806036CC
    if (!=) goto 0x0x806036dc;
    /* li r0, 1 */ // 0x806036D8
    *(0x14 + r30) = r0; // stw @ 0x806036DC
    r3 = r30;
    r4 = r31;
    r12 = *(0xc + r30); // lwz @ 0x806036E8
    r12 = *(0xc + r12); // lwz @ 0x806036EC
    /* mtctr r12 */ // 0x806036F0
    /* bctrl  */ // 0x806036F4
    r3 = *(0 + r30); // lwz @ 0x806036F8
    r3 = *(4 + r3); // lwz @ 0x806036FC
    r0 = *(8 + r3); // lwz @ 0x80603700
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r3) = r0; // stw @ 0x80603708
    r0 = *(0x14 + r1); // lwz @ 0x8060370C
    r31 = *(0xc + r1); // lwz @ 0x80603710
    r30 = *(8 + r1); // lwz @ 0x80603714
    return;
}