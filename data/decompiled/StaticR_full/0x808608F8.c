/* Function at 0x808608F8, size=56 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808608F8(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x80860904
    r31 = r3;
    /* lfs f0, 4(r3) */ // 0x8086090C
    /* stfs f0, 0x14(r1) */ // 0x80860910
    /* lfs f0, 0x14(r3) */ // 0x80860914
    /* stfs f0, 0x18(r1) */ // 0x80860918
    /* lfs f0, 0x24(r3) */ // 0x8086091C
    /* stfs f0, 0x1c(r1) */ // 0x80860924
    r4 = r3;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}