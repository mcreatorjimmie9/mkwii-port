/* Function at 0x806E7A48, size=260 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 2 function(s) */

int FUN_806E7A48(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x806E7A54
    r29 = r3;
    r0 = *(0x360 + r3); // lbz @ 0x806E7A5C
    if (==) goto 0x0x806e7abc;
    r0 = r0 rlwinm 3; // rlwinm
    r3 = r3 + r0; // 0x806E7A6C
    r25 = *(0x1e0 + r3); // lwz @ 0x806E7A70
    r26 = *(0x1e4 + r3); // lwz @ 0x806E7A74
    /* or. r0, r26, r25 */ // 0x806E7A78
    if (!=) goto 0x0x806e7a88;
    /* li r4, -1 */ // 0x806E7A80
    /* b 0x806e7ac0 */ // 0x806E7A84
    FUN_805E3430(r4); // bl 0x805E3430
    /* lis r6, -0x8000 */ // 0x806E7A8C
    /* subfc r4, r26, r4 */ // 0x806E7A90
    r0 = *(0xf8 + r6); // lwz @ 0x806E7A94
    /* lis r5, 0x1062 */ // 0x806E7A98
    r6 = r5 + 0x4dd3; // 0x806E7A9C
    /* subfe r3, r25, r3 */ // 0x806E7AA0
    /* srwi r0, r0, 2 */ // 0x806E7AA4
    /* li r5, 0 */ // 0x806E7AA8
    r0 = r6 * r0; // 0x806E7AAC
    /* srwi r6, r0, 6 */ // 0x806E7AB0
    FUN_805E3430(r5); // bl 0x805E3430
    /* b 0x806e7ac0 */ // 0x806E7AB8
    /* li r4, -1 */ // 0x806E7ABC
    if (<) goto 0x0x806e7be8;
    r3 = *(0x360 + r29); // lbz @ 0x806E7AC8
    /* li r30, 0 */ // 0x806E7ACC
    /* li r27, 1 */ // 0x806E7AD0
    /* li r28, 0 */ // 0x806E7AD4
    r0 = r3 + 1; // 0x806E7AD8
    /* clrlwi r31, r0, 0x18 */ // 0x806E7ADC
    /* clrlwi r0, r31, 0x18 */ // 0x806E7AE0
    if (<) goto 0x0x806e7af0;
    /* li r31, 0 */ // 0x806E7AEC
    r0 = *(0x291c + r29); // lwz @ 0x806E7AF0
    /* clrlwi r4, r31, 0x18 */ // 0x806E7AF4
    r3 = r27 << r4; // slw
    /* mulli r0, r0, 0x58 */ // 0x806E7AFC
    r5 = r29 + r0; // 0x806E7B00
    r0 = *(0x48 + r5); // lwz @ 0x806E7B04
    /* and. r0, r3, r0 */ // 0x806E7B08
    if (!=) goto 0x0x806e7b18;
    r31 = r31 + 1; // 0x806E7B10
    /* b 0x806e7bdc */ // 0x806E7B14
    r0 = *(0x59 + r5); // lbz @ 0x806E7B18
    if (!=) goto 0x0x806e7b2c;
    r31 = r31 + 1; // 0x806E7B24
    /* b 0x806e7bdc */ // 0x806E7B28
    r0 = r31 rlwinm 2; // rlwinm
    /* li r26, 0 */ // 0x806E7B30
    r23 = r29 + r0; // 0x806E7B34
    r3 = *(0x1b0 + r23); // lwz @ 0x806E7B38
    r4 = *(8 + r3); // lwz @ 0x806E7B3C
    if (==) goto 0x0x806e7bd0;
    r3 = *(0 + r3); // lwz @ 0x806E7B48
}