/* Function at 0x805D33B0, size=328 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_805D33B0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* lis r4, 0x2c */ // 0x805D33B8
    *(0x34 + r1) = r0; // stw @ 0x805D33BC
    r4 = r4 + -0x4000; // 0x805D33C0
    /* stmw r26, 0x18(r1) */ // 0x805D33C4
    /* lis r27, 0 */ // 0x805D33C8
    r30 = r3;
    r3 = *(0 + r27); // lwz @ 0x805D33D0
    FUN_805BBE38(r4); // bl 0x805BBE38
    r31 = r3;
    if (!=) goto 0x0x805d3404;
    /* lis r5, 3 */ // 0x805D33E4
    r3 = *(0 + r27); // lwz @ 0x805D33E8
    r4 = *(0x14 + r30); // lwz @ 0x805D33EC
    r5 = r5 + -0x8000; // 0x805D33F0
    /* li r6, 0 */ // 0x805D33F4
    /* li r7, 1 */ // 0x805D33F8
    FUN_805BBCDC(r5, r6, r7); // bl 0x805BBCDC
    r31 = r3;
    if (==) goto 0x0x805d3420;
    /* addis r3, r30, 2 */ // 0x805D340C
    /* li r0, 0 */ // 0x805D3410
    *(0x5001 + r3) = r0; // stb @ 0x805D3414
    *(0x5002 + r3) = r0; // stb @ 0x805D3418
    /* b 0x805d34d8 */ // 0x805D341C
    r27 = *(0x14 + r30); // lwz @ 0x805D3420
    /* lis r3, 2 */ // 0x805D3424
    r4 = r3 + 0x7ffc; // 0x805D3428
    r3 = r27;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* addis r4, r27, 2 */ // 0x805D3434
    r0 = *(0x7ffc + r4); // lwz @ 0x805D3438
    if (!=) goto 0x0x805d34c4;
    r5 = *(0x14 + r30); // lwz @ 0x805D3444
    /* li r4, 0 */ // 0x805D3448
    r3 = *(0 + r5); // lwz @ 0x805D344C
    /* addis r0, r3, -0x524b */ // 0x805D3450
    if (!=) goto 0x0x805d3470;
    r3 = *(4 + r5); // lwz @ 0x805D345C
    /* addis r0, r3, -0x3030 */ // 0x805D3460
    if (!=) goto 0x0x805d3470;
    /* li r4, 1 */ // 0x805D346C
    if (==) goto 0x0x805d34c4;
    /* lis r4, 0 */ // 0x805D3478
    /* addis r3, r5, 2 */ // 0x805D347C
    r4 = *(0 + r4); // lwz @ 0x805D3480
    r0 = *(0x6b0a + r3); // lhz @ 0x805D3484
    r3 = *(0x84 + r4); // lwz @ 0x805D3488
    r0 = r0 rlwinm 0x14; // rlwinm
    if (!=) goto 0x0x805d34ac;
    /* addis r3, r30, 2 */ // 0x805D3498
    /* li r0, 1 */ // 0x805D349C
    *(0x5001 + r3) = r0; // stb @ 0x805D34A0
    *(0x5002 + r3) = r0; // stb @ 0x805D34A4
    /* b 0x805d34d8 */ // 0x805D34A8
    /* addis r3, r30, 2 */ // 0x805D34AC
    /* li r0, 0 */ // 0x805D34B0
    *(0x5001 + r3) = r0; // stb @ 0x805D34B4
    /* li r31, 9 */ // 0x805D34B8
    *(0x5002 + r3) = r0; // stb @ 0x805D34BC
    /* b 0x805d34d8 */ // 0x805D34C0
    /* addis r3, r30, 2 */ // 0x805D34C4
    /* li r0, 0 */ // 0x805D34C8
    *(0x5001 + r3) = r0; // stb @ 0x805D34CC
    /* li r31, 3 */ // 0x805D34D0
    *(0x5002 + r3) = r0; // stb @ 0x805D34D4
    /* lis r3, 1 */ // 0x805D34D8
    /* addis r27, r30, 2 */ // 0x805D34DC
    /* li r26, 0 */ // 0x805D34E0
    /* li r29, 0 */ // 0x805D34E4
    r28 = r3 + -0x6c10; // 0x805D34E8
    r0 = *(0x5001 + r27); // lbz @ 0x805D34EC
    if (==) goto 0x0x805d3514;
}