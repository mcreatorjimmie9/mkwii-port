/* Function at 0x806E6538, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806E6538(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x806E654C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806E6554
    r29 = r3;
    r3 = r3 + 8; // 0x806E655C
    FUN_805E3430(r3); // bl 0x805E3430
}