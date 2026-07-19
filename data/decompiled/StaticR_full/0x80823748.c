/* Function at 0x80823748, size=48 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80823748(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80823750
    FUN_8061DFF8(); // bl 0x8061DFF8
    r12 = *(0xc + r3); // lwz @ 0x80823758
    r12 = *(0x1c + r12); // lwz @ 0x8082375C
    /* mtctr r12 */ // 0x80823760
    /* bctrl  */ // 0x80823764
    r0 = *(0x14 + r1); // lwz @ 0x80823768
    return;
}