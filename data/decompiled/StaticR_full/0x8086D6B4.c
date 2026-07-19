/* Function at 0x8086D6B4, size=32 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

void FUN_8086D6B4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r3, 0x28 */ // 0x8086D6BC
    *(0x18 + r1) = r30; // stw @ 0x8086D6C8
    *(0x14 + r1) = r29; // stw @ 0x8086D6CC
    FUN_805E3430(r3); // bl 0x805E3430
}