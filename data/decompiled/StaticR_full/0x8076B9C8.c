/* Function at 0x8076B9C8, size=52 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8076B9C8(int r3, int r4, int r5)
{
    /* Stack frame: -208(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8076B9D0
    /* li r5, 0 */ // 0x8076B9D4
    r4 = r4 + 0; // 0x8076B9DC
    r4 = r4 + 9; // 0x8076B9E0
    *(0xcc + r1) = r31; // stw @ 0x8076B9E4
    *(0xc8 + r1) = r30; // stw @ 0x8076B9E8
    *(0xc4 + r1) = r29; // stw @ 0x8076B9EC
    r29 = r3;
    FUN_805E3430(r3); // bl 0x805E3430
}