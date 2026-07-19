/* Function at 0x806F336C, size=612 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 8 function(s) */

int FUN_806F336C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* slwi r0, r4, 3 */ // 0x806F3378
    /* stmw r22, 8(r1) */ // 0x806F337C
    r27 = r3 + r0; // 0x806F3380
    r24 = r3;
    r25 = r5;
    r28 = r27;
    /* li r26, 0 */ // 0x806F3390
    /* lis r30, 0 */ // 0x806F3394
    /* lis r31, 0 */ // 0x806F3398
    /* li r22, 1 */ // 0x806F339C
    /* li r23, 2 */ // 0x806F33A0
    r5 = *(0 + r30); // lwz @ 0x806F33A4
    /* li r4, -1 */ // 0x806F33A8
    /* li r29, 0 */ // 0x806F33AC
    /* mtctr r23 */ // 0x806F33B0
    r3 = r5 + r29; // 0x806F33B4
    r0 = *(0x2920 + r3); // lbz @ 0x806F33B8
    if (!=) goto 0x0x806f33d4;
    r4 = r4 + 1; // 0x806F33C4
    if (!=) goto 0x0x806f33d4;
    /* b 0x806f3494 */ // 0x806F33D0
    r29 = r29 + 1; // 0x806F33D4
    r3 = r5 + r29; // 0x806F33D8
    r0 = *(0x2920 + r3); // lbz @ 0x806F33DC
    if (!=) goto 0x0x806f33f8;
    r4 = r4 + 1; // 0x806F33E8
    if (!=) goto 0x0x806f33f8;
    /* b 0x806f3494 */ // 0x806F33F4
    r29 = r29 + 1; // 0x806F33F8
    r3 = r5 + r29; // 0x806F33FC
    r0 = *(0x2920 + r3); // lbz @ 0x806F3400
    if (!=) goto 0x0x806f341c;
    r4 = r4 + 1; // 0x806F340C
    if (!=) goto 0x0x806f341c;
    /* b 0x806f3494 */ // 0x806F3418
    r29 = r29 + 1; // 0x806F341C
    r3 = r5 + r29; // 0x806F3420
    r0 = *(0x2920 + r3); // lbz @ 0x806F3424
    if (!=) goto 0x0x806f3440;
    r4 = r4 + 1; // 0x806F3430
    if (!=) goto 0x0x806f3440;
    /* b 0x806f3494 */ // 0x806F343C
    r29 = r29 + 1; // 0x806F3440
    r3 = r5 + r29; // 0x806F3444
    r0 = *(0x2920 + r3); // lbz @ 0x806F3448
    if (!=) goto 0x0x806f3464;
    r4 = r4 + 1; // 0x806F3454
    if (!=) goto 0x0x806f3464;
    /* b 0x806f3494 */ // 0x806F3460
    r29 = r29 + 1; // 0x806F3464
    r3 = r5 + r29; // 0x806F3468
    r0 = *(0x2920 + r3); // lbz @ 0x806F346C
    if (!=) goto 0x0x806f3488;
    r4 = r4 + 1; // 0x806F3478
    if (!=) goto 0x0x806f3488;
    /* b 0x806f3494 */ // 0x806F3484
    r29 = r29 + 1; // 0x806F3488
    if (counter-- != 0) goto 0x0x806f33b4;
    /* li r29, -1 */ // 0x806F3490
    r3 = *(0 + r31); // lwz @ 0x806F3494
    r4 = r29;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f35ac;
    r3 = *(0 + r30); // lwz @ 0x806F34A8
    /* li r4, 0 */ // 0x806F34AC
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806f34d0;
    r3 = *(0 + r30); // lwz @ 0x806F34BC
    /* li r4, 1 */ // 0x806F34C0
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f34e8;
    r3 = *(0 + r31); // lwz @ 0x806F34D0
    r4 = r29;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F34DC
    /* lbzx r0, r24, r0 */ // 0x806F34E0
    /* b 0x806f3510 */ // 0x806F34E4
    r3 = *(0 + r31); // lwz @ 0x806F34E8
    r4 = r29;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f350c;
    /* slwi r0, r29, 3 */ // 0x806F34FC
    r3 = r24 + r0; // 0x806F3500
    r0 = *(0x10 + r3); // lbz @ 0x806F3504
    /* b 0x806f3510 */ // 0x806F3508
    /* li r0, 0 */ // 0x806F350C
    *(6 + r28) = r0; // stb @ 0x806F3510
    r4 = r29;
    r3 = *(0 + r31); // lwz @ 0x806F3518
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f3544;
    r3 = *(0 + r31); // lwz @ 0x806F3528
    r4 = r29;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F3534
    r3 = r24 + r0; // 0x806F3538
    r0 = *(3 + r3); // lbz @ 0x806F353C
    /* b 0x806f356c */ // 0x806F3540
    r3 = *(0 + r31); // lwz @ 0x806F3544
    r4 = r29;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f3568;
    /* slwi r0, r29, 3 */ // 0x806F3558
    r3 = r24 + r0; // 0x806F355C
    r0 = *(0x13 + r3); // lbz @ 0x806F3560
    /* b 0x806f356c */ // 0x806F3564
    /* li r0, 0 */ // 0x806F3568
    if (!=) goto 0x0x806f359c;
    /* slwi r0, r29, 2 */ // 0x806F3574
    r3 = r24 + r0; // 0x806F3578
    r0 = *(0x70 + r3); // lwz @ 0x806F357C
    if (!=) goto 0x0x806f359c;
    r3 = *(5 + r27); // lbz @ 0x806F3588
    r0 = r22 << r26; // slw
    r0 = r3 | r0; // 0x806F3590
    *(5 + r27) = r0; // stb @ 0x806F3594
    /* b 0x806f35ac */ // 0x806F3598
    r3 = *(5 + r27); // lbz @ 0x806F359C
    r0 = r22 << r26; // slw
    /* andc r0, r3, r0 */ // 0x806F35A4
    *(5 + r27) = r0; // stb @ 0x806F35A8
    r26 = r26 + 1; // 0x806F35AC
    r28 = r28 + 1; // 0x806F35B0
    if (<) goto 0x0x806f33a4;
    r0 = *(0x34 + r1); // lwz @ 0x806F35C0
    return;
}