/* Function at 0x8077F87C, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8077F87C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x8077F884
    r5 = r5 + 0; // 0x8077F88C
    *(0x1c + r1) = r31; // stw @ 0x8077F890
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x8077F898
    r30 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x8077F8A4
    r3 = r30;
    r4 = r4 + 0; // 0x8077F8AC
    *(0 + r30) = r4; // stw @ 0x8077F8B0
    r12 = *(0 + r30); // lwz @ 0x8077F8B4
    r12 = *(0xdc + r12); // lwz @ 0x8077F8B8
    /* mtctr r12 */ // 0x8077F8BC
    /* bctrl  */ // 0x8077F8C0
    /* lis r3, 0 */ // 0x8077F8C4
    /* lis r0, 0x4330 */ // 0x8077F8C8
    r3 = r3 + 0; // 0x8077F8CC
    *(0 + r30) = r3; // stw @ 0x8077F8D0
    /* lis r4, 0 */ // 0x8077F8D4
    r5 = *(0 + r31); // lwz @ 0x8077F8D8
    r3 = r30;
    *(8 + r1) = r0; // stw @ 0x8077F8E0
    r0 = *(0x2c + r5); // lha @ 0x8077F8E4
    /* lfd f1, 0(r4) */ // 0x8077F8E8
    /* xoris r0, r0, 0x8000 */ // 0x8077F8EC
    *(0xc + r1) = r0; // stw @ 0x8077F8F0
    /* lfd f0, 8(r1) */ // 0x8077F8F4
    /* fsubs f0, f0, f1 */ // 0x8077F8F8
    /* stfs f0, 0xb0(r30) */ // 0x8077F8FC
    r31 = *(0x1c + r1); // lwz @ 0x8077F900
    r30 = *(0x18 + r1); // lwz @ 0x8077F904
    r0 = *(0x24 + r1); // lwz @ 0x8077F908
    return;
}