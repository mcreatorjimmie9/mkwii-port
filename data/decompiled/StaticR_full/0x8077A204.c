/* Function at 0x8077A204, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8077A204(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8077A20C
    *(0x14 + r1) = r0; // stw @ 0x8077A210
    *(0xc + r1) = r31; // stw @ 0x8077A214
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8077A21C
    r12 = *(0x68 + r12); // lwz @ 0x8077A220
    /* mtctr r12 */ // 0x8077A224
    /* bctrl  */ // 0x8077A228
    r12 = *(0 + r31); // lwz @ 0x8077A22C
    r3 = r31;
    r12 = *(0x90 + r12); // lwz @ 0x8077A234
    /* mtctr r12 */ // 0x8077A238
    /* bctrl  */ // 0x8077A23C
    r0 = *(0x14 + r1); // lwz @ 0x8077A240
    r31 = *(0xc + r1); // lwz @ 0x8077A244
    return;
}