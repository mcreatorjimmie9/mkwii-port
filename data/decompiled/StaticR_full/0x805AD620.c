/* Function at 0x805AD620, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805AD620(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805AD630
    r30 = r3;
    FUN_805E3430(); // bl 0x805E3430
}