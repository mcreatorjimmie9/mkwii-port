/* Function at 0x8061F1A0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8061F1A0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 1 */ // 0x8061F1A8
    *(0xc + r1) = r31; // stw @ 0x8061F1B0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8061F1B8
    r30 = r3;
    r6 = *(0 + r3); // lwz @ 0x8061F1C0
    r3 = *(0x44 + r6); // lwz @ 0x8061F1C4
    FUN_805F0368(); // bl 0x805F0368
    r3 = *(0 + r30); // lwz @ 0x8061F1CC
    r4 = r31;
    /* li r5, 1 */ // 0x8061F1D4
    r3 = *(0x48 + r3); // lwz @ 0x8061F1D8
    FUN_805F0368(r4, r5); // bl 0x805F0368
    r0 = *(0x14 + r1); // lwz @ 0x8061F1E0
    r31 = *(0xc + r1); // lwz @ 0x8061F1E4
    r30 = *(8 + r1); // lwz @ 0x8061F1E8
    return;
}