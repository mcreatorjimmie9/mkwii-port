/* Function at 0x80860B80, size=56 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80860B80(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x80860B8C
    r31 = r3;
    /* lfs f0, 8(r3) */ // 0x80860B94
    /* stfs f0, 0x14(r1) */ // 0x80860B98
    /* lfs f0, 0x18(r3) */ // 0x80860B9C
    /* stfs f0, 0x18(r1) */ // 0x80860BA0
    /* lfs f0, 0x28(r3) */ // 0x80860BA4
    /* stfs f0, 0x1c(r1) */ // 0x80860BAC
    r4 = r3;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}