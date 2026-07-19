/* Function at 0x807BC778, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807BC778(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BC784
    r31 = r3;
    r4 = *(0x140 + r3); // lwz @ 0x807BC78C
    r3 = *(0 + r4); // lwz @ 0x807BC790
    FUN_807B5EBC(); // bl 0x807B5EBC
    if (==) goto 0x0x807bc7b4;
    r3 = *(0x144 + r31); // lwz @ 0x807BC7A0
    r12 = *(0x34 + r3); // lwz @ 0x807BC7A4
    r12 = *(0x28 + r12); // lwz @ 0x807BC7A8
    /* mtctr r12 */ // 0x807BC7AC
    /* bctrl  */ // 0x807BC7B0
    r0 = *(0x14 + r1); // lwz @ 0x807BC7B4
    r31 = *(0xc + r1); // lwz @ 0x807BC7B8
    return;
}