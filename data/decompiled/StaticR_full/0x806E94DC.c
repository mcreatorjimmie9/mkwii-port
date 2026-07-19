/* Function at 0x806E94DC, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806E94DC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0x10 */ // 0x806E94E4
    *(0x1c + r1) = r31; // stw @ 0x806E94EC
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806E94F8
    r30 = r4;
    /* li r4, 0 */ // 0x806E9500
    FUN_805E3430(r3, r4); // bl 0x805E3430
}