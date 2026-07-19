/* Function at 0x805B9A2C, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B9A2C(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    /* li r5, 0x80 */ // 0x805B9A40
    *(8 + r1) = r30; // stw @ 0x805B9A44
    r30 = r3;
    r3 = r3 + 0x28; // 0x805B9A4C
    FUN_805E3430(r5, r3); // bl 0x805E3430
}