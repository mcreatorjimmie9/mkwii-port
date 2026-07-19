/* Function at 0x807F9438, size=132 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807F9438(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x2c + r1) = r31; // stw @ 0x807F9450
    *(0x28 + r1) = r30; // stw @ 0x807F9454
    /* lis r30, 0 */ // 0x807F9458
    r30 = r30 + 0; // 0x807F945C
    r6 = r30 + 0x18; // 0x807F9460
    r31 = *(0x18 + r30); // lwz @ 0x807F9464
    r12 = *(4 + r6); // lwz @ 0x807F9468
    r9 = r30 + 0x20; // 0x807F946C
    r10 = *(4 + r9); // lwz @ 0x807F9470
    r8 = r30 + 0x28; // 0x807F9474
    r11 = *(0x20 + r30); // lwz @ 0x807F9478
    /* li r6, 2 */ // 0x807F947C
    r9 = *(0x28 + r30); // lbz @ 0x807F9480
    r0 = *(1 + r8); // lbz @ 0x807F9484
    *(0x18 + r1) = r31; // stw @ 0x807F9488
    *(0x1c + r1) = r12; // stw @ 0x807F948C
    *(0x10 + r1) = r11; // stw @ 0x807F9490
    *(0x14 + r1) = r10; // stw @ 0x807F9494
    *(8 + r1) = r9; // stb @ 0x807F9498
    *(9 + r1) = r0; // stb @ 0x807F949C
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x34 + r1); // lwz @ 0x807F94A4
    r31 = *(0x2c + r1); // lwz @ 0x807F94A8
    r30 = *(0x28 + r1); // lwz @ 0x807F94AC
    return;
}