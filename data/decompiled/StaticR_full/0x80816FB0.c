/* Function at 0x80816FB0, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_80816FB0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x80816FBC
    /* stmw r26, 8(r1) */ // 0x80816FC0
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x808170c4;
    /* lis r5, 0 */ // 0x80816FD0
    /* lis r4, 0 */ // 0x80816FD4
    r5 = r5 + 0; // 0x80816FD8
    *(0 + r3) = r5; // stw @ 0x80816FDC
    r31 = *(0 + r4); // lwz @ 0x80816FE0
    if (==) goto 0x0x808170a8;
    /* li r0, 0 */ // 0x80816FEC
    *(0 + r4) = r0; // stw @ 0x80816FF0
    if (==) goto 0x0x808170a8;
    if (==) goto 0x0x808170a0;
    *(0 + r31) = r5; // stw @ 0x80816FFC
    r30 = *(0 + r4); // lwz @ 0x80817000
    if (==) goto 0x0x80817094;
    *(0 + r4) = r0; // stw @ 0x8081700C
    if (==) goto 0x0x80817094;
    if (==) goto 0x0x8081708c;
    *(0 + r30) = r5; // stw @ 0x80817018
    r29 = *(0 + r4); // lwz @ 0x8081701C
    if (==) goto 0x0x80817080;
    *(0 + r4) = r0; // stw @ 0x80817028
    if (==) goto 0x0x80817080;
    if (==) goto 0x0x80817078;
    *(0 + r29) = r5; // stw @ 0x80817034
    r28 = *(0 + r4); // lwz @ 0x80817038
    if (==) goto 0x0x8081706c;
    *(0 + r4) = r0; // stw @ 0x80817044
    if (==) goto 0x0x8081706c;
    if (==) goto 0x0x80817064;
    *(0 + r28) = r5; // stw @ 0x80817050
    FUN_808171A8(); // bl 0x808171A8
    r3 = r28;
    /* li r4, 0 */ // 0x8081705C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x80817070
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80817084
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x80817098
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r26;
    /* li r4, 0 */ // 0x808170AC
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x808170c4;
    r3 = r26;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r26;
}