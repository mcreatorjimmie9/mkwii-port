/* Function at 0x80823718, size=48 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80823718(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80823720
    FUN_8061DFF8(); // bl 0x8061DFF8
    r12 = *(0xc + r3); // lwz @ 0x80823728
    r12 = *(0x18 + r12); // lwz @ 0x8082372C
    /* mtctr r12 */ // 0x80823730
    /* bctrl  */ // 0x80823734
    r0 = *(0x14 + r1); // lwz @ 0x80823738
    return;
}