/* Function at 0x807D9D8C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807D9D8C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807D9D94
    *(0x14 + r1) = r0; // stw @ 0x807D9D98
    *(0xc + r1) = r31; // stw @ 0x807D9D9C
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x807D9DA4
    r4 = *(0xb + r4); // lbz @ 0x807D9DA8
    FUN_805A47A8(); // bl 0x805A47A8
    r3 = *(4 + r3); // lwz @ 0x807D9DB0
    /* lfs f2, 8(r3) */ // 0x807D9DB4
    /* lfs f1, 4(r3) */ // 0x807D9DB8
    /* lfs f0, 0(r3) */ // 0x807D9DBC
    /* stfs f0, 0(r31) */ // 0x807D9DC0
    /* stfs f1, 4(r31) */ // 0x807D9DC4
    /* stfs f2, 8(r31) */ // 0x807D9DC8
    r31 = *(0xc + r1); // lwz @ 0x807D9DCC
    r0 = *(0x14 + r1); // lwz @ 0x807D9DD0
    return;
}