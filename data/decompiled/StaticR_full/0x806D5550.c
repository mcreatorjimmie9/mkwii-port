/* Function at 0x806D5550, size=332 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_806D5550(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x806D5564
    r29 = r3;
    r4 = *(0x58 + r3); // lwz @ 0x806D556C
    r0 = r4 + -1; // 0x806D5570
    if (<=) goto 0x0x806d5588;
    if (==) goto 0x0x806d567c;
    /* b 0x806d5680 */ // 0x806D5584
    /* lis r3, 0 */ // 0x806D5588
    r3 = *(0 + r3); // lwz @ 0x806D558C
    FUN_806E69B4(r3); // bl 0x806E69B4
    if (==) goto 0x0x806d55a8;
    r3 = r29;
    FUN_806D5B08(r3); // bl 0x806D5B08
    /* b 0x806d5680 */ // 0x806D55A4
    /* lis r3, 0 */ // 0x806D55A8
    r3 = *(0 + r3); // lwz @ 0x806D55AC
    r3 = *(0 + r3); // lwz @ 0x806D55B0
    r30 = *(0x150 + r3); // lwz @ 0x806D55B4
    if (!=) goto 0x0x806d55c8;
    /* li r30, 0 */ // 0x806D55C0
    /* b 0x806d561c */ // 0x806D55C4
    /* lis r31, 0 */ // 0x806D55C8
    r31 = r31 + 0; // 0x806D55CC
    if (==) goto 0x0x806d5618;
    r12 = *(0 + r30); // lwz @ 0x806D55D4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D55DC
    /* mtctr r12 */ // 0x806D55E0
    /* bctrl  */ // 0x806D55E4
    /* b 0x806d5600 */ // 0x806D55E8
    if (!=) goto 0x0x806d55fc;
    /* li r0, 1 */ // 0x806D55F4
    /* b 0x806d560c */ // 0x806D55F8
    r3 = *(0 + r3); // lwz @ 0x806D55FC
    if (!=) goto 0x0x806d55ec;
    /* li r0, 0 */ // 0x806D5608
    if (==) goto 0x0x806d5618;
    /* b 0x806d561c */ // 0x806D5614
    /* li r30, 0 */ // 0x806D5618
    r12 = *(0 + r30); // lwz @ 0x806D561C
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806D5624
    /* mtctr r12 */ // 0x806D5628
    /* bctrl  */ // 0x806D562C
    r3 = r30;
    /* li r4, 0x17ea */ // 0x806D5634
    /* li r5, 0 */ // 0x806D5638
    FUN_8064D8BC(r3, r4, r5); // bl 0x8064D8BC
    r3 = r30;
    /* li r4, 0x17e9 */ // 0x806D5644
    /* li r5, 0 */ // 0x806D5648
    FUN_8064D8C4(r5, r3, r4, r5); // bl 0x8064D8C4
    /* li r31, 0 */ // 0x806D5650
    *(0x820 + r30) = r31; // stw @ 0x806D5654
    r3 = r29;
    /* li r4, 0x52 */ // 0x806D565C
    r12 = *(0 + r29); // lwz @ 0x806D5660
    /* li r5, 0 */ // 0x806D5664
    r12 = *(0x24 + r12); // lwz @ 0x806D5668
    /* mtctr r12 */ // 0x806D566C
    /* bctrl  */ // 0x806D5670
    *(0x54 + r29) = r31; // stw @ 0x806D5674
    /* b 0x806d5680 */ // 0x806D5678
    FUN_806D6644(); // bl 0x806D6644
    r0 = *(0x24 + r1); // lwz @ 0x806D5680
    r31 = *(0x1c + r1); // lwz @ 0x806D5684
    r30 = *(0x18 + r1); // lwz @ 0x806D5688
    r29 = *(0x14 + r1); // lwz @ 0x806D568C
    return;
}