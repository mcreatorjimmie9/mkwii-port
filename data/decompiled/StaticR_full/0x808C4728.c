/* Function at 0x808C4728, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808C4728(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808C4730
    /* slwi r0, r3, 2 */ // 0x808C4738
    *(0xc + r1) = r31; // stw @ 0x808C473C
    *(8 + r1) = r30; // stw @ 0x808C4740
    r3 = *(0 + r4); // lwz @ 0x808C4744
    r3 = *(0 + r3); // lwz @ 0x808C4748
    r3 = r3 + r0; // 0x808C474C
    r30 = *(8 + r3); // lwz @ 0x808C4750
    if (!=) goto 0x0x808c4764;
    /* li r30, 0 */ // 0x808C475C
    /* b 0x808c47b8 */ // 0x808C4760
    /* lis r31, 0 */ // 0x808C4764
    r31 = r31 + 0; // 0x808C4768
    if (==) goto 0x0x808c47b4;
    r12 = *(0 + r30); // lwz @ 0x808C4770
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C4778
    /* mtctr r12 */ // 0x808C477C
    /* bctrl  */ // 0x808C4780
    /* b 0x808c479c */ // 0x808C4784
    if (!=) goto 0x0x808c4798;
    /* li r0, 1 */ // 0x808C4790
    /* b 0x808c47a8 */ // 0x808C4794
    r3 = *(0 + r3); // lwz @ 0x808C4798
    if (!=) goto 0x0x808c4788;
    /* li r0, 0 */ // 0x808C47A4
    if (==) goto 0x0x808c47b4;
    /* b 0x808c47b8 */ // 0x808C47B0
    /* li r30, 0 */ // 0x808C47B4
    if (!=) goto 0x0x808c47c8;
    /* li r30, 0 */ // 0x808C47C0
    /* b 0x808c481c */ // 0x808C47C4
    /* lis r31, 0 */ // 0x808C47C8
    r31 = r31 + 0; // 0x808C47CC
    if (==) goto 0x0x808c4818;
    r12 = *(0 + r30); // lwz @ 0x808C47D4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C47DC
    /* mtctr r12 */ // 0x808C47E0
    /* bctrl  */ // 0x808C47E4
    /* b 0x808c4800 */ // 0x808C47E8
    if (!=) goto 0x0x808c47fc;
    /* li r0, 1 */ // 0x808C47F4
    /* b 0x808c480c */ // 0x808C47F8
    r3 = *(0 + r3); // lwz @ 0x808C47FC
    if (!=) goto 0x0x808c47ec;
    /* li r0, 0 */ // 0x808C4808
    if (==) goto 0x0x808c4818;
    /* b 0x808c481c */ // 0x808C4814
    /* li r30, 0 */ // 0x808C4818
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808C4820
    r30 = *(8 + r1); // lwz @ 0x808C4824
    r0 = *(0x14 + r1); // lwz @ 0x808C4828
    return;
}