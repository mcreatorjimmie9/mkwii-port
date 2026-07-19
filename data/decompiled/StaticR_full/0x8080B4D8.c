/* Function at 0x8080B4D8, size=32 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8080B4D8(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x8080B4E8
    r30 = r3;
    /* li r3, 0x58 */ // 0x8080B4F0
    FUN_805E3430(r3); // bl 0x805E3430
}