/* Function at 0x806CB470, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806CB470(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806CB47C
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806CB488
    r3 = r31;
    r4 = r4 + 0; // 0x806CB490
    *(0 + r31) = r4; // stw @ 0x806CB494
    r31 = *(0xc + r1); // lwz @ 0x806CB498
    r0 = *(0x14 + r1); // lwz @ 0x806CB49C
    return;
}