/* Function at 0x80860AA8, size=56 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80860AA8(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x80860AB4
    r31 = r3;
    /* lfs f0, 4(r3) */ // 0x80860ABC
    /* stfs f0, 0x14(r1) */ // 0x80860AC0
    /* lfs f0, 0x14(r3) */ // 0x80860AC4
    /* stfs f0, 0x18(r1) */ // 0x80860AC8
    /* lfs f0, 0x24(r3) */ // 0x80860ACC
    /* stfs f0, 0x1c(r1) */ // 0x80860AD4
    r4 = r3;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}