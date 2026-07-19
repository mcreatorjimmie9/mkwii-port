/* Function at 0x808F9C40, size=268 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r19 */
/* Calls: 1 function(s) */

int FUN_808F9C40(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r19 */
    /* mulli r10, r4, 0x18 */ // 0x808F9C48
    *(0x44 + r1) = r0; // stw @ 0x808F9C4C
    /* stmw r19, 0xc(r1) */ // 0x808F9C50
    r21 = r4;
    r4 = r3 + r10; // 0x808F9C58
    r20 = r3;
    r22 = r5;
    r23 = r6;
    r24 = r9;
    r4 = *(0x3c4 + r4); // lbz @ 0x808F9C6C
    r0 = *(0x4e4 + r3); // lwz @ 0x808F9C70
    r27 = r0 + r7; // 0x808F9C78
    if (>) goto 0x0x808f9c84;
    r8 = r4;
    r29 = r3 + r10; // 0x808F9C84
    /* clrlwi r19, r8, 0x18 */ // 0x808F9C88
    /* li r26, 0 */ // 0x808F9C8C
    /* li r30, 5 */ // 0x808F9C90
    /* li r31, 0 */ // 0x808F9C94
    /* b 0x808f9d2c */ // 0x808F9C98
    r3 = *(0x3c4 + r29); // lbz @ 0x808F9C9C
    /* li r5, 0 */ // 0x808F9CA0
    r4 = *(2 + r20); // lbz @ 0x808F9CA4
    r0 = r3 + -1; // 0x808F9CA8
    /* clrlwi r25, r0, 0x18 */ // 0x808F9CAC
    /* b 0x808f9d1c */ // 0x808F9CB0
    r0 = r5 rlwinm 3; // rlwinm
    r28 = r20 + r0; // 0x808F9CB8
    r0 = *(9 + r28); // lbz @ 0x808F9CBC
    if (!=) goto 0x0x808f9d18;
    r0 = *(0xa + r28); // lbz @ 0x808F9CC8
    if (!=) goto 0x0x808f9d18;
    /* clrlwi r0, r26, 0x18 */ // 0x808F9CD4
    r3 = *(4 + r28); // lwz @ 0x808F9CD8
    r0 = r0 * r24; // 0x808F9CDC
    r5 = r22;
    r6 = r23;
    r4 = r27 + r0; // 0x808F9CE8
    FUN_8090F434(r5, r6); // bl 0x8090F434
    r3 = *(0 + r20); // lbz @ 0x808F9CF0
    r0 = r25 rlwinm 2; // rlwinm
    *(9 + r28) = r3; // stb @ 0x808F9CF8
    r3 = r29 + r0; // 0x808F9CFC
    *(0xa + r28) = r30; // stb @ 0x808F9D00
    *(0x3c8 + r3) = r31; // stw @ 0x808F9D04
    r3 = *(0x3c4 + r29); // lbz @ 0x808F9D08
    r0 = r3 + -1; // 0x808F9D0C
    *(0x3c4 + r29) = r0; // stb @ 0x808F9D10
    /* b 0x808f9d28 */ // 0x808F9D14
    r5 = r5 + 1; // 0x808F9D18
    /* clrlwi r0, r5, 0x18 */ // 0x808F9D1C
    if (<) goto 0x0x808f9cb4;
    r26 = r26 + 1; // 0x808F9D28
    /* clrlwi r0, r26, 0x18 */ // 0x808F9D2C
    if (<) goto 0x0x808f9c9c;
    r0 = *(0x44 + r1); // lwz @ 0x808F9D3C
    return;
}