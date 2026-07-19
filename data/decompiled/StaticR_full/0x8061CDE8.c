/* Function at 0x8061CDE8, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8061CDE8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8061CDF4
    r31 = r3;
    /* li r3, 0xfc */ // 0x8061CDFC
    FUN_805E3430(r3); // bl 0x805E3430
}