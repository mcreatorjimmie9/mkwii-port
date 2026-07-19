/* Function at 0x807A3848, size=52 bytes */
/* Stack frame: 960 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807A3848(int r3, int r4)
{
    /* Stack frame: -960(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x3b8 + r1) = r30; // stw @ 0x807A3860
    /* lis r30, 0 */ // 0x807A3864
    r30 = r30 + 0; // 0x807A3868
    *(0x3b4 + r1) = r29; // stw @ 0x807A386C
    *(0x3b0 + r1) = r28; // stw @ 0x807A3870
    r28 = r4;
    FUN_805E3430(); // bl 0x805E3430
}