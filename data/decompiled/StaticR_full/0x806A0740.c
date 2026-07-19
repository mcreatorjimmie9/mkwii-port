/* Function at 0x806A0740, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806A0740(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806A074C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x806A0754
    r12 = *(0x18 + r12); // lwz @ 0x806A0758
    /* mtctr r12 */ // 0x806A075C
    /* bctrl  */ // 0x806A0760
    r3 = r31 + 0x68; // 0x806A0764
    FUN_8064DF74(r3); // bl 0x8064DF74
    r0 = *(0x14 + r1); // lwz @ 0x806A076C
    r31 = *(0xc + r1); // lwz @ 0x806A0770
    return;
}