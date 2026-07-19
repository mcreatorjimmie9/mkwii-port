/* Function at 0x8074237C, size=36 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8074237C(int r3)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x24 + r1) = r29; // stw @ 0x80742390
    r29 = r3;
    /* li r3, 0x4c */ // 0x80742398
    FUN_805E3430(r3); // bl 0x805E3430
}