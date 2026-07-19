/* Function at 0x8078D714, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8078D714(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x8078D724
    r31 = r31 + 0; // 0x8078D728
    *(0x18 + r1) = r30; // stw @ 0x8078D72C
    *(0x14 + r1) = r29; // stw @ 0x8078D730
    *(0x10 + r1) = r28; // stw @ 0x8078D734
    r28 = r3;
    FUN_805E3430(); // bl 0x805E3430
}