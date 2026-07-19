/* Function at 0x807102F4, size=84 bytes */
/* Stack frame: 16 bytes */

int FUN_807102F4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807102FC
    r12 = *(0 + r3); // lwz @ 0x80710300
    r12 = *(0x24 + r12); // lwz @ 0x80710304
    /* mtctr r12 */ // 0x80710308
    /* bctrl  */ // 0x8071030C
    /* lis r4, 0 */ // 0x80710310
    r0 = r3 rlwinm 1; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x80710318
    r4 = *(4 + r3); // lwz @ 0x8071031C
    r3 = *(0xc + r4); // lwz @ 0x80710320
    r4 = *(8 + r4); // lwz @ 0x80710324
    /* lhax r0, r3, r0 */ // 0x80710328
    /* mulli r0, r0, 0x74 */ // 0x8071032C
    r3 = r4 + r0; // 0x80710330
    r0 = *(0x14 + r1); // lwz @ 0x80710334
    r3 = r3 + 0x22; // 0x80710338
    return;
}