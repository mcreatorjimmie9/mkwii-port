/* Function at 0x807D6E7C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807D6E7C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D6E88
    r31 = r3;
    r12 = *(0x34 + r3); // lwz @ 0x807D6E90
    r12 = *(0xc + r12); // lwz @ 0x807D6E94
    /* mtctr r12 */ // 0x807D6E98
    /* bctrl  */ // 0x807D6E9C
    /* li r0, 0 */ // 0x807D6EA0
    *(0x20c + r31) = r0; // stb @ 0x807D6EA4
    r31 = *(0xc + r1); // lwz @ 0x807D6EA8
    r0 = *(0x14 + r1); // lwz @ 0x807D6EAC
    return;
}