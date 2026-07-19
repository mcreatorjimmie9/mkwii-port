/* Function at 0x808E22AC, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 4 function(s) */

int FUN_808E22AC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r6, 0 */ // 0x808E22B4
    *(0x24 + r1) = r0; // stw @ 0x808E22B8
    /* stmw r26, 8(r1) */ // 0x808E22BC
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r6 = *(0 + r6); // lwz @ 0x808E22CC
    r6 = *(0 + r6); // lwz @ 0x808E22D0
    r0 = *(0 + r6); // lwz @ 0x808E22D4
    if (<) goto 0x0x808e22e8;
    if (<=) goto 0x0x808e22f8;
    if (==) goto 0x0x808e22f8;
    if (!=) goto 0x0x808e2300;
    /* li r0, 0 */ // 0x808E22F8
    /* b 0x808e2304 */ // 0x808E22FC
    /* li r0, 1 */ // 0x808E2300
    /* lis r6, 0 */ // 0x808E2304
    r31 = r4 rlwinm 2; // rlwinm
    r7 = *(0 + r6); // lwz @ 0x808E230C
    /* lis r6, 0 */ // 0x808E2310
    *(0x265 + r7) = r0; // stb @ 0x808E2314
    r7 = *(0x44 + r3); // lwz @ 0x808E2318
    /* stwx r5, r7, r31 */ // 0x808E231C
    r5 = *(0 + r6); // lwz @ 0x808E2320
    r5 = *(0 + r5); // lwz @ 0x808E2324
    r0 = *(0 + r5); // lwz @ 0x808E2328
    if (!=) goto 0x0x808e2398;
    r26 = r4 rlwinm 1; // rlwinm
    r3 = *(4 + r3); // lwz @ 0x808E2338
    r0 = r26 + 0x18; // 0x808E233C
    /* mulli r27, r0, 0x28 */ // 0x808E2340
    r3 = r3 + r27; // 0x808E2344
    r3 = *(4 + r3); // lwz @ 0x808E2348
    if (==) goto 0x0x808e2368;
    FUN_805EF474(); // bl 0x805EF474
    r0 = *(4 + r28); // lwz @ 0x808E2358
    /* li r4, 0 */ // 0x808E235C
    r3 = r0 + r27; // 0x808E2360
    *(4 + r3) = r4; // stw @ 0x808E2364
    r0 = r26 + 0x19; // 0x808E2368
    r3 = *(4 + r28); // lwz @ 0x808E236C
    /* mulli r27, r0, 0x28 */ // 0x808E2370
    r3 = r3 + r27; // 0x808E2374
    r3 = *(4 + r3); // lwz @ 0x808E2378
    if (==) goto 0x0x808e2398;
    FUN_805EF474(); // bl 0x805EF474
    r0 = *(4 + r28); // lwz @ 0x808E2388
    /* li r4, 0 */ // 0x808E238C
    r3 = r0 + r27; // 0x808E2390
    *(4 + r3) = r4; // stw @ 0x808E2394
    /* lis r3, 0 */ // 0x808E2398
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x808E23A0
    FUN_80647724(r3, r4); // bl 0x80647724
    r26 = r3;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}