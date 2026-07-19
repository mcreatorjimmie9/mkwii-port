/* Function at 0x808891A0, size=136 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_808891A0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x808891A8
    /* lis r10, 0 */ // 0x808891AC
    *(0x34 + r1) = r0; // stw @ 0x808891B0
    /* li r11, 0 */ // 0x808891B4
    *(0x2c + r1) = r31; // stw @ 0x808891C0
    /* li r6, 3 */ // 0x808891C4
    *(0x28 + r1) = r30; // stw @ 0x808891C8
    r30 = *(0 + r5); // lwzu @ 0x808891CC
    /* lbzu r9, 0(r10) */ // 0x808891D0
    r31 = *(4 + r5); // lwz @ 0x808891D4
    r12 = *(8 + r5); // lwz @ 0x808891D8
    r8 = *(1 + r10); // lbz @ 0x808891E0
    r0 = *(2 + r10); // lbz @ 0x808891E4
    *(0x18 + r1) = r30; // stw @ 0x808891E8
    *(0x1c + r1) = r31; // stw @ 0x808891EC
    *(0x20 + r1) = r12; // stw @ 0x808891F0
    *(0xc + r1) = r11; // stw @ 0x808891F4
    *(0x10 + r1) = r11; // stw @ 0x808891F8
    *(0x14 + r1) = r11; // stw @ 0x808891FC
    *(8 + r1) = r9; // stb @ 0x80889200
    *(9 + r1) = r8; // stb @ 0x80889204
    *(0xa + r1) = r0; // stb @ 0x80889208
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x34 + r1); // lwz @ 0x80889210
    r31 = *(0x2c + r1); // lwz @ 0x80889214
    r30 = *(0x28 + r1); // lwz @ 0x80889218
    return;
}