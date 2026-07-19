/* Function at 0x808B73FC, size=492 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 4 function(s) */

int FUN_808B73FC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r4, 0 */ // 0x808B7404
    *(0x24 + r1) = r0; // stw @ 0x808B7408
    /* stmw r27, 0xc(r1) */ // 0x808B740C
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x808B7414
    r3 = *(0 + r3); // lwz @ 0x808B7418
    r29 = *(0x204 + r3); // lwz @ 0x808B741C
    if (!=) goto 0x0x808b7430;
    /* li r29, 0 */ // 0x808B7428
    /* b 0x808b7484 */ // 0x808B742C
    /* lis r30, 0 */ // 0x808B7430
    r30 = r30 + 0; // 0x808B7434
    if (==) goto 0x0x808b7480;
    r12 = *(0 + r29); // lwz @ 0x808B743C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808B7444
    /* mtctr r12 */ // 0x808B7448
    /* bctrl  */ // 0x808B744C
    /* b 0x808b7468 */ // 0x808B7450
    if (!=) goto 0x0x808b7464;
    /* li r0, 1 */ // 0x808B745C
    /* b 0x808b7474 */ // 0x808B7460
    r3 = *(0 + r3); // lwz @ 0x808B7464
    if (!=) goto 0x0x808b7454;
    /* li r0, 0 */ // 0x808B7470
    if (==) goto 0x0x808b7480;
    /* b 0x808b7484 */ // 0x808B747C
    /* li r29, 0 */ // 0x808B7480
    /* li r27, 0 */ // 0x808B7484
    /* li r30, 0 */ // 0x808B7488
    /* b 0x808b74fc */ // 0x808B748C
    r12 = *(0 + r31); // lwz @ 0x808B7490
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x808B7498
    /* mtctr r12 */ // 0x808B749C
    /* bctrl  */ // 0x808B74A0
    r3 = r3 + r30; // 0x808B74A4
    r0 = *(0xa4 + r3); // lbz @ 0x808B74A8
    if (!=) goto 0x0x808b74f4;
    /* clrlwi r0, r27, 0x18 */ // 0x808B74B4
    /* mulli r0, r0, 0xc */ // 0x808B74B8
    r28 = r29 + r0; // 0x808B74BC
    r0 = *(0x5c + r28); // lbz @ 0x808B74C0
    if (!=) goto 0x0x808b74f4;
    r12 = *(0 + r31); // lwz @ 0x808B74CC
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x808B74D4
    /* mtctr r12 */ // 0x808B74D8
    /* bctrl  */ // 0x808B74DC
    r0 = *(0x5d + r28); // lbz @ 0x808B74E0
    r4 = r27;
    /* cntlzw r0, r0 */ // 0x808B74E8
    /* srwi r5, r0, 5 */ // 0x808B74EC
    FUN_8066B6CC(r4); // bl 0x8066B6CC
    r30 = r30 + 0x5c; // 0x808B74F4
    r27 = r27 + 1; // 0x808B74F8
    r0 = *(0x904 + r31); // lwz @ 0x808B74FC
    if (<) goto 0x0x808b7490;
    /* li r27, 0 */ // 0x808B7508
    /* lis r30, 0 */ // 0x808B750C
    /* b 0x808b758c */ // 0x808B7510
    r3 = *(0 + r30); // lwz @ 0x808B7514
    if (==) goto 0x0x808b7588;
    r3 = *(0x14 + r3); // lwz @ 0x808B7520
    if (==) goto 0x0x808b7588;
    /* clrlwi r0, r27, 0x18 */ // 0x808B752C
    /* mulli r0, r0, 0xc */ // 0x808B7530
    r3 = r3 + r0; // 0x808B7534
    r3 = *(0x18 + r3); // lwz @ 0x808B7538
    if (==) goto 0x0x808b754c;
    r0 = *(8 + r3); // lwz @ 0x808B7544
    /* b 0x808b7550 */ // 0x808B7548
    /* li r0, 0 */ // 0x808B754C
    if (==) goto 0x0x808b7588;
    if (==) goto 0x0x808b7568;
    r0 = *(8 + r3); // lwz @ 0x808B7560
    /* b 0x808b756c */ // 0x808B7564
    /* li r0, 0 */ // 0x808B7568
    if (==) goto 0x0x808b7588;
    if (==) goto 0x0x808b7588;
    /* clrlwi r4, r27, 0x18 */ // 0x808B757C
    /* li r5, 0 */ // 0x808B7580
    FUN_808E08F0(r5); // bl 0x808E08F0
    r27 = r27 + 1; // 0x808B7588
    r0 = *(0x904 + r31); // lwz @ 0x808B758C
    if (<) goto 0x0x808b7514;
    /* lis r3, 0 */ // 0x808B7598
    r3 = *(0 + r3); // lwz @ 0x808B759C
    r3 = *(0 + r3); // lwz @ 0x808B75A0
    FUN_8068608C(r3); // bl 0x8068608C
    r0 = *(8 + r3); // lwz @ 0x808B75A8
    if (!=) goto 0x0x808b75d4;
    r3 = *(0x90c + r31); // lwz @ 0x808B75B4
    if (==) goto 0x0x808b75d4;
    r0 = *(4 + r3); // lbz @ 0x808B75C0
    if (==) goto 0x0x808b75d4;
    r3 = r31 + 0x54; // 0x808B75CC
    FUN_808D55D8(r3); // bl 0x808D55D8
    r0 = *(0x24 + r1); // lwz @ 0x808B75D8
    return;
}