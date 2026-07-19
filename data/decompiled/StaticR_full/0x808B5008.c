/* Function at 0x808B5008, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808B5008(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808B5010
    /* slwi r0, r3, 2 */ // 0x808B5018
    *(0xc + r1) = r31; // stw @ 0x808B501C
    *(8 + r1) = r30; // stw @ 0x808B5020
    r3 = *(0 + r4); // lwz @ 0x808B5024
    r3 = *(0 + r3); // lwz @ 0x808B5028
    r3 = r3 + r0; // 0x808B502C
    r30 = *(8 + r3); // lwz @ 0x808B5030
    if (!=) goto 0x0x808b5044;
    /* li r30, 0 */ // 0x808B503C
    /* b 0x808b5098 */ // 0x808B5040
    /* lis r31, 0 */ // 0x808B5044
    r31 = r31 + 0; // 0x808B5048
    if (==) goto 0x0x808b5094;
    r12 = *(0 + r30); // lwz @ 0x808B5050
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B5058
    /* mtctr r12 */ // 0x808B505C
    /* bctrl  */ // 0x808B5060
    /* b 0x808b507c */ // 0x808B5064
    if (!=) goto 0x0x808b5078;
    /* li r0, 1 */ // 0x808B5070
    /* b 0x808b5088 */ // 0x808B5074
    r3 = *(0 + r3); // lwz @ 0x808B5078
    if (!=) goto 0x0x808b5068;
    /* li r0, 0 */ // 0x808B5084
    if (==) goto 0x0x808b5094;
    /* b 0x808b5098 */ // 0x808B5090
    /* li r30, 0 */ // 0x808B5094
    if (!=) goto 0x0x808b50a8;
    /* li r30, 0 */ // 0x808B50A0
    /* b 0x808b50fc */ // 0x808B50A4
    /* lis r31, 0 */ // 0x808B50A8
    r31 = r31 + 0; // 0x808B50AC
    if (==) goto 0x0x808b50f8;
    r12 = *(0 + r30); // lwz @ 0x808B50B4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B50BC
    /* mtctr r12 */ // 0x808B50C0
    /* bctrl  */ // 0x808B50C4
    /* b 0x808b50e0 */ // 0x808B50C8
    if (!=) goto 0x0x808b50dc;
    /* li r0, 1 */ // 0x808B50D4
    /* b 0x808b50ec */ // 0x808B50D8
    r3 = *(0 + r3); // lwz @ 0x808B50DC
    if (!=) goto 0x0x808b50cc;
    /* li r0, 0 */ // 0x808B50E8
    if (==) goto 0x0x808b50f8;
    /* b 0x808b50fc */ // 0x808B50F4
    /* li r30, 0 */ // 0x808B50F8
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808B5100
    r30 = *(8 + r1); // lwz @ 0x808B5104
    r0 = *(0x14 + r1); // lwz @ 0x808B5108
    return;
}