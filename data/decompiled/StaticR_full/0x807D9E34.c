/* Function at 0x807D9E34, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807D9E34(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807D9E3C
    *(0x14 + r1) = r0; // stw @ 0x807D9E40
    *(0xc + r1) = r31; // stw @ 0x807D9E44
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x807D9E4C
    r4 = *(9 + r4); // lbz @ 0x807D9E50
    FUN_805A47A8(); // bl 0x805A47A8
    r3 = *(4 + r3); // lwz @ 0x807D9E58
    /* lfs f2, 8(r3) */ // 0x807D9E5C
    /* lfs f1, 4(r3) */ // 0x807D9E60
    /* lfs f0, 0(r3) */ // 0x807D9E64
    /* stfs f0, 0(r31) */ // 0x807D9E68
    /* stfs f1, 4(r31) */ // 0x807D9E6C
    /* stfs f2, 8(r31) */ // 0x807D9E70
    r31 = *(0xc + r1); // lwz @ 0x807D9E74
    r0 = *(0x14 + r1); // lwz @ 0x807D9E78
    return;
}