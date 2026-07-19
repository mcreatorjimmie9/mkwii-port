/* Function at 0x80632F4C, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80632F4C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80632F58
    r31 = r3;
    r3 = *(0x2c + r3); // lwz @ 0x80632F60
    FUN_8061DA88(); // bl 0x8061DA88
}