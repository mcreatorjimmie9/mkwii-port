/* Function at 0x805B57B8, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805B57B8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    /* li r4, 0 */ // 0x805B57D0
    *(0x14 + r1) = r29; // stw @ 0x805B57D4
    r29 = r3;
    r3 = r3 + 0x10; // 0x805B57DC
    FUN_805E3430(r4, r3); // bl 0x805E3430
}