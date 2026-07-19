/* Function at 0x8078E714, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8078E714(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8078E728
    /* lis r30, 0 */ // 0x8078E72C
    *(0x14 + r1) = r29; // stw @ 0x8078E730
    r5 = *(0 + r30); // lwz @ 0x8078E734
    r4 = *(0x5bc + r5); // lwz @ 0x8078E738
    r5 = r5 + 0x6bc; // 0x8078E73C
    FUN_805E3430(r5); // bl 0x805E3430
}