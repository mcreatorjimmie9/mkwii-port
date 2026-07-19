/* Function at 0x807FB278, size=136 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_807FB278(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807FB280
    /* lis r10, 0 */ // 0x807FB284
    *(0x34 + r1) = r0; // stw @ 0x807FB288
    /* li r11, 0 */ // 0x807FB28C
    *(0x2c + r1) = r31; // stw @ 0x807FB298
    /* li r6, 3 */ // 0x807FB29C
    *(0x28 + r1) = r30; // stw @ 0x807FB2A0
    r30 = *(0 + r5); // lwzu @ 0x807FB2A4
    /* lbzu r9, 0(r10) */ // 0x807FB2A8
    r31 = *(4 + r5); // lwz @ 0x807FB2AC
    r12 = *(8 + r5); // lwz @ 0x807FB2B0
    r8 = *(1 + r10); // lbz @ 0x807FB2B8
    r0 = *(2 + r10); // lbz @ 0x807FB2BC
    *(0x18 + r1) = r30; // stw @ 0x807FB2C0
    *(0x1c + r1) = r31; // stw @ 0x807FB2C4
    *(0x20 + r1) = r12; // stw @ 0x807FB2C8
    *(0xc + r1) = r11; // stw @ 0x807FB2CC
    *(0x10 + r1) = r11; // stw @ 0x807FB2D0
    *(0x14 + r1) = r11; // stw @ 0x807FB2D4
    *(8 + r1) = r9; // stb @ 0x807FB2D8
    *(9 + r1) = r8; // stb @ 0x807FB2DC
    *(0xa + r1) = r0; // stb @ 0x807FB2E0
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x34 + r1); // lwz @ 0x807FB2E8
    r31 = *(0x2c + r1); // lwz @ 0x807FB2EC
    r30 = *(0x28 + r1); // lwz @ 0x807FB2F0
    return;
}