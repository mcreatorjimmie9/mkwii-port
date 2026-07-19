/* Function at 0x8091B804, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8091B804(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8091B810
    r31 = r3;
    FUN_805F5350(); // bl 0x805F5350
    r4 = r3;
    r3 = r31;
    FUN_808A028C(r4, r3); // bl 0x808A028C
    r0 = *(0x14 + r1); // lwz @ 0x8091B828
    r31 = *(0xc + r1); // lwz @ 0x8091B82C
    return;
}