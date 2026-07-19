/* Function at 0x806FF478, size=40 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806FF478(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -256(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0xf8 + r1) = r30; // stw @ 0x806FF48C
    r30 = r5;
    *(0xf4 + r1) = r29; // stw @ 0x806FF494
    r29 = r4;
    FUN_805E3430(); // bl 0x805E3430
}