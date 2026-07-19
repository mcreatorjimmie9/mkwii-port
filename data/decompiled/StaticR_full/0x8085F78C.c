/* Function at 0x8085F78C, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8085F78C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8085F798
    r31 = r3;
    r3 = *(0x40 + r3); // lwz @ 0x8085F7A0
    FUN_8061DA88(); // bl 0x8061DA88
}