/* Function at 0x806F4FC8, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806F4FC8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 2 */ // 0x806F4FD0
    r31 = r3;
    r3 = r3 + 8; // 0x806F4FE0
    *(0x18 + r1) = r30; // stw @ 0x806F4FE4
    *(0x14 + r1) = r29; // stw @ 0x806F4FE8
    FUN_805E3430(r3); // bl 0x805E3430
}