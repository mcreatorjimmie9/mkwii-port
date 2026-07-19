/* Function at 0x805B1394, size=220 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805B1394(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805B13A8
    r30 = r3;
    FUN_805B0DC4(); // bl 0x805B0DC4
    r0 = *(0xe4 + r30); // lbz @ 0x805B13B4
    if (==) goto 0x0x805b1428;
    r3 = *(0x3c + r30); // lbz @ 0x805B13C0
    /* lis r4, 0 */ // 0x805B13C4
    /* lfs f0, 0(r4) */ // 0x805B13C8
    /* li r5, 0 */ // 0x805B13CC
    /* li r4, 7 */ // 0x805B13D0
    r0 = *(0x54 + r30); // lbz @ 0x805B13D4
    r3 = r3 rlwinm 0; // rlwinm
    *(0x2c + r30) = r5; // sth @ 0x805B13DC
    r0 = r0 rlwinm 0; // rlwinm
    *(0x2e + r30) = r5; // sth @ 0x805B13E4
    /* stfs f0, 0x34(r30) */ // 0x805B13E8
    /* stfs f0, 0x30(r30) */ // 0x805B13EC
    *(0x38 + r30) = r4; // stb @ 0x805B13F0
    *(0x39 + r30) = r4; // stb @ 0x805B13F4
    *(0x3a + r30) = r5; // stb @ 0x805B13F8
    *(0x3b + r30) = r5; // stb @ 0x805B13FC
    *(0x3c + r30) = r3; // stb @ 0x805B1400
    *(0x44 + r30) = r5; // sth @ 0x805B1404
    *(0x46 + r30) = r5; // sth @ 0x805B1408
    /* stfs f0, 0x4c(r30) */ // 0x805B140C
    /* stfs f0, 0x48(r30) */ // 0x805B1410
    *(0x50 + r30) = r4; // stb @ 0x805B1414
    *(0x51 + r30) = r4; // stb @ 0x805B1418
    *(0x52 + r30) = r5; // stb @ 0x805B141C
    *(0x53 + r30) = r5; // stb @ 0x805B1420
    *(0x54 + r30) = r0; // stb @ 0x805B1424
    if (!=) goto 0x0x805b1458;
    r3 = *(0xe8 + r30); // lwz @ 0x805B1430
    r0 = *(0x14 + r3); // lwz @ 0x805B1434
    if (!=) goto 0x0x805b1458;
    r0 = *(0x2c + r30); // lhz @ 0x805B1440
    r5 = *(0x38 + r30); // lbz @ 0x805B1444
    r6 = *(0x39 + r30); // lbz @ 0x805B1448
    /* clrlwi r4, r0, 0x1b */ // 0x805B144C
    r7 = *(0x3b + r30); // lbz @ 0x805B1450
    FUN_805B4AA0(); // bl 0x805B4AA0
    r0 = *(0x14 + r1); // lwz @ 0x805B1458
    r31 = *(0xc + r1); // lwz @ 0x805B145C
    r30 = *(8 + r1); // lwz @ 0x805B1460
    return;
}