/* Function at 0x805F50F0, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F50F0(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805F5100
    *(0x18 + r1) = r30; // stw @ 0x805F5104
    /* li r30, 0 */ // 0x805F5108
    *(0x14 + r1) = r29; // stw @ 0x805F510C
    /* li r29, 3 */ // 0x805F5110
    /* b 0x805f5124 */ // 0x805F5114
    r3 = *(0x10 + r3); // lwz @ 0x805F5118
    FUN_805F6678(); // bl 0x805F6678
    r29 = r3;
}