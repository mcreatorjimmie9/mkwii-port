/* Function at 0x805F553C, size=52 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F553C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r0, 0x4330 */ // 0x805F5548
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x805F5554
    r30 = r3;
    *(0x24 + r1) = r29; // stw @ 0x805F555C
    r29 = r4;
    *(8 + r1) = r0; // stw @ 0x805F5564
    *(0x10 + r1) = r0; // stw @ 0x805F5568
    FUN_805E3430(); // bl 0x805E3430
}