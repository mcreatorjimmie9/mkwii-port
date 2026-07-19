/* Function at 0x807F5DD0, size=172 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_807F5DD0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x807F5DD8
    /* lis r11, 0 */ // 0x807F5DDC
    *(0x44 + r1) = r0; // stw @ 0x807F5DE0
    /* li r12, 0 */ // 0x807F5DE4
    *(0x3c + r1) = r31; // stw @ 0x807F5DF0
    *(0x38 + r1) = r30; // stw @ 0x807F5DF8
    *(0x34 + r1) = r29; // stw @ 0x807F5DFC
    *(0x30 + r1) = r28; // stw @ 0x807F5E00
    r28 = *(0 + r6); // lwzu @ 0x807F5E04
    /* lbzu r10, 0(r11) */ // 0x807F5E08
    r29 = *(4 + r6); // lwz @ 0x807F5E0C
    r30 = *(8 + r6); // lwz @ 0x807F5E10
    r31 = *(0xc + r6); // lwz @ 0x807F5E14
    /* li r6, 4 */ // 0x807F5E18
    r9 = *(1 + r11); // lbz @ 0x807F5E1C
    r8 = *(2 + r11); // lbz @ 0x807F5E20
    r0 = *(3 + r11); // lbz @ 0x807F5E24
    *(0x20 + r1) = r28; // stw @ 0x807F5E28
    *(0x24 + r1) = r29; // stw @ 0x807F5E2C
    *(0x28 + r1) = r30; // stw @ 0x807F5E30
    *(0x2c + r1) = r31; // stw @ 0x807F5E34
    *(0x10 + r1) = r12; // stw @ 0x807F5E38
    *(0x14 + r1) = r12; // stw @ 0x807F5E3C
    *(0x18 + r1) = r12; // stw @ 0x807F5E40
    *(0x1c + r1) = r12; // stw @ 0x807F5E44
    *(8 + r1) = r10; // stb @ 0x807F5E48
    *(9 + r1) = r9; // stb @ 0x807F5E4C
    *(0xa + r1) = r8; // stb @ 0x807F5E50
    *(0xb + r1) = r0; // stb @ 0x807F5E54
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x44 + r1); // lwz @ 0x807F5E5C
    r31 = *(0x3c + r1); // lwz @ 0x807F5E60
    r30 = *(0x38 + r1); // lwz @ 0x807F5E64
    r29 = *(0x34 + r1); // lwz @ 0x807F5E68
    r28 = *(0x30 + r1); // lwz @ 0x807F5E6C
    return;
}