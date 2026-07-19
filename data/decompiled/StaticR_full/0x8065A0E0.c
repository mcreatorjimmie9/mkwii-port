/* Function at 0x8065A0E0, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8065A0E0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8065A0EC
    r31 = r3;
    r0 = *(8 + r3); // lbz @ 0x8065A0F4
    if (==) goto 0x0x8065a118;
    r12 = *(0 + r3); // lwz @ 0x8065A100
    r12 = *(0x10 + r12); // lwz @ 0x8065A104
    /* mtctr r12 */ // 0x8065A108
    /* bctrl  */ // 0x8065A10C
    /* li r0, 0 */ // 0x8065A110
    *(8 + r31) = r0; // stb @ 0x8065A114
    r0 = *(0x14 + r1); // lwz @ 0x8065A118
    r31 = *(0xc + r1); // lwz @ 0x8065A11C
    return;
}