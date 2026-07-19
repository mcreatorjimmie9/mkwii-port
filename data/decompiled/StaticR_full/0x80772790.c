/* Function at 0x80772790, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80772790(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8077279C
    r31 = r3;
    FUN_80771D60(); // bl 0x80771D60
    r3 = r31;
    FUN_80771C04(r3); // bl 0x80771C04
    r0 = *(0x14 + r1); // lwz @ 0x807727B0
    r31 = *(0xc + r1); // lwz @ 0x807727B4
    return;
}