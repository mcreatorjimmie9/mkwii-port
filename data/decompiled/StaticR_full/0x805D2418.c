/* Function at 0x805D2418, size=36 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805D2418(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x805D2420
    *(0x1c + r1) = r31; // stw @ 0x805D2428
    r31 = r3;
    r3 = r3 + 0x30; // 0x805D2430
    *(0x18 + r1) = r30; // stw @ 0x805D2434
    FUN_805E3430(r3); // bl 0x805E3430
}