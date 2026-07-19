/* Function at 0x8076587C, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8076587C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80765888
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80765890
    r12 = *(0xc + r12); // lwz @ 0x80765894
    /* mtctr r12 */ // 0x80765898
    /* bctrl  */ // 0x8076589C
    r12 = *(0 + r31); // lwz @ 0x807658A0
    r3 = r31;
    /* li r4, 1 */ // 0x807658A8
    r12 = *(0xec + r12); // lwz @ 0x807658AC
    /* mtctr r12 */ // 0x807658B0
    /* bctrl  */ // 0x807658B4
    r0 = *(0x14 + r1); // lwz @ 0x807658B8
    r31 = *(0xc + r1); // lwz @ 0x807658BC
    return;
}