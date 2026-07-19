/* Function at 0x807054B4, size=112 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_807054B4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -112(r1) */
    /* saved r26 */
    r0 = *(0 + r4); // lwz @ 0x807054C0
    /* stmw r26, 0x58(r1) */ // 0x807054C4
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    if (!=) goto 0x0x80705500;
    /* lis r5, 0 */ // 0x807054E4
    /* li r4, 0x129 */ // 0x807054E8
    r5 = r5 + 0; // 0x807054EC
    r3 = r5 + 2; // 0x807054F0
    r5 = r5 + 0x15; // 0x807054F4
    /* crclr cr1eq */ // 0x807054F8
    FUN_805E3430(r4, r5, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x807056d4;
    r4 = *(4 + r27); // lwz @ 0x80705508
    r3 = r28;
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80705528;
    *(0 + r26) = r3; // stw @ 0x8070551C
    /* li r3, 4 */ // 0x80705520
}