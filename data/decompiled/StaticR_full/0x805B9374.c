/* Function at 0x805B9374, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B9374(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* mulli r0, r5, 0x18 */ // 0x805B9380
    *(0xc + r1) = r31; // stw @ 0x805B9384
    /* li r31, 0 */ // 0x805B9388
    r3 = r3 + r0; // 0x805B938C
    r3 = r3 + 0xf8; // 0x805B9390
    FUN_805E3430(r3); // bl 0x805E3430
}