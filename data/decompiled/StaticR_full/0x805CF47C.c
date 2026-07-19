/* Function at 0x805CF47C, size=140 bytes */
/* Stack frame: 288 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_805CF47C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -288(r1) */
    /* saved r27 */
    /* stmw r27, 0x10c(r1) */ // 0x805CF488
    r28 = r3;
    r29 = r4;
    r27 = r5;
    r30 = r6;
    r31 = r7;
    r8 = *(4 + r3); // lwz @ 0x805CF4A0
    r3 = *(4 + r8); // lwz @ 0x805CF4A4
    FUN_805BA42C(); // bl 0x805BA42C
    if (!=) goto 0x0x805cf65c;
    r3 = *(4 + r28); // lwz @ 0x805CF4B4
    r3 = *(4 + r3); // lwz @ 0x805CF4B8
    r12 = *(0 + r3); // lwz @ 0x805CF4BC
    r12 = *(0xc + r12); // lwz @ 0x805CF4C0
    /* mtctr r12 */ // 0x805CF4C4
    /* bctrl  */ // 0x805CF4C8
    /* lis r4, 0 */ // 0x805CF4CC
    r6 = r27;
    r4 = r4 + 0; // 0x805CF4D4
    r5 = r4 + 0x20; // 0x805CF4DC
    /* li r4, 0x80 */ // 0x805CF4E0
    /* crclr cr1eq */ // 0x805CF4E4
    FUN_805E3430(r4, r3, r5, r4); // bl 0x805E3430
    r3 = *(4 + r28); // lwz @ 0x805CF4EC
    r6 = *(4 + r3); // lwz @ 0x805CF4F0
    r0 = *(8 + r6); // lhz @ 0x805CF4F4
    if (<=) goto 0x0x805cf520;
    r3 = *(0x18 + r6); // lwz @ 0x805CF500
    /* li r0, 1 */ // 0x805CF504
}