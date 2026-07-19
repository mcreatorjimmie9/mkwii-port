/* Function at 0x80787538, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_80787538(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x80787544
    /* stmw r26, 8(r1) */ // 0x80787548
    r30 = r3;
    r31 = r4;
    if (==) goto 0x0x807876c0;
    /* lis r5, 0 */ // 0x80787558
    /* lis r4, 0 */ // 0x8078755C
    r5 = r5 + 0; // 0x80787560
    *(0 + r3) = r5; // stw @ 0x80787564
    r27 = *(0 + r4); // lwz @ 0x80787568
    if (==) goto 0x0x807876a4;
    /* li r0, 0 */ // 0x80787574
    *(0 + r4) = r0; // stw @ 0x80787578
    if (==) goto 0x0x807876a4;
    /* li r29, 0 */ // 0x80787580
    /* li r28, 0 */ // 0x80787584
    r3 = r27 + r28; // 0x80787588
    r3 = *(0x14 + r3); // lwz @ 0x8078758C
    if (==) goto 0x0x807875a4;
    if (==) goto 0x0x807875a4;
    /* li r4, 0 */ // 0x8078759C
    FUN_805E3430(r4); // bl 0x805E3430
    r29 = r29 + 1; // 0x807875A4
    r28 = r28 + 4; // 0x807875A8
    if (<) goto 0x0x80787588;
    /* lis r4, 0 */ // 0x807875B4
    r3 = r27 + 0x14; // 0x807875B8
    r4 = r4 + 0; // 0x807875BC
    /* li r5, 4 */ // 0x807875C0
    /* li r6, 2 */ // 0x807875C4
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    if (==) goto 0x0x8078769c;
    /* lis r4, 0 */ // 0x807875D4
    /* lis r3, 0 */ // 0x807875D8
    r4 = r4 + 0; // 0x807875DC
    *(0 + r27) = r4; // stw @ 0x807875E0
    r26 = *(0 + r3); // lwz @ 0x807875E4
    if (==) goto 0x0x80787690;
}