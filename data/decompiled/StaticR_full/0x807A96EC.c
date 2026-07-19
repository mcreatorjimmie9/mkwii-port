/* Function at 0x807A96EC, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_807A96EC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x807A96F8
    /* stmw r26, 8(r1) */ // 0x807A96FC
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x807a9800;
    /* lis r5, 0 */ // 0x807A970C
    /* lis r4, 0 */ // 0x807A9710
    r5 = r5 + 0; // 0x807A9714
    *(0 + r3) = r5; // stw @ 0x807A9718
    r31 = *(0 + r4); // lwz @ 0x807A971C
    if (==) goto 0x0x807a97e4;
    /* li r0, 0 */ // 0x807A9728
    *(0 + r4) = r0; // stw @ 0x807A972C
    if (==) goto 0x0x807a97e4;
    if (==) goto 0x0x807a97dc;
    *(0 + r31) = r5; // stw @ 0x807A9738
    r30 = *(0 + r4); // lwz @ 0x807A973C
    if (==) goto 0x0x807a97d0;
    *(0 + r4) = r0; // stw @ 0x807A9748
    if (==) goto 0x0x807a97d0;
    if (==) goto 0x0x807a97c8;
    *(0 + r30) = r5; // stw @ 0x807A9754
    r29 = *(0 + r4); // lwz @ 0x807A9758
    if (==) goto 0x0x807a97bc;
    *(0 + r4) = r0; // stw @ 0x807A9764
    if (==) goto 0x0x807a97bc;
    if (==) goto 0x0x807a97b4;
    *(0 + r29) = r5; // stw @ 0x807A9770
    r28 = *(0 + r4); // lwz @ 0x807A9774
    if (==) goto 0x0x807a97a8;
    *(0 + r4) = r0; // stw @ 0x807A9780
    if (==) goto 0x0x807a97a8;
    if (==) goto 0x0x807a97a0;
    *(0 + r28) = r5; // stw @ 0x807A978C
    FUN_807A9980(); // bl 0x807A9980
    r3 = r28;
    /* li r4, 0 */ // 0x807A9798
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x807A97AC
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x807A97C0
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x807A97D4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r26;
    /* li r4, 0 */ // 0x807A97E8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807a9800;
    r3 = r26;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r26;
}