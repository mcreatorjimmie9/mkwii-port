/* Function at 0x807AB028, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_807AB028(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x807AB034
    /* stmw r26, 8(r1) */ // 0x807AB038
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x807ab13c;
    /* lis r5, 0 */ // 0x807AB048
    /* lis r4, 0 */ // 0x807AB04C
    r5 = r5 + 0; // 0x807AB050
    *(0 + r3) = r5; // stw @ 0x807AB054
    r31 = *(0 + r4); // lwz @ 0x807AB058
    if (==) goto 0x0x807ab120;
    /* li r0, 0 */ // 0x807AB064
    *(0 + r4) = r0; // stw @ 0x807AB068
    if (==) goto 0x0x807ab120;
    if (==) goto 0x0x807ab118;
    *(0 + r31) = r5; // stw @ 0x807AB074
    r30 = *(0 + r4); // lwz @ 0x807AB078
    if (==) goto 0x0x807ab10c;
    *(0 + r4) = r0; // stw @ 0x807AB084
    if (==) goto 0x0x807ab10c;
    if (==) goto 0x0x807ab104;
    *(0 + r30) = r5; // stw @ 0x807AB090
    r29 = *(0 + r4); // lwz @ 0x807AB094
    if (==) goto 0x0x807ab0f8;
    *(0 + r4) = r0; // stw @ 0x807AB0A0
    if (==) goto 0x0x807ab0f8;
    if (==) goto 0x0x807ab0f0;
    *(0 + r29) = r5; // stw @ 0x807AB0AC
    r28 = *(0 + r4); // lwz @ 0x807AB0B0
    if (==) goto 0x0x807ab0e4;
    *(0 + r4) = r0; // stw @ 0x807AB0BC
    if (==) goto 0x0x807ab0e4;
    if (==) goto 0x0x807ab0dc;
    *(0 + r28) = r5; // stw @ 0x807AB0C8
    FUN_807AB208(); // bl 0x807AB208
    r3 = r28;
    /* li r4, 0 */ // 0x807AB0D4
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x807AB0E8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x807AB0FC
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x807AB110
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r26;
    /* li r4, 0 */ // 0x807AB124
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807ab13c;
    r3 = r26;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r26;
}