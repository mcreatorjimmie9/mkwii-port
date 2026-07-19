/* Function at 0x80616A3C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80616A3C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80616A48
    r31 = r3;
    r12 = *(0xc + r3); // lwz @ 0x80616A50
    r12 = *(0x24 + r12); // lwz @ 0x80616A54
    /* mtctr r12 */ // 0x80616A58
    /* bctrl  */ // 0x80616A5C
    r12 = *(0xc + r31); // lwz @ 0x80616A60
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x80616A68
    /* mtctr r12 */ // 0x80616A6C
    /* bctrl  */ // 0x80616A70
    r0 = *(0x14 + r1); // lwz @ 0x80616A74
    r31 = *(0xc + r1); // lwz @ 0x80616A78
    return;
}