/* Function at 0x805A9330, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805A9330(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    /* li r5, 0x1c0 */ // 0x805A9344
    *(0x18 + r1) = r30; // stw @ 0x805A9348
    r30 = r4;
    /* li r4, 0 */ // 0x805A9350
    *(0x14 + r1) = r29; // stw @ 0x805A9354
    r29 = r3;
    r3 = r3 + 8; // 0x805A935C
    FUN_805E3430(r4, r3); // bl 0x805E3430
}