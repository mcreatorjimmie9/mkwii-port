/* Function at 0x808643BC, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_808643BC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x808643C8
    /* stmw r26, 8(r1) */ // 0x808643CC
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x808644d0;
    /* lis r5, 0 */ // 0x808643DC
    /* lis r4, 0 */ // 0x808643E0
    r5 = r5 + 0; // 0x808643E4
    *(0 + r3) = r5; // stw @ 0x808643E8
    r31 = *(0 + r4); // lwz @ 0x808643EC
    if (==) goto 0x0x808644b4;
    /* li r0, 0 */ // 0x808643F8
    *(0 + r4) = r0; // stw @ 0x808643FC
    if (==) goto 0x0x808644b4;
    if (==) goto 0x0x808644ac;
    *(0 + r31) = r5; // stw @ 0x80864408
    r30 = *(0 + r4); // lwz @ 0x8086440C
    if (==) goto 0x0x808644a0;
    *(0 + r4) = r0; // stw @ 0x80864418
    if (==) goto 0x0x808644a0;
    if (==) goto 0x0x80864498;
    *(0 + r30) = r5; // stw @ 0x80864424
    r29 = *(0 + r4); // lwz @ 0x80864428
    if (==) goto 0x0x8086448c;
    *(0 + r4) = r0; // stw @ 0x80864434
    if (==) goto 0x0x8086448c;
    if (==) goto 0x0x80864484;
    *(0 + r29) = r5; // stw @ 0x80864440
    r28 = *(0 + r4); // lwz @ 0x80864444
    if (==) goto 0x0x80864478;
    *(0 + r4) = r0; // stw @ 0x80864450
    if (==) goto 0x0x80864478;
    if (==) goto 0x0x80864470;
    *(0 + r28) = r5; // stw @ 0x8086445C
    FUN_80864618(); // bl 0x80864618
    r3 = r28;
    /* li r4, 0 */ // 0x80864468
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x8086447C
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80864490
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808644A4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r26;
    /* li r4, 0 */ // 0x808644B8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x808644d0;
    r3 = r26;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r26;
}