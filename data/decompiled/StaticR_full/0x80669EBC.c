/* Function at 0x80669EBC, size=80 bytes */
/* Stack frame: 16 bytes */

int FUN_80669EBC(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    r5 = r3;
    *(0x14 + r1) = r0; // stw @ 0x80669EC8
    r0 = *(0x1c + r3); // lwz @ 0x80669ECC
    if (==) goto 0x0x80669ef8;
    r3 = r0;
    r5 = *(0x20 + r5); // lwz @ 0x80669EDC
    r12 = *(0 + r3); // lwz @ 0x80669EE0
    r12 = *(8 + r12); // lwz @ 0x80669EE4
    /* mtctr r12 */ // 0x80669EE8
    /* bctrl  */ // 0x80669EEC
    /* li r3, 1 */ // 0x80669EF0
    /* b 0x80669efc */ // 0x80669EF4
    /* li r3, 0 */ // 0x80669EF8
    r0 = *(0x14 + r1); // lwz @ 0x80669EFC
    return;
}