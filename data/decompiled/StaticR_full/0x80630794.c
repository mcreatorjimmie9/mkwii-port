/* Function at 0x80630794, size=44 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80630794(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x58 + r1) = r30; // stw @ 0x806307A8
    *(0x54 + r1) = r29; // stw @ 0x806307AC
    r29 = r3;
    r3 = r3 + 0x3c; // 0x806307B4
    r4 = r29 + 0xc; // 0x806307B8
    FUN_805E3430(r3, r4); // bl 0x805E3430
}