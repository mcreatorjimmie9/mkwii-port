/* Function at 0x805E3430, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805E3430(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805E3440
    r3 = r31 + 0; // 0x805E3444
    *(0x18 + r1) = r30; // stw @ 0x805E3448
    *(0x14 + r1) = r29; // stw @ 0x805E344C
    /* crclr cr1eq */ // 0x805E3450
    FUN_805E3430(r3); // bl 0x805E3430
}