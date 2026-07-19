/* Function at 0x80649B1C, size=120 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r24 */
/* Calls: 3 function(s) */

int FUN_80649B1C(int r3, int r4, int r5, int r6, int r7, int r9)
{
    /* Stack frame: -80(r1) */
    /* saved r24 */
    /* stmw r24, 0x30(r1) */ // 0x80649B28
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r27 = r6;
    r28 = r7;
    r29 = r9;
    r4 = r24;
    *(0x244 + r3) = r8; // stw @ 0x80649B48
    FUN_8064E324(r4, r3); // bl 0x8064E324
    r3 = r25;
    /* li r31, 0 */ // 0x80649B58
    r0 = *(0 + r3); // lwz @ 0x80649B5C
    r31 = r31 + 1; // 0x80649B60
    r3 = r3 + 4; // 0x80649B64
    if (!=) goto 0x0x80649b5c;
    r0 = *(0 + r3); // lwz @ 0x80649B70
    if (!=) goto 0x0x80649b5c;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r0 = r31 + 0x12; // 0x80649B80
    r4 = *(0xc94 + r3); // lwz @ 0x80649B84
    /* slwi r3, r0, 2 */ // 0x80649B88
    /* li r5, -4 */ // 0x80649B8C
    FUN_805E3430(r5); // bl 0x805E3430
}