/* Function at 0x806168D8, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_806168D8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806168E4
    r31 = r3;
    r12 = *(0xc + r3); // lwz @ 0x806168EC
    r12 = *(0xc + r12); // lwz @ 0x806168F0
    /* mtctr r12 */ // 0x806168F4
    /* bctrl  */ // 0x806168F8
    /* li r0, 0 */ // 0x806168FC
    *(0x10 + r31) = r0; // stw @ 0x80616900
    r3 = r31;
    r12 = *(0xc + r31); // lwz @ 0x80616908
    r12 = *(0x18 + r12); // lwz @ 0x8061690C
    /* mtctr r12 */ // 0x80616910
    /* bctrl  */ // 0x80616914
    r0 = *(0x14 + r1); // lwz @ 0x80616918
    r31 = *(0xc + r1); // lwz @ 0x8061691C
    return;
}