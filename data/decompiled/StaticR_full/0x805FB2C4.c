/* Function at 0x805FB2C4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805FB2C4(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    /* li r5, 0 */ // 0x805FB2D8
    *(8 + r1) = r30; // stw @ 0x805FB2DC
    r30 = r3;
    FUN_806200C4(r5); // bl 0x806200C4
    /* lis r3, 0 */ // 0x805FB2E8
    /* li r0, 0 */ // 0x805FB2EC
    r3 = r3 + 0; // 0x805FB2F0
    *(0xc + r30) = r3; // stw @ 0x805FB2F4
    r3 = r30;
    *(0x94 + r30) = r31; // stw @ 0x805FB2FC
    *(0x98 + r30) = r0; // stb @ 0x805FB300
    r31 = *(0xc + r1); // lwz @ 0x805FB304
    r30 = *(8 + r1); // lwz @ 0x805FB308
    r0 = *(0x14 + r1); // lwz @ 0x805FB30C
    return;
}