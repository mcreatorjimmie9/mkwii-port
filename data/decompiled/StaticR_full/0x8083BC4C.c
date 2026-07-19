/* Function at 0x8083BC4C, size=64 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8083BC4C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x2c + r1) = r31; // stw @ 0x8083BC5C
    r31 = r4;
    *(0x28 + r1) = r30; // stw @ 0x8083BC64
    r30 = r3;
    /* lfs f0, 0(r4) */ // 0x8083BC6C
    /* stfs f0, 0x1a4(r3) */ // 0x8083BC70
    /* lfs f0, 8(r4) */ // 0x8083BC74
    r4 = r30 + 0xc8; // 0x8083BC78
    /* stfs f0, 0x1ac(r3) */ // 0x8083BC7C
    r3 = r31;
    FUN_808622D8(r4, r3); // bl 0x808622D8
    /* lis r4, 0 */ // 0x8083BC88
}