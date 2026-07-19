/* Function at 0x805B035C, size=284 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B035C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x805B0364
    /* lis r4, 0 */ // 0x805B0368
    *(0x14 + r1) = r0; // stw @ 0x805B036C
    /* lis r10, 0 */ // 0x805B0370
    /* lfs f1, 0(r4) */ // 0x805B0374
    /* lis r4, 0 */ // 0x805B0378
    *(0xc + r1) = r31; // stw @ 0x805B037C
    /* lis r7, 0 */ // 0x805B0380
    /* lfs f0, 0(r4) */ // 0x805B0384
    /* lis r4, 0 */ // 0x805B0388
    *(8 + r1) = r30; // stw @ 0x805B038C
    /* li r30, 0 */ // 0x805B0390
    /* li r9, 7 */ // 0x805B0394
    r7 = r7 + 0; // 0x805B0398
    r6 = *(0x4c + r3); // lbz @ 0x805B039C
    r5 = r5 + 0; // 0x805B03A0
    r0 = *(0x8c + r3); // lbz @ 0x805B03A4
    r6 = r6 rlwinm 0; // rlwinm
    r8 = *(0x18 + r3); // lbz @ 0x805B03B0
    *(0 + r3) = r5; // stw @ 0x805B03B4
    r0 = r0 rlwinm 0; // rlwinm
    r8 = r8 rlwinm 0; // rlwinm
    r4 = r4 + 0; // 0x805B03C0
    *(0x4c + r3) = r6; // stb @ 0x805B03C4
    r5 = r6 rlwinm 0; // rlwinm
    r31 = r3;
    *(4 + r3) = r10; // stw @ 0x805B03D0
    *(8 + r3) = r30; // sth @ 0x805B03D4
    *(0xa + r3) = r30; // sth @ 0x805B03D8
    /* stfs f1, 0x10(r3) */ // 0x805B03DC
    /* stfs f1, 0xc(r3) */ // 0x805B03E0
    *(0x14 + r3) = r9; // stb @ 0x805B03E4
    *(0x15 + r3) = r9; // stb @ 0x805B03E8
    *(0x16 + r3) = r30; // stb @ 0x805B03EC
    *(0x17 + r3) = r30; // stb @ 0x805B03F0
    *(0x18 + r3) = r8; // stb @ 0x805B03F4
    *(0x1c + r3) = r7; // stw @ 0x805B03F8
    *(0x20 + r3) = r30; // sth @ 0x805B03FC
    *(0x22 + r3) = r30; // sth @ 0x805B0400
    /* stfs f1, 0x28(r3) */ // 0x805B0404
    /* stfs f1, 0x24(r3) */ // 0x805B0408
    *(0x34 + r3) = r9; // stb @ 0x805B040C
    *(0x35 + r3) = r9; // stb @ 0x805B0410
    /* stfs f0, 0x38(r3) */ // 0x805B0414
    /* stfs f0, 0x3c(r3) */ // 0x805B0418
    /* stfs f1, 0x44(r3) */ // 0x805B041C
    /* stfs f1, 0x40(r3) */ // 0x805B0420
    /* stfs f1, 0x48(r3) */ // 0x805B0424
    *(0x4c + r3) = r5; // stb @ 0x805B0428
    *(0x50 + r3) = r30; // stb @ 0x805B042C
    *(0x54 + r3) = r9; // stw @ 0x805B0430
    *(0x58 + r3) = r30; // stb @ 0x805B0434
    *(0x5c + r3) = r7; // stw @ 0x805B0438
    *(0x60 + r3) = r30; // sth @ 0x805B043C
    *(0x62 + r3) = r30; // sth @ 0x805B0440
    /* stfs f1, 0x68(r3) */ // 0x805B0444
    /* stfs f1, 0x64(r3) */ // 0x805B0448
    *(0x74 + r3) = r9; // stb @ 0x805B044C
    *(0x75 + r3) = r9; // stb @ 0x805B0450
    /* stfs f0, 0x78(r3) */ // 0x805B0454
    /* stfs f0, 0x7c(r3) */ // 0x805B0458
    /* stfs f1, 0x84(r3) */ // 0x805B045C
    /* stfs f1, 0x80(r3) */ // 0x805B0460
    /* stfs f1, 0x88(r3) */ // 0x805B0464
    *(0x8c + r3) = r0; // stb @ 0x805B0468
    *(0 + r3) = r4; // stw @ 0x805B046C
    /* li r3, 0x18 */ // 0x805B0470
    FUN_805E3430(r3); // bl 0x805E3430
}