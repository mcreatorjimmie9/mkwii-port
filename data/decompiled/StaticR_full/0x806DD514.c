/* Function at 0x806DD514, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806DD514(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806DD520
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806DD52C
    r3 = r31;
    r4 = r4 + 0; // 0x806DD534
    *(0 + r31) = r4; // stw @ 0x806DD538
    r12 = *(0 + r31); // lwz @ 0x806DD53C
    r12 = *(0x3c + r12); // lwz @ 0x806DD540
    /* mtctr r12 */ // 0x806DD544
    /* bctrl  */ // 0x806DD548
    /* lis r4, 0 */ // 0x806DD54C
    r3 = r31;
    r4 = r4 + 0; // 0x806DD554
    *(0 + r31) = r4; // stw @ 0x806DD558
    r31 = *(0xc + r1); // lwz @ 0x806DD55C
    r0 = *(0x14 + r1); // lwz @ 0x806DD560
    return;
}