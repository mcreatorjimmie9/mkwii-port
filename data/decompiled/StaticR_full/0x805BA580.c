/* Function at 0x805BA580, size=300 bytes */
/* Stack frame: 304 bytes */
/* Saved registers: r23 */
/* Calls: 4 function(s) */

int FUN_805BA580(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -304(r1) */
    /* saved r23 */
    /* lis r8, 0 */ // 0x805BA588
    *(0x134 + r1) = r0; // stw @ 0x805BA58C
    /* stmw r23, 0x10c(r1) */ // 0x805BA590
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r31 = r8 + 0; // 0x805BA5A8
    /* li r30, 0 */ // 0x805BA5AC
    /* b 0x805ba690 */ // 0x805BA5B0
    r3 = *(0x18 + r25); // lwz @ 0x805BA5B4
    r24 = r30 rlwinm 2; // rlwinm
    /* li r23, 1 */ // 0x805BA5BC
    /* lwzx r0, r3, r24 */ // 0x805BA5C0
    if (==) goto 0x0x805ba5e0;
    if (==) goto 0x0x805ba604;
    if (==) goto 0x0x805ba624;
    /* b 0x805ba68c */ // 0x805BA5DC
    r4 = *(0x10 + r25); // lwz @ 0x805BA5E0
    r6 = r26;
    r5 = r31 + 8; // 0x805BA5EC
    /* lwzx r7, r4, r24 */ // 0x805BA5F0
    /* li r4, 0x100 */ // 0x805BA5F4
    /* crclr cr1eq */ // 0x805BA5F8
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    /* b 0x805ba628 */ // 0x805BA600
    r6 = *(0x10 + r25); // lwz @ 0x805BA604
    r5 = r31 + 0xd; // 0x805BA60C
    /* li r4, 0x100 */ // 0x805BA610
    /* lwzx r6, r6, r24 */ // 0x805BA614
    /* crclr cr1eq */ // 0x805BA618
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    /* b 0x805ba628 */ // 0x805BA620
    /* li r23, 0 */ // 0x805BA624
    if (==) goto 0x0x805ba660;
    /* clrlwi r0, r30, 0x10 */ // 0x805BA630
    r3 = *(4 + r25); // lwz @ 0x805BA634
    /* mulli r0, r0, 0x24 */ // 0x805BA638
    r5 = r27;
    r8 = r28;
    r9 = r29;
    r3 = r3 + r0; // 0x805BA648
    /* li r6, 1 */ // 0x805BA650
    /* li r7, 8 */ // 0x805BA654
    FUN_805A8A3C(r9, r4, r6, r7); // bl 0x805A8A3C
    /* b 0x805ba68c */ // 0x805BA65C
    /* clrlwi r0, r30, 0x10 */ // 0x805BA660
    r4 = *(0x14 + r25); // lwz @ 0x805BA664
    r3 = *(0xc + r25); // lwz @ 0x805BA668
    /* mulli r0, r0, 0x24 */ // 0x805BA66C
    r8 = *(4 + r25); // lwz @ 0x805BA670
    r6 = r27;
    /* lwzx r5, r3, r24 */ // 0x805BA678
    /* li r7, 1 */ // 0x805BA67C
    /* lwzx r4, r4, r24 */ // 0x805BA680
    r3 = r8 + r0; // 0x805BA684
    FUN_805A8BE8(r6, r7); // bl 0x805A8BE8
    r30 = r30 + 1; // 0x805BA68C
    r0 = *(8 + r25); // lhz @ 0x805BA690
    /* clrlwi r3, r30, 0x10 */ // 0x805BA694
    if (<) goto 0x0x805ba5b4;
    r0 = *(0x134 + r1); // lwz @ 0x805BA6A4
}