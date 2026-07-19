/* Function at 0x808F9648, size=340 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_808F9648(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r6, 0 */ // 0x808F9650
    /* li r5, 0 */ // 0x808F9654
    *(0x1c + r1) = r31; // stw @ 0x808F965C
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808F9664
    *(0x14 + r1) = r29; // stw @ 0x808F9668
    /* b 0x808f9698 */ // 0x808F966C
    /* clrlwi r0, r6, 0x18 */ // 0x808F9670
    r6 = r6 + 1; // 0x808F9674
    /* mulli r0, r0, 0x18 */ // 0x808F9678
    r4 = r3 + r0; // 0x808F967C
    *(0x3c4 + r4) = r5; // stb @ 0x808F9680
    *(0x3c8 + r4) = r5; // stw @ 0x808F9684
    *(0x3cc + r4) = r5; // stw @ 0x808F9688
    *(0x3d0 + r4) = r5; // stw @ 0x808F968C
    *(0x3d4 + r4) = r5; // stw @ 0x808F9690
    *(0x3d8 + r4) = r5; // stw @ 0x808F9694
    r0 = *(0 + r3); // lbz @ 0x808F9698
    /* clrlwi r4, r6, 0x18 */ // 0x808F969C
    if (<) goto 0x0x808f9670;
    /* li r29, 0 */ // 0x808F96A8
    /* li r30, 5 */ // 0x808F96AC
    /* b 0x808f96e0 */ // 0x808F96B0
    r3 = r29 rlwinm 3; // rlwinm
    r0 = *(0 + r31); // lbz @ 0x808F96B8
    r3 = r31 + r3; // 0x808F96BC
    *(9 + r3) = r0; // stb @ 0x808F96C0
    *(0xa + r3) = r30; // stb @ 0x808F96C4
    r3 = *(4 + r3); // lwz @ 0x808F96C8
    r12 = *(0 + r3); // lwz @ 0x808F96CC
    r12 = *(0xc + r12); // lwz @ 0x808F96D0
    /* mtctr r12 */ // 0x808F96D4
    /* bctrl  */ // 0x808F96D8
    r29 = r29 + 1; // 0x808F96DC
    r0 = *(2 + r31); // lbz @ 0x808F96E0
    /* clrlwi r3, r29, 0x18 */ // 0x808F96E4
    if (<) goto 0x0x808f96b4;
    /* li r4, 0 */ // 0x808F96F0
    *(0x4ec + r31) = r4; // stb @ 0x808F96F4
    /* lis r3, 0 */ // 0x808F96F8
    *(0x4ed + r31) = r4; // stb @ 0x808F96FC
    *(0x4ee + r31) = r4; // stb @ 0x808F9700
    *(0x4ef + r31) = r4; // stb @ 0x808F9704
    *(0x4f0 + r31) = r4; // stb @ 0x808F9708
    *(0x4f1 + r31) = r4; // stb @ 0x808F970C
    *(0x4f2 + r31) = r4; // stb @ 0x808F9710
    *(0x4f3 + r31) = r4; // stb @ 0x808F9714
    *(0x4f4 + r31) = r4; // stb @ 0x808F9718
    *(0x4f5 + r31) = r4; // stb @ 0x808F971C
    *(0x4f6 + r31) = r4; // stb @ 0x808F9720
    *(0x4f7 + r31) = r4; // stb @ 0x808F9724
    r5 = *(0 + r3); // lwz @ 0x808F9728
    r3 = *(0xb74 + r5); // lwz @ 0x808F972C
    r0 = r3 + -2; // 0x808F9730
    if (>) goto 0x0x808f9744;
    *(0x4e8 + r31) = r4; // stw @ 0x808F973C
    /* b 0x808f9778 */ // 0x808F9740
    r0 = *(0xb70 + r5); // lwz @ 0x808F9744
    if (<) goto 0x0x808f975c;
    if (>) goto 0x0x808f975c;
    /* li r4, 1 */ // 0x808F9758
    if (==) goto 0x0x808f9770;
    /* li r0, 0 */ // 0x808F9764
    *(0x4e8 + r31) = r0; // stw @ 0x808F9768
    /* b 0x808f9778 */ // 0x808F976C
    /* li r0, 0x78 */ // 0x808F9770
    *(0x4e8 + r31) = r0; // stw @ 0x808F9774
    /* li r0, 0 */ // 0x808F9778
    *(0x4e4 + r31) = r0; // stw @ 0x808F977C
    r31 = *(0x1c + r1); // lwz @ 0x808F9780
    r30 = *(0x18 + r1); // lwz @ 0x808F9784
    r29 = *(0x14 + r1); // lwz @ 0x808F9788
    r0 = *(0x24 + r1); // lwz @ 0x808F978C
    return;
}