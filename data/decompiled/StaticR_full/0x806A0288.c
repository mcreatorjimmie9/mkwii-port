/* Function at 0x806A0288, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806A0288(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806A0294
    r31 = r3;
    FUN_806A02C8(); // bl 0x806A02C8
    r12 = *(0 + r31); // lwz @ 0x806A02A0
    r3 = r31;
    r12 = *(0x34 + r12); // lwz @ 0x806A02A8
    /* mtctr r12 */ // 0x806A02AC
    /* bctrl  */ // 0x806A02B0
    r0 = *(0x14 + r1); // lwz @ 0x806A02B4
    r31 = *(0xc + r1); // lwz @ 0x806A02B8
    return;
}