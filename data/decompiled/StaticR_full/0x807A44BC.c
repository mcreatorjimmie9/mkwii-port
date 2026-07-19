/* Function at 0x807A44BC, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_807A44BC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x807A44C8
    /* stmw r26, 8(r1) */ // 0x807A44CC
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x807a45d0;
    /* lis r5, 0 */ // 0x807A44DC
    /* lis r4, 0 */ // 0x807A44E0
    r5 = r5 + 0; // 0x807A44E4
    *(0 + r3) = r5; // stw @ 0x807A44E8
    r31 = *(0 + r4); // lwz @ 0x807A44EC
    if (==) goto 0x0x807a45b4;
    /* li r0, 0 */ // 0x807A44F8
    *(0 + r4) = r0; // stw @ 0x807A44FC
    if (==) goto 0x0x807a45b4;
    if (==) goto 0x0x807a45ac;
    *(0 + r31) = r5; // stw @ 0x807A4508
    r30 = *(0 + r4); // lwz @ 0x807A450C
    if (==) goto 0x0x807a45a0;
    *(0 + r4) = r0; // stw @ 0x807A4518
    if (==) goto 0x0x807a45a0;
    if (==) goto 0x0x807a4598;
    *(0 + r30) = r5; // stw @ 0x807A4524
    r29 = *(0 + r4); // lwz @ 0x807A4528
    if (==) goto 0x0x807a458c;
    *(0 + r4) = r0; // stw @ 0x807A4534
    if (==) goto 0x0x807a458c;
    if (==) goto 0x0x807a4584;
    *(0 + r29) = r5; // stw @ 0x807A4540
    r28 = *(0 + r4); // lwz @ 0x807A4544
    if (==) goto 0x0x807a4578;
    *(0 + r4) = r0; // stw @ 0x807A4550
    if (==) goto 0x0x807a4578;
    if (==) goto 0x0x807a4570;
    *(0 + r28) = r5; // stw @ 0x807A455C
    FUN_807A466C(); // bl 0x807A466C
    r3 = r28;
    /* li r4, 0 */ // 0x807A4568
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x807A457C
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x807A4590
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x807A45A4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r26;
    /* li r4, 0 */ // 0x807A45B8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807a45d0;
    r3 = r26;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r26;
}