/* Function at 0x80749040, size=32 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80749040(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x80749050
    r30 = r3;
    /* li r3, 0x58 */ // 0x80749058
    FUN_805E3430(r3); // bl 0x805E3430
}