/* Function at 0x805F06C4, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F06C4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805F06D8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805F06E0
    r29 = r3;
    r6 = *(0x18 + r3); // lwz @ 0x805F06E8
    /* lfs f0, 0x2c(r3) */ // 0x805F06EC
    /* stfs f0, 0x14(r6) */ // 0x805F06F0
    /* lfs f0, 0x30(r3) */ // 0x805F06F4
    /* stfs f0, 0x18(r6) */ // 0x805F06F8
    /* lfs f0, 0x34(r3) */ // 0x805F06FC
    r3 = r6;
    /* stfs f0, 0x1c(r6) */ // 0x805F0704
    FUN_805E3430(r3); // bl 0x805E3430
}