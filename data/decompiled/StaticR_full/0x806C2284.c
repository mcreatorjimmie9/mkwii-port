/* Function at 0x806C2284, size=960 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_806C2284(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806C2298
    *(0x14 + r1) = r29; // stw @ 0x806C229C
    r4 = *(0x35c + r3); // lwz @ 0x806C22A0
    r0 = r4 + -7; // 0x806C22A4
    if (<=) goto 0x0x806c25e4;
    if (==) goto 0x0x806c22c4;
    if (==) goto 0x0x806c2590;
    /* b 0x806c2628 */ // 0x806C22C0
    /* lis r3, 0 */ // 0x806C22C4
    r3 = *(0 + r3); // lwz @ 0x806C22C8
    r3 = *(0 + r3); // lwz @ 0x806C22CC
    r29 = *(0x27c + r3); // lwz @ 0x806C22D0
    if (!=) goto 0x0x806c22e4;
    /* li r29, 0 */ // 0x806C22DC
    /* b 0x806c2338 */ // 0x806C22E0
    /* lis r30, 0 */ // 0x806C22E4
    r30 = r30 + 0; // 0x806C22E8
    if (==) goto 0x0x806c2334;
    r12 = *(0 + r29); // lwz @ 0x806C22F0
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806C22F8
    /* mtctr r12 */ // 0x806C22FC
    /* bctrl  */ // 0x806C2300
    /* b 0x806c231c */ // 0x806C2304
    if (!=) goto 0x0x806c2318;
    /* li r0, 1 */ // 0x806C2310
    /* b 0x806c2328 */ // 0x806C2314
    r3 = *(0 + r3); // lwz @ 0x806C2318
    if (!=) goto 0x0x806c2308;
    /* li r0, 0 */ // 0x806C2324
    if (==) goto 0x0x806c2334;
    /* b 0x806c2338 */ // 0x806C2330
    /* li r29, 0 */ // 0x806C2334
    r0 = *(0xdbc + r29); // lwz @ 0x806C2338
    if (<) goto 0x0x806c234c;
    if (<=) goto 0x0x806c237c;
    if (==) goto 0x0x806c2368;
    if (==) goto 0x0x806c23d0;
    if (==) goto 0x0x806c24b0;
    /* b 0x806c2628 */ // 0x806C2364
    r3 = r31;
    FUN_806C264C(r3); // bl 0x806C264C
    /* li r0, 4 */ // 0x806C2370
    *(0x35c + r31) = r0; // stw @ 0x806C2374
    /* b 0x806c2628 */ // 0x806C2378
    r0 = *(0x350 + r31); // lwz @ 0x806C237C
    if (==) goto 0x0x806c23a4;
    if (==) goto 0x0x806c23a4;
    if (==) goto 0x0x806c23b0;
    if (==) goto 0x0x806c23b0;
    /* b 0x806c23b8 */ // 0x806C23A0
    /* li r0, 0x8d */ // 0x806C23A4
    *(0x360 + r31) = r0; // stw @ 0x806C23A8
    /* b 0x806c23b8 */ // 0x806C23AC
    /* li r0, 0x96 */ // 0x806C23B0
    *(0x360 + r31) = r0; // stw @ 0x806C23B4
    /* lis r3, 0 */ // 0x806C23B8
    r3 = *(0 + r3); // lwz @ 0x806C23BC
    FUN_806E64B0(r3); // bl 0x806E64B0
    /* li r0, 0xa */ // 0x806C23C4
    *(0x35c + r31) = r0; // stw @ 0x806C23C8
    /* b 0x806c2628 */ // 0x806C23CC
    /* lis r3, 0 */ // 0x806C23D0
    r3 = *(0 + r3); // lwz @ 0x806C23D4
    r3 = *(0 + r3); // lwz @ 0x806C23D8
    r29 = *(0x13c + r3); // lwz @ 0x806C23DC
    if (!=) goto 0x0x806c23f0;
    /* li r29, 0 */ // 0x806C23E8
    /* b 0x806c2444 */ // 0x806C23EC
    /* lis r30, 0 */ // 0x806C23F0
    r30 = r30 + 0; // 0x806C23F4
    if (==) goto 0x0x806c2440;
    r12 = *(0 + r29); // lwz @ 0x806C23FC
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806C2404
    /* mtctr r12 */ // 0x806C2408
    /* bctrl  */ // 0x806C240C
    /* b 0x806c2428 */ // 0x806C2410
    if (!=) goto 0x0x806c2424;
    /* li r0, 1 */ // 0x806C241C
    /* b 0x806c2434 */ // 0x806C2420
    r3 = *(0 + r3); // lwz @ 0x806C2424
    if (!=) goto 0x0x806c2414;
    /* li r0, 0 */ // 0x806C2430
    if (==) goto 0x0x806c2440;
    /* b 0x806c2444 */ // 0x806C243C
    /* li r29, 0 */ // 0x806C2440
    r12 = *(0 + r29); // lwz @ 0x806C2444
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806C244C
    /* mtctr r12 */ // 0x806C2450
    /* bctrl  */ // 0x806C2454
    r12 = *(0 + r29); // lwz @ 0x806C2458
    r3 = r29;
    /* li r4, 0xfb5 */ // 0x806C2460
    /* li r5, 0 */ // 0x806C2464
    r12 = *(0x68 + r12); // lwz @ 0x806C2468
    /* mtctr r12 */ // 0x806C246C
    /* bctrl  */ // 0x806C2470
    /* li r0, 0 */ // 0x806C2474
    *(0x188 + r29) = r0; // stw @ 0x806C2478
    r3 = r31;
    /* li r4, 0x4d */ // 0x806C2480
    r12 = *(0 + r31); // lwz @ 0x806C2484
    /* li r5, 0 */ // 0x806C2488
    r12 = *(0x24 + r12); // lwz @ 0x806C248C
    /* mtctr r12 */ // 0x806C2490
    /* bctrl  */ // 0x806C2494
    /* li r0, 7 */ // 0x806C2498
    *(0x35c + r31) = r0; // stw @ 0x806C249C
    /* lis r3, 0 */ // 0x806C24A0
    r3 = *(0 + r3); // lwz @ 0x806C24A4
    FUN_806E64B0(r3); // bl 0x806E64B0
    /* b 0x806c2628 */ // 0x806C24AC
    /* lis r3, 0 */ // 0x806C24B0
    r3 = *(0 + r3); // lwz @ 0x806C24B4
    r3 = *(0 + r3); // lwz @ 0x806C24B8
    r29 = *(0x13c + r3); // lwz @ 0x806C24BC
    if (!=) goto 0x0x806c24d0;
    /* li r29, 0 */ // 0x806C24C8
    /* b 0x806c2524 */ // 0x806C24CC
    /* lis r30, 0 */ // 0x806C24D0
    r30 = r30 + 0; // 0x806C24D4
    if (==) goto 0x0x806c2520;
    r12 = *(0 + r29); // lwz @ 0x806C24DC
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806C24E4
    /* mtctr r12 */ // 0x806C24E8
    /* bctrl  */ // 0x806C24EC
    /* b 0x806c2508 */ // 0x806C24F0
    if (!=) goto 0x0x806c2504;
    /* li r0, 1 */ // 0x806C24FC
    /* b 0x806c2514 */ // 0x806C2500
    r3 = *(0 + r3); // lwz @ 0x806C2504
    if (!=) goto 0x0x806c24f4;
    /* li r0, 0 */ // 0x806C2510
    if (==) goto 0x0x806c2520;
    /* b 0x806c2524 */ // 0x806C251C
    /* li r29, 0 */ // 0x806C2520
    r12 = *(0 + r29); // lwz @ 0x806C2524
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806C252C
    /* mtctr r12 */ // 0x806C2530
    /* bctrl  */ // 0x806C2534
    r12 = *(0 + r29); // lwz @ 0x806C2538
    r3 = r29;
    /* li r4, 0xfb2 */ // 0x806C2540
    /* li r5, 0 */ // 0x806C2544
    r12 = *(0x68 + r12); // lwz @ 0x806C2548
    /* mtctr r12 */ // 0x806C254C
    /* bctrl  */ // 0x806C2550
    /* li r0, 0 */ // 0x806C2554
    *(0x188 + r29) = r0; // stw @ 0x806C2558
    r3 = r31;
    /* li r4, 0x4d */ // 0x806C2560
    r12 = *(0 + r31); // lwz @ 0x806C2564
    /* li r5, 0 */ // 0x806C2568
    r12 = *(0x24 + r12); // lwz @ 0x806C256C
    /* mtctr r12 */ // 0x806C2570
    /* bctrl  */ // 0x806C2574
    /* li r0, 8 */ // 0x806C2578
    *(0x35c + r31) = r0; // stw @ 0x806C257C
    /* lis r3, 0 */ // 0x806C2580
    r3 = *(0 + r3); // lwz @ 0x806C2584
    FUN_806E64B0(r3); // bl 0x806E64B0
    /* b 0x806c2628 */ // 0x806C258C
    r0 = *(0x350 + r3); // lwz @ 0x806C2590
    if (==) goto 0x0x806c25b8;
    if (==) goto 0x0x806c25b8;
    if (==) goto 0x0x806c25c4;
    if (==) goto 0x0x806c25c4;
    /* b 0x806c25cc */ // 0x806C25B4
    /* li r0, 0x8d */ // 0x806C25B8
    *(0x360 + r3) = r0; // stw @ 0x806C25BC
    /* b 0x806c25cc */ // 0x806C25C0
    /* li r0, 0x96 */ // 0x806C25C4
    *(0x360 + r3) = r0; // stw @ 0x806C25C8
    /* lis r3, 0 */ // 0x806C25CC
    r3 = *(0 + r3); // lwz @ 0x806C25D0
    FUN_806E64B0(r3); // bl 0x806E64B0
    /* li r0, 0xa */ // 0x806C25D8
    *(0x35c + r31) = r0; // stw @ 0x806C25DC
    /* b 0x806c2628 */ // 0x806C25E0
    r0 = *(0x350 + r3); // lwz @ 0x806C25E4
    if (==) goto 0x0x806c260c;
    if (==) goto 0x0x806c260c;
    if (==) goto 0x0x806c2618;
    if (==) goto 0x0x806c2618;
    /* b 0x806c2620 */ // 0x806C2608
    /* li r0, 0x8d */ // 0x806C260C
    *(0x360 + r3) = r0; // stw @ 0x806C2610
    /* b 0x806c2620 */ // 0x806C2614
    /* li r0, 0x96 */ // 0x806C2618
    *(0x360 + r3) = r0; // stw @ 0x806C261C
    /* li r0, 0xa */ // 0x806C2620
    *(0x35c + r3) = r0; // stw @ 0x806C2624
    r0 = *(0x24 + r1); // lwz @ 0x806C2628
    r31 = *(0x1c + r1); // lwz @ 0x806C262C
    r30 = *(0x18 + r1); // lwz @ 0x806C2630
    r29 = *(0x14 + r1); // lwz @ 0x806C2634
    return;
}