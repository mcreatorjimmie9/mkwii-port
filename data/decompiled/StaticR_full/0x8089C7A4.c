/* Function at 0x8089C7A4, size=80 bytes */
/* Stack frame: 16 bytes */

void FUN_8089C7A4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x8089C7AC
    *(0x14 + r1) = r0; // stw @ 0x8089C7B0
    r3 = *(0 + r3); // lwz @ 0x8089C7B4
    if (==) goto 0x0x8089c7e4;
    if (==) goto 0x0x8089c7d8;
    r12 = *(0 + r3); // lwz @ 0x8089C7C4
    /* li r4, 1 */ // 0x8089C7C8
    r12 = *(8 + r12); // lwz @ 0x8089C7CC
    /* mtctr r12 */ // 0x8089C7D0
    /* bctrl  */ // 0x8089C7D4
    /* lis r3, 0 */ // 0x8089C7D8
    /* li r0, 0 */ // 0x8089C7DC
    *(0 + r3) = r0; // stw @ 0x8089C7E0
    r0 = *(0x14 + r1); // lwz @ 0x8089C7E4
    return;
}