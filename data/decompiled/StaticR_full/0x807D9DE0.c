/* Function at 0x807D9DE0, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807D9DE0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807D9DE8
    *(0x14 + r1) = r0; // stw @ 0x807D9DEC
    *(0xc + r1) = r31; // stw @ 0x807D9DF0
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x807D9DF8
    r4 = *(0xa + r4); // lbz @ 0x807D9DFC
    FUN_805A47A8(); // bl 0x805A47A8
    r3 = *(4 + r3); // lwz @ 0x807D9E04
    /* lfs f2, 8(r3) */ // 0x807D9E08
    /* lfs f1, 4(r3) */ // 0x807D9E0C
    /* lfs f0, 0(r3) */ // 0x807D9E10
    /* stfs f0, 0(r31) */ // 0x807D9E14
    /* stfs f1, 4(r31) */ // 0x807D9E18
    /* stfs f2, 8(r31) */ // 0x807D9E1C
    r31 = *(0xc + r1); // lwz @ 0x807D9E20
    r0 = *(0x14 + r1); // lwz @ 0x807D9E24
    return;
}