/* Function at 0x8061B154, size=48 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8061B154(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8061B15C
    FUN_8061DFF8(); // bl 0x8061DFF8
    r12 = *(0xc + r3); // lwz @ 0x8061B164
    r12 = *(0x1c + r12); // lwz @ 0x8061B168
    /* mtctr r12 */ // 0x8061B16C
    /* bctrl  */ // 0x8061B170
    r0 = *(0x14 + r1); // lwz @ 0x8061B174
    return;
}