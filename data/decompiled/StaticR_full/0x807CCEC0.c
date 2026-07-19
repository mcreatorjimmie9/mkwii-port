/* Function at 0x807CCEC0, size=172 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

void FUN_807CCEC0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -80(r1) */
    /* saved r25 */
    /* lis r11, 0 */ // 0x807CCEC8
    /* li r6, 4 */ // 0x807CCECC
    *(0x54 + r1) = r0; // stw @ 0x807CCED0
    /* stmw r25, 0x34(r1) */ // 0x807CCEE0
    r25 = *(0x50 + r11); // lwz @ 0x807CCEF4
    r29 = *(0x60 + r11); // lwz @ 0x807CCEF8
    r26 = *(4 + r10); // lwz @ 0x807CCEFC
    r27 = *(8 + r10); // lwz @ 0x807CCF00
    r28 = *(0xc + r10); // lwz @ 0x807CCF04
    r30 = *(4 + r8); // lwz @ 0x807CCF08
    r31 = *(8 + r8); // lwz @ 0x807CCF0C
    r12 = *(0xc + r8); // lwz @ 0x807CCF10
    r11 = *(0x70 + r11); // lbz @ 0x807CCF14
    r10 = *(1 + r9); // lbz @ 0x807CCF18
    r8 = *(2 + r9); // lbz @ 0x807CCF1C
    r0 = *(3 + r9); // lbz @ 0x807CCF20
    *(0x20 + r1) = r25; // stw @ 0x807CCF24
    *(0x24 + r1) = r26; // stw @ 0x807CCF28
    *(0x28 + r1) = r27; // stw @ 0x807CCF2C
    *(0x2c + r1) = r28; // stw @ 0x807CCF30
    *(0x10 + r1) = r29; // stw @ 0x807CCF34
    *(0x14 + r1) = r30; // stw @ 0x807CCF38
    *(0x18 + r1) = r31; // stw @ 0x807CCF3C
    *(0x1c + r1) = r12; // stw @ 0x807CCF40
    *(8 + r1) = r11; // stb @ 0x807CCF44
    *(9 + r1) = r10; // stb @ 0x807CCF48
    *(0xa + r1) = r8; // stb @ 0x807CCF4C
    *(0xb + r1) = r0; // stb @ 0x807CCF50
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x54 + r1); // lwz @ 0x807CCF5C
    return;
}