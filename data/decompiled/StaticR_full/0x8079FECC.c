/* Function at 0x8079FECC, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_8079FECC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x8079FED8
    /* stmw r26, 8(r1) */ // 0x8079FEDC
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x8079ffe0;
    /* lis r5, 0 */ // 0x8079FEEC
    /* lis r4, 0 */ // 0x8079FEF0
    r5 = r5 + 0; // 0x8079FEF4
    *(0 + r3) = r5; // stw @ 0x8079FEF8
    r31 = *(0 + r4); // lwz @ 0x8079FEFC
    if (==) goto 0x0x8079ffc4;
    /* li r0, 0 */ // 0x8079FF08
    *(0 + r4) = r0; // stw @ 0x8079FF0C
    if (==) goto 0x0x8079ffc4;
    if (==) goto 0x0x8079ffbc;
    *(0 + r31) = r5; // stw @ 0x8079FF18
    r30 = *(0 + r4); // lwz @ 0x8079FF1C
    if (==) goto 0x0x8079ffb0;
    *(0 + r4) = r0; // stw @ 0x8079FF28
    if (==) goto 0x0x8079ffb0;
    if (==) goto 0x0x8079ffa8;
    *(0 + r30) = r5; // stw @ 0x8079FF34
    r29 = *(0 + r4); // lwz @ 0x8079FF38
    if (==) goto 0x0x8079ff9c;
    *(0 + r4) = r0; // stw @ 0x8079FF44
    if (==) goto 0x0x8079ff9c;
    if (==) goto 0x0x8079ff94;
    *(0 + r29) = r5; // stw @ 0x8079FF50
    r28 = *(0 + r4); // lwz @ 0x8079FF54
    if (==) goto 0x0x8079ff88;
    *(0 + r4) = r0; // stw @ 0x8079FF60
    if (==) goto 0x0x8079ff88;
    if (==) goto 0x0x8079ff80;
    *(0 + r28) = r5; // stw @ 0x8079FF6C
    FUN_807A0060(); // bl 0x807A0060
    r3 = r28;
    /* li r4, 0 */ // 0x8079FF78
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x8079FF8C
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8079FFA0
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x8079FFB4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r26;
    /* li r4, 0 */ // 0x8079FFC8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8079ffe0;
    r3 = r26;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r26;
}