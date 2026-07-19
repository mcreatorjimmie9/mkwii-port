/* Function at 0x807D9D38, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807D9D38(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807D9D40
    *(0x14 + r1) = r0; // stw @ 0x807D9D44
    *(0xc + r1) = r31; // stw @ 0x807D9D48
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x807D9D50
    r4 = *(0xc + r4); // lbz @ 0x807D9D54
    FUN_805A47A8(); // bl 0x805A47A8
    r3 = *(4 + r3); // lwz @ 0x807D9D5C
    /* lfs f2, 8(r3) */ // 0x807D9D60
    /* lfs f1, 4(r3) */ // 0x807D9D64
    /* lfs f0, 0(r3) */ // 0x807D9D68
    /* stfs f0, 0(r31) */ // 0x807D9D6C
    /* stfs f1, 4(r31) */ // 0x807D9D70
    /* stfs f2, 8(r31) */ // 0x807D9D74
    r31 = *(0xc + r1); // lwz @ 0x807D9D78
    r0 = *(0x14 + r1); // lwz @ 0x807D9D7C
    return;
}