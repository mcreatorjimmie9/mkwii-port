/* Function at 0x807053E8, size=40 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807053E8(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 0x40 */ // 0x807053FC
    *(0x48 + r1) = r30; // stw @ 0x80705400
    r30 = r3;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}