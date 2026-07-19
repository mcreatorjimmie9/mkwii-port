/* Function at 0x8069FCC4, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8069FCC4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8069FCD0
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8069FCD8
    r12 = *(0x1c + r12); // lwz @ 0x8069FCDC
    /* mtctr r12 */ // 0x8069FCE0
    /* bctrl  */ // 0x8069FCE4
    r3 = r31 + 0x68; // 0x8069FCE8
    FUN_8064DFE4(r3); // bl 0x8064DFE4
    r0 = *(0x14 + r1); // lwz @ 0x8069FCF0
    r31 = *(0xc + r1); // lwz @ 0x8069FCF4
    return;
}