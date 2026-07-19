/* Function at 0x808609D0, size=56 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808609D0(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x808609DC
    r31 = r3;
    /* lfs f0, 8(r3) */ // 0x808609E4
    /* stfs f0, 0x14(r1) */ // 0x808609E8
    /* lfs f0, 0x18(r3) */ // 0x808609EC
    /* stfs f0, 0x18(r1) */ // 0x808609F0
    /* lfs f0, 0x28(r3) */ // 0x808609F4
    /* stfs f0, 0x1c(r1) */ // 0x808609FC
    r4 = r3;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}