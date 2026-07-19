/* Function at 0x806E1A28, size=368 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 4 function(s) */

int FUN_806E1A28(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* li r4, 2 */ // 0x806E1A30
    *(0x24 + r1) = r0; // stw @ 0x806E1A34
    /* stmw r27, 0xc(r1) */ // 0x806E1A38
    r30 = r3;
    r5 = *(0x15f5 + r3); // lbz @ 0x806E1A40
    r0 = *(0x15f4 + r3); // lbz @ 0x806E1A44
    r3 = r5 + -2; // 0x806E1A48
    /* orc r4, r5, r4 */ // 0x806E1A4C
    /* srwi r3, r3, 1 */ // 0x806E1A50
    /* subf r0, r3, r4 */ // 0x806E1A58
    /* srwi r31, r0, 0x1f */ // 0x806E1A5C
    if (==) goto 0x0x806e1b04;
    /* li r29, 0 */ // 0x806E1A64
    /* clrlwi r0, r29, 0x18 */ // 0x806E1A68
    r5 = *(0x15f4 + r30); // lbz @ 0x806E1A6C
    /* mulli r0, r0, 0x174 */ // 0x806E1A70
    r6 = r31;
    /* li r4, 0xb */ // 0x806E1A78
    r3 = r30 + r0; // 0x806E1A7C
    r3 = r3 + 0x484; // 0x806E1A80
    FUN_806E0C68(r6, r4, r3); // bl 0x806E0C68
    r29 = r29 + 1; // 0x806E1A88
    if (<) goto 0x0x806e1a68;
    /* li r28, 0 */ // 0x806E1A94
    /* lis r29, 0 */ // 0x806E1A98
    /* b 0x806e1af0 */ // 0x806E1A9C
    /* clrlwi r0, r28, 0x18 */ // 0x806E1AA0
    r3 = *(0 + r29); // lwz @ 0x806E1AA4
    /* mulli r0, r0, 0xf0 */ // 0x806E1AA8
    r3 = r3 + r0; // 0x806E1AAC
    r0 = *(0xf4 + r3); // lwz @ 0x806E1AB0
    r3 = *(0xcf8 + r3); // lbz @ 0x806E1AB4
    r0 = r3 + -1; // 0x806E1ABC
    /* clrlwi r3, r0, 0x18 */ // 0x806E1AC0
    if (!=) goto 0x0x806e1ad0;
    r0 = r3 + 6; // 0x806E1AC8
    /* clrlwi r3, r0, 0x18 */ // 0x806E1ACC
    /* mulli r0, r3, 0x174 */ // 0x806E1AD0
    r5 = *(0x15f4 + r30); // lbz @ 0x806E1AD4
    r6 = r31;
    /* clrlwi r4, r28, 0x18 */ // 0x806E1ADC
    r3 = r30 + r0; // 0x806E1AE0
    r3 = r3 + 0x484; // 0x806E1AE4
    FUN_806E0C68(r6, r3); // bl 0x806E0C68
    r28 = r28 + 1; // 0x806E1AEC
    r0 = *(0x15f6 + r30); // lbz @ 0x806E1AF0
    /* clrlwi r3, r28, 0x18 */ // 0x806E1AF4
    if (<) goto 0x0x806e1aa0;
    /* b 0x806e1b84 */ // 0x806E1B00
    /* li r28, 0 */ // 0x806E1B04
    /* lis r29, 0 */ // 0x806E1B08
    /* b 0x806e1b44 */ // 0x806E1B0C
    /* clrlwi r4, r28, 0x18 */ // 0x806E1B10
    r3 = *(0 + r29); // lwz @ 0x806E1B14
    /* mulli r0, r4, 0xf0 */ // 0x806E1B18
    r5 = *(0x15f4 + r30); // lbz @ 0x806E1B1C
    r6 = r31;
    r3 = r3 + r0; // 0x806E1B24
    r3 = *(0xcf8 + r3); // lbz @ 0x806E1B28
    r0 = r3 + -1; // 0x806E1B2C
    /* mulli r0, r0, 0x174 */ // 0x806E1B30
    r3 = r30 + r0; // 0x806E1B34
    r3 = r3 + 0x484; // 0x806E1B38
    FUN_806E0C68(r3); // bl 0x806E0C68
    r28 = r28 + 1; // 0x806E1B40
    r27 = *(0x15f6 + r30); // lbz @ 0x806E1B44
    /* clrlwi r0, r28, 0x18 */ // 0x806E1B48
    if (<) goto 0x0x806e1b10;
    /* b 0x806e1b78 */ // 0x806E1B54
    /* clrlwi r4, r27, 0x18 */ // 0x806E1B58
    r5 = *(0x15f4 + r30); // lbz @ 0x806E1B5C
    /* mulli r0, r4, 0x174 */ // 0x806E1B60
    r6 = r31;
    r3 = r30 + r0; // 0x806E1B68
    r3 = r3 + 0x484; // 0x806E1B6C
    FUN_806E0C68(r6, r3); // bl 0x806E0C68
    r27 = r27 + 1; // 0x806E1B74
    /* clrlwi r0, r27, 0x18 */ // 0x806E1B78
    if (<) goto 0x0x806e1b58;
    r0 = *(0x24 + r1); // lwz @ 0x806E1B88
    return;
}