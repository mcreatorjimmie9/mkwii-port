/* Function at 0x8063F414, size=52 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8063F414(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x8063F42C
    r30 = r4;
    r4 = r31;
    *(0x24 + r1) = r29; // stw @ 0x8063F438
    r29 = r3;
    r3 = r3 + 0x100; // 0x8063F440
    FUN_805E3430(r4, r3); // bl 0x805E3430
}