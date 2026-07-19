/* Function at 0x807D9CE4, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807D9CE4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807D9CEC
    *(0x14 + r1) = r0; // stw @ 0x807D9CF0
    *(0xc + r1) = r31; // stw @ 0x807D9CF4
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x807D9CFC
    r4 = *(0xd + r4); // lbz @ 0x807D9D00
    FUN_805A47A8(); // bl 0x805A47A8
    r3 = *(4 + r3); // lwz @ 0x807D9D08
    /* lfs f2, 8(r3) */ // 0x807D9D0C
    /* lfs f1, 4(r3) */ // 0x807D9D10
    /* lfs f0, 0(r3) */ // 0x807D9D14
    /* stfs f0, 0(r31) */ // 0x807D9D18
    /* stfs f1, 4(r31) */ // 0x807D9D1C
    /* stfs f2, 8(r31) */ // 0x807D9D20
    r31 = *(0xc + r1); // lwz @ 0x807D9D24
    r0 = *(0x14 + r1); // lwz @ 0x807D9D28
    return;
}