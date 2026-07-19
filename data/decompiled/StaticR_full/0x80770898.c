/* Function at 0x80770898, size=76 bytes */
/* Stack frame: 16 bytes */

void FUN_80770898(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x807708A0
    *(0x14 + r1) = r0; // stw @ 0x807708A4
    r3 = *(0 + r3); // lwz @ 0x807708A8
    if (==) goto 0x0x807708c8;
    r12 = *(0 + r3); // lwz @ 0x807708B4
    /* li r4, 1 */ // 0x807708B8
    r12 = *(8 + r12); // lwz @ 0x807708BC
    /* mtctr r12 */ // 0x807708C0
    /* bctrl  */ // 0x807708C4
    /* lis r3, 0 */ // 0x807708C8
    /* li r0, 0 */ // 0x807708CC
    *(0 + r3) = r0; // stw @ 0x807708D0
    r0 = *(0x14 + r1); // lwz @ 0x807708D4
    return;
}