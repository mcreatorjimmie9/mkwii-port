/* Function at 0x80657B9C, size=68 bytes */
/* Stack frame: 16 bytes */

void FUN_80657B9C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    r0 = *(0x522c + r3); // lbz @ 0x80657BA0
    if (==) goto 0x0x80657bd8;
    /* lis r0, 0x4330 */ // 0x80657BAC
    *(0xc + r1) = r4; // stw @ 0x80657BB0
    /* lis r5, 0 */ // 0x80657BB4
    /* lis r4, 0 */ // 0x80657BB8
    *(8 + r1) = r0; // stw @ 0x80657BBC
    /* lfd f2, 0(r5) */ // 0x80657BC0
    /* lfd f1, 8(r1) */ // 0x80657BC4
    /* lfs f0, 0(r4) */ // 0x80657BC8
    /* fsubs f1, f1, f2 */ // 0x80657BCC
    /* fmuls f0, f0, f1 */ // 0x80657BD0
    /* stfs f0, 0x50(r3) */ // 0x80657BD4
    return;
}