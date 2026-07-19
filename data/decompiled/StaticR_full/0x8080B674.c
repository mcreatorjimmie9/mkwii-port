/* Function at 0x8080B674, size=84 bytes */
/* Stack frame: 16 bytes */

int FUN_8080B674(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8080B67C
    r12 = *(0 + r3); // lwz @ 0x8080B680
    r12 = *(0x24 + r12); // lwz @ 0x8080B684
    /* mtctr r12 */ // 0x8080B688
    /* bctrl  */ // 0x8080B68C
    /* lis r4, 0 */ // 0x8080B690
    r0 = r3 rlwinm 1; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8080B698
    r4 = *(4 + r3); // lwz @ 0x8080B69C
    r3 = *(0xc + r4); // lwz @ 0x8080B6A0
    r4 = *(8 + r4); // lwz @ 0x8080B6A4
    /* lhax r0, r3, r0 */ // 0x8080B6A8
    /* mulli r0, r0, 0x74 */ // 0x8080B6AC
    r3 = r4 + r0; // 0x8080B6B0
    r0 = *(0x14 + r1); // lwz @ 0x8080B6B4
    r3 = r3 + 0x22; // 0x8080B6B8
    return;
}