/* Function at 0x806F2A64, size=620 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r18 */
/* Calls: 8 function(s) */

int FUN_806F2A64(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r18 */
    /* stmw r18, 8(r1) */ // 0x806F2A70
    r19 = r3;
    /* li r21, 0 */ // 0x806F2A78
    /* lis r29, 0 */ // 0x806F2A7C
    /* lis r30, 0 */ // 0x806F2A80
    /* lis r31, 0 */ // 0x806F2A84
    /* li r27, 1 */ // 0x806F2A88
    /* li r18, 2 */ // 0x806F2A8C
    r5 = *(0 + r31); // lwz @ 0x806F2A90
    /* clrlwi r28, r21, 0x18 */ // 0x806F2A94
    r3 = r27 << r28; // slw
    r0 = *(0x291c + r5); // lwz @ 0x806F2A9C
    /* mulli r0, r0, 0x58 */ // 0x806F2AA0
    r4 = r5 + r0; // 0x806F2AA4
    r0 = *(0x48 + r4); // lwz @ 0x806F2AA8
    /* and. r0, r3, r0 */ // 0x806F2AAC
    if (==) goto 0x0x806f2da8;
    r0 = *(0x59 + r4); // lbz @ 0x806F2AB4
    if (==) goto 0x0x806f2da8;
    r0 = r21 rlwinm 5; // rlwinm
    r22 = r21 rlwinm 2; // rlwinm
    r3 = r5 + r0; // 0x806F2AC8
    r3 = *(0x27b4 + r3); // lwz @ 0x806F2ACC
    r0 = r22 + r5; // 0x806F2AD0
    /* mulli r3, r3, 0x30 */ // 0x806F2AD4
    r3 = r3 + r0; // 0x806F2AD8
    r3 = *(0x150 + r3); // lwz @ 0x806F2ADC
    r24 = *(0x18 + r3); // lwz @ 0x806F2AE0
    r0 = *(8 + r24); // lwz @ 0x806F2AE4
    if (==) goto 0x0x806f2da8;
    /* li r20, 0 */ // 0x806F2AF0
    /* li r23, 0 */ // 0x806F2AF4
    /* b 0x806f2d70 */ // 0x806F2AF8
    /* li r4, -1 */ // 0x806F2AFC
    /* li r26, 0 */ // 0x806F2B00
    /* mtctr r18 */ // 0x806F2B04
    r3 = r5 + r26; // 0x806F2B08
    r0 = *(0x2920 + r3); // lbz @ 0x806F2B0C
    if (!=) goto 0x0x806f2b28;
    r4 = r4 + 1; // 0x806F2B18
    if (!=) goto 0x0x806f2b28;
    /* b 0x806f2be8 */ // 0x806F2B24
    r26 = r26 + 1; // 0x806F2B28
    r3 = r5 + r26; // 0x806F2B2C
    r0 = *(0x2920 + r3); // lbz @ 0x806F2B30
    if (!=) goto 0x0x806f2b4c;
    r4 = r4 + 1; // 0x806F2B3C
    if (!=) goto 0x0x806f2b4c;
    /* b 0x806f2be8 */ // 0x806F2B48
    r26 = r26 + 1; // 0x806F2B4C
    r3 = r5 + r26; // 0x806F2B50
    r0 = *(0x2920 + r3); // lbz @ 0x806F2B54
    if (!=) goto 0x0x806f2b70;
    r4 = r4 + 1; // 0x806F2B60
    if (!=) goto 0x0x806f2b70;
    /* b 0x806f2be8 */ // 0x806F2B6C
    r26 = r26 + 1; // 0x806F2B70
    r3 = r5 + r26; // 0x806F2B74
    r0 = *(0x2920 + r3); // lbz @ 0x806F2B78
    if (!=) goto 0x0x806f2b94;
    r4 = r4 + 1; // 0x806F2B84
    if (!=) goto 0x0x806f2b94;
    /* b 0x806f2be8 */ // 0x806F2B90
    r26 = r26 + 1; // 0x806F2B94
    r3 = r5 + r26; // 0x806F2B98
    r0 = *(0x2920 + r3); // lbz @ 0x806F2B9C
    if (!=) goto 0x0x806f2bb8;
    r4 = r4 + 1; // 0x806F2BA8
    if (!=) goto 0x0x806f2bb8;
    /* b 0x806f2be8 */ // 0x806F2BB4
    r26 = r26 + 1; // 0x806F2BB8
    r3 = r5 + r26; // 0x806F2BBC
    r0 = *(0x2920 + r3); // lbz @ 0x806F2BC0
    if (!=) goto 0x0x806f2bdc;
    r4 = r4 + 1; // 0x806F2BCC
    if (!=) goto 0x0x806f2bdc;
    /* b 0x806f2be8 */ // 0x806F2BD8
    r26 = r26 + 1; // 0x806F2BDC
    if (counter-- != 0) goto 0x0x806f2b08;
    /* li r26, -1 */ // 0x806F2BE4
    r3 = *(0 + r29); // lwz @ 0x806F2BE8
    r4 = r26;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f2d68;
    r3 = *(0 + r29); // lwz @ 0x806F2BFC
    r4 = r26;
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f2c2c;
    r3 = *(0 + r29); // lwz @ 0x806F2C10
    r4 = r26;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F2C1C
    r3 = r19 + r0; // 0x806F2C20
    r25 = *(3 + r3); // lbz @ 0x806F2C24
    /* b 0x806f2c54 */ // 0x806F2C28
    r3 = *(0 + r29); // lwz @ 0x806F2C2C
    r4 = r26;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f2c50;
    /* slwi r0, r26, 3 */ // 0x806F2C40
    r3 = r19 + r0; // 0x806F2C44
    r25 = *(0x13 + r3); // lbz @ 0x806F2C48
    /* b 0x806f2c54 */ // 0x806F2C4C
    /* li r25, 0 */ // 0x806F2C50
    /* slwi r3, r26, 3 */ // 0x806F2C54
    r0 = *(0 + r24); // lwz @ 0x806F2C58
    r3 = r19 + r3; // 0x806F2C5C
    /* li r5, 8 */ // 0x806F2C60
    r3 = r3 + 0x10; // 0x806F2C64
    r4 = r0 + r23; // 0x806F2C68
    FUN_805E3430(r5, r3); // bl 0x805E3430
    r3 = *(0 + r29); // lwz @ 0x806F2C70
    r4 = r26;
    FUN_806E44C0(r3, r4); // bl 0x806E44C0
    if (==) goto 0x0x806f2ca0;
    r3 = *(0 + r29); // lwz @ 0x806F2C84
    r4 = r26;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F2C90
    r3 = r19 + r0; // 0x806F2C94
    r0 = *(3 + r3); // lbz @ 0x806F2C98
    /* b 0x806f2cc8 */ // 0x806F2C9C
    r3 = *(0 + r29); // lwz @ 0x806F2CA0
    r4 = r26;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f2cc4;
    /* slwi r0, r26, 3 */ // 0x806F2CB4
    r3 = r19 + r0; // 0x806F2CB8
    r0 = *(0x13 + r3); // lbz @ 0x806F2CBC
    /* b 0x806f2cc8 */ // 0x806F2CC0
    /* li r0, 0 */ // 0x806F2CC4
    if (==) goto 0x0x806f2d68;
}