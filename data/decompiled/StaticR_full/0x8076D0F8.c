/* Function at 0x8076D0F8, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8076D0F8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r6 = r3;
    /* lis r3, 0 */ // 0x8076D104
    *(0x14 + r1) = r0; // stw @ 0x8076D108
    *(0xc + r1) = r31; // stw @ 0x8076D10C
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x8076D114
    r30 = r4;
    r4 = *(4 + r6); // lha @ 0x8076D11C
    r3 = *(0 + r3); // lwz @ 0x8076D120
    FUN_80770F48(); // bl 0x80770F48
    r3 = *(0x1c + r3); // lwz @ 0x8076D128
    /* slwi r0, r30, 2 */ // 0x8076D12C
    /* lwzx r0, r3, r0 */ // 0x8076D130
    *(0 + r31) = r0; // stw @ 0x8076D134
    r31 = *(0xc + r1); // lwz @ 0x8076D138
    r30 = *(8 + r1); // lwz @ 0x8076D13C
    r0 = *(0x14 + r1); // lwz @ 0x8076D140
    return;
}