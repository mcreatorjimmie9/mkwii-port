/* Function at 0x806F240C, size=780 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 12 function(s) */

int FUN_806F240C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    /* li r4, 0 */ // 0x806F2420
    *(0x18 + r1) = r30; // stw @ 0x806F2424
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x806F242C
    /* lis r29, 0 */ // 0x806F2430
    *(0x10 + r1) = r28; // stw @ 0x806F2434
    r28 = r5;
    r3 = *(0 + r29); // lwz @ 0x806F243C
    FUN_806E9970(); // bl 0x806E9970
    if (==) goto 0x0x806f2460;
    r3 = *(0 + r29); // lwz @ 0x806F244C
    /* li r4, 1 */ // 0x806F2450
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f2480;
    /* lis r3, 0 */ // 0x806F2460
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x806F2468
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F2470
    r3 = r30 + r0; // 0x806F2474
    r4 = *(4 + r3); // lbz @ 0x806F2478
    /* b 0x806f24ac */ // 0x806F247C
    /* lis r3, 0 */ // 0x806F2480
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x806F2488
    FUN_806E4438(r3, r4); // bl 0x806E4438
    if (==) goto 0x0x806f24a8;
    /* slwi r0, r31, 3 */ // 0x806F2498
    r3 = r30 + r0; // 0x806F249C
    r4 = *(0x14 + r3); // lbz @ 0x806F24A0
    /* b 0x806f24ac */ // 0x806F24A4
    /* li r4, 0 */ // 0x806F24A8
    r0 = r28 + -1; // 0x806F24AC
    if (<=) goto 0x0x806f24e0;
    r0 = r28 + -5; // 0x806F24B8
    if (<=) goto 0x0x806f25dc;
    if (==) goto 0x0x806f26d8;
    if (==) goto 0x0x806f26d8;
    if (==) goto 0x0x806f26d8;
    /* b 0x806f26f4 */ // 0x806F24DC
    if (<) goto 0x0x806f24f8;
    if (>) goto 0x0x806f24f8;
    /* li r3, 1 */ // 0x806F24F0
    /* b 0x806f26f8 */ // 0x806F24F4
    if (<) goto 0x0x806f25dc;
    if (>) goto 0x0x806f25dc;
    /* lis r3, 0 */ // 0x806F2508
    /* clrlwi r0, r31, 0x18 */ // 0x806F250C
    r3 = *(0 + r3); // lwz @ 0x806F2510
    /* mulli r0, r0, 0x248 */ // 0x806F2514
    r3 = *(0x14 + r3); // lwz @ 0x806F2518
    r5 = r3 + r0; // 0x806F251C
    r4 = *(0xc8 + r5); // lwz @ 0x806F2520
    /* subfic r3, r4, 0x10 */ // 0x806F2524
    r0 = r4 + -0x10; // 0x806F2528
    r0 = r3 | r0; // 0x806F252C
    /* rlwinm. r3, r0, 1, 0x1f, 0x1f */ // 0x806F2530
    if (==) goto 0x0x806f2544;
    r0 = *(0x208 + r5); // lbz @ 0x806F2538
    /* cntlzw r0, r0 */ // 0x806F253C
    /* srwi r3, r0, 5 */ // 0x806F2540
    if (==) goto 0x0x806f26f8;
    /* lis r29, 0 */ // 0x806F254C
    r28 = *(0xcc + r5); // lwz @ 0x806F2550
    r3 = *(0 + r29); // lwz @ 0x806F2554
    /* li r4, 0 */ // 0x806F2558
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806f257c;
    r3 = *(0 + r29); // lwz @ 0x806F2568
    /* li r4, 1 */ // 0x806F256C
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f259c;
    /* lis r3, 0 */ // 0x806F257C
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x806F2584
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F258C
    r3 = r30 + r0; // 0x806F2590
    r0 = *(2 + r3); // lbz @ 0x806F2594
    /* b 0x806f25c8 */ // 0x806F2598
    /* lis r3, 0 */ // 0x806F259C
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x806F25A4
    FUN_806E4438(r3, r4); // bl 0x806E4438
    if (==) goto 0x0x806f25c4;
    /* slwi r0, r31, 3 */ // 0x806F25B4
    r3 = r30 + r0; // 0x806F25B8
    r0 = *(0x12 + r3); // lbz @ 0x806F25BC
    /* b 0x806f25c8 */ // 0x806F25C0
    /* li r0, 0x14 */ // 0x806F25C4
    /* subf r3, r28, r0 */ // 0x806F25C8
    /* subf r0, r0, r28 */ // 0x806F25CC
    r0 = r3 | r0; // 0x806F25D0
    /* srwi r3, r0, 0x1f */ // 0x806F25D4
    /* b 0x806f26f8 */ // 0x806F25D8
    if (<) goto 0x0x806f25f4;
    if (>) goto 0x0x806f25f4;
    /* li r3, 1 */ // 0x806F25EC
    /* b 0x806f26f8 */ // 0x806F25F0
    if (<) goto 0x0x806f26d8;
    if (>) goto 0x0x806f26d8;
    /* lis r3, 0 */ // 0x806F2604
    /* clrlwi r0, r31, 0x18 */ // 0x806F2608
    r3 = *(0 + r3); // lwz @ 0x806F260C
    /* mulli r0, r0, 0x248 */ // 0x806F2610
    r3 = *(0x14 + r3); // lwz @ 0x806F2614
    r5 = r3 + r0; // 0x806F2618
    r4 = *(0xc8 + r5); // lwz @ 0x806F261C
    /* subfic r3, r4, 0x10 */ // 0x806F2620
    r0 = r4 + -0x10; // 0x806F2624
    r0 = r3 | r0; // 0x806F2628
    /* rlwinm. r3, r0, 1, 0x1f, 0x1f */ // 0x806F262C
    if (==) goto 0x0x806f2640;
    r0 = *(0x208 + r5); // lbz @ 0x806F2634
    /* cntlzw r0, r0 */ // 0x806F2638
    /* srwi r3, r0, 5 */ // 0x806F263C
    if (==) goto 0x0x806f26f8;
    /* lis r29, 0 */ // 0x806F2648
    r28 = *(0xcc + r5); // lwz @ 0x806F264C
    r3 = *(0 + r29); // lwz @ 0x806F2650
    /* li r4, 0 */ // 0x806F2654
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806f2678;
    r3 = *(0 + r29); // lwz @ 0x806F2664
    /* li r4, 1 */ // 0x806F2668
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f2698;
    /* lis r3, 0 */ // 0x806F2678
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x806F2680
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F2688
    r3 = r30 + r0; // 0x806F268C
    r0 = *(2 + r3); // lbz @ 0x806F2690
    /* b 0x806f26c4 */ // 0x806F2694
    /* lis r3, 0 */ // 0x806F2698
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x806F26A0
    FUN_806E4438(r3, r4); // bl 0x806E4438
    if (==) goto 0x0x806f26c0;
    /* slwi r0, r31, 3 */ // 0x806F26B0
    r3 = r30 + r0; // 0x806F26B4
    r0 = *(0x12 + r3); // lbz @ 0x806F26B8
    /* b 0x806f26c4 */ // 0x806F26BC
    /* li r0, 0x14 */ // 0x806F26C0
    /* subf r3, r28, r0 */ // 0x806F26C4
    /* subf r0, r0, r28 */ // 0x806F26C8
    r0 = r3 | r0; // 0x806F26CC
    /* srwi r3, r0, 0x1f */ // 0x806F26D0
    /* b 0x806f26f8 */ // 0x806F26D4
    /* li r3, 0 */ // 0x806F26DC
    if (==) goto 0x0x806f26f8;
    if (==) goto 0x0x806f26f8;
    /* li r3, 1 */ // 0x806F26EC
    /* b 0x806f26f8 */ // 0x806F26F0
    /* li r3, 1 */ // 0x806F26F4
    r0 = *(0x24 + r1); // lwz @ 0x806F26F8
    r31 = *(0x1c + r1); // lwz @ 0x806F26FC
    r30 = *(0x18 + r1); // lwz @ 0x806F2700
    r29 = *(0x14 + r1); // lwz @ 0x806F2704
    r28 = *(0x10 + r1); // lwz @ 0x806F2708
    return;
}