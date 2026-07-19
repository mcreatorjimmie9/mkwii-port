/* Function at 0x805B20C8, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B20C8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x805B20E0
    r30 = r3;
    r3 = r31;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}