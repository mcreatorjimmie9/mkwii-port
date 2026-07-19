/* Function at 0x805DE50C, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805DE50C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805DE51C
    r30 = r4;
    r31 = *(8 + r3); // lwz @ 0x805DE524
    /* li r3, 0x18 */ // 0x805DE528
    FUN_805E3430(r3); // bl 0x805E3430
}