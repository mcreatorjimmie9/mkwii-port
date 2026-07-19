/* Function at 0x806200C4, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806200C4(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x806200D8
    r30 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r3, 0 */ // 0x806200E4
    /* li r0, 0 */ // 0x806200E8
    /* lfs f0, 0(r3) */ // 0x806200EC
    /* lis r3, 0 */ // 0x806200F0
    r3 = r3 + 0; // 0x806200F4
    *(0xc + r30) = r3; // stw @ 0x806200F8
    r3 = r30 + 0x1c; // 0x806200FC
    *(0x7c + r30) = r0; // stw @ 0x80620100
    *(0x80 + r30) = r31; // stw @ 0x80620104
    *(0x84 + r30) = r0; // stw @ 0x80620108
    *(0x88 + r30) = r0; // stw @ 0x8062010C
    /* stfs f0, 0x10(r30) */ // 0x80620110
    /* stfs f0, 0x14(r30) */ // 0x80620114
    /* stfs f0, 0x18(r30) */ // 0x80620118
    FUN_805E3430(); // bl 0x805E3430
}