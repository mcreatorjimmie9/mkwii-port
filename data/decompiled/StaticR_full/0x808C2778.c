/* Function at 0x808C2778, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808C2778(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808C2780
    /* slwi r0, r3, 2 */ // 0x808C2788
    *(0xc + r1) = r31; // stw @ 0x808C278C
    *(8 + r1) = r30; // stw @ 0x808C2790
    r3 = *(0 + r4); // lwz @ 0x808C2794
    r3 = *(0 + r3); // lwz @ 0x808C2798
    r3 = r3 + r0; // 0x808C279C
    r30 = *(8 + r3); // lwz @ 0x808C27A0
    if (!=) goto 0x0x808c27b4;
    /* li r30, 0 */ // 0x808C27AC
    /* b 0x808c2808 */ // 0x808C27B0
    /* lis r31, 0 */ // 0x808C27B4
    r31 = r31 + 0; // 0x808C27B8
    if (==) goto 0x0x808c2804;
    r12 = *(0 + r30); // lwz @ 0x808C27C0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C27C8
    /* mtctr r12 */ // 0x808C27CC
    /* bctrl  */ // 0x808C27D0
    /* b 0x808c27ec */ // 0x808C27D4
    if (!=) goto 0x0x808c27e8;
    /* li r0, 1 */ // 0x808C27E0
    /* b 0x808c27f8 */ // 0x808C27E4
    r3 = *(0 + r3); // lwz @ 0x808C27E8
    if (!=) goto 0x0x808c27d8;
    /* li r0, 0 */ // 0x808C27F4
    if (==) goto 0x0x808c2804;
    /* b 0x808c2808 */ // 0x808C2800
    /* li r30, 0 */ // 0x808C2804
    if (!=) goto 0x0x808c2818;
    /* li r30, 0 */ // 0x808C2810
    /* b 0x808c286c */ // 0x808C2814
    /* lis r31, 0 */ // 0x808C2818
    r31 = r31 + 0; // 0x808C281C
    if (==) goto 0x0x808c2868;
    r12 = *(0 + r30); // lwz @ 0x808C2824
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C282C
    /* mtctr r12 */ // 0x808C2830
    /* bctrl  */ // 0x808C2834
    /* b 0x808c2850 */ // 0x808C2838
    if (!=) goto 0x0x808c284c;
    /* li r0, 1 */ // 0x808C2844
    /* b 0x808c285c */ // 0x808C2848
    r3 = *(0 + r3); // lwz @ 0x808C284C
    if (!=) goto 0x0x808c283c;
    /* li r0, 0 */ // 0x808C2858
    if (==) goto 0x0x808c2868;
    /* b 0x808c286c */ // 0x808C2864
    /* li r30, 0 */ // 0x808C2868
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808C2870
    r30 = *(8 + r1); // lwz @ 0x808C2874
    r0 = *(0x14 + r1); // lwz @ 0x808C2878
    return;
}