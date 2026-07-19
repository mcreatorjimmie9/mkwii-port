/* Function at 0x807442BC, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807442BC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807442D0
    r30 = r3;
    r3 = r3 + 0x24; // 0x807442D8
    FUN_807438BC(r3); // bl 0x807438BC
    /* lfs f0, 0x18(r30) */ // 0x807442E0
    /* stfs f0, 0xc(r31) */ // 0x807442E4
    /* lfs f0, 0x1c(r30) */ // 0x807442E8
    /* stfs f0, 0x1c(r31) */ // 0x807442EC
    /* lfs f0, 0x20(r30) */ // 0x807442F0
    /* stfs f0, 0x2c(r31) */ // 0x807442F4
    r31 = *(0xc + r1); // lwz @ 0x807442F8
    r30 = *(8 + r1); // lwz @ 0x807442FC
    r0 = *(0x14 + r1); // lwz @ 0x80744300
    return;
}