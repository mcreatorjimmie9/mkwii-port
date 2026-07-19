/* Function at 0x805DEA30, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_805DEA30(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805DEA3C
    FUN_805E08DC(); // bl 0x805E08DC
    r31 = r3;
    FUN_805DEB04(); // bl 0x805DEB04
    r3 = r31;
    FUN_805E09A0(r3); // bl 0x805E09A0
    /* b 0x805dea40 */ // 0x805DEA54
}