/* Function at 0x807D2454, size=372 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_807D2454(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x807D245C
    *(0xc + r1) = r31; // stw @ 0x807D2464
    /* lis r31, 0 */ // 0x807D2468
    r31 = r31 + 0; // 0x807D246C
    *(8 + r1) = r30; // stw @ 0x807D2470
    r30 = r3;
    r4 = *(0xcc + r3); // lwz @ 0x807D2478
    r4 = r4 + 1; // 0x807D247C
    *(0xcc + r3) = r4; // stw @ 0x807D2480
    r0 = *(0x10 + r31); // lha @ 0x807D2484
    /* mulli r0, r0, 0x3c */ // 0x807D2488
    if (!=) goto 0x0x807d24a0;
    /* li r0, 0 */ // 0x807D2494
    *(0xcc + r3) = r0; // stw @ 0x807D2498
    /* li r5, 1 */ // 0x807D249C
    r4 = *(0xc8 + r3); // lwz @ 0x807D24A0
    if (==) goto 0x0x807d24c8;
    if (==) goto 0x0x807d24dc;
    if (==) goto 0x0x807d2540;
    if (==) goto 0x0x807d2554;
    /* b 0x807d25b0 */ // 0x807D24C4
    if (==) goto 0x0x807d25b0;
    r0 = r4 + 1; // 0x807D24D0
    *(0xc8 + r3) = r0; // stw @ 0x807D24D4
    /* b 0x807d25b0 */ // 0x807D24D8
    /* lis r3, 0 */ // 0x807D24DC
    r3 = *(0 + r3); // lwz @ 0x807D24E0
    FUN_807BFFC0(r3); // bl 0x807BFFC0
    if (==) goto 0x0x807d24fc;
    if (==) goto 0x0x807d2518;
    /* b 0x807d2530 */ // 0x807D24F8
    r3 = *(0xc0 + r30); // lwz @ 0x807D24FC
    /* lfs f1, 4(r31) */ // 0x807D2500
    FUN_807D25C8(); // bl 0x807D25C8
    r3 = *(0xc4 + r30); // lwz @ 0x807D2508
    /* lfs f1, 4(r31) */ // 0x807D250C
    FUN_807D25C8(); // bl 0x807D25C8
    /* b 0x807d2530 */ // 0x807D2514
    r3 = *(0xc0 + r30); // lwz @ 0x807D2518
    /* lfs f1, 0xc(r31) */ // 0x807D251C
    FUN_807D25C8(); // bl 0x807D25C8
    r3 = *(0xc4 + r30); // lwz @ 0x807D2524
    /* lfs f1, 0xc(r31) */ // 0x807D2528
    FUN_807D25C8(); // bl 0x807D25C8
    r3 = *(0xc8 + r30); // lwz @ 0x807D2530
    r0 = r3 + 1; // 0x807D2534
    *(0xc8 + r30) = r0; // stw @ 0x807D2538
    /* b 0x807d25b0 */ // 0x807D253C
    if (==) goto 0x0x807d25b0;
    r0 = r4 + 1; // 0x807D2548
    *(0xc8 + r3) = r0; // stw @ 0x807D254C
    /* b 0x807d25b0 */ // 0x807D2550
    /* lis r3, 0 */ // 0x807D2554
    r3 = *(0 + r3); // lwz @ 0x807D2558
    FUN_807BFFC0(r3); // bl 0x807BFFC0
    if (==) goto 0x0x807d2574;
    if (==) goto 0x0x807d2590;
    /* b 0x807d25a8 */ // 0x807D2570
    r3 = *(0xc0 + r30); // lwz @ 0x807D2574
    /* lfs f1, 0(r31) */ // 0x807D2578
    FUN_807D25C8(); // bl 0x807D25C8
    r3 = *(0xc4 + r30); // lwz @ 0x807D2580
    /* lfs f1, 0(r31) */ // 0x807D2584
    FUN_807D25C8(); // bl 0x807D25C8
    /* b 0x807d25a8 */ // 0x807D258C
    r3 = *(0xc0 + r30); // lwz @ 0x807D2590
    /* lfs f1, 8(r31) */ // 0x807D2594
    FUN_807D25C8(); // bl 0x807D25C8
    r3 = *(0xc4 + r30); // lwz @ 0x807D259C
    /* lfs f1, 8(r31) */ // 0x807D25A0
    FUN_807D25C8(); // bl 0x807D25C8
    /* li r0, 0 */ // 0x807D25A8
    *(0xc8 + r30) = r0; // stw @ 0x807D25AC
    r0 = *(0x14 + r1); // lwz @ 0x807D25B0
    r31 = *(0xc + r1); // lwz @ 0x807D25B4
    r30 = *(8 + r1); // lwz @ 0x807D25B8
    return;
}