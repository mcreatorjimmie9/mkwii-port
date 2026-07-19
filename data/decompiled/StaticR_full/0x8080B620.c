/* Function at 0x8080B620, size=84 bytes */
/* Stack frame: 16 bytes */

int FUN_8080B620(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8080B628
    r12 = *(0 + r3); // lwz @ 0x8080B62C
    r12 = *(0x24 + r12); // lwz @ 0x8080B630
    /* mtctr r12 */ // 0x8080B634
    /* bctrl  */ // 0x8080B638
    /* lis r4, 0 */ // 0x8080B63C
    r0 = r3 rlwinm 1; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8080B644
    r4 = *(4 + r3); // lwz @ 0x8080B648
    r3 = *(0xc + r4); // lwz @ 0x8080B64C
    r4 = *(8 + r4); // lwz @ 0x8080B650
    /* lhax r0, r3, r0 */ // 0x8080B654
    /* mulli r0, r0, 0x74 */ // 0x8080B658
    r3 = r4 + r0; // 0x8080B65C
    r0 = *(0x14 + r1); // lwz @ 0x8080B660
    r3 = r3 + 0x22; // 0x8080B664
    return;
}