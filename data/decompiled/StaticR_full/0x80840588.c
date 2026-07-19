/* Function at 0x80840588, size=36 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80840588(int r3)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    /* li r3, 0x50 */ // 0x8084059C
    *(0x28 + r1) = r30; // stw @ 0x808405A0
    *(0x24 + r1) = r29; // stw @ 0x808405A4
    FUN_805E3430(r3); // bl 0x805E3430
}