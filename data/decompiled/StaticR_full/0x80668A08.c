/* Function at 0x80668A08, size=364 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_80668A08(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x80668A14
    r26 = r3;
    r0 = *(0xc + r3); // lbz @ 0x80668A1C
    if (!=) goto 0x0x80668b60;
    r28 = r26;
    r29 = r3 + 0x40; // 0x80668A2C
    /* li r27, 0 */ // 0x80668A30
    /* lis r24, -0x7777 */ // 0x80668A34
    /* lis r31, 0 */ // 0x80668A38
    /* li r30, 1 */ // 0x80668A3C
    /* li r25, 9 */ // 0x80668A40
    r0 = *(4 + r26); // lwz @ 0x80668A44
    r3 = r30 << r27; // slw
    /* and. r0, r3, r0 */ // 0x80668A4C
    if (==) goto 0x0x80668b4c;
    r3 = *(0 + r31); // lwz @ 0x80668A54
    r4 = r27;
    r3 = r3 + 0x34; // 0x80668A5C
    FUN_8067F3FC(r4, r3); // bl 0x8067F3FC
    r4 = r3;
    if (==) goto 0x0x80668b4c;
    r12 = *(0 + r29); // lwz @ 0x80668A70
    r3 = r29;
    r12 = *(0x10 + r12); // lwz @ 0x80668A78
    /* mtctr r12 */ // 0x80668A7C
    /* bctrl  */ // 0x80668A80
    /* li r4, 0 */ // 0x80668A84
    /* li r5, 0 */ // 0x80668A88
    /* mtctr r25 */ // 0x80668A8C
    r3 = r26 + r5; // 0x80668A90
    r3 = *(0x10 + r3); // lwz @ 0x80668A94
    if (==) goto 0x0x80668b40;
    r6 = r28 + r4; // 0x80668AA0
    r7 = r26 + r4; // 0x80668AA4
    r0 = *(0x68 + r6); // lbz @ 0x80668AA8
    r7 = *(0x34 + r7); // lbz @ 0x80668AAC
    if (==) goto 0x0x80668ac0;
    /* li r8, 0 */ // 0x80668AB8
    /* b 0x80668b20 */ // 0x80668ABC
    r6 = r28 + r5; // 0x80668AC0
    r6 = *(0x44 + r6); // lwz @ 0x80668AC4
    if (!=) goto 0x0x80668ad8;
    /* li r8, 1 */ // 0x80668AD0
    /* b 0x80668b20 */ // 0x80668AD4
    if (==) goto 0x0x80668b1c;
    /* li r8, 0 */ // 0x80668AE4
    if (<) goto 0x0x80668b20;
    r7 = r6 + -0xf; // 0x80668AEC
    r0 = r24 + -0x7777; // 0x80668AF0
    /* mulhw r0, r0, r7 */ // 0x80668AF4
    r0 = r0 + r7; // 0x80668AF8
    r0 = r0 >> 3; // srawi
    /* srwi r6, r0, 0x1f */ // 0x80668B00
    r0 = r0 + r6; // 0x80668B04
    /* mulli r0, r0, 0xf */ // 0x80668B08
    /* subf. r0, r0, r7 */ // 0x80668B0C
    if (!=) goto 0x0x80668b20;
    /* li r8, 1 */ // 0x80668B14
    /* b 0x80668b20 */ // 0x80668B18
    /* li r8, 0 */ // 0x80668B1C
    if (==) goto 0x0x80668b40;
    r12 = *(0 + r3); // lwz @ 0x80668B28
    r4 = r27;
    r12 = *(8 + r12); // lwz @ 0x80668B30
    /* mtctr r12 */ // 0x80668B34
    /* bctrl  */ // 0x80668B38
    /* b 0x80668b4c */ // 0x80668B3C
    r4 = r4 + 1; // 0x80668B40
    r5 = r5 + 4; // 0x80668B44
    if (counter-- != 0) goto 0x0x80668a90;
    r27 = r27 + 1; // 0x80668B4C
    r28 = r28 + 0x34; // 0x80668B50
    r29 = r29 + 0x34; // 0x80668B58
    if (<) goto 0x0x80668a44;
    r0 = *(0x34 + r1); // lwz @ 0x80668B64
    return;
}