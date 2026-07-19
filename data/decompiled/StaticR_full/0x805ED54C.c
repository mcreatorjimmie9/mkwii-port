/* Function at 0x805ED54C, size=100 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_805ED54C(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* stmw r23, 0x1c(r1) */ // 0x805ED558
    r23 = r3;
    r0 = *(0xc + r3); // lwz @ 0x805ED560
    if (==) goto 0x0x805ed62c;
    /* li r24, 0 */ // 0x805ED56C
    /* lis r26, 0 */ // 0x805ED570
    /* lis r27, 0 */ // 0x805ED574
    /* lis r28, 0 */ // 0x805ED578
    /* lis r29, 0 */ // 0x805ED57C
    /* lis r30, 0 */ // 0x805ED580
    /* lis r31, 0 */ // 0x805ED584
    /* b 0x805ed614 */ // 0x805ED588
    r0 = *(0xc + r23); // lwz @ 0x805ED58C
    r4 = r24;
    *(0xc + r1) = r0; // stw @ 0x805ED594
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r25 = r3;
    if (!=) goto 0x0x805ed5c8;
    r3 = r26 + 0; // 0x805ED5AC
}