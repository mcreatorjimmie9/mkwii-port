/* Function at 0x8083118C, size=164 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_8083118C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* li r5, 0 */ // 0x80831194
    /* li r4, -1 */ // 0x80831198
    *(0x24 + r1) = r0; // stw @ 0x8083119C
    /* lis r6, 0 */ // 0x808311A0
    *(0x1a8 + r3) = r5; // sth @ 0x808311A4
    r0 = *(0x78 + r3); // lwz @ 0x808311A8
    *(0x1ac + r3) = r4; // stw @ 0x808311AC
    /* rlwinm. r0, r0, 0, 0x18, 0x19 */ // 0x808311B0
    *(0x1b0 + r3) = r5; // stw @ 0x808311B4
    r5 = *(0 + r6); // lwzu @ 0x808311B8
    *(8 + r1) = r5; // stw @ 0x808311BC
    r4 = *(4 + r6); // lwz @ 0x808311C0
    r0 = *(8 + r6); // lwz @ 0x808311C4
    *(0xc + r1) = r4; // stw @ 0x808311C8
    *(0x10 + r1) = r0; // stw @ 0x808311CC
    if (!=) goto 0x0x808311e0;
    *(0x168 + r3) = r5; // stw @ 0x808311D4
    *(0x16c + r3) = r4; // stw @ 0x808311D8
    *(0x170 + r3) = r0; // stw @ 0x808311DC
    r0 = *(0x78 + r3); // lwz @ 0x808311E0
    /* lis r4, 0 */ // 0x808311E4
    /* lfs f1, 0(r4) */ // 0x808311E8
    /* li r6, 1 */ // 0x808311EC
    r0 = r0 rlwinm 0; // rlwinm
    /* li r4, 0x10e */ // 0x808311F4
    *(0x1ac + r3) = r6; // stw @ 0x808311F8
    /* lis r5, 0 */ // 0x808311FC
    r6 = *(0x9c + r3); // lwz @ 0x80831200
    *(0x1ec + r3) = r4; // stw @ 0x80831204
    /* li r4, 4 */ // 0x80831208
    /* lfs f2, 0(r5) */ // 0x8083120C
    *(0x78 + r3) = r0; // stw @ 0x80831210
    /* stfs f1, 0x1a0(r3) */ // 0x80831214
    r3 = *(0x28 + r6); // lwz @ 0x80831218
    FUN_805E70EC(r4); // bl 0x805E70EC
    r0 = *(0x24 + r1); // lwz @ 0x80831220
    return;
}