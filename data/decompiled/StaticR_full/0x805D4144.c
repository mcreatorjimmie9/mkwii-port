/* Function at 0x805D4144, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805D4144(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    /* li r5, 0x16 */ // 0x805D4158
    *(0x18 + r1) = r30; // stw @ 0x805D415C
    r30 = r4;
    /* li r4, 0 */ // 0x805D4164
    *(0x14 + r1) = r29; // stw @ 0x805D4168
    r29 = r3;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}