/* Function at 0x805F4F88, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F4F88(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x805F4F90
    *(0x14 + r1) = r0; // stw @ 0x805F4F94
    r5 = r5 + 0; // 0x805F4F98
    *(0xc + r1) = r31; // stw @ 0x805F4F9C
    r31 = r3;
    r4 = r31;
    r3 = r5 + 0xc; // 0x805F4FA8
    FUN_805E3430(r5, r4, r3); // bl 0x805E3430
}