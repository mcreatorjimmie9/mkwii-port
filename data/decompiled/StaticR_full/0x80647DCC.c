/* Function at 0x80647DCC, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_80647DCC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x80647DD8
    /* stmw r26, 8(r1) */ // 0x80647DDC
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x80647ee0;
    /* lis r5, 0 */ // 0x80647DEC
    /* lis r4, 0 */ // 0x80647DF0
    r5 = r5 + 0; // 0x80647DF4
    *(0 + r3) = r5; // stw @ 0x80647DF8
    r31 = *(0 + r4); // lwz @ 0x80647DFC
    if (==) goto 0x0x80647ec4;
    /* li r0, 0 */ // 0x80647E08
    *(0 + r4) = r0; // stw @ 0x80647E0C
    if (==) goto 0x0x80647ec4;
    if (==) goto 0x0x80647ebc;
    *(0 + r31) = r5; // stw @ 0x80647E18
    r30 = *(0 + r4); // lwz @ 0x80647E1C
    if (==) goto 0x0x80647eb0;
    *(0 + r4) = r0; // stw @ 0x80647E28
    if (==) goto 0x0x80647eb0;
    if (==) goto 0x0x80647ea8;
    *(0 + r30) = r5; // stw @ 0x80647E34
    r29 = *(0 + r4); // lwz @ 0x80647E38
    if (==) goto 0x0x80647e9c;
    *(0 + r4) = r0; // stw @ 0x80647E44
    if (==) goto 0x0x80647e9c;
    if (==) goto 0x0x80647e94;
    *(0 + r29) = r5; // stw @ 0x80647E50
    r28 = *(0 + r4); // lwz @ 0x80647E54
    if (==) goto 0x0x80647e88;
    *(0 + r4) = r0; // stw @ 0x80647E60
    if (==) goto 0x0x80647e88;
    if (==) goto 0x0x80647e80;
    *(0 + r28) = r5; // stw @ 0x80647E6C
    FUN_80647F98(); // bl 0x80647F98
    r3 = r28;
    /* li r4, 0 */ // 0x80647E78
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x80647E8C
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80647EA0
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x80647EB4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r26;
    /* li r4, 0 */ // 0x80647EC8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80647ee0;
    r3 = r26;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r26;
}