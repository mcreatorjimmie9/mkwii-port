/* Function at 0x80763550, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80763550(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8076355C
    r31 = r3;
    /* li r3, 0xc */ // 0x80763564
    FUN_805E3430(r3); // bl 0x805E3430
}