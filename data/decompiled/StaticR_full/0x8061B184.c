/* Function at 0x8061B184, size=52 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8061B184(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8061B18C
    FUN_8061DFF8(); // bl 0x8061DFF8
    r12 = *(0xc + r3); // lwz @ 0x8061B194
    /* li r4, 0 */ // 0x8061B198
    r12 = *(0x20 + r12); // lwz @ 0x8061B19C
    /* mtctr r12 */ // 0x8061B1A0
    /* bctrl  */ // 0x8061B1A4
    r0 = *(0x14 + r1); // lwz @ 0x8061B1A8
    return;
}