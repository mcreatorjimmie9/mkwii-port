/* Function at 0x8070651C, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_8070651C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r6, 0 */ // 0x80706524
    *(0x24 + r1) = r0; // stw @ 0x80706528
    /* stmw r26, 8(r1) */ // 0x8070652C
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r31 = r7;
    r30 = r8;
    r0 = *(0 + r6); // lwz @ 0x80706544
    if (!=) goto 0x0x8070658c;
    /* lis r3, 0 */ // 0x80706550
    r0 = *(0 + r3); // lbz @ 0x80706554
    /* extsb. r0, r0 */ // 0x80706558
    if (!=) goto 0x0x80706584;
    /* lis r4, 0 */ // 0x80706560
    /* lis r6, 0 */ // 0x80706564
    r4 = r4 + 0; // 0x80706568
    r3 = r3 + 0; // 0x8070656C
    r5 = r4 + 0x2f5; // 0x80706570
    r6 = r6 + 0; // 0x80706574
    /* li r4, 0x80 */ // 0x80706578
    /* crclr cr1eq */ // 0x8070657C
    FUN_805E3430(r3, r5, r6, r4); // bl 0x805E3430
    /* li r0, 1 */ // 0x80706584
    /* b 0x80706590 */ // 0x80706588
    /* li r0, 0 */ // 0x8070658C
    if (!=) goto 0x0x807065a0;
    /* li r3, 0x6a */ // 0x80706598
    /* b 0x807066cc */ // 0x8070659C
    /* li r3, 8 */ // 0x807065A0
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r29 = r3;
    if (!=) goto 0x0x807065bc;
    /* li r3, 0x68 */ // 0x807065B4
    /* b 0x807066cc */ // 0x807065B8
}