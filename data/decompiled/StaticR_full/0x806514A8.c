/* Function at 0x806514A8, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806514A8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806514B4
    r31 = r3;
    r3 = *(0x1880 + r3); // lwz @ 0x806514BC
    FUN_80661124(); // bl 0x80661124
    r3 = *(0x1884 + r31); // lwz @ 0x806514C4
    FUN_8066115C(); // bl 0x8066115C
    /* li r0, 0 */ // 0x806514CC
    *(0x1920 + r31) = r0; // stw @ 0x806514D0
    r31 = *(0xc + r1); // lwz @ 0x806514D4
    r0 = *(0x14 + r1); // lwz @ 0x806514D8
    return;
}