/* Function at 0x8083F490, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8083F490(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x8083F498
    /* lis r5, 0 */ // 0x8083F49C
    /* lfs f2, 0(r6) */ // 0x8083F4A0
    *(0x24 + r1) = r0; // stw @ 0x8083F4A4
    /* fmuls f1, f1, f2 */ // 0x8083F4A8
    /* lfs f0, 0(r5) */ // 0x8083F4AC
    *(0x1c + r1) = r31; // stw @ 0x8083F4B0
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x8083F4B8
    r30 = r3;
    /* fmuls f1, f0, f1 */ // 0x8083F4C0
    r4 = r30 + 0xc; // 0x8083F4C8
    FUN_805E3430(r3, r4); // bl 0x805E3430
}