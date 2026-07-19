/* Function at 0x805A8E6C, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_805A8E6C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805A8E78
    r31 = r3;
    r4 = *(8 + r3); // lwz @ 0x805A8E80
    if (==) goto 0x0x805a8eb0;
    r3 = *(0x10 + r3); // lwz @ 0x805A8E8C
    r12 = *(0 + r3); // lwz @ 0x805A8E90
    r12 = *(0x18 + r12); // lwz @ 0x805A8E94
    /* mtctr r12 */ // 0x805A8E98
    /* bctrl  */ // 0x805A8E9C
    /* li r0, 0 */ // 0x805A8EA0
    *(8 + r31) = r0; // stw @ 0x805A8EA4
    *(0xc + r31) = r0; // stw @ 0x805A8EA8
    *(0x10 + r31) = r0; // stw @ 0x805A8EAC
    r4 = *(0x14 + r31); // lwz @ 0x805A8EB0
    if (==) goto 0x0x805a8ee0;
    r3 = *(0x1c + r31); // lwz @ 0x805A8EBC
    r12 = *(0 + r3); // lwz @ 0x805A8EC0
    r12 = *(0x18 + r12); // lwz @ 0x805A8EC4
    /* mtctr r12 */ // 0x805A8EC8
    /* bctrl  */ // 0x805A8ECC
    /* li r0, 0 */ // 0x805A8ED0
    *(0x14 + r31) = r0; // stw @ 0x805A8ED4
    *(0x18 + r31) = r0; // stw @ 0x805A8ED8
    *(0x1c + r31) = r0; // stw @ 0x805A8EDC
    r0 = *(0x14 + r1); // lwz @ 0x805A8EE0
    r31 = *(0xc + r1); // lwz @ 0x805A8EE4
    return;
}