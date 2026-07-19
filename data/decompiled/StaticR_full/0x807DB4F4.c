/* Function at 0x807DB4F4, size=304 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r24 */
/* Calls: 2 function(s) */

int FUN_807DB4F4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r24 */
    /* li r0, 0 */ // 0x807DB500
    /* stmw r24, 0x50(r1) */ // 0x807DB504
    /* li r25, 0 */ // 0x807DB50C
    /* li r24, 0 */ // 0x807DB510
    *(0x10 + r1) = r0; // stw @ 0x807DB514
    /* lis r29, 0 */ // 0x807DB518
    /* li r30, 2 */ // 0x807DB51C
    *(0x14 + r1) = r0; // stw @ 0x807DB520
    *(0x18 + r1) = r0; // stw @ 0x807DB524
    *(0x1c + r1) = r0; // stw @ 0x807DB528
    r28 = *(0x14 + r4); // lwz @ 0x807DB52C
    r27 = *(0x1d + r4); // lbz @ 0x807DB530
    r3 = *(0x10 + r4); // lbz @ 0x807DB534
    *(8 + r1) = r3; // stb @ 0x807DB538
    r26 = *(0x11 + r4); // lbz @ 0x807DB53C
    *(0x20 + r1) = r0; // stw @ 0x807DB540
    *(0x24 + r1) = r0; // stw @ 0x807DB544
    *(0x28 + r1) = r0; // stw @ 0x807DB548
    *(0x2c + r1) = r0; // stw @ 0x807DB54C
    *(0x30 + r1) = r0; // stw @ 0x807DB550
    *(0x34 + r1) = r0; // stw @ 0x807DB554
    *(0x38 + r1) = r0; // stw @ 0x807DB558
    *(0x3c + r1) = r0; // stw @ 0x807DB55C
    *(0x40 + r1) = r0; // stw @ 0x807DB560
    *(0x44 + r1) = r0; // stw @ 0x807DB564
    *(0x48 + r1) = r0; // stw @ 0x807DB568
    *(0x4c + r1) = r0; // stw @ 0x807DB56C
    /* b 0x807db5ac */ // 0x807DB570
    r3 = *(0 + r29); // lwz @ 0x807DB574
    /* clrlwi r5, r24, 0x18 */ // 0x807DB57C
    FUN_805A71BC(r4); // bl 0x805A71BC
    if (==) goto 0x0x807db5a4;
    /* clrlwi r0, r3, 0x18 */ // 0x807DB58C
    if (!=) goto 0x0x807db5a4;
    r0 = r24 rlwinm 2; // rlwinm
    /* stwx r30, r31, r0 */ // 0x807DB59C
    /* b 0x807db5a8 */ // 0x807DB5A0
    r25 = r25 + 1; // 0x807DB5A4
    r24 = r24 + 1; // 0x807DB5A8
    /* clrlwi r0, r24, 0x18 */ // 0x807DB5AC
    if (<) goto 0x0x807db574;
    /* lis r3, 0 */ // 0x807DB5B8
    r4 = r25;
    r3 = *(0 + r3); // lwz @ 0x807DB5C0
    FUN_807C03BC(r3, r4); // bl 0x807C03BC
    /* li r5, 0 */ // 0x807DB5CC
    /* li r6, 0 */ // 0x807DB5D0
    /* mtctr r28 */ // 0x807DB5D4
    if (<=) goto 0x0x807db60c;
    r0 = *(0 + r4); // lwz @ 0x807DB5E0
    if (!=) goto 0x0x807db600;
    if (!=) goto 0x0x807db5fc;
    /* clrlwi r3, r6, 0x18 */ // 0x807DB5F4
    /* b 0x807db610 */ // 0x807DB5F8
    r5 = r5 + 1; // 0x807DB5FC
    r4 = r4 + 4; // 0x807DB600
    r6 = r6 + 1; // 0x807DB604
    if (counter-- != 0) goto 0x0x807db5e0;
    /* li r3, 0 */ // 0x807DB60C
    r0 = *(0x74 + r1); // lwz @ 0x807DB614
    return;
}