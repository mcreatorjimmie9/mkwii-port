/* Function at 0x8073B2C8, size=428 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8073B2C8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8073B2D4
    *(0xc + r1) = r31; // stw @ 0x8073B2D8
    r31 = r3;
    if (!=) goto 0x0x8073b4a4;
    r0 = *(0x14c + r3); // lbz @ 0x8073B2E4
    if (!=) goto 0x0x8073b308;
    r0 = *(0x14d + r3); // lbz @ 0x8073B2F0
    if (!=) goto 0x0x8073b308;
    r0 = *(0x14e + r3); // lbz @ 0x8073B2FC
    if (==) goto 0x0x8073b4a4;
    r0 = *(0x12b + r3); // lbz @ 0x8073B308
    if (==) goto 0x0x8073b318;
    /* b 0x8073b4a4 */ // 0x8073B314
    /* lis r4, 0 */ // 0x8073B318
    r0 = *(0x79 + r3); // lbz @ 0x8073B31C
    r4 = *(0 + r4); // lwz @ 0x8073B320
    r0 = *(4 + r4); // lhz @ 0x8073B328
    r4 = r0 rlwinm 0x1b; // rlwinm
    if (!=) goto 0x0x8073b4a4;
    r0 = *(0x7a + r3); // lbz @ 0x8073B334
    if (!=) goto 0x0x8073b4a4;
    r0 = *(0x64 + r3); // lwz @ 0x8073B340
    if (==) goto 0x0x8073b350;
    /* b 0x8073b4a4 */ // 0x8073B34C
    if (!=) goto 0x0x8073b364;
    /* li r0, 1 */ // 0x8073B358
    *(0x79 + r3) = r0; // stb @ 0x8073B35C
    /* b 0x8073b38c */ // 0x8073B360
    if (!=) goto 0x0x8073b378;
    /* li r0, 1 */ // 0x8073B36C
    *(0x7a + r3) = r0; // stb @ 0x8073B370
    /* b 0x8073b38c */ // 0x8073B374
    if (!=) goto 0x0x8073b38c;
    /* li r0, 1 */ // 0x8073B380
    *(0x79 + r3) = r0; // stb @ 0x8073B384
    *(0x7b + r3) = r0; // stb @ 0x8073B388
    r0 = *(4 + r3); // lbz @ 0x8073B38C
    if (!=) goto 0x0x8073b4a4;
    if (!=) goto 0x0x8073b3dc;
    /* lis r4, 0 */ // 0x8073B3A0
    r0 = *(0x14c + r3); // lbz @ 0x8073B3A4
    r3 = *(0 + r4); // lwz @ 0x8073B3A8
    r0 = *(4 + r3); // lhz @ 0x8073B3B0
    r0 = r0 rlwinm 0x18; // rlwinm
    if (==) goto 0x0x8073b4a4;
    /* lis r3, 0 */ // 0x8073B3BC
    /* slwi r0, r0, 2 */ // 0x8073B3C0
    r4 = *(0 + r3); // lwz @ 0x8073B3C4
    r3 = r31;
    r4 = r4 + r0; // 0x8073B3CC
    /* lfs f1, 0x1c(r4) */ // 0x8073B3D0
    FUN_8073B774(r3); // bl 0x8073B774
    /* b 0x8073b4a4 */ // 0x8073B3D8
    if (!=) goto 0x0x8073b400;
    /* lis r4, 0 */ // 0x8073B3E4
    r3 = r31;
    r4 = *(0 + r4); // lwz @ 0x8073B3EC
    r0 = *(4 + r4); // lhz @ 0x8073B3F0
    r4 = r0 rlwinm 0x18; // rlwinm
    FUN_8073B954(r4, r3); // bl 0x8073B954
    /* b 0x8073b4a4 */ // 0x8073B3FC
    if (!=) goto 0x0x8073b444;
    /* lis r4, 0 */ // 0x8073B408
    r0 = *(0x14c + r3); // lbz @ 0x8073B40C
    r3 = *(0 + r4); // lwz @ 0x8073B410
    r0 = *(4 + r3); // lhz @ 0x8073B418
    r0 = r0 rlwinm 0x18; // rlwinm
    if (==) goto 0x0x8073b4a4;
    /* lis r3, 0 */ // 0x8073B424
    /* slwi r0, r0, 2 */ // 0x8073B428
    r4 = *(0 + r3); // lwz @ 0x8073B42C
    r3 = r31;
    r4 = r4 + r0; // 0x8073B434
    /* lfs f1, 0x1c(r4) */ // 0x8073B438
    FUN_8073B774(r3); // bl 0x8073B774
    /* b 0x8073b4a4 */ // 0x8073B440
    if (!=) goto 0x0x8073b4a4;
    r3 = *(0x228 + r3); // lwz @ 0x8073B44C
    if (==) goto 0x0x8073b4a4;
    r3 = r3 + 0x74; // 0x8073B458
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073b470;
    /* li r3, 0 */ // 0x8073B468
    /* b 0x8073b474 */ // 0x8073B46C
    r3 = *(0xc + r3); // lwz @ 0x8073B470
}