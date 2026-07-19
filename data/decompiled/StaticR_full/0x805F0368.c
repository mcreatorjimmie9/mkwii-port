/* Function at 0x805F0368, size=300 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F0368(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x805F0370
    r8 = r4 rlwinm 2; // rlwinm
    *(0x24 + r1) = r0; // stw @ 0x805F0378
    r7 = r4 rlwinm 3; // rlwinm
    /* lfs f0, 0(r6) */ // 0x805F0384
    *(0x1c + r1) = r31; // stw @ 0x805F0388
    /* li r0, 0 */ // 0x805F038C
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805F0394
    r30 = *(0x14 + r3); // lwz @ 0x805F0398
    r9 = *(0xc + r30); // lwz @ 0x805F039C
    /* lwzx r5, r9, r8 */ // 0x805F03A0
    /* lfs f2, 0x14(r5) */ // 0x805F03A4
    /* stfs f2, 0x2c(r3) */ // 0x805F03A8
    /* lfs f1, 0x18(r5) */ // 0x805F03AC
    /* stfs f1, 0x30(r3) */ // 0x805F03B0
    /* lfs f1, 0x1c(r5) */ // 0x805F03B4
    /* stfs f1, 0x34(r3) */ // 0x805F03B8
    /* lfs f1, 8(r5) */ // 0x805F03BC
    /* stfs f1, 0x38(r3) */ // 0x805F03C0
    /* lfs f1, 0xc(r5) */ // 0x805F03C4
    /* stfs f1, 0x3c(r3) */ // 0x805F03C8
    /* lfs f1, 0x10(r5) */ // 0x805F03CC
    /* stfs f1, 0x40(r3) */ // 0x805F03D0
    r12 = *(0x2c + r5); // lbz @ 0x805F03D4
    *(0x44 + r3) = r12; // stb @ 0x805F03D8
    r11 = *(0x2d + r5); // lbz @ 0x805F03DC
    *(0x45 + r3) = r11; // stb @ 0x805F03E0
    r10 = *(0x2e + r5); // lbz @ 0x805F03E4
    *(0x46 + r3) = r10; // stb @ 0x805F03E8
    r9 = *(0x2f + r5); // lbz @ 0x805F03EC
    *(0x47 + r3) = r9; // stb @ 0x805F03F0
    r5 = *(0x10 + r30); // lwz @ 0x805F03F4
    /* lbzux r8, r5, r7 */ // 0x805F03F8
    *(0x48 + r3) = r8; // stb @ 0x805F03FC
    r7 = *(1 + r5); // lbz @ 0x805F0400
    *(0x49 + r3) = r7; // stb @ 0x805F0404
    r6 = *(2 + r5); // lbz @ 0x805F0408
    *(0x4a + r3) = r6; // stb @ 0x805F040C
    r5 = *(3 + r5); // lbz @ 0x805F0410
    *(0x4b + r3) = r5; // stb @ 0x805F0414
    *(0x4c + r3) = r8; // stb @ 0x805F0418
    *(0x4d + r3) = r7; // stb @ 0x805F041C
    *(0x4e + r3) = r6; // stb @ 0x805F0420
    *(0x4f + r3) = r5; // stb @ 0x805F0424
    /* stfs f0, 0x50(r3) */ // 0x805F0428
    *(0x54 + r3) = r0; // stb @ 0x805F042C
    /* stfs f0, 0x28(r3) */ // 0x805F0430
    *(0x21 + r3) = r4; // stb @ 0x805F0434
    if (==) goto 0x0x805f0504;
    r4 = *(0x18 + r3); // lwz @ 0x805F043C
    *(0x10 + r1) = r8; // stb @ 0x805F0440
    /* stfs f2, 0x14(r4) */ // 0x805F0444
    /* lfs f0, 0x30(r3) */ // 0x805F0448
    /* stfs f0, 0x18(r4) */ // 0x805F044C
    /* lfs f0, 0x34(r3) */ // 0x805F0450
    r3 = r4;
    *(0x11 + r1) = r7; // stb @ 0x805F0458
    *(0x12 + r1) = r6; // stb @ 0x805F045C
    *(0x13 + r1) = r5; // stb @ 0x805F0460
    *(0x14 + r1) = r12; // stb @ 0x805F0464
    *(0x15 + r1) = r11; // stb @ 0x805F0468
    *(0x16 + r1) = r10; // stb @ 0x805F046C
    *(0x17 + r1) = r9; // stb @ 0x805F0470
    /* stfs f0, 0x1c(r4) */ // 0x805F0474
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x18 + r31); // lwz @ 0x805F047C
    /* lfs f0, 0x38(r31) */ // 0x805F0480
    /* stfs f0, 8(r3) */ // 0x805F0484
    /* lfs f0, 0x3c(r31) */ // 0x805F0488
    /* stfs f0, 0xc(r3) */ // 0x805F048C
    /* lfs f0, 0x40(r31) */ // 0x805F0490
}