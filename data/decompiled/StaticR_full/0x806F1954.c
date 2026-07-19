/* Function at 0x806F1954, size=456 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 11 function(s) */

int FUN_806F1954(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* slwi r5, r4, 2 */ // 0x806F195C
    *(0x44 + r1) = r0; // stw @ 0x806F1960
    /* slwi r0, r4, 3 */ // 0x806F1964
    /* stmw r21, 0x14(r1) */ // 0x806F1968
    r24 = r3;
    r25 = r4;
    r28 = r3 + r5; // 0x806F1974
    r29 = r24;
    r27 = r3 + r0; // 0x806F197C
    /* li r26, 0 */ // 0x806F1980
    /* lis r30, 0 */ // 0x806F1984
    /* li r22, 1 */ // 0x806F1988
    /* lis r31, 0 */ // 0x806F198C
    /* lis r23, 0 */ // 0x806F1990
    /* b 0x806f1af4 */ // 0x806F1994
    r3 = *(0 + r30); // lwz @ 0x806F1998
    r4 = r26;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f1aec;
    r3 = *(0 + r30); // lwz @ 0x806F19AC
    r4 = r26;
    FUN_806E4438(r4); // bl 0x806E4438
    if (!=) goto 0x0x806f19c8;
    /* li r4, 0 */ // 0x806F19C0
    /* b 0x806f1adc */ // 0x806F19C4
    r3 = *(0 + r30); // lwz @ 0x806F19C8
    r4 = r26;
    FUN_806E44C0(r4, r4); // bl 0x806E44C0
    if (==) goto 0x0x806f19e4;
    r4 = *(0x70 + r28); // lwz @ 0x806F19DC
    /* b 0x806f1adc */ // 0x806F19E0
    r3 = *(0 + r30); // lwz @ 0x806F19E4
    r4 = r25;
    FUN_806E4530(r4); // bl 0x806E4530
    r21 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F19F4
    /* li r4, 0 */ // 0x806F19F8
    FUN_806E9970(r4, r4); // bl 0x806E9970
    if (==) goto 0x0x806f1a1c;
    r3 = *(0 + r31); // lwz @ 0x806F1A08
    /* li r4, 1 */ // 0x806F1A0C
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f1a34;
    r3 = *(0 + r30); // lwz @ 0x806F1A1C
    r4 = r25;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F1A28
    /* lbzx r4, r24, r0 */ // 0x806F1A2C
    /* b 0x806f1a54 */ // 0x806F1A30
    r3 = *(0 + r30); // lwz @ 0x806F1A34
    r4 = r25;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f1a50;
    r4 = *(0x10 + r27); // lbz @ 0x806F1A48
    /* b 0x806f1a54 */ // 0x806F1A4C
    /* li r4, 0 */ // 0x806F1A50
    r3 = r29 + r21; // 0x806F1A54
    r0 = *(0x16 + r3); // lbz @ 0x806F1A58
    if (!=) goto 0x0x806f1ad8;
    r3 = *(0 + r30); // lwz @ 0x806F1A64
    r4 = r25;
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f1a94;
    r3 = *(0 + r30); // lwz @ 0x806F1A78
    r4 = r25;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F1A84
    r3 = r24 + r0; // 0x806F1A88
    r0 = *(3 + r3); // lbz @ 0x806F1A8C
    /* b 0x806f1ab4 */ // 0x806F1A90
    r3 = *(0 + r30); // lwz @ 0x806F1A94
    r4 = r25;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f1ab0;
    r0 = *(0x13 + r27); // lbz @ 0x806F1AA8
    /* b 0x806f1ab4 */ // 0x806F1AAC
    /* li r0, 0 */ // 0x806F1AB0
    if (!=) goto 0x0x806f1ad8;
    r0 = *(0x15 + r29); // lbz @ 0x806F1ABC
    r3 = r22 << r21; // slw
    /* li r4, 2 */ // 0x806F1AC4
    /* and. r0, r3, r0 */ // 0x806F1AC8
    if (==) goto 0x0x806f1adc;
    /* li r4, 1 */ // 0x806F1AD0
    /* b 0x806f1adc */ // 0x806F1AD4
    /* li r4, 0 */ // 0x806F1AD8
    if (!=) goto 0x0x806f1aec;
    /* li r3, 1 */ // 0x806F1AE4
    /* b 0x806f1b08 */ // 0x806F1AE8
    r29 = r29 + 8; // 0x806F1AEC
    r26 = r26 + 1; // 0x806F1AF0
    r3 = *(0 + r23); // lwz @ 0x806F1AF4
    r0 = *(0x24 + r3); // lbz @ 0x806F1AF8
    if (<) goto 0x0x806f1998;
    /* li r3, 0 */ // 0x806F1B04
    r0 = *(0x44 + r1); // lwz @ 0x806F1B0C
    return;
}