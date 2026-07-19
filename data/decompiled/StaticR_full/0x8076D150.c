/* Function at 0x8076D150, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8076D150(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    r4 = r3;
    /* lis r3, 0 */ // 0x8076D15C
    *(0x14 + r1) = r0; // stw @ 0x8076D160
    r4 = *(4 + r4); // lha @ 0x8076D164
    r3 = *(0 + r3); // lwz @ 0x8076D168
    FUN_80770F48(r4, r3); // bl 0x80770F48
    r12 = *(0 + r3); // lwz @ 0x8076D170
    r12 = *(0xc + r12); // lwz @ 0x8076D174
    /* mtctr r12 */ // 0x8076D178
    /* bctrl  */ // 0x8076D17C
    r0 = *(0x14 + r1); // lwz @ 0x8076D180
    return;
}