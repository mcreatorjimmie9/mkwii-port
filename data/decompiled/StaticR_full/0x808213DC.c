/* Function at 0x808213DC, size=296 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 3 function(s) */

int FUN_808213DC(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r4, 0 */ // 0x808213E4
    *(0x34 + r1) = r0; // stw @ 0x808213E8
    /* stmw r23, 0xc(r1) */ // 0x808213EC
    r24 = r3;
    r0 = *(0 + r3); // lwz @ 0x808213F4
    r29 = *(0 + r4); // lwz @ 0x808213F8
    /* cntlzw r0, r29 */ // 0x80821400
    /* srwi r28, r0, 5 */ // 0x80821404
    if (!=) goto 0x0x80821418;
    r3 = *(0x18 + r3); // lwz @ 0x8082140C
    r27 = r3 + -3; // 0x80821410
    /* b 0x8082141c */ // 0x80821414
    r27 = *(0x18 + r3); // lwz @ 0x80821418
    /* slwi r30, r29, 2 */ // 0x8082141C
    /* lis r31, 0 */ // 0x80821420
    /* li r23, 0xf */ // 0x80821424
    /* b 0x808214e4 */ // 0x80821428
    if (==) goto 0x0x808214dc;
    r0 = *(4 + r24); // lwz @ 0x80821434
    r3 = r0 + r30; // 0x80821438
    /* lwzx r25, r30, r0 */ // 0x8082143C
    r26 = *(-4 + r3); // lwz @ 0x80821440
    r0 = *(0x78 + r26); // lwz @ 0x80821444
    /* rlwinm. r0, r0, 0, 0x18, 0x19 */ // 0x80821448
    if (!=) goto 0x0x808214dc;
    r3 = r26;
    FUN_8082AF48(r3); // bl 0x8082AF48
    if (==) goto 0x0x808214b8;
    r3 = r25;
    FUN_8082AF48(r3, r3); // bl 0x8082AF48
    if (==) goto 0x0x808214dc;
    r3 = r31 + 0; // 0x80821470
    /* mtctr r23 */ // 0x80821474
    r4 = *(0 + r3); // lwz @ 0x80821478
    r0 = *(0x138 + r25); // lwz @ 0x8082147C
    /* and. r0, r0, r4 */ // 0x80821480
    if (!=) goto 0x0x808214dc;
    r0 = *(0x138 + r26); // lwz @ 0x80821488
    /* and. r0, r0, r4 */ // 0x8082148C
    if (==) goto 0x0x808214ac;
    r0 = *(4 + r24); // lwz @ 0x80821494
    r3 = r0 + r30; // 0x80821498
    *(-4 + r3) = r25; // stw @ 0x8082149C
    r3 = *(4 + r24); // lwz @ 0x808214A0
    /* stwx r26, r3, r30 */ // 0x808214A4
    /* b 0x808214dc */ // 0x808214A8
    r3 = r3 + 4; // 0x808214AC
    if (counter-- != 0) goto 0x0x80821478;
    /* b 0x808214dc */ // 0x808214B4
    r3 = r25;
    FUN_8082AF48(r3, r3); // bl 0x8082AF48
    if (==) goto 0x0x808214dc;
    r0 = *(4 + r24); // lwz @ 0x808214C8
    r3 = r0 + r30; // 0x808214CC
    *(-4 + r3) = r25; // stw @ 0x808214D0
    r3 = *(4 + r24); // lwz @ 0x808214D4
    /* stwx r26, r3, r30 */ // 0x808214D8
    r30 = r30 + 0x20; // 0x808214DC
    r29 = r29 + 8; // 0x808214E0
    if (<) goto 0x0x8082142c;
    r3 = r28;
    r0 = *(0x34 + r1); // lwz @ 0x808214F4
    return;
}