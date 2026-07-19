/* Function at 0x8069FC84, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8069FC84(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8069FC90
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8069FC98
    r12 = *(0x18 + r12); // lwz @ 0x8069FC9C
    /* mtctr r12 */ // 0x8069FCA0
    /* bctrl  */ // 0x8069FCA4
    r3 = r31 + 0x68; // 0x8069FCA8
    FUN_8064DF74(r3); // bl 0x8064DF74
    r0 = *(0x14 + r1); // lwz @ 0x8069FCB0
    r31 = *(0xc + r1); // lwz @ 0x8069FCB4
    return;
}