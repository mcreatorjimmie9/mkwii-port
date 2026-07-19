/* Function at 0x805A93AC, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805A93AC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805A93C0
    r30 = r3;
    r3 = r5;
    FUN_805E0ED8(r3); // bl 0x805E0ED8
    r0 = *(0x18 + r30); // lhz @ 0x805A93D0
    /* clrlwi. r0, r0, 0x1f */ // 0x805A93D4
    if (==) goto 0x0x805a9478;
    /* clrlwi r0, r3, 0x10 */ // 0x805A93DC
    if (>) goto 0x0x805a9478;
    /* extsh r0, r3 */ // 0x805A93E8
    /* slwi r6, r0, 3 */ // 0x805A93EC
    r3 = r30 + r6; // 0x805A93F0
    r0 = *(0xcc + r3); // lwz @ 0x805A93F4
    /* srwi r0, r0, 0x1f */ // 0x805A93F8
    if (!=) goto 0x0x805a9478;
    /* li r0, 0x26 */ // 0x805A9404
    r5 = r31 + -1; // 0x805A9408
    r4 = r30 + 0x21; // 0x805A940C
    /* mtctr r0 */ // 0x805A9410
    r3 = *(1 + r4); // lbz @ 0x805A9414
    /* lbzu r0, 2(r4) */ // 0x805A9418
    *(1 + r5) = r3; // stb @ 0x805A941C
    /* stbu r0, 2(r5) */ // 0x805A9420
    if (counter-- != 0) goto 0x0x805a9414;
    r4 = r30 + r6; // 0x805A9428
    /* li r0, 1 */ // 0x805A942C
    r3 = *(0xc8 + r4); // lwz @ 0x805A9430
    r6 = r3 rlwinm 0x18; // rlwinm
    r5 = r3 rlwinm 0xe; // rlwinm
    /* srwi r3, r3, 0x19 */ // 0x805A943C
    *(0x56 + r31) = r0; // stb @ 0x805A9440
    *(0x50 + r31) = r3; // sth @ 0x805A9444
    *(0x52 + r31) = r5; // stb @ 0x805A9448
    *(0x54 + r31) = r6; // sth @ 0x805A944C
    r0 = *(0xcc + r4); // lwz @ 0x805A9450
    r0 = r0 rlwinm 7; // rlwinm
    *(0x58 + r31) = r0; // stw @ 0x805A9458
    r0 = *(0xc8 + r4); // lwz @ 0x805A945C
    r0 = r0 rlwinm 0x1e; // rlwinm
    *(0x5c + r31) = r0; // stw @ 0x805A9464
    r0 = *(0xcc + r4); // lwz @ 0x805A9468
    r0 = r0 rlwinm 0xa; // rlwinm
    *(0x60 + r31) = r0; // stw @ 0x805A9470
    /* b 0x805a9480 */ // 0x805A9474
    /* li r0, 0 */ // 0x805A9478
    *(0x56 + r31) = r0; // stb @ 0x805A947C
    r0 = *(0x14 + r1); // lwz @ 0x805A9480
    r31 = *(0xc + r1); // lwz @ 0x805A9484
    r30 = *(8 + r1); // lwz @ 0x805A9488
    return;
}