/* Function at 0x808E9B04, size=264 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 4 function(s) */

int FUN_808E9B04(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x808E9B10
    r25 = r3;
    FUN_808B3318(); // bl 0x808B3318
    /* li r6, 0 */ // 0x808E9B1C
    /* li r5, 0 */ // 0x808E9B20
    /* li r4, 0 */ // 0x808E9B24
    /* b 0x808e9b40 */ // 0x808E9B28
    r3 = *(0x48 + r25); // lwz @ 0x808E9B2C
    r6 = r6 + 1; // 0x808E9B30
    /* lwzx r3, r3, r5 */ // 0x808E9B34
    r5 = r5 + 4; // 0x808E9B38
    *(0x80 + r3) = r4; // stb @ 0x808E9B3C
    r0 = *(0x4c + r25); // lwz @ 0x808E9B40
    if (<) goto 0x0x808e9b2c;
    FUN_808CFA50(r5); // bl 0x808CFA50
    /* clrlwi r28, r3, 0x18 */ // 0x808E9B50
    /* li r27, 0 */ // 0x808E9B54
    /* li r30, 0 */ // 0x808E9B58
    /* lis r31, 0 */ // 0x808E9B5C
    /* b 0x808e9be4 */ // 0x808E9B60
    r3 = *(0 + r31); // lwz @ 0x808E9B64
    /* li r26, 0 */ // 0x808E9B68
    /* li r29, 0 */ // 0x808E9B6C
    r0 = *(0x98 + r3); // lwz @ 0x808E9B70
    r3 = r0 + r30; // 0x808E9B74
    r4 = *(0x164 + r3); // lwz @ 0x808E9B78
    /* subfic r3, r4, 2 */ // 0x808E9B7C
    r0 = r4 + -2; // 0x808E9B80
    r0 = r3 | r0; // 0x808E9B84
    /* srwi r24, r0, 0x1f */ // 0x808E9B88
    /* b 0x808e9bd0 */ // 0x808E9B8C
    r3 = *(0x48 + r25); // lwz @ 0x808E9B90
    /* lwzx r3, r3, r29 */ // 0x808E9B94
    r0 = *(0x240 + r3); // lwz @ 0x808E9B98
    /* srwi r6, r0, 0x1f */ // 0x808E9B9C
    /* clrlwi r5, r0, 0x1f */ // 0x808E9BA0
    r0 = r6 + r0; // 0x808E9BA4
    r4 = r0 >> 1; // srawi
    r0 = r5 ^ r6; // 0x808E9BB0
    /* subf r0, r6, r0 */ // 0x808E9BB4
    if (!=) goto 0x0x808e9bc8;
    if (!=) goto 0x0x808e9bc8;
    FUN_80649EEC(); // bl 0x80649EEC
    r29 = r29 + 4; // 0x808E9BC8
    r26 = r26 + 1; // 0x808E9BCC
    r0 = *(0x4c + r25); // lwz @ 0x808E9BD0
    if (<) goto 0x0x808e9b90;
    r30 = r30 + 4; // 0x808E9BDC
    r27 = r27 + 1; // 0x808E9BE0
    if (<) goto 0x0x808e9b64;
    r3 = r25 + 0x54; // 0x808E9BEC
    /* li r4, 1 */ // 0x808E9BF0
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r0 = *(0x34 + r1); // lwz @ 0x808E9BFC
    return;
}