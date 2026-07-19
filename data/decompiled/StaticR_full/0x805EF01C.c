/* Function at 0x805EF01C, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805EF01C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x805EF030
    /* li r30, 0 */ // 0x805EF034
    r3 = *(0x14 + r31); // lwz @ 0x805EF038
    r3 = *(0 + r3); // lwz @ 0x805EF03C
    FUN_805E3430(); // bl 0x805E3430
}