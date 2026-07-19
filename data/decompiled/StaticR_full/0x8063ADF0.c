/* Function at 0x8063ADF0, size=24 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_8063ADF0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8063ADFC
    /* li r31, 1 */ // 0x8063AE00
    FUN_805E3430(); // bl 0x805E3430
}