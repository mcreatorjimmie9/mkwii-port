/* Function at 0x80636598, size=340 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80636598(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806365A8
    r30 = r3;
    r3 = *(0x28 + r3); // lwz @ 0x806365B0
    FUN_807CF188(); // bl 0x807CF188
    r12 = *(0 + r30); // lwz @ 0x806365B8
    r3 = r30;
    r12 = *(0x1c + r12); // lwz @ 0x806365C0
    /* mtctr r12 */ // 0x806365C4
    /* bctrl  */ // 0x806365C8
    r12 = *(0 + r30); // lwz @ 0x806365CC
    r3 = r30;
    r12 = *(0x14 + r12); // lwz @ 0x806365D4
    /* mtctr r12 */ // 0x806365D8
    /* bctrl  */ // 0x806365DC
    if (!=) goto 0x0x806365fc;
    /* li r0, 1 */ // 0x806365E8
    *(0xc8 + r30) = r0; // stb @ 0x806365EC
    /* lis r3, 0 */ // 0x806365F0
    r3 = *(0 + r3); // lwz @ 0x806365F4
    *(0x24 + r3) = r0; // stb @ 0x806365F8
    r12 = *(0 + r30); // lwz @ 0x806365FC
    r3 = r30;
    r12 = *(0x14 + r12); // lwz @ 0x80636604
    /* mtctr r12 */ // 0x80636608
    /* bctrl  */ // 0x8063660C
    if (==) goto 0x0x806366d4;
    r0 = *(0xc8 + r30); // lbz @ 0x80636618
    if (!=) goto 0x0x806366d4;
    r12 = *(0 + r30); // lwz @ 0x80636624
    r3 = r30;
    r12 = *(0x14 + r12); // lwz @ 0x8063662C
    /* mtctr r12 */ // 0x80636630
    /* bctrl  */ // 0x80636634
    r4 = *(0 + r3); // lwz @ 0x80636638
    r31 = r3;
    r0 = *(0 + r4); // lbz @ 0x80636640
    if (==) goto 0x0x80636658;
    if (==) goto 0x0x80636668;
    /* b 0x80636674 */ // 0x80636654
    r3 = *(0x28 + r30); // lwz @ 0x80636658
    r4 = r30 + 0x70; // 0x8063665C
    FUN_807CF1B4(r4); // bl 0x807CF1B4
    /* b 0x80636674 */ // 0x80636664
    r3 = *(0x28 + r30); // lwz @ 0x80636668
    r4 = r30 + 0x9c; // 0x8063666C
    FUN_807CF1B4(r4, r4); // bl 0x807CF1B4
    r12 = *(0 + r30); // lwz @ 0x80636674
    r3 = r30;
    r12 = *(0x14 + r12); // lwz @ 0x8063667C
    /* mtctr r12 */ // 0x80636680
    /* bctrl  */ // 0x80636684
    if (==) goto 0x0x8063669c;
    r3 = *(0 + r3); // lwz @ 0x80636690
    /* lfs f0, 0x24(r3) */ // 0x80636694
    /* stfs f0, 0x34(r30) */ // 0x80636698
    /* lis r3, 0 */ // 0x8063669C
    /* li r0, 1 */ // 0x806366A0
    /* lfs f0, 0(r3) */ // 0x806366A4
    /* lis r3, 0 */ // 0x806366A8
    /* stfs f0, 0x14(r30) */ // 0x806366AC
    *(0x51 + r30) = r0; // stb @ 0x806366B0
    r3 = *(0 + r3); // lwz @ 0x806366B4
    FUN_8079D8F8(r3); // bl 0x8079D8F8
    r3 = r30;
    /* li r4, 0 */ // 0x806366C0
    FUN_80632FC4(r3, r4); // bl 0x80632FC4
    r3 = *(0 + r31); // lwz @ 0x806366C8
    r0 = *(0 + r3); // lbz @ 0x806366CC
    *(0x24 + r30) = r0; // stw @ 0x806366D0
    r0 = *(0x14 + r1); // lwz @ 0x806366D4
    r31 = *(0xc + r1); // lwz @ 0x806366D8
    r30 = *(8 + r1); // lwz @ 0x806366DC
    return;
}