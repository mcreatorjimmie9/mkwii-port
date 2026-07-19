/* Function at 0x806DF188, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806DF188(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806DF190
    *(0x14 + r1) = r0; // stw @ 0x806DF194
    r4 = r4 + 0; // 0x806DF198
    *(0xc + r1) = r31; // stw @ 0x806DF19C
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x806DF1A4
    r3 = r3 + 0xa8; // 0x806DF1A8
    FUN_805E34E4(r4, r3); // bl 0x805E34E4
    /* lis r4, 0 */ // 0x806DF1B0
    r3 = r31;
    r4 = r4 + 0; // 0x806DF1B8
    *(0 + r31) = r4; // stw @ 0x806DF1BC
    r31 = *(0xc + r1); // lwz @ 0x806DF1C0
    r0 = *(0x14 + r1); // lwz @ 0x806DF1C4
    return;
}