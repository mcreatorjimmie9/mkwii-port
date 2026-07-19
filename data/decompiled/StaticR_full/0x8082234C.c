/* Function at 0x8082234C, size=364 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 10 function(s) */

int FUN_8082234C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x80822358
    r26 = r4;
    r25 = r3;
    r4 = *(0 + r3); // lwz @ 0x80822364
    r3 = r26;
    FUN_8082795C(r3); // bl 0x8082795C
    /* clrlwi r30, r3, 0x10 */ // 0x80822370
    /* li r29, 0 */ // 0x80822374
    /* li r28, 0 */ // 0x80822378
    /* li r31, 0 */ // 0x8082237C
    /* b 0x80822494 */ // 0x80822380
    r3 = *(4 + r25); // lwz @ 0x80822384
    /* lwzx r27, r3, r31 */ // 0x80822388
    r0 = *(0xc + r27); // lha @ 0x8082238C
    if (!=) goto 0x0x8082248c;
    r0 = *(0 + r25); // lwz @ 0x80822398
    /* li r29, 1 */ // 0x8082239C
    if (!=) goto 0x0x808223c0;
    r3 = r26;
    FUN_8082792C(r3); // bl 0x8082792C
    r0 = r3;
    r3 = r27;
    /* clrlwi r4, r0, 0x18 */ // 0x808223B8
    FUN_80834078(r3, r3); // bl 0x80834078
    r0 = *(0 + r25); // lwz @ 0x808223C0
    if (!=) goto 0x0x808223e4;
    r3 = r26;
    FUN_8082792C(r3); // bl 0x8082792C
    r0 = r3;
    r3 = r27;
    /* clrlwi r4, r0, 0x18 */ // 0x808223DC
    FUN_808359EC(r3, r3); // bl 0x808359EC
    r0 = *(0 + r25); // lwz @ 0x808223E4
    if (!=) goto 0x0x8082248c;
    r3 = r26;
    FUN_80827934(r3, r4, r5, r6, r7); // bl 0x80827934
    r0 = *(0xc + r1); // lwz @ 0x80822408
    if (==) goto 0x0x80822430;
    if (==) goto 0x0x80822448;
    if (==) goto 0x0x80822460;
    if (==) goto 0x0x8082247c;
    /* b 0x8082248c */ // 0x8082242C
    r4 = *(0xa + r1); // lbz @ 0x80822430
    r3 = r27;
    r5 = *(9 + r1); // lbz @ 0x80822438
    r6 = *(8 + r1); // lbz @ 0x8082243C
    FUN_8086CDF8(r3); // bl 0x8086CDF8
    /* b 0x8082248c */ // 0x80822444
    r4 = *(0xa + r1); // lbz @ 0x80822448
    r3 = r27;
    r5 = *(9 + r1); // lbz @ 0x80822450
    r6 = *(8 + r1); // lbz @ 0x80822454
    FUN_8086D134(r3); // bl 0x8086D134
    /* b 0x8082248c */ // 0x8082245C
    r4 = *(0xa + r1); // lbz @ 0x80822460
    r3 = r27;
    r5 = *(9 + r1); // lbz @ 0x80822468
    /* li r7, 0 */ // 0x8082246C
    r6 = *(8 + r1); // lbz @ 0x80822470
    FUN_8086D390(r3, r7); // bl 0x8086D390
    /* b 0x8082248c */ // 0x80822478
    r4 = *(0xa + r1); // lbz @ 0x8082247C
    r3 = r27;
    r5 = *(8 + r1); // lbz @ 0x80822484
    FUN_8086D444(r3); // bl 0x8086D444
    r31 = r31 + 4; // 0x8082248C
    r28 = r28 + 1; // 0x80822490
    r0 = *(0x14 + r25); // lwz @ 0x80822494
    if (<) goto 0x0x80822384;
    r3 = r29;
    r0 = *(0x34 + r1); // lwz @ 0x808224A8
    return;
}