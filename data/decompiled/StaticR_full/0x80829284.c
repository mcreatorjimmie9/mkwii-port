/* Function at 0x80829284, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80829284(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80829290
    r31 = r3;
    FUN_80828F78(); // bl 0x80828F78
    r3 = r31;
    FUN_80832278(r3); // bl 0x80832278
    r0 = *(0x14 + r1); // lwz @ 0x808292A4
    r31 = *(0xc + r1); // lwz @ 0x808292A8
    return;
}