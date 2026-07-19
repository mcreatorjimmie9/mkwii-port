/* Function at 0x805E9484, size=72 bytes */
/* Stack frame: 16 bytes */

void FUN_805E9484(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805E948C
    r3 = *(0xc + r3); // lwz @ 0x805E9490
    if (==) goto 0x0x805e94bc;
    /* lis r4, 0 */ // 0x805E949C
    r4 = r4 + 0; // 0x805E94A0
    *(8 + r1) = r4; // stw @ 0x805E94A4
    r12 = *(0 + r3); // lwz @ 0x805E94AC
    r12 = *(8 + r12); // lwz @ 0x805E94B0
    /* mtctr r12 */ // 0x805E94B4
    /* bctrl  */ // 0x805E94B8
    r0 = *(0x14 + r1); // lwz @ 0x805E94BC
    return;
}