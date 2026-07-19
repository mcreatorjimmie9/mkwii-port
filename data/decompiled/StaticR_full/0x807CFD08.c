/* Function at 0x807CFD08, size=28 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807CFD08(int r3)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x3c + r1) = r31; // stw @ 0x807CFD18
    *(0x38 + r1) = r30; // stw @ 0x807CFD1C
    FUN_805E3430(r3); // bl 0x805E3430
}