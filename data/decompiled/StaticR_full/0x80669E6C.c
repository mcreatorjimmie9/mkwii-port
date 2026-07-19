/* Function at 0x80669E6C, size=80 bytes */
/* Stack frame: 16 bytes */

int FUN_80669E6C(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    r5 = r3;
    *(0x14 + r1) = r0; // stw @ 0x80669E78
    r0 = *(0x18 + r3); // lwz @ 0x80669E7C
    if (==) goto 0x0x80669ea8;
    r3 = r0;
    r5 = *(0x20 + r5); // lwz @ 0x80669E8C
    r12 = *(0 + r3); // lwz @ 0x80669E90
    r12 = *(8 + r12); // lwz @ 0x80669E94
    /* mtctr r12 */ // 0x80669E98
    /* bctrl  */ // 0x80669E9C
    /* li r3, 1 */ // 0x80669EA0
    /* b 0x80669eac */ // 0x80669EA4
    /* li r3, 0 */ // 0x80669EA8
    r0 = *(0x14 + r1); // lwz @ 0x80669EAC
    return;
}