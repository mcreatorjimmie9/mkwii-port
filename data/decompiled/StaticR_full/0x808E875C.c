/* Function at 0x808E875C, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808E875C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808E8764
    /* slwi r0, r3, 2 */ // 0x808E876C
    *(0xc + r1) = r31; // stw @ 0x808E8770
    *(8 + r1) = r30; // stw @ 0x808E8774
    r3 = *(0 + r4); // lwz @ 0x808E8778
    r3 = *(0 + r3); // lwz @ 0x808E877C
    r3 = r3 + r0; // 0x808E8780
    r30 = *(8 + r3); // lwz @ 0x808E8784
    if (!=) goto 0x0x808e8798;
    /* li r30, 0 */ // 0x808E8790
    /* b 0x808e87ec */ // 0x808E8794
    /* lis r31, 0 */ // 0x808E8798
    r31 = r31 + 0; // 0x808E879C
    if (==) goto 0x0x808e87e8;
    r12 = *(0 + r30); // lwz @ 0x808E87A4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E87AC
    /* mtctr r12 */ // 0x808E87B0
    /* bctrl  */ // 0x808E87B4
    /* b 0x808e87d0 */ // 0x808E87B8
    if (!=) goto 0x0x808e87cc;
    /* li r0, 1 */ // 0x808E87C4
    /* b 0x808e87dc */ // 0x808E87C8
    r3 = *(0 + r3); // lwz @ 0x808E87CC
    if (!=) goto 0x0x808e87bc;
    /* li r0, 0 */ // 0x808E87D8
    if (==) goto 0x0x808e87e8;
    /* b 0x808e87ec */ // 0x808E87E4
    /* li r30, 0 */ // 0x808E87E8
    if (!=) goto 0x0x808e87fc;
    /* li r30, 0 */ // 0x808E87F4
    /* b 0x808e8850 */ // 0x808E87F8
    /* lis r31, 0 */ // 0x808E87FC
    r31 = r31 + 0; // 0x808E8800
    if (==) goto 0x0x808e884c;
    r12 = *(0 + r30); // lwz @ 0x808E8808
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E8810
    /* mtctr r12 */ // 0x808E8814
    /* bctrl  */ // 0x808E8818
    /* b 0x808e8834 */ // 0x808E881C
    if (!=) goto 0x0x808e8830;
    /* li r0, 1 */ // 0x808E8828
    /* b 0x808e8840 */ // 0x808E882C
    r3 = *(0 + r3); // lwz @ 0x808E8830
    if (!=) goto 0x0x808e8820;
    /* li r0, 0 */ // 0x808E883C
    if (==) goto 0x0x808e884c;
    /* b 0x808e8850 */ // 0x808E8848
    /* li r30, 0 */ // 0x808E884C
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808E8854
    r30 = *(8 + r1); // lwz @ 0x808E8858
    r0 = *(0x14 + r1); // lwz @ 0x808E885C
    return;
}