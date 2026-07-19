/* Function at 0x8061B124, size=48 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8061B124(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8061B12C
    FUN_8061DFF8(); // bl 0x8061DFF8
    r12 = *(0xc + r3); // lwz @ 0x8061B134
    r12 = *(0x18 + r12); // lwz @ 0x8061B138
    /* mtctr r12 */ // 0x8061B13C
    /* bctrl  */ // 0x8061B140
    r0 = *(0x14 + r1); // lwz @ 0x8061B144
    return;
}