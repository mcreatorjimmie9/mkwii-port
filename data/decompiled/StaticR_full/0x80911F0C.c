/* Function at 0x80911F0C, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80911F0C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80911F14
    *(0x14 + r1) = r0; // stw @ 0x80911F18
    *(0xc + r1) = r31; // stw @ 0x80911F1C
    r31 = r3;
    /* lfs f0, 0(r4) */ // 0x80911F24
    /* li r4, 1 */ // 0x80911F28
    /* stfs f0, 0xb4(r3) */ // 0x80911F2C
    r12 = *(0 + r3); // lwz @ 0x80911F30
    r12 = *(0x68 + r12); // lwz @ 0x80911F34
    /* mtctr r12 */ // 0x80911F38
    /* bctrl  */ // 0x80911F3C
    /* li r0, 1 */ // 0x80911F40
    *(0x185 + r31) = r0; // stb @ 0x80911F44
    r31 = *(0xc + r1); // lwz @ 0x80911F48
    r0 = *(0x14 + r1); // lwz @ 0x80911F4C
    return;
}