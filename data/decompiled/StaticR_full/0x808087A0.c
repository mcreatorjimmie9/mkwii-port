/* Function at 0x808087A0, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808087A0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808087AC
    r31 = r3;
    /* li r3, 0x58 */ // 0x808087B4
    FUN_805E3430(r3); // bl 0x805E3430
}