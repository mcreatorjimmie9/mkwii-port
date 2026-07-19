/* Function at 0x807AA638, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_807AA638(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x807AA644
    /* stmw r26, 8(r1) */ // 0x807AA648
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x807aa74c;
    /* lis r5, 0 */ // 0x807AA658
    /* lis r4, 0 */ // 0x807AA65C
    r5 = r5 + 0; // 0x807AA660
    *(0 + r3) = r5; // stw @ 0x807AA664
    r31 = *(0 + r4); // lwz @ 0x807AA668
    if (==) goto 0x0x807aa730;
    /* li r0, 0 */ // 0x807AA674
    *(0 + r4) = r0; // stw @ 0x807AA678
    if (==) goto 0x0x807aa730;
    if (==) goto 0x0x807aa728;
    *(0 + r31) = r5; // stw @ 0x807AA684
    r30 = *(0 + r4); // lwz @ 0x807AA688
    if (==) goto 0x0x807aa71c;
    *(0 + r4) = r0; // stw @ 0x807AA694
    if (==) goto 0x0x807aa71c;
    if (==) goto 0x0x807aa714;
    *(0 + r30) = r5; // stw @ 0x807AA6A0
    r29 = *(0 + r4); // lwz @ 0x807AA6A4
    if (==) goto 0x0x807aa708;
    *(0 + r4) = r0; // stw @ 0x807AA6B0
    if (==) goto 0x0x807aa708;
    if (==) goto 0x0x807aa700;
    *(0 + r29) = r5; // stw @ 0x807AA6BC
    r28 = *(0 + r4); // lwz @ 0x807AA6C0
    if (==) goto 0x0x807aa6f4;
    *(0 + r4) = r0; // stw @ 0x807AA6CC
    if (==) goto 0x0x807aa6f4;
    if (==) goto 0x0x807aa6ec;
    *(0 + r28) = r5; // stw @ 0x807AA6D8
    FUN_807AA858(); // bl 0x807AA858
    r3 = r28;
    /* li r4, 0 */ // 0x807AA6E4
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x807AA6F8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x807AA70C
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x807AA720
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r26;
    /* li r4, 0 */ // 0x807AA734
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807aa74c;
    r3 = r26;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r26;
}