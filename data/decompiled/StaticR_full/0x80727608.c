/* Function at 0x80727608, size=108 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_80727608(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* slwi r0, r5, 2 */ // 0x80727614
    /* stmw r25, 0x14(r1) */ // 0x80727618
    r25 = r3;
    r30 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r29 = r9;
    r31 = r4 + r0; // 0x80727634
    /* b 0x80727728 */ // 0x80727638
    r3 = *(0 + r31); // lwz @ 0x8072763C
    if (==) goto 0x0x80727720;
    r3 = r3 + 0x74; // 0x80727648
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80727660;
    /* li r3, 0 */ // 0x80727658
    /* b 0x80727664 */ // 0x8072765C
    r3 = *(0xc + r3); // lwz @ 0x80727660
    /* li r0, 0 */ // 0x80727668
    if (==) goto 0x0x80727678;
}