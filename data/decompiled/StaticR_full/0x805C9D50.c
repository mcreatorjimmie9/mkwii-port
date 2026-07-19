/* Function at 0x805C9D50, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805C9D50(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805C9D64
    r30 = r4;
    r0 = *(4 + r3); // lbz @ 0x805C9D6C
    /* extsb r4, r0 */ // 0x805C9D70
    r0 = r4 >> 0x1f; // srawi
    /* addic r0, r4, 3 */ // 0x805C9D78
    *(8 + r1) = r0; // stb @ 0x805C9D7C
    r12 = *(0 + r3); // lwz @ 0x805C9D80
    r12 = *(0x14 + r12); // lwz @ 0x805C9D84
    /* mtctr r12 */ // 0x805C9D88
    /* bctrl  */ // 0x805C9D8C
    r4 = r3;
    r5 = r30;
    r6 = r31;
    /* li r7, 1 */ // 0x805C9DA0
    FUN_805BC798(r4, r5, r6, r3, r7); // bl 0x805BC798
    r0 = *(0x24 + r1); // lwz @ 0x805C9DA8
    r31 = *(0x1c + r1); // lwz @ 0x805C9DAC
    r30 = *(0x18 + r1); // lwz @ 0x805C9DB0
    return;
}