/* Function at 0x807F55AC, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807F55AC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807F55B8
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x807F55C0
    r12 = *(0 + r3); // lwz @ 0x807F55C4
    r12 = *(0x14 + r12); // lwz @ 0x807F55C8
    /* mtctr r12 */ // 0x807F55CC
    /* bctrl  */ // 0x807F55D0
    r12 = *(0 + r31); // lwz @ 0x807F55D4
    r3 = r31;
    r12 = *(0x100 + r12); // lwz @ 0x807F55DC
    /* mtctr r12 */ // 0x807F55E0
    /* bctrl  */ // 0x807F55E4
    r12 = *(0 + r31); // lwz @ 0x807F55E8
    r3 = r31;
    r12 = *(0xfc + r12); // lwz @ 0x807F55F0
    /* mtctr r12 */ // 0x807F55F4
    /* bctrl  */ // 0x807F55F8
    r0 = *(0x14 + r1); // lwz @ 0x807F55FC
    r31 = *(0xc + r1); // lwz @ 0x807F5600
    return;
}