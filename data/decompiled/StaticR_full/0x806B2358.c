/* Function at 0x806B2358, size=484 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 5 function(s) */

int FUN_806B2358(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* li r0, -1 */ // 0x806B2364
    /* stmw r24, 0x10(r1) */ // 0x806B2368
    /* lis r29, 0 */ // 0x806B236C
    /* li r27, 0 */ // 0x806B2370
    /* lis r30, 0 */ // 0x806B2374
    /* lis r25, 0 */ // 0x806B2378
    /* lis r26, 0 */ // 0x806B237C
    /* li r31, 1 */ // 0x806B2380
    r4 = *(0 + r29); // lwz @ 0x806B2384
    r3 = *(0 + r4); // lwz @ 0x806B2388
    r4 = *(0x98 + r4); // lwz @ 0x806B238C
    r28 = *(0x404 + r3); // lwz @ 0x806B2390
    *(0x2d8 + r4) = r0; // stb @ 0x806B2394
    r3 = *(0 + r29); // lwz @ 0x806B2398
    r3 = *(0x98 + r3); // lwz @ 0x806B239C
    *(0x2d9 + r3) = r0; // stb @ 0x806B23A0
    r3 = *(0 + r29); // lwz @ 0x806B23A4
    r3 = *(0x98 + r3); // lwz @ 0x806B23A8
    *(0x2da + r3) = r0; // stb @ 0x806B23AC
    r3 = *(0 + r29); // lwz @ 0x806B23B0
    r3 = *(0x98 + r3); // lwz @ 0x806B23B4
    *(0x2db + r3) = r0; // stb @ 0x806B23B8
    r3 = *(0 + r29); // lwz @ 0x806B23BC
    r3 = *(0x98 + r3); // lwz @ 0x806B23C0
    *(0x2dc + r3) = r0; // stb @ 0x806B23C4
    r3 = *(0 + r29); // lwz @ 0x806B23C8
    r3 = *(0x98 + r3); // lwz @ 0x806B23CC
    *(0x2dd + r3) = r0; // stb @ 0x806B23D0
    r3 = *(0 + r29); // lwz @ 0x806B23D4
    r4 = *(0x98 + r3); // lwz @ 0x806B23D8
    *(0x2de + r4) = r0; // stb @ 0x806B23DC
    r3 = *(0 + r29); // lwz @ 0x806B23E0
    r3 = *(0x98 + r3); // lwz @ 0x806B23E4
    *(0x2df + r3) = r0; // stb @ 0x806B23E8
    r3 = *(0 + r29); // lwz @ 0x806B23EC
    r3 = *(0x98 + r3); // lwz @ 0x806B23F0
    *(0x2e0 + r3) = r0; // stb @ 0x806B23F4
    r3 = *(0 + r29); // lwz @ 0x806B23F8
    r3 = *(0x98 + r3); // lwz @ 0x806B23FC
    *(0x2e1 + r3) = r0; // stb @ 0x806B2400
    r3 = *(0 + r29); // lwz @ 0x806B2404
    r3 = *(0x98 + r3); // lwz @ 0x806B2408
    *(0x2e2 + r3) = r0; // stb @ 0x806B240C
    r3 = *(0 + r29); // lwz @ 0x806B2410
    r3 = *(0x98 + r3); // lwz @ 0x806B2414
    *(0x2e3 + r3) = r0; // stb @ 0x806B2418
    r5 = *(0 + r30); // lwz @ 0x806B2420
    if (>) goto 0x0x806b2434;
    r3 = r5 + r27; // 0x806B2428
    r24 = *(0x2920 + r3); // lbz @ 0x806B242C
    /* b 0x806b2438 */ // 0x806B2430
    /* li r24, 0xff */ // 0x806B2434
    if (>=) goto 0x0x806b2514;
    r4 = *(0 + r30); // lwz @ 0x806B2440
    r3 = r31 << r24; // slw
    r0 = *(0x291c + r4); // lwz @ 0x806B2448
    /* mulli r0, r0, 0x58 */ // 0x806B244C
    r4 = r4 + r0; // 0x806B2450
    r0 = *(0x48 + r4); // lwz @ 0x806B2454
    /* and. r0, r3, r0 */ // 0x806B2458
    if (==) goto 0x0x806b2514;
    r0 = *(0x59 + r4); // lbz @ 0x806B2460
    if (==) goto 0x0x806b2514;
    if (<=) goto 0x0x806b249c;
    /* addic. r0, r27, -1 */ // 0x806B2474
    if (<) goto 0x0x806b2490;
    if (>=) goto 0x0x806b2490;
    r3 = r5 + r27; // 0x806B2484
    r0 = *(0x291f + r3); // lbz @ 0x806B2488
    /* b 0x806b2494 */ // 0x806B248C
    /* li r0, 0xff */ // 0x806B2490
    if (==) goto 0x0x806b2514;
    r3 = r28;
    r4 = r24;
    FUN_80659CC8(r3, r4); // bl 0x80659CC8
    /* mulli r0, r24, 0xc0 */ // 0x806B24A8
    r5 = *(0 + r25); // lwz @ 0x806B24AC
    r3 = r28;
    r5 = r5 + r0; // 0x806B24B8
    r0 = *(0x170 + r5); // lwz @ 0x806B24BC
    r5 = *(0x174 + r5); // lwz @ 0x806B24C0
    *(0xc + r1) = r5; // stw @ 0x806B24C4
    *(8 + r1) = r0; // stw @ 0x806B24C8
    FUN_806596FC(); // bl 0x806596FC
    r24 = r3;
    if (<) goto 0x0x806b2514;
    r3 = r28;
    r4 = r24;
    FUN_80659884(r3, r4); // bl 0x80659884
    if (==) goto 0x0x806b2514;
    r3 = *(0 + r26); // lwz @ 0x806B24F0
    r4 = r24;
    FUN_806EEEA4(r4); // bl 0x806EEEA4
    if (==) goto 0x0x806b2514;
    r3 = *(0 + r29); // lwz @ 0x806B2504
    r0 = *(0x98 + r3); // lwz @ 0x806B2508
    r3 = r0 + r27; // 0x806B250C
    *(0x2d8 + r3) = r24; // stb @ 0x806B2510
    r27 = r27 + 1; // 0x806B2514
    if (<) goto 0x0x806b241c;
    r3 = r28;
    FUN_80659138(r3); // bl 0x80659138
    r0 = *(0x34 + r1); // lwz @ 0x806B252C
    return;
}