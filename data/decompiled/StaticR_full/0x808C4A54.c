/* Function at 0x808C4A54, size=472 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r27 */
/* Calls: 9 function(s) */

int FUN_808C4A54(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r27 */
    /* stmw r27, 0x2c(r1) */ // 0x808C4A60
    r29 = r3;
    FUN_805E34E4(r3); // bl 0x805E34E4
    FUN_808CFA50(r3); // bl 0x808CFA50
    r30 = r3;
    FUN_808CF954(r3); // bl 0x808CF954
    r31 = r3;
    FUN_808B8268(); // bl 0x808B8268
    FUN_808BE624(); // bl 0x808BE624
    /* li r0, 0 */ // 0x808C4A88
    *(0x6c4 + r29) = r0; // stw @ 0x808C4A8C
    /* lis r3, 0 */ // 0x808C4A90
    *(0x6c8 + r29) = r0; // stw @ 0x808C4A94
    r3 = *(0 + r3); // lwz @ 0x808C4A98
    r3 = *(0 + r3); // lwz @ 0x808C4A9C
    r3 = *(0 + r3); // lwz @ 0x808C4AA0
    FUN_808CF8A4(r3); // bl 0x808CF8A4
    if (==) goto 0x0x808c4b00;
    /* li r4, 2 */ // 0x808C4AB4
    FUN_805E364C(r3, r4); // bl 0x805E364C
    /* lis r4, 0 */ // 0x808C4ABC
    /* slwi r0, r3, 2 */ // 0x808C4AC0
    r5 = *(0 + r4); // lwz @ 0x808C4AC4
    r6 = r29 + r0; // 0x808C4AC8
    /* lis r4, 0 */ // 0x808C4ACC
    *(0xce4 + r5) = r3; // stw @ 0x808C4AD0
    r5 = *(0x6c4 + r6); // lwz @ 0x808C4AD4
    r0 = r5 + 1; // 0x808C4AD8
    *(0x6c4 + r6) = r0; // stw @ 0x808C4ADC
    r4 = *(0 + r4); // lwz @ 0x808C4AE0
    if (==) goto 0x0x808c4b4c;
    r4 = *(0x18 + r4); // lwz @ 0x808C4AEC
    if (==) goto 0x0x808c4b4c;
    *(0x14 + r4) = r3; // stw @ 0x808C4AF8
    /* b 0x808c4b4c */ // 0x808C4AFC
    /* li r27, 0 */ // 0x808C4B00
    /* lis r28, 0 */ // 0x808C4B04
    /* b 0x808c4b38 */ // 0x808C4B08
    /* clrlwi r0, r27, 0x18 */ // 0x808C4B0C
    r3 = *(0 + r28); // lwz @ 0x808C4B10
    /* mulli r0, r0, 0xf0 */ // 0x808C4B14
    r27 = r27 + 1; // 0x808C4B18
    r3 = r3 + r0; // 0x808C4B1C
    r0 = *(0xce4 + r3); // lwz @ 0x808C4B20
    /* slwi r0, r0, 2 */ // 0x808C4B24
    r4 = r29 + r0; // 0x808C4B28
    r3 = *(0x6c4 + r4); // lwz @ 0x808C4B2C
    r0 = r3 + 1; // 0x808C4B30
    *(0x6c4 + r4) = r0; // stw @ 0x808C4B34
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r3, r3, 0x18 */ // 0x808C4B3C
    /* clrlwi r0, r27, 0x18 */ // 0x808C4B40
    if (<) goto 0x0x808c4b0c;
    r0 = *(0x6c4 + r29); // lwz @ 0x808C4B4C
    /* li r4, 0 */ // 0x808C4B50
    /* li r3, 0 */ // 0x808C4B54
    if (<=) goto 0x0x808c4b68;
    r3 = r0;
    /* li r4, 0 */ // 0x808C4B64
    r0 = *(0x6c8 + r29); // lwz @ 0x808C4B68
    if (<=) goto 0x0x808c4b78;
    /* li r4, 1 */ // 0x808C4B74
    /* clrlwi r3, r31, 0x18 */ // 0x808C4B78
    r5 = r4 + 1; // 0x808C4B7C
    r3 = r3 + -1; // 0x808C4B80
    /* clrlwi r4, r30, 0x18 */ // 0x808C4B84
    r0 = r3 + 1; // 0x808C4B88
    /* srwi r6, r5, 0x1f */ // 0x808C4B8C
    /* clrlwi r5, r5, 0x1f */ // 0x808C4B90
    r8 = r31 rlwinm 0x1f; // rlwinm
    r5 = r5 ^ r6; // 0x808C4B98
    /* subf r0, r4, r0 */ // 0x808C4B9C
    /* subf r9, r6, r5 */ // 0x808C4BA0
    /* lis r7, 0 */ // 0x808C4BA4
    /* mtctr r0 */ // 0x808C4BA8
    if (<) goto 0x0x808c4c0c;
    /* clrlwi r4, r3, 0x18 */ // 0x808C4BB4
    /* slwi r0, r9, 2 */ // 0x808C4BB8
    /* mulli r4, r4, 0xf0 */ // 0x808C4BBC
    r6 = *(0 + r7); // lwz @ 0x808C4BC0
    r5 = r29 + r0; // 0x808C4BC4
    r4 = r6 + r4; // 0x808C4BC8
    *(0xce4 + r4) = r9; // stw @ 0x808C4BCC
    r4 = *(0x6c4 + r5); // lwz @ 0x808C4BD0
    r0 = r4 + 1; // 0x808C4BD4
    *(0x6c4 + r5) = r0; // stw @ 0x808C4BD8
    r0 = r9 + 1; // 0x808C4BDC
    /* srwi r4, r0, 0x1f */ // 0x808C4BE0
    /* clrlwi r0, r0, 0x1f */ // 0x808C4BE4
    r0 = r0 ^ r4; // 0x808C4BE8
    /* subf r9, r4, r0 */ // 0x808C4BEC
    /* slwi r0, r9, 2 */ // 0x808C4BF0
    r4 = r29 + r0; // 0x808C4BF4
    r0 = *(0x6c4 + r4); // lwz @ 0x808C4BF8
    if (>) goto 0x0x808c4bdc;
    r3 = r3 + -1; // 0x808C4C04
    if (counter-- != 0) goto 0x0x808c4bb4;
    /* li r4, -1 */ // 0x808C4C10
    FUN_805E35B8(r3, r3, r4); // bl 0x805E35B8
    r0 = *(0x44 + r1); // lwz @ 0x808C4C1C
    return;
}