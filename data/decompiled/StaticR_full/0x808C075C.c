/* Function at 0x808C075C, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808C075C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808C0764
    /* slwi r0, r3, 2 */ // 0x808C076C
    *(0xc + r1) = r31; // stw @ 0x808C0770
    *(8 + r1) = r30; // stw @ 0x808C0774
    r3 = *(0 + r4); // lwz @ 0x808C0778
    r3 = *(0 + r3); // lwz @ 0x808C077C
    r3 = r3 + r0; // 0x808C0780
    r30 = *(8 + r3); // lwz @ 0x808C0784
    if (!=) goto 0x0x808c0798;
    /* li r30, 0 */ // 0x808C0790
    /* b 0x808c07ec */ // 0x808C0794
    /* lis r31, 0 */ // 0x808C0798
    r31 = r31 + 0; // 0x808C079C
    if (==) goto 0x0x808c07e8;
    r12 = *(0 + r30); // lwz @ 0x808C07A4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C07AC
    /* mtctr r12 */ // 0x808C07B0
    /* bctrl  */ // 0x808C07B4
    /* b 0x808c07d0 */ // 0x808C07B8
    if (!=) goto 0x0x808c07cc;
    /* li r0, 1 */ // 0x808C07C4
    /* b 0x808c07dc */ // 0x808C07C8
    r3 = *(0 + r3); // lwz @ 0x808C07CC
    if (!=) goto 0x0x808c07bc;
    /* li r0, 0 */ // 0x808C07D8
    if (==) goto 0x0x808c07e8;
    /* b 0x808c07ec */ // 0x808C07E4
    /* li r30, 0 */ // 0x808C07E8
    if (!=) goto 0x0x808c07fc;
    /* li r30, 0 */ // 0x808C07F4
    /* b 0x808c0850 */ // 0x808C07F8
    /* lis r31, 0 */ // 0x808C07FC
    r31 = r31 + 0; // 0x808C0800
    if (==) goto 0x0x808c084c;
    r12 = *(0 + r30); // lwz @ 0x808C0808
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C0810
    /* mtctr r12 */ // 0x808C0814
    /* bctrl  */ // 0x808C0818
    /* b 0x808c0834 */ // 0x808C081C
    if (!=) goto 0x0x808c0830;
    /* li r0, 1 */ // 0x808C0828
    /* b 0x808c0840 */ // 0x808C082C
    r3 = *(0 + r3); // lwz @ 0x808C0830
    if (!=) goto 0x0x808c0820;
    /* li r0, 0 */ // 0x808C083C
    if (==) goto 0x0x808c084c;
    /* b 0x808c0850 */ // 0x808C0848
    /* li r30, 0 */ // 0x808C084C
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808C0854
    r30 = *(8 + r1); // lwz @ 0x808C0858
    r0 = *(0x14 + r1); // lwz @ 0x808C085C
    return;
}