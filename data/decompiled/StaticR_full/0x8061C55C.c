/* Function at 0x8061C55C, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8061C55C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8061C568
    r31 = r3;
    /* li r3, 0xfc */ // 0x8061C570
    FUN_805E3430(r3); // bl 0x805E3430
}