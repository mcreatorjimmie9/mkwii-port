/* Function at 0x805DA530, size=232 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805DA530(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x34 + r1) = r29; // stw @ 0x805DA548
    *(0x30 + r1) = r28; // stw @ 0x805DA54C
    r28 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x805DA554
    r4 = *(0x30 + r28); // lwz @ 0x805DA558
    r6 = *(0x34 + r28); // lwz @ 0x805DA55C
    FUN_805DB7A8(); // bl 0x805DB7A8
    *(0xa0 + r28) = r3; // stb @ 0x805DA564
    r30 = *(0x98 + r28); // lwz @ 0x805DA568
    r29 = *(0xd + r30); // lbz @ 0x805DA56C
    if (!=) goto 0x0x805da5e0;
    /* clrlwi. r0, r3, 0x18 */ // 0x805DA578
    if (==) goto 0x0x805da5d4;
    /* lfs f1, 0xc(r1) */ // 0x805DA580
    /* lfs f0, 8(r1) */ // 0x805DA584
    /* stfs f0, 0x28(r28) */ // 0x805DA588
    /* stfs f1, 0x2c(r28) */ // 0x805DA58C
    /* lfs f0, 8(r1) */ // 0x805DA590
    /* lfs f2, 0xc(r1) */ // 0x805DA594
    /* fctiwz f1, f0 */ // 0x805DA598
    /* fctiwz f0, f2 */ // 0x805DA59C
    /* stfd f1, 0x18(r1) */ // 0x805DA5A0
    r5 = *(0x1c + r1); // lwz @ 0x805DA5A4
    /* stfd f0, 0x20(r1) */ // 0x805DA5A8
    r0 = r5 + -1; // 0x805DA5AC
    *(4 + r30) = r5; // sth @ 0x805DA5B0
    r3 = r0 rlwinm 0; // rlwinm
    r4 = *(0x24 + r1); // lwz @ 0x805DA5B8
    *(6 + r30) = r4; // sth @ 0x805DA5BC
    r0 = r4 + -1; // 0x805DA5C0
    *(8 + r30) = r3; // sth @ 0x805DA5C4
    r0 = r0 rlwinm 0; // rlwinm
    *(0xa + r30) = r0; // sth @ 0x805DA5CC
    /* b 0x805da64c */ // 0x805DA5D0
    /* li r0, 0 */ // 0x805DA5D4
    *(8 + r28) = r0; // stw @ 0x805DA5D8
    /* b 0x805da64c */ // 0x805DA5DC
    /* lis r3, 0 */ // 0x805DA5E0
    /* lfs f1, 0x10(r1) */ // 0x805DA5E4
    /* lfs f0, 0(r3) */ // 0x805DA5E8
    /* li r31, 0 */ // 0x805DA5EC
    /* fmuls f1, f0, f1 */ // 0x805DA5F0
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0x100 */ // 0x805DA5F8
    r0 = r4 + -0x20; // 0x805DA5FC
    if (<) goto 0x0x805da610;
    /* li r31, 1 */ // 0x805DA608
    /* b 0x805da630 */ // 0x805DA60C
    if (==) goto 0x0x805da630;
}