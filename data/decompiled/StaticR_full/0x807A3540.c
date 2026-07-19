/* Function at 0x807A3540, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807A3540(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807A3550
    r31 = r31 + 0; // 0x807A3554
    *(0x18 + r1) = r30; // stw @ 0x807A3558
    *(0x14 + r1) = r29; // stw @ 0x807A355C
    r29 = r3;
    FUN_805E3430(); // bl 0x805E3430
}