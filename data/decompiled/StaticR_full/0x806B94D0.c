/* Function at 0x806B94D0, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806B94D0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806B94DC
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806B94E8
    r3 = r31;
    r4 = r4 + 0; // 0x806B94F0
    *(0 + r31) = r4; // stw @ 0x806B94F4
    r31 = *(0xc + r1); // lwz @ 0x806B94F8
    r0 = *(0x14 + r1); // lwz @ 0x806B94FC
    return;
}