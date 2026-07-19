/* Function at 0x80777150, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80777150(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8077715C
    r31 = r3;
    r3 = *(0xb0 + r3); // lwz @ 0x80777164
    r12 = *(0 + r3); // lwz @ 0x80777168
    r12 = *(0xc + r12); // lwz @ 0x8077716C
    /* mtctr r12 */ // 0x80777170
    /* bctrl  */ // 0x80777174
    r3 = *(0xb0 + r31); // lwz @ 0x80777178
    /* lfs f1, 0x3c(r31) */ // 0x8077717C
    r12 = *(0 + r3); // lwz @ 0x80777180
    r12 = *(0x6c + r12); // lwz @ 0x80777184
    /* mtctr r12 */ // 0x80777188
    /* bctrl  */ // 0x8077718C
    r0 = *(0x14 + r1); // lwz @ 0x80777190
    r31 = *(0xc + r1); // lwz @ 0x80777194
    return;
}