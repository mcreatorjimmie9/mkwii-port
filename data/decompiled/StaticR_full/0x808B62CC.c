/* Function at 0x808B62CC, size=352 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r20 */
/* Calls: 4 function(s) */

int FUN_808B62CC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -128(r1) */
    /* saved r20 */
    /* stmw r20, 0x50(r1) */ // 0x808B62D8
    r26 = r3;
    FUN_808B3318(); // bl 0x808B3318
    /* lis r3, 0 */ // 0x808B62E4
    r5 = *(0 + r3); // lwz @ 0x808B62E8
    r0 = *(0x36 + r5); // lha @ 0x808B62EC
    if (<) goto 0x0x808b6314;
    /* lis r3, 1 */ // 0x808B62F8
    /* clrlwi r4, r0, 0x18 */ // 0x808B62FC
    r0 = r3 + -0x6c10; // 0x808B6300
    r0 = r0 * r4; // 0x808B6304
    r3 = r5 + r0; // 0x808B6308
    r21 = r3 + 0x38; // 0x808B630C
    /* b 0x808b6318 */ // 0x808B6310
    /* li r21, 0 */ // 0x808B6314
    FUN_808CFE7C(); // bl 0x808CFE7C
    /* addis r4, r21, 1 */ // 0x808B631C
    /* slwi r0, r3, 2 */ // 0x808B6320
    r3 = r4 + r0; // 0x808B6324
    /* lis r31, 0 */ // 0x808B6328
    r29 = *(-0x6ec8 + r3); // lwz @ 0x808B632C
    r31 = r31 + 0; // 0x808B6334
    /* li r27, 0 */ // 0x808B6338
    /* slwi r0, r29, 2 */ // 0x808B633C
    /* li r30, 1 */ // 0x808B6340
    r28 = r28 + r0; // 0x808B6344
    r3 = *(0x6bc + r26); // lwz @ 0x808B6348
    r0 = r30 << r27; // slw
    /* and. r0, r3, r0 */ // 0x808B6350
    if (==) goto 0x0x808b6364;
    r4 = r27;
    r3 = r26 + 0x6c4; // 0x808B635C
    FUN_80675534(r4, r3); // bl 0x80675534
    r20 = *(0x8d0 + r26); // lwz @ 0x808B6364
    r21 = *(0 + r31); // lwz @ 0x808B6368
    r22 = *(4 + r31); // lwz @ 0x808B636C
    r23 = *(8 + r31); // lwz @ 0x808B6374
    r24 = *(0xc + r31); // lwz @ 0x808B6378
    r25 = *(0x10 + r31); // lwz @ 0x808B637C
    r12 = *(0x14 + r31); // lwz @ 0x808B6380
    r11 = *(0x18 + r31); // lwz @ 0x808B6384
    r10 = *(0x1c + r31); // lwz @ 0x808B6388
    r9 = *(0x20 + r31); // lwz @ 0x808B638C
    r8 = *(0x24 + r31); // lwz @ 0x808B6390
    r7 = *(0x28 + r31); // lwz @ 0x808B6394
    r6 = *(0x2c + r31); // lwz @ 0x808B6398
    r5 = *(0x30 + r31); // lwz @ 0x808B639C
    r4 = *(0x34 + r31); // lwz @ 0x808B63A0
    r3 = *(0x38 + r31); // lwz @ 0x808B63A4
    r0 = *(0x3c + r31); // lwz @ 0x808B63A8
    *(8 + r1) = r21; // stw @ 0x808B63AC
    *(0xc + r1) = r22; // stw @ 0x808B63B0
    *(0x10 + r1) = r23; // stw @ 0x808B63B4
    *(0x14 + r1) = r24; // stw @ 0x808B63B8
    *(0x18 + r1) = r25; // stw @ 0x808B63BC
    *(0x1c + r1) = r12; // stw @ 0x808B63C0
    *(0x20 + r1) = r11; // stw @ 0x808B63C4
    *(0x24 + r1) = r10; // stw @ 0x808B63C8
    *(0x28 + r1) = r9; // stw @ 0x808B63CC
    *(0x2c + r1) = r8; // stw @ 0x808B63D0
    *(0x30 + r1) = r7; // stw @ 0x808B63D4
    *(0x34 + r1) = r6; // stw @ 0x808B63D8
    *(0x38 + r1) = r5; // stw @ 0x808B63DC
    *(0x3c + r1) = r4; // stw @ 0x808B63E0
    *(0x40 + r1) = r3; // stw @ 0x808B63E4
    *(0x44 + r1) = r0; // stw @ 0x808B63E8
    if (<) goto 0x0x808b640c;
    if (<) goto 0x0x808b640c;
    /* slwi r0, r20, 4 */ // 0x808B63F8
    r3 = *(0x2bc + r26); // lwz @ 0x808B63FC
    /* lwzx r4, r28, r0 */ // 0x808B6400
    /* li r5, 0 */ // 0x808B6404
    FUN_808D5A00(r5); // bl 0x808D5A00
    r27 = r27 + 1; // 0x808B640C
    if (<) goto 0x0x808b6348;
    r0 = *(0x84 + r1); // lwz @ 0x808B641C
    return;
}