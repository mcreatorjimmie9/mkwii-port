/* Function at 0x80788A74, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_80788A74(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x80788A80
    /* stmw r26, 8(r1) */ // 0x80788A84
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x80788b88;
    /* lis r5, 0 */ // 0x80788A94
    /* lis r4, 0 */ // 0x80788A98
    r5 = r5 + 0; // 0x80788A9C
    *(0 + r3) = r5; // stw @ 0x80788AA0
    r31 = *(0 + r4); // lwz @ 0x80788AA4
    if (==) goto 0x0x80788b6c;
    /* li r0, 0 */ // 0x80788AB0
    *(0 + r4) = r0; // stw @ 0x80788AB4
    if (==) goto 0x0x80788b6c;
    if (==) goto 0x0x80788b64;
    *(0 + r31) = r5; // stw @ 0x80788AC0
    r30 = *(0 + r4); // lwz @ 0x80788AC4
    if (==) goto 0x0x80788b58;
    *(0 + r4) = r0; // stw @ 0x80788AD0
    if (==) goto 0x0x80788b58;
    if (==) goto 0x0x80788b50;
    *(0 + r30) = r5; // stw @ 0x80788ADC
    r29 = *(0 + r4); // lwz @ 0x80788AE0
    if (==) goto 0x0x80788b44;
    *(0 + r4) = r0; // stw @ 0x80788AEC
    if (==) goto 0x0x80788b44;
    if (==) goto 0x0x80788b3c;
    *(0 + r29) = r5; // stw @ 0x80788AF8
    r28 = *(0 + r4); // lwz @ 0x80788AFC
    if (==) goto 0x0x80788b30;
    *(0 + r4) = r0; // stw @ 0x80788B08
    if (==) goto 0x0x80788b30;
    if (==) goto 0x0x80788b28;
    *(0 + r28) = r5; // stw @ 0x80788B14
    FUN_80788C48(); // bl 0x80788C48
    r3 = r28;
    /* li r4, 0 */ // 0x80788B20
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x80788B34
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80788B48
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x80788B5C
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r26;
    /* li r4, 0 */ // 0x80788B70
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80788b88;
    r3 = r26;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r26;
}