/* Function at 0x8080B76C, size=32 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8080B76C(int r3)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x28 + r1) = r30; // stw @ 0x8080B77C
    r30 = r3;
    /* li r3, 0xe8 */ // 0x8080B784
    FUN_805E3430(r3); // bl 0x805E3430
}