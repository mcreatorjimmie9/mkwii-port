/* Function at 0x807560F0, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807560F0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x807560F8
    *(0x14 + r1) = r0; // stw @ 0x807560FC
    *(0xc + r1) = r31; // stw @ 0x80756100
    r31 = r3;
    r3 = *(8 + r3); // lwz @ 0x80756108
    r12 = *(0 + r3); // lwz @ 0x8075610C
    r12 = *(0xc + r12); // lwz @ 0x80756110
    /* mtctr r12 */ // 0x80756114
    /* bctrl  */ // 0x80756118
    r3 = *(0xe4 + r31); // lwz @ 0x8075611C
    /* li r4, 0 */ // 0x80756120
    r12 = *(0 + r3); // lwz @ 0x80756124
    r12 = *(0xc + r12); // lwz @ 0x80756128
    /* mtctr r12 */ // 0x8075612C
    /* bctrl  */ // 0x80756130
    /* li r0, 0 */ // 0x80756134
    *(0x100 + r31) = r0; // stb @ 0x80756138
    r31 = *(0xc + r1); // lwz @ 0x8075613C
    r0 = *(0x14 + r1); // lwz @ 0x80756140
    return;
}