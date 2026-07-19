/* Function at 0x807F71A8, size=172 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_807F71A8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x807F71B0
    /* lis r11, 0 */ // 0x807F71B4
    *(0x44 + r1) = r0; // stw @ 0x807F71B8
    /* li r12, 0 */ // 0x807F71BC
    *(0x3c + r1) = r31; // stw @ 0x807F71C8
    *(0x38 + r1) = r30; // stw @ 0x807F71D0
    *(0x34 + r1) = r29; // stw @ 0x807F71D4
    *(0x30 + r1) = r28; // stw @ 0x807F71D8
    r28 = *(0 + r6); // lwzu @ 0x807F71DC
    /* lbzu r10, 0(r11) */ // 0x807F71E0
    r29 = *(4 + r6); // lwz @ 0x807F71E4
    r30 = *(8 + r6); // lwz @ 0x807F71E8
    r31 = *(0xc + r6); // lwz @ 0x807F71EC
    /* li r6, 4 */ // 0x807F71F0
    r9 = *(1 + r11); // lbz @ 0x807F71F4
    r8 = *(2 + r11); // lbz @ 0x807F71F8
    r0 = *(3 + r11); // lbz @ 0x807F71FC
    *(0x20 + r1) = r28; // stw @ 0x807F7200
    *(0x24 + r1) = r29; // stw @ 0x807F7204
    *(0x28 + r1) = r30; // stw @ 0x807F7208
    *(0x2c + r1) = r31; // stw @ 0x807F720C
    *(0x10 + r1) = r12; // stw @ 0x807F7210
    *(0x14 + r1) = r12; // stw @ 0x807F7214
    *(0x18 + r1) = r12; // stw @ 0x807F7218
    *(0x1c + r1) = r12; // stw @ 0x807F721C
    *(8 + r1) = r10; // stb @ 0x807F7220
    *(9 + r1) = r9; // stb @ 0x807F7224
    *(0xa + r1) = r8; // stb @ 0x807F7228
    *(0xb + r1) = r0; // stb @ 0x807F722C
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x44 + r1); // lwz @ 0x807F7234
    r31 = *(0x3c + r1); // lwz @ 0x807F7238
    r30 = *(0x38 + r1); // lwz @ 0x807F723C
    r29 = *(0x34 + r1); // lwz @ 0x807F7240
    r28 = *(0x30 + r1); // lwz @ 0x807F7244
    return;
}