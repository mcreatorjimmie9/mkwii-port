/* Function at 0x806F91B0, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806F91B0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    /* li r5, 0x4c */ // 0x806F91C4
    *(8 + r1) = r30; // stw @ 0x806F91C8
    r30 = r4;
    r3 = r30;
    r4 = r31;
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
}