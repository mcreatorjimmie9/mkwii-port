/* Function at 0x805ECCB0, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805ECCB0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x805ECCC0
    *(8 + r1) = r30; // stw @ 0x805ECCC4
    r30 = r4;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
}