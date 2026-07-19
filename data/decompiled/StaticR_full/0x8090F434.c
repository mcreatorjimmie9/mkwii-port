/* Function at 0x8090F434, size=384 bytes */
/* Stack frame: 0 bytes */

int FUN_8090F434(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    r7 = *(0x1cc + r3); // lwz @ 0x8090F434
    r0 = r7 + 1; // 0x8090F438
    /* clrlwi r7, r0, 0x1c */ // 0x8090F43C
    *(0x1cc + r3) = r7; // stw @ 0x8090F440
    r0 = r0 rlwinm 2; // rlwinm
    /* subf r0, r7, r0 */ // 0x8090F448
    r7 = r3 + r0; // 0x8090F44C
    *(0x19c + r7) = r5; // stb @ 0x8090F450
    r5 = *(0x1cc + r3); // lwz @ 0x8090F454
    /* slwi r0, r5, 2 */ // 0x8090F458
    /* subf r0, r5, r0 */ // 0x8090F45C
    r5 = r3 + r0; // 0x8090F460
    *(0x19d + r5) = r6; // stb @ 0x8090F464
    r9 = *(0x180 + r3); // lwz @ 0x8090F468
    r0 = *(0x174 + r3); // lwz @ 0x8090F46C
    r8 = r9 + 1; // 0x8090F470
    r7 = *(0x1cc + r3); // lwz @ 0x8090F474
    /* subfc r5, r0, r8 */ // 0x8090F478
    r0 = *(0x17c + r3); // lwz @ 0x8090F47C
    /* subfe r5, r5, r5 */ // 0x8090F480
    /* slwi r6, r7, 2 */ // 0x8090F484
    r8 = r8 & r5; // 0x8090F488
    /* subf r5, r7, r6 */ // 0x8090F48C
    r5 = r3 + r5; // 0x8090F490
    r7 = r5 + 0x19c; // 0x8090F498
    if (==) goto 0x0x8090f514;
    r6 = *(0x178 + r3); // lwz @ 0x8090F4A0
    /* slwi r0, r9, 4 */ // 0x8090F4A4
    r5 = *(0x188 + r3); // lwz @ 0x8090F4A8
    /* lwzx r0, r6, r0 */ // 0x8090F4AC
    /* slwi r0, r0, 2 */ // 0x8090F4B0
    /* lwzx r5, r5, r0 */ // 0x8090F4B4
    r0 = *(4 + r5); // lbz @ 0x8090F4B8
    if (==) goto 0x0x8090f514;
    *(0x180 + r3) = r8; // stw @ 0x8090F4C4
    /* slwi r0, r8, 4 */ // 0x8090F4C8
    /* li r5, 4 */ // 0x8090F4CC
    /* stwx r5, r6, r0 */ // 0x8090F4D0
    r0 = *(0x180 + r3); // lwz @ 0x8090F4D4
    r5 = *(0x178 + r3); // lwz @ 0x8090F4D8
    /* slwi r0, r0, 4 */ // 0x8090F4DC
    r5 = r5 + r0; // 0x8090F4E0
    *(4 + r5) = r7; // stw @ 0x8090F4E4
    r0 = *(0x180 + r3); // lwz @ 0x8090F4E8
    r5 = *(0x178 + r3); // lwz @ 0x8090F4EC
    /* slwi r0, r0, 4 */ // 0x8090F4F0
    r5 = r5 + r0; // 0x8090F4F4
    *(8 + r5) = r4; // stw @ 0x8090F4F8
    r0 = *(0x180 + r3); // lwz @ 0x8090F4FC
    r4 = *(0x178 + r3); // lwz @ 0x8090F500
    /* slwi r0, r0, 4 */ // 0x8090F504
    r5 = *(0x174 + r3); // lwz @ 0x8090F508
    r4 = r4 + r0; // 0x8090F50C
    *(0xc + r4) = r5; // stw @ 0x8090F510
    r6 = *(0x180 + r3); // lwz @ 0x8090F514
    r4 = *(0x174 + r3); // lwz @ 0x8090F518
    r5 = r6 + 1; // 0x8090F51C
    r0 = *(0x17c + r3); // lwz @ 0x8090F520
    /* subfc r4, r4, r5 */ // 0x8090F524
    /* subfe r4, r4, r4 */ // 0x8090F528
    r5 = r5 & r4; // 0x8090F52C
    /* beqlr  */ // 0x8090F534
    r7 = *(0x178 + r3); // lwz @ 0x8090F538
    /* slwi r0, r6, 4 */ // 0x8090F53C
    r4 = *(0x188 + r3); // lwz @ 0x8090F540
    /* lwzx r0, r7, r0 */ // 0x8090F544
    /* slwi r0, r0, 2 */ // 0x8090F548
    /* lwzx r4, r4, r0 */ // 0x8090F54C
    r0 = *(0 + r4); // lbz @ 0x8090F550
    /* beqlr  */ // 0x8090F558
    *(0x180 + r3) = r5; // stw @ 0x8090F55C
    /* slwi r0, r5, 4 */ // 0x8090F560
    /* li r6, 0 */ // 0x8090F564
    /* li r5, -1 */ // 0x8090F568
    /* stwx r6, r7, r0 */ // 0x8090F56C
    r0 = *(0x180 + r3); // lwz @ 0x8090F570
    r4 = *(0x178 + r3); // lwz @ 0x8090F574
    /* slwi r0, r0, 4 */ // 0x8090F578
    r4 = r4 + r0; // 0x8090F57C
    *(4 + r4) = r6; // stw @ 0x8090F580
    r0 = *(0x180 + r3); // lwz @ 0x8090F584
    r4 = *(0x178 + r3); // lwz @ 0x8090F588
    /* slwi r0, r0, 4 */ // 0x8090F58C
    r4 = r4 + r0; // 0x8090F590
    *(8 + r4) = r5; // stw @ 0x8090F594
    r0 = *(0x180 + r3); // lwz @ 0x8090F598
    r4 = *(0x178 + r3); // lwz @ 0x8090F59C
    /* slwi r0, r0, 4 */ // 0x8090F5A0
    r5 = *(0x174 + r3); // lwz @ 0x8090F5A4
    r3 = r4 + r0; // 0x8090F5A8
    *(0xc + r3) = r5; // stw @ 0x8090F5AC
    return;
}