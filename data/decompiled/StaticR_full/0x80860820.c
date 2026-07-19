/* Function at 0x80860820, size=56 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80860820(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x8086082C
    r31 = r3;
    /* lfs f0, 0(r3) */ // 0x80860834
    /* stfs f0, 0x14(r1) */ // 0x80860838
    /* lfs f0, 0x10(r3) */ // 0x8086083C
    /* stfs f0, 0x18(r1) */ // 0x80860840
    /* lfs f0, 0x20(r3) */ // 0x80860844
    /* stfs f0, 0x1c(r1) */ // 0x8086084C
    r4 = r3;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}