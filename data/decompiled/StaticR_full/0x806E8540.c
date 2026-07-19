/* Function at 0x806E8540, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806E8540(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806E8548
    /* li r5, 0x2280 */ // 0x806E854C
    *(0x14 + r1) = r0; // stw @ 0x806E8550
    *(0xc + r1) = r31; // stw @ 0x806E8554
    *(8 + r1) = r30; // stw @ 0x806E8558
    r30 = r3;
    r3 = r3 + 0x361; // 0x806E8560
    FUN_805E3430(r3); // bl 0x805E3430
}