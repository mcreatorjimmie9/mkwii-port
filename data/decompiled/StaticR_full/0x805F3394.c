/* Function at 0x805F3394, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F3394(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x805F33A4
    *(0x18 + r1) = r30; // stw @ 0x805F33A8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805F33B0
    r29 = r3;
    /* b 0x805f33c8 */ // 0x805F33B8
    r4 = *(0x68 + r30); // lwz @ 0x805F33BC
    r3 = r31;
    FUN_805EC92C(r3); // bl 0x805EC92C
}