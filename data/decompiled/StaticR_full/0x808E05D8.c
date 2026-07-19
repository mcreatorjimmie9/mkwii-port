/* Function at 0x808E05D8, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808E05D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808E05E0
    *(0x14 + r1) = r0; // stw @ 0x808E05E4
    r4 = r4 + 0; // 0x808E05E8
    *(0xc + r1) = r31; // stw @ 0x808E05EC
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x808E05F4
    /* li r3, 0x4c */ // 0x808E05F8
    FUN_805E3430(r4, r3); // bl 0x805E3430
}