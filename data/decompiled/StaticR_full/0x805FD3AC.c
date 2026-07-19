/* Function at 0x805FD3AC, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805FD3AC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805FD3B8
    r31 = r3;
    FUN_8062075C(); // bl 0x8062075C
    r12 = *(0x244 + r31); // lwz @ 0x805FD3C4
    r3 = r31 + 0x238; // 0x805FD3C8
    r12 = *(0x30 + r12); // lwz @ 0x805FD3CC
    /* mtctr r12 */ // 0x805FD3D0
    /* bctrl  */ // 0x805FD3D4
    r12 = *(0x2d8 + r31); // lwz @ 0x805FD3D8
    r3 = r31 + 0x2cc; // 0x805FD3DC
    r12 = *(0x30 + r12); // lwz @ 0x805FD3E0
    /* mtctr r12 */ // 0x805FD3E4
    /* bctrl  */ // 0x805FD3E8
    r0 = *(0x14 + r1); // lwz @ 0x805FD3EC
    r31 = *(0xc + r1); // lwz @ 0x805FD3F0
    return;
}