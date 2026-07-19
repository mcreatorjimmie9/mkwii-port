/* Function at 0x806DF5CC, size=308 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806DF5CC(int r3, int r4, int r5)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806DF5D4
    r31 = r3;
    *(0x68 + r1) = r30; // stw @ 0x806DF5E4
    *(0x64 + r1) = r29; // stw @ 0x806DF5E8
    r3 = *(0 + r4); // lwz @ 0x806DF5EC
    r3 = *(0 + r3); // lwz @ 0x806DF5F0
    r29 = *(0x144 + r3); // lwz @ 0x806DF5F4
    if (!=) goto 0x0x806df608;
    /* li r29, 0 */ // 0x806DF600
    /* b 0x806df65c */ // 0x806DF604
    /* lis r30, 0 */ // 0x806DF608
    r30 = r30 + 0; // 0x806DF60C
    if (==) goto 0x0x806df658;
    r12 = *(0 + r29); // lwz @ 0x806DF614
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806DF61C
    /* mtctr r12 */ // 0x806DF620
    /* bctrl  */ // 0x806DF624
    /* b 0x806df640 */ // 0x806DF628
    if (!=) goto 0x0x806df63c;
    /* li r0, 1 */ // 0x806DF634
    /* b 0x806df64c */ // 0x806DF638
    r3 = *(0 + r3); // lwz @ 0x806DF63C
    if (!=) goto 0x0x806df62c;
    /* li r0, 0 */ // 0x806DF648
    if (==) goto 0x0x806df658;
    /* b 0x806df65c */ // 0x806DF654
    /* li r29, 0 */ // 0x806DF658
    r12 = *(0 + r29); // lwz @ 0x806DF65C
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806DF664
    /* mtctr r12 */ // 0x806DF668
    /* bctrl  */ // 0x806DF66C
    r3 = r29;
    /* li r4, 0x189c */ // 0x806DF674
    /* li r5, 0 */ // 0x806DF678
    FUN_806496F0(r3, r4, r5); // bl 0x806496F0
    r12 = *(0 + r29); // lwz @ 0x806DF680
    r3 = r29;
    /* li r4, 0x18a1 */ // 0x806DF688
    /* li r5, 0 */ // 0x806DF68C
    r12 = *(0x68 + r12); // lwz @ 0x806DF690
    /* mtctr r12 */ // 0x806DF694
    /* bctrl  */ // 0x806DF698
    r12 = *(0 + r31); // lwz @ 0x806DF69C
    r3 = r31;
    /* li r4, 0x4f */ // 0x806DF6A4
    /* li r5, 0 */ // 0x806DF6A8
    r12 = *(0x24 + r12); // lwz @ 0x806DF6AC
    /* mtctr r12 */ // 0x806DF6B0
    /* bctrl  */ // 0x806DF6B4
    /* li r0, 0 */ // 0x806DF6B8
    *(0x68 + r31) = r0; // stw @ 0x806DF6BC
    /* lis r30, 0 */ // 0x806DF6C0
    r3 = *(0 + r30); // lwz @ 0x806DF6C4
    r3 = *(0x98 + r3); // lwz @ 0x806DF6C8
    r3 = *(0x3c4 + r3); // lwz @ 0x806DF6CC
    *(0x6c + r31) = r3; // stw @ 0x806DF6D0
    r29 = r3 + -7; // 0x806DF6D4
    r3 = *(0 + r30); // lwz @ 0x806DF6D8
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x806DF6E0
    r3 = *(0x404 + r3); // lwz @ 0x806DF6E4
    FUN_80659814(r4); // bl 0x80659814
    r4 = r3;
    r3 = r31 + 0x70; // 0x806DF6F0
    r4 = r4 + 8; // 0x806DF6F4
    /* li r5, 8 */ // 0x806DF6F8
    FUN_805E3430(r4, r3, r4, r5); // bl 0x805E3430
}