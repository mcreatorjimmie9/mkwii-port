/* Function at 0x80710348, size=84 bytes */
/* Stack frame: 16 bytes */

int FUN_80710348(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80710350
    r12 = *(0 + r3); // lwz @ 0x80710354
    r12 = *(0x24 + r12); // lwz @ 0x80710358
    /* mtctr r12 */ // 0x8071035C
    /* bctrl  */ // 0x80710360
    /* lis r4, 0 */ // 0x80710364
    r0 = r3 rlwinm 1; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8071036C
    r4 = *(4 + r3); // lwz @ 0x80710370
    r3 = *(0xc + r4); // lwz @ 0x80710374
    r4 = *(8 + r4); // lwz @ 0x80710378
    /* lhax r0, r3, r0 */ // 0x8071037C
    /* mulli r0, r0, 0x74 */ // 0x80710380
    r3 = r4 + r0; // 0x80710384
    r0 = *(0x14 + r1); // lwz @ 0x80710388
    r3 = r3 + 0x22; // 0x8071038C
    return;
}