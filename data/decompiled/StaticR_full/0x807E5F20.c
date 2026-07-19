/* Function at 0x807E5F20, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807E5F20(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807E5F2C
    r31 = r3;
    FUN_8089F578(); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807E5F38
    /* li r3, 0x7c */ // 0x807E5F3C
    r4 = r4 + 0; // 0x807E5F40
    *(0 + r31) = r4; // stw @ 0x807E5F44
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}