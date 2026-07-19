/* Function at 0x807F5270, size=136 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_807F5270(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807F5278
    /* lis r10, 0 */ // 0x807F527C
    *(0x34 + r1) = r0; // stw @ 0x807F5280
    /* li r11, 0 */ // 0x807F5284
    *(0x2c + r1) = r31; // stw @ 0x807F5290
    /* li r6, 3 */ // 0x807F5294
    *(0x28 + r1) = r30; // stw @ 0x807F5298
    r30 = *(0 + r5); // lwzu @ 0x807F529C
    /* lbzu r9, 0(r10) */ // 0x807F52A0
    r31 = *(4 + r5); // lwz @ 0x807F52A4
    r12 = *(8 + r5); // lwz @ 0x807F52A8
    r8 = *(1 + r10); // lbz @ 0x807F52B0
    r0 = *(2 + r10); // lbz @ 0x807F52B4
    *(0x18 + r1) = r30; // stw @ 0x807F52B8
    *(0x1c + r1) = r31; // stw @ 0x807F52BC
    *(0x20 + r1) = r12; // stw @ 0x807F52C0
    *(0xc + r1) = r11; // stw @ 0x807F52C4
    *(0x10 + r1) = r11; // stw @ 0x807F52C8
    *(0x14 + r1) = r11; // stw @ 0x807F52CC
    *(8 + r1) = r9; // stb @ 0x807F52D0
    *(9 + r1) = r8; // stb @ 0x807F52D4
    *(0xa + r1) = r0; // stb @ 0x807F52D8
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x34 + r1); // lwz @ 0x807F52E0
    r31 = *(0x2c + r1); // lwz @ 0x807F52E4
    r30 = *(0x28 + r1); // lwz @ 0x807F52E8
    return;
}