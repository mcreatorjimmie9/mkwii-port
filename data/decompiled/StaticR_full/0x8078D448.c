/* Function at 0x8078D448, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_8078D448(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x8078D454
    /* stmw r26, 8(r1) */ // 0x8078D458
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x8078d55c;
    /* lis r5, 0 */ // 0x8078D468
    /* lis r4, 0 */ // 0x8078D46C
    r5 = r5 + 0; // 0x8078D470
    *(0 + r3) = r5; // stw @ 0x8078D474
    r31 = *(0 + r4); // lwz @ 0x8078D478
    if (==) goto 0x0x8078d540;
    /* li r0, 0 */ // 0x8078D484
    *(0 + r4) = r0; // stw @ 0x8078D488
    if (==) goto 0x0x8078d540;
    if (==) goto 0x0x8078d538;
    *(0 + r31) = r5; // stw @ 0x8078D494
    r30 = *(0 + r4); // lwz @ 0x8078D498
    if (==) goto 0x0x8078d52c;
    *(0 + r4) = r0; // stw @ 0x8078D4A4
    if (==) goto 0x0x8078d52c;
    if (==) goto 0x0x8078d524;
    *(0 + r30) = r5; // stw @ 0x8078D4B0
    r29 = *(0 + r4); // lwz @ 0x8078D4B4
    if (==) goto 0x0x8078d518;
    *(0 + r4) = r0; // stw @ 0x8078D4C0
    if (==) goto 0x0x8078d518;
    if (==) goto 0x0x8078d510;
    *(0 + r29) = r5; // stw @ 0x8078D4CC
    r28 = *(0 + r4); // lwz @ 0x8078D4D0
    if (==) goto 0x0x8078d504;
    *(0 + r4) = r0; // stw @ 0x8078D4DC
    if (==) goto 0x0x8078d504;
    if (==) goto 0x0x8078d4fc;
    *(0 + r28) = r5; // stw @ 0x8078D4E8
    FUN_8078D660(); // bl 0x8078D660
    r3 = r28;
    /* li r4, 0 */ // 0x8078D4F4
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x8078D508
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8078D51C
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x8078D530
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r26;
    /* li r4, 0 */ // 0x8078D544
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8078d55c;
    r3 = r26;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r26;
}