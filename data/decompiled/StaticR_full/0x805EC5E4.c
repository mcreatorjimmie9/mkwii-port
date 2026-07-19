/* Function at 0x805EC5E4, size=44 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805EC5E4(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    /* li r4, 0 */ // 0x805EC5FC
    *(0x24 + r1) = r29; // stw @ 0x805EC600
    r29 = r3;
    r3 = r3 + 0xc; // 0x805EC608
    FUN_805E3430(r4, r3); // bl 0x805E3430
}