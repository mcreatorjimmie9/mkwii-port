/* Function at 0x806E3340, size=384 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 9 function(s) */

int FUN_806E3340(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r4, 0 */ // 0x806E3348
    *(0x24 + r1) = r0; // stw @ 0x806E334C
    /* stmw r26, 8(r1) */ // 0x806E3350
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806E3358
    r0 = *(0xb70 + r3); // lwz @ 0x806E335C
    if (!=) goto 0x0x806e33dc;
    /* lis r28, 0 */ // 0x806E3368
    r3 = *(0 + r28); // lwz @ 0x806E336C
    FUN_806E69B4(); // bl 0x806E69B4
    if (==) goto 0x0x806e33dc;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r6, -0x8000 */ // 0x806E3380
    /* lis r5, 0x1062 */ // 0x806E3384
    r0 = *(0xf8 + r6); // lwz @ 0x806E3388
    r5 = r5 + 0x4dd3; // 0x806E338C
    r7 = *(0x194 + r29); // lwz @ 0x806E3390
    r27 = r4;
    /* srwi r0, r0, 2 */ // 0x806E3398
    r6 = *(0x190 + r29); // lwz @ 0x806E339C
    r0 = r5 * r0; // 0x806E33A0
    /* subfc r4, r7, r4 */ // 0x806E33A4
    r26 = r3;
    /* subfe r3, r6, r3 */ // 0x806E33AC
    /* li r5, 0 */ // 0x806E33B0
    /* srwi r6, r0, 6 */ // 0x806E33B4
    FUN_805E3430(r5); // bl 0x805E3430
    if (<=) goto 0x0x806e3564;
    r3 = *(0 + r28); // lwz @ 0x806E33C4
    /* li r0, 1 */ // 0x806E33C8
    *(0x2756 + r3) = r0; // stb @ 0x806E33CC
    *(0x194 + r29) = r27; // stw @ 0x806E33D0
    *(0x190 + r29) = r26; // stw @ 0x806E33D4
    /* b 0x806e3564 */ // 0x806E33D8
    r0 = *(0 + r29); // lbz @ 0x806E33DC
    if (==) goto 0x0x806e3564;
    /* lis r3, 0 */ // 0x806E33E8
    r3 = *(0 + r3); // lwz @ 0x806E33EC
    r0 = *(0xb74 + r3); // lwz @ 0x806E33F0
    if (==) goto 0x0x806e3408;
    if (==) goto 0x0x806e3414;
    /* b 0x806e3504 */ // 0x806E3404
    r3 = r29;
    FUN_806E3D68(r3); // bl 0x806E3D68
    /* b 0x806e3504 */ // 0x806E3410
    r3 = r29;
    FUN_806E4D7C(r3, r3); // bl 0x806E4D7C
    r3 = r29;
    FUN_806E5364(r3, r3); // bl 0x806E5364
    /* lis r3, 0 */ // 0x806E3424
    r3 = *(0 + r3); // lwz @ 0x806E3428
    r0 = *(0x291c + r3); // lwz @ 0x806E342C
    /* mulli r0, r0, 0x58 */ // 0x806E3430
    r4 = r3 + r0; // 0x806E3434
    r0 = *(0x8b + r4); // lbz @ 0x806E3438
    if (!=) goto 0x0x806e3448;
    FUN_806E6508(); // bl 0x806E6508
    /* lis r3, 0 */ // 0x806E3448
    r3 = *(0 + r3); // lwz @ 0x806E344C
    FUN_806EB1B4(r3); // bl 0x806EB1B4
    /* lis r3, 0 */ // 0x806E3454
    r3 = *(0 + r3); // lwz @ 0x806E3458
    FUN_806F1310(r3, r3); // bl 0x806F1310
    /* li r30, 0 */ // 0x806E3460
    /* lis r31, 0 */ // 0x806E3464
    /* li r26, 1 */ // 0x806E3468
    /* lis r27, 0 */ // 0x806E346C
    /* lis r28, 0 */ // 0x806E3470
    /* b 0x806e34f4 */ // 0x806E3474
    r5 = *(0 + r31); // lwz @ 0x806E347C
    if (<) goto 0x0x806e3498;
    if (>=) goto 0x0x806e3498;
    r3 = r5 + r30; // 0x806E348C
    r4 = *(0x2920 + r3); // lbz @ 0x806E3490
    /* b 0x806e349c */ // 0x806E3494
    /* li r4, 0xff */ // 0x806E3498
    r0 = *(0x2930 + r5); // lwz @ 0x806E349C
    r3 = r26 << r30; // slw
    /* and. r0, r3, r0 */ // 0x806E34A4
    if (!=) goto 0x0x806e34e4;
    r3 = *(0 + r31); // lwz @ 0x806E34AC
    r0 = *(0x291c + r3); // lwz @ 0x806E34B0
    /* mulli r0, r0, 0x58 */ // 0x806E34B4
    r3 = r3 + r0; // 0x806E34B8
    r0 = *(0x59 + r3); // lbz @ 0x806E34BC
}