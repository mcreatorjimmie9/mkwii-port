/* Function at 0x806E8380, size=60 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_806E8380(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x806E8390
    /* li r30, 0 */ // 0x806E8398
    *(0x14 + r1) = r29; // stw @ 0x806E839C
    /* li r29, 0 */ // 0x806E83A0
    *(0x10 + r1) = r28; // stw @ 0x806E83A4
    r28 = r3;
    *(0xc + r1) = r31; // stw @ 0x806E83AC
    /* clrlwi r3, r29, 0x18 */ // 0x806E83B0
    FUN_805E3430(r4); // bl 0x805E3430
}