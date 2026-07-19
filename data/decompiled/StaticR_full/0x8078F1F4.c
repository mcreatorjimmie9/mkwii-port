/* Function at 0x8078F1F4, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8078F1F4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x8078F1FC
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8078F20C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8078F214
    r29 = r3;
    r3 = *(0 + r6); // lwz @ 0x8078F21C
    FUN_805E3430(); // bl 0x805E3430
}