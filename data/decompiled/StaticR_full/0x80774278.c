/* Function at 0x80774278, size=44 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80774278(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x48 + r1) = r30; // stw @ 0x8077428C
    r30 = r4;
    /* li r4, 0 */ // 0x80774294
    *(0x44 + r1) = r29; // stw @ 0x80774298
    r29 = r3;
    FUN_805E3430(r4); // bl 0x805E3430
}