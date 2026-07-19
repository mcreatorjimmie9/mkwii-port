/* Function at 0x805F6D64, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F6D64(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805F6D78
    r30 = r4;
    r3 = *(0x6c + r3); // lwz @ 0x805F6D80
    r12 = *(0 + r3); // lwz @ 0x805F6D84
    r12 = *(8 + r12); // lwz @ 0x805F6D88
    /* mtctr r12 */ // 0x805F6D8C
    /* bctrl  */ // 0x805F6D90
    r4 = r3;
    r5 = r31;
    FUN_805F6DD4(r4, r5, r3); // bl 0x805F6DD4
    /* lfs f0, 8(r1) */ // 0x805F6DA4
    /* stfs f0, 0(r30) */ // 0x805F6DA8
    /* lfs f0, 0xc(r1) */ // 0x805F6DAC
    /* stfs f0, 4(r30) */ // 0x805F6DB0
    /* lfs f0, 0x10(r1) */ // 0x805F6DB4
    /* stfs f0, 8(r30) */ // 0x805F6DB8
    r31 = *(0x1c + r1); // lwz @ 0x805F6DBC
    r30 = *(0x18 + r1); // lwz @ 0x805F6DC0
    r0 = *(0x24 + r1); // lwz @ 0x805F6DC4
    return;
}