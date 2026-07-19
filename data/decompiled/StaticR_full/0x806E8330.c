/* Function at 0x806E8330, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r31 */
/* Calls: 1 function(s) */

void FUN_806E8330(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r31 */
    /* li r31, 0 */ // 0x806E8340
    *(0x18 + r1) = r30; // stw @ 0x806E8344
    /* li r30, 0 */ // 0x806E8348
    *(8 + r1) = r31; // stw @ 0x806E834C
    /* clrlwi r3, r30, 0x18 */ // 0x806E8350
    FUN_805E3430(r4); // bl 0x805E3430
}