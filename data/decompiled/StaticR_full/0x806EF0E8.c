/* Function at 0x806EF0E8, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806EF0E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806EF0F0
    *(0x14 + r1) = r0; // stw @ 0x806EF0F4
    r4 = r4 + 0; // 0x806EF0F8
    *(0xc + r1) = r31; // stw @ 0x806EF0FC
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x806EF104
    r3 = r3 + 4; // 0x806EF108
    FUN_805E3430(r4, r3); // bl 0x805E3430
}