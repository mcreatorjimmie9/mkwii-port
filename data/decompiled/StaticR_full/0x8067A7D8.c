/* Function at 0x8067A7D8, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8067A7D8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8067A7E8
    r3 = *(0x64 + r3); // lwz @ 0x8067A7EC
    r30 = *(0xc + r3); // lwz @ 0x8067A7F0
    if (!=) goto 0x0x8067a804;
    /* li r30, 0 */ // 0x8067A7FC
    /* b 0x8067a858 */ // 0x8067A800
    /* lis r31, 0 */ // 0x8067A804
    r31 = r31 + 0; // 0x8067A808
    if (==) goto 0x0x8067a854;
    r12 = *(0 + r30); // lwz @ 0x8067A810
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8067A818
    /* mtctr r12 */ // 0x8067A81C
    /* bctrl  */ // 0x8067A820
    /* b 0x8067a83c */ // 0x8067A824
    if (!=) goto 0x0x8067a838;
    /* li r0, 1 */ // 0x8067A830
    /* b 0x8067a848 */ // 0x8067A834
    r3 = *(0 + r3); // lwz @ 0x8067A838
    if (!=) goto 0x0x8067a828;
    /* li r0, 0 */ // 0x8067A844
    if (==) goto 0x0x8067a854;
    /* b 0x8067a858 */ // 0x8067A850
    /* li r30, 0 */ // 0x8067A854
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8067A85C
    r30 = *(8 + r1); // lwz @ 0x8067A860
    r0 = *(0x14 + r1); // lwz @ 0x8067A864
    return;
}