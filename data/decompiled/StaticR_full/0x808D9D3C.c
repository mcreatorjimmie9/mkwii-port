/* Function at 0x808D9D3C, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_808D9D3C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808D9D48
    r31 = r3;
    r0 = *(8 + r3); // lwz @ 0x808D9D50
    if (==) goto 0x0x808d9d74;
    r3 = r0;
    r4 = r31 + 0x3c; // 0x808D9D60
    r12 = *(0 + r3); // lwz @ 0x808D9D64
    r12 = *(0x14 + r12); // lwz @ 0x808D9D68
    /* mtctr r12 */ // 0x808D9D6C
    /* bctrl  */ // 0x808D9D70
    r0 = *(0x90 + r31); // lbz @ 0x808D9D74
    if (==) goto 0x0x808d9d98;
    r3 = *(0xc + r31); // lwz @ 0x808D9D80
    r4 = r31 + 0x3c; // 0x808D9D84
    r12 = *(0 + r3); // lwz @ 0x808D9D88
    r12 = *(0x14 + r12); // lwz @ 0x808D9D8C
    /* mtctr r12 */ // 0x808D9D90
    /* bctrl  */ // 0x808D9D94
    r3 = *(0x154 + r31); // lwz @ 0x808D9D98
    r12 = *(0 + r3); // lwz @ 0x808D9D9C
    r12 = *(0x78 + r12); // lwz @ 0x808D9DA0
    /* mtctr r12 */ // 0x808D9DA4
    /* bctrl  */ // 0x808D9DA8
    r3 = *(0x158 + r31); // lwz @ 0x808D9DAC
    r12 = *(0 + r3); // lwz @ 0x808D9DB0
    r12 = *(0x78 + r12); // lwz @ 0x808D9DB4
    /* mtctr r12 */ // 0x808D9DB8
    /* bctrl  */ // 0x808D9DBC
    r0 = *(0x14 + r1); // lwz @ 0x808D9DC0
    r31 = *(0xc + r1); // lwz @ 0x808D9DC4
    return;
}