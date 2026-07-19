/* Function at 0x808F9A64, size=476 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_808F9A64(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r22 */
    *(0x44 + r1) = r0; // stw @ 0x808F9A70
    /* stmw r22, 0x18(r1) */ // 0x808F9A74
    r24 = r3;
    r25 = r4;
    r26 = r6;
    r27 = r9;
    if (<) goto 0x0x808f9a90;
    /* li r5, 0 */ // 0x808F9A8C
    /* mulli r0, r4, 0x18 */ // 0x808F9A90
    r4 = *(0x4e4 + r3); // lwz @ 0x808F9A94
    r28 = r4 + r7; // 0x808F9A98
    r4 = r3 + r0; // 0x808F9A9C
    r4 = *(0x3c4 + r4); // lbz @ 0x808F9AA0
    /* subfic r4, r4, 5 */ // 0x808F9AA4
    if (>) goto 0x0x808f9ab4;
    /* clrlwi r8, r4, 0x18 */ // 0x808F9AB0
    r4 = *(2 + r3); // lbz @ 0x808F9AB4
    /* li r6, 0 */ // 0x808F9ABC
    /* li r7, 0 */ // 0x808F9AC0
    /* b 0x808f9b40 */ // 0x808F9AC4
    r11 = r7 rlwinm 3; // rlwinm
    r9 = *(0 + r3); // lbz @ 0x808F9ACC
    r12 = r3 + r11; // 0x808F9AD0
    r11 = *(9 + r12); // lbz @ 0x808F9AD4
    if (<) goto 0x0x808f9b3c;
    r9 = *(8 + r12); // lbz @ 0x808F9AE0
    if (!=) goto 0x0x808f9b3c;
    r12 = *(4 + r12); // lwz @ 0x808F9AEC
    r22 = *(0x180 + r12); // lwz @ 0x808F9AF0
    r11 = *(0x178 + r12); // lwz @ 0x808F9AF4
    /* slwi r9, r22, 4 */ // 0x808F9AF8
    /* lwzx r9, r11, r9 */ // 0x808F9AFC
    if (!=) goto 0x0x808f9b3c;
    r9 = *(0x17c + r12); // lwz @ 0x808F9B08
    /* li r11, 0 */ // 0x808F9B0C
    if (!=) goto 0x0x808f9b28;
    r9 = *(0x185 + r12); // lbz @ 0x808F9B18
    if (==) goto 0x0x808f9b28;
    /* li r11, 1 */ // 0x808F9B24
    if (==) goto 0x0x808f9b3c;
    /* clrlwi r9, r6, 0x18 */ // 0x808F9B30
    r6 = r6 + 1; // 0x808F9B34
    /* stbx r7, r10, r9 */ // 0x808F9B38
    r7 = r7 + 1; // 0x808F9B3C
    /* clrlwi r9, r7, 0x18 */ // 0x808F9B40
    if (>=) goto 0x0x808f9b58;
    /* clrlwi r9, r6, 0x18 */ // 0x808F9B4C
    if (<) goto 0x0x808f9ac8;
    /* li r12, 0 */ // 0x808F9B5C
    /* b 0x808f9b98 */ // 0x808F9B60
    r10 = r12 rlwinm 3; // rlwinm
    r7 = *(0 + r3); // lbz @ 0x808F9B68
    r11 = r3 + r10; // 0x808F9B6C
    r10 = *(9 + r11); // lbz @ 0x808F9B70
    if (<) goto 0x0x808f9b94;
    r7 = *(8 + r11); // lbz @ 0x808F9B7C
    if (!=) goto 0x0x808f9b94;
    /* clrlwi r7, r6, 0x18 */ // 0x808F9B88
    r6 = r6 + 1; // 0x808F9B8C
    /* stbx r12, r9, r7 */ // 0x808F9B90
    /* clrlwi r7, r12, 0x18 */ // 0x808F9B98
    if (>=) goto 0x0x808f9bb0;
    /* clrlwi r7, r6, 0x18 */ // 0x808F9BA4
    if (<) goto 0x0x808f9b64;
    r30 = r3 + r0; // 0x808F9BB0
    /* clrlwi r23, r6, 0x18 */ // 0x808F9BB8
    /* li r29, 0 */ // 0x808F9BBC
    /* b 0x808f9c20 */ // 0x808F9BC0
    /* clrlwi r3, r29, 0x18 */ // 0x808F9BC4
    r6 = *(0x3c4 + r30); // lbz @ 0x808F9BC8
    r0 = r3 * r27; // 0x808F9BCC
    /* lbzx r3, r31, r3 */ // 0x808F9BD0
    r5 = r25;
    /* slwi r3, r3, 3 */ // 0x808F9BD8
    r7 = r26;
    r22 = r24 + r3; // 0x808F9BE0
    r3 = *(4 + r22); // lwz @ 0x808F9BE4
    r4 = r28 + r0; // 0x808F9BE8
    FUN_8090F074(r7); // bl 0x8090F074
    *(9 + r22) = r25; // stb @ 0x808F9BF0
    r29 = r29 + 1; // 0x808F9BF4
    r0 = *(0x3c4 + r30); // lbz @ 0x808F9BF8
    *(0xa + r22) = r0; // stb @ 0x808F9BFC
    r0 = *(0x3c4 + r30); // lbz @ 0x808F9C00
    r4 = *(4 + r22); // lwz @ 0x808F9C04
    /* slwi r0, r0, 2 */ // 0x808F9C08
    r3 = r30 + r0; // 0x808F9C0C
    *(0x3c8 + r3) = r4; // stw @ 0x808F9C10
    r3 = *(0x3c4 + r30); // lbz @ 0x808F9C14
    r0 = r3 + 1; // 0x808F9C18
    *(0x3c4 + r30) = r0; // stb @ 0x808F9C1C
    /* clrlwi r0, r29, 0x18 */ // 0x808F9C20
    if (<) goto 0x0x808f9bc4;
    r0 = *(0x44 + r1); // lwz @ 0x808F9C30
    return;
}