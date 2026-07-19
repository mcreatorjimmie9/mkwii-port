/* Function at 0x808CF4A0, size=80 bytes */
/* Stack frame: 16 bytes */

void FUN_808CF4A0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x808CF4A8
    *(0x14 + r1) = r0; // stw @ 0x808CF4AC
    r3 = *(0 + r3); // lwz @ 0x808CF4B0
    if (==) goto 0x0x808cf4e0;
    if (==) goto 0x0x808cf4d4;
    r12 = *(0 + r3); // lwz @ 0x808CF4C0
    /* li r4, 1 */ // 0x808CF4C4
    r12 = *(8 + r12); // lwz @ 0x808CF4C8
    /* mtctr r12 */ // 0x808CF4CC
    /* bctrl  */ // 0x808CF4D0
    /* lis r3, 0 */ // 0x808CF4D4
    /* li r0, 0 */ // 0x808CF4D8
    *(0 + r3) = r0; // stw @ 0x808CF4DC
    r0 = *(0x14 + r1); // lwz @ 0x808CF4E0
    return;
}