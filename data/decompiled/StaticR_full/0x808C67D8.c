/* Function at 0x808C67D8, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808C67D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808C67E0
    /* slwi r0, r3, 2 */ // 0x808C67E8
    *(0xc + r1) = r31; // stw @ 0x808C67EC
    *(8 + r1) = r30; // stw @ 0x808C67F0
    r3 = *(0 + r4); // lwz @ 0x808C67F4
    r3 = *(0 + r3); // lwz @ 0x808C67F8
    r3 = r3 + r0; // 0x808C67FC
    r30 = *(8 + r3); // lwz @ 0x808C6800
    if (!=) goto 0x0x808c6814;
    /* li r30, 0 */ // 0x808C680C
    /* b 0x808c6868 */ // 0x808C6810
    /* lis r31, 0 */ // 0x808C6814
    r31 = r31 + 0; // 0x808C6818
    if (==) goto 0x0x808c6864;
    r12 = *(0 + r30); // lwz @ 0x808C6820
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C6828
    /* mtctr r12 */ // 0x808C682C
    /* bctrl  */ // 0x808C6830
    /* b 0x808c684c */ // 0x808C6834
    if (!=) goto 0x0x808c6848;
    /* li r0, 1 */ // 0x808C6840
    /* b 0x808c6858 */ // 0x808C6844
    r3 = *(0 + r3); // lwz @ 0x808C6848
    if (!=) goto 0x0x808c6838;
    /* li r0, 0 */ // 0x808C6854
    if (==) goto 0x0x808c6864;
    /* b 0x808c6868 */ // 0x808C6860
    /* li r30, 0 */ // 0x808C6864
    if (!=) goto 0x0x808c6878;
    /* li r30, 0 */ // 0x808C6870
    /* b 0x808c68cc */ // 0x808C6874
    /* lis r31, 0 */ // 0x808C6878
    r31 = r31 + 0; // 0x808C687C
    if (==) goto 0x0x808c68c8;
    r12 = *(0 + r30); // lwz @ 0x808C6884
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C688C
    /* mtctr r12 */ // 0x808C6890
    /* bctrl  */ // 0x808C6894
    /* b 0x808c68b0 */ // 0x808C6898
    if (!=) goto 0x0x808c68ac;
    /* li r0, 1 */ // 0x808C68A4
    /* b 0x808c68bc */ // 0x808C68A8
    r3 = *(0 + r3); // lwz @ 0x808C68AC
    if (!=) goto 0x0x808c689c;
    /* li r0, 0 */ // 0x808C68B8
    if (==) goto 0x0x808c68c8;
    /* b 0x808c68cc */ // 0x808C68C4
    /* li r30, 0 */ // 0x808C68C8
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808C68D0
    r30 = *(8 + r1); // lwz @ 0x808C68D4
    r0 = *(0x14 + r1); // lwz @ 0x808C68D8
    return;
}