/* Function at 0x805D27F4, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805D27F4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0x1062 */ // 0x805D27FC
    /* lis r31, -0x8000 */ // 0x805D2808
    *(0x18 + r1) = r30; // stw @ 0x805D280C
    r30 = r4 + 0x4dd3; // 0x805D2810
    *(0x14 + r1) = r29; // stw @ 0x805D2814
    /* li r29, 0 */ // 0x805D2818
    *(0x10 + r1) = r28; // stw @ 0x805D281C
    r28 = r3;
    FUN_805E3430(); // bl 0x805E3430
}