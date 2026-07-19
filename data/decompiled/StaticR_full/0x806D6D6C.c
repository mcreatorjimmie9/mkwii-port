/* Function at 0x806D6D6C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806D6D6C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x806D6D78
    *(0xc + r1) = r31; // stw @ 0x806D6D7C
    r31 = r3;
    *(0xd84 + r3) = r0; // stw @ 0x806D6D84
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x806D6D90
    r3 = r31;
    /* li r4, 0x4e */ // 0x806D6D98
    /* li r5, 0 */ // 0x806D6D9C
    r12 = *(0x1c + r12); // lwz @ 0x806D6DA0
    /* mtctr r12 */ // 0x806D6DA4
    /* bctrl  */ // 0x806D6DA8
    r0 = *(0x14 + r1); // lwz @ 0x806D6DAC
    r31 = *(0xc + r1); // lwz @ 0x806D6DB0
    return;
}