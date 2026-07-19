/* Function at 0x806E843C, size=60 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

void FUN_806E843C(int r3, int r4, int r6, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x806E844C
    /* li r30, 0 */ // 0x806E8454
    *(0x14 + r1) = r29; // stw @ 0x806E8458
    r29 = r8;
    *(0x10 + r1) = r28; // stw @ 0x806E8460
    r28 = r6;
    *(8 + r1) = r31; // stw @ 0x806E8468
    /* clrlwi r3, r30, 0x18 */ // 0x806E846C
    FUN_805E3430(r4); // bl 0x805E3430
}