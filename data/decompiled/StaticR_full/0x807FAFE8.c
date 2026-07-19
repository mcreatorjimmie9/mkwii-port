/* Function at 0x807FAFE8, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807FAFE8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x807FAFF0
    *(0x14 + r1) = r0; // stw @ 0x807FAFF4
    /* li r0, 0 */ // 0x807FAFF8
    *(0xc + r1) = r31; // stw @ 0x807FAFFC
    r31 = r3;
    *(0xb0 + r3) = r0; // stw @ 0x807FB004
    r12 = *(0 + r3); // lwz @ 0x807FB008
    r12 = *(0x68 + r12); // lwz @ 0x807FB00C
    /* mtctr r12 */ // 0x807FB010
    /* bctrl  */ // 0x807FB014
    r12 = *(0 + r31); // lwz @ 0x807FB018
    r3 = r31;
    r12 = *(0x30 + r12); // lwz @ 0x807FB020
    /* mtctr r12 */ // 0x807FB024
    /* bctrl  */ // 0x807FB028
    r0 = *(0x20 + r3); // lwz @ 0x807FB02C
    r0 = r0 | 0x2121; // 0x807FB030
    r0 = r0 | 0x2121; // 0x807FB034
    *(0x20 + r3) = r0; // stw @ 0x807FB038
    r31 = *(0xc + r1); // lwz @ 0x807FB03C
    r0 = *(0x14 + r1); // lwz @ 0x807FB040
    return;
}