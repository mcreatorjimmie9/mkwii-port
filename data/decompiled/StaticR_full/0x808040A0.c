/* Function at 0x808040A0, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808040A0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x808040B4
    r3 = *(0xcc + r3); // lwz @ 0x808040B8
    FUN_8061DA88(); // bl 0x8061DA88
}