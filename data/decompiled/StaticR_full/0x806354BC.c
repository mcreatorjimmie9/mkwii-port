/* Function at 0x806354BC, size=32 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806354BC(int r3)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x28 + r1) = r30; // stw @ 0x806354CC
    r30 = r3;
    r3 = *(0x2c + r3); // lwz @ 0x806354D4
    FUN_8061DA88(); // bl 0x8061DA88
}