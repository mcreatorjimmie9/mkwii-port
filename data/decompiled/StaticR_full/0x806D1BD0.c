/* Function at 0x806D1BD0, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806D1BD0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806D1BDC
    r31 = r3;
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x806D1BEC
    r3 = r31;
    /* li r4, 3 */ // 0x806D1BF4
    /* li r5, 0 */ // 0x806D1BF8
    r12 = *(0x1c + r12); // lwz @ 0x806D1BFC
    /* mtctr r12 */ // 0x806D1C00
    /* bctrl  */ // 0x806D1C04
    r0 = *(0x14 + r1); // lwz @ 0x806D1C08
    r31 = *(0xc + r1); // lwz @ 0x806D1C0C
    return;
}