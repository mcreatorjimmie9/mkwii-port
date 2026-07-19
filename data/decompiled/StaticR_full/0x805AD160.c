/* Function at 0x805AD160, size=80 bytes */
/* Stack frame: 16 bytes */

void FUN_805AD160(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805AD168
    *(0x14 + r1) = r0; // stw @ 0x805AD16C
    r3 = *(0 + r3); // lwz @ 0x805AD170
    if (==) goto 0x0x805ad1a0;
    if (==) goto 0x0x805ad194;
    r12 = *(0 + r3); // lwz @ 0x805AD180
    /* li r4, 1 */ // 0x805AD184
    r12 = *(8 + r12); // lwz @ 0x805AD188
    /* mtctr r12 */ // 0x805AD18C
    /* bctrl  */ // 0x805AD190
    /* lis r3, 0 */ // 0x805AD194
    /* li r0, 0 */ // 0x805AD198
    *(0 + r3) = r0; // stw @ 0x805AD19C
    r0 = *(0x14 + r1); // lwz @ 0x805AD1A0
    return;
}