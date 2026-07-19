/* Function at 0x805B2714, size=372 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805B2714(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805B2730
    *(0x10 + r1) = r28; // stw @ 0x805B2734
    r0 = *(0x14 + r3); // lwz @ 0x805B2738
    if (!=) goto 0x0x805b2868;
    r29 = *(8 + r3); // lwz @ 0x805B2744
    /* li r28, 0 */ // 0x805B2748
    if (>=) goto 0x0x805b2764;
    /* li r0, 0 */ // 0x805B2754
    *(8 + r3) = r0; // stw @ 0x805B2758
    /* li r28, 1 */ // 0x805B275C
    /* b 0x805b27ec */ // 0x805B2760
    if (>=) goto 0x0x805b2770;
    /* li r4, 0 */ // 0x805B2768
    /* b 0x805b278c */ // 0x805B276C
    r12 = *(0 + r3); // lwz @ 0x805B2770
    r12 = *(0x10 + r12); // lwz @ 0x805B2774
    /* mtctr r12 */ // 0x805B2778
    /* bctrl  */ // 0x805B277C
    r3 = r29 * r3; // 0x805B2780
    r0 = *(4 + r30); // lwz @ 0x805B2784
    r4 = r0 + r3; // 0x805B2788
    r12 = *(0 + r30); // lwz @ 0x805B278C
    r3 = r30;
    r5 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x805B2798
    /* mtctr r12 */ // 0x805B279C
    /* bctrl  */ // 0x805B27A0
    if (==) goto 0x0x805b27ec;
    r4 = *(8 + r30); // lwz @ 0x805B27AC
    r3 = r30;
    /* li r28, 1 */ // 0x805B27B4
    r0 = r4 + 1; // 0x805B27B8
    *(8 + r30) = r0; // stw @ 0x805B27BC
    r12 = *(0 + r30); // lwz @ 0x805B27C0
    r12 = *(0x10 + r12); // lwz @ 0x805B27C4
    /* mtctr r12 */ // 0x805B27C8
    /* bctrl  */ // 0x805B27CC
    r4 = *(8 + r30); // lwz @ 0x805B27D0
    r0 = *(0xc + r30); // lwz @ 0x805B27D4
    r3 = r4 * r3; // 0x805B27D8
    if (<=) goto 0x0x805b27ec;
    /* li r0, 2 */ // 0x805B27E4
    *(0x14 + r30) = r0; // stw @ 0x805B27E8
    r0 = *(0x14 + r30); // lwz @ 0x805B27EC
    if (!=) goto 0x0x805b2868;
    r29 = *(8 + r30); // lwz @ 0x805B27F8
    if (>=) goto 0x0x805b280c;
    /* li r29, 0 */ // 0x805B2804
    /* b 0x805b282c */ // 0x805B2808
    r12 = *(0 + r30); // lwz @ 0x805B280C
    r3 = r30;
    r12 = *(0x10 + r12); // lwz @ 0x805B2814
    /* mtctr r12 */ // 0x805B2818
    /* bctrl  */ // 0x805B281C
    r3 = r29 * r3; // 0x805B2820
    r0 = *(4 + r30); // lwz @ 0x805B2824
    r29 = r0 + r3; // 0x805B2828
    if (==) goto 0x0x805b2850;
    r12 = *(0 + r30); // lwz @ 0x805B2834
    r3 = r30;
    r4 = r29;
    r5 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x805B2844
    /* mtctr r12 */ // 0x805B2848
    /* bctrl  */ // 0x805B284C
    r12 = *(0 + r30); // lwz @ 0x805B2850
    r3 = r30;
    r4 = r29;
    r12 = *(0x18 + r12); // lwz @ 0x805B285C
    /* mtctr r12 */ // 0x805B2860
    /* bctrl  */ // 0x805B2864
    r0 = *(0x24 + r1); // lwz @ 0x805B2868
    r31 = *(0x1c + r1); // lwz @ 0x805B286C
    r30 = *(0x18 + r1); // lwz @ 0x805B2870
    r29 = *(0x14 + r1); // lwz @ 0x805B2874
    r28 = *(0x10 + r1); // lwz @ 0x805B2878
    return;
}