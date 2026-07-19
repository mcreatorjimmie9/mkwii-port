/* Function at 0x80812FE4, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_80812FE4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x80812FF0
    /* stmw r26, 8(r1) */ // 0x80812FF4
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x808130f8;
    /* lis r5, 0 */ // 0x80813004
    /* lis r4, 0 */ // 0x80813008
    r5 = r5 + 0; // 0x8081300C
    *(0 + r3) = r5; // stw @ 0x80813010
    r31 = *(0 + r4); // lwz @ 0x80813014
    if (==) goto 0x0x808130dc;
    /* li r0, 0 */ // 0x80813020
    *(0 + r4) = r0; // stw @ 0x80813024
    if (==) goto 0x0x808130dc;
    if (==) goto 0x0x808130d4;
    *(0 + r31) = r5; // stw @ 0x80813030
    r30 = *(0 + r4); // lwz @ 0x80813034
    if (==) goto 0x0x808130c8;
    *(0 + r4) = r0; // stw @ 0x80813040
    if (==) goto 0x0x808130c8;
    if (==) goto 0x0x808130c0;
    *(0 + r30) = r5; // stw @ 0x8081304C
    r29 = *(0 + r4); // lwz @ 0x80813050
    if (==) goto 0x0x808130b4;
    *(0 + r4) = r0; // stw @ 0x8081305C
    if (==) goto 0x0x808130b4;
    if (==) goto 0x0x808130ac;
    *(0 + r29) = r5; // stw @ 0x80813068
    r28 = *(0 + r4); // lwz @ 0x8081306C
    if (==) goto 0x0x808130a0;
    *(0 + r4) = r0; // stw @ 0x80813078
    if (==) goto 0x0x808130a0;
    if (==) goto 0x0x80813098;
    *(0 + r28) = r5; // stw @ 0x80813084
    FUN_808131B8(); // bl 0x808131B8
    r3 = r28;
    /* li r4, 0 */ // 0x80813090
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x808130A4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x808130B8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808130CC
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r26;
    /* li r4, 0 */ // 0x808130E0
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x808130f8;
    r3 = r26;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r26;
}