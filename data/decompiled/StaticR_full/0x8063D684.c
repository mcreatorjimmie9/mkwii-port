/* Function at 0x8063D684, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8063D684(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8063D694
    r31 = r31 + 0; // 0x8063D698
    *(0x18 + r1) = r30; // stw @ 0x8063D69C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8063D6A4
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x8063D6AC
    r28 = r3;
    FUN_805F4098(); // bl 0x805F4098
    /* lfs f2, 0(r31) */ // 0x8063D6B8
    /* lis r4, 0 */ // 0x8063D6BC
    /* lfs f1, 8(r31) */ // 0x8063D6C0
    r4 = r4 + 0; // 0x8063D6C4
    /* lfs f0, 0xc(r31) */ // 0x8063D6C8
    /* li r3, 0x88 */ // 0x8063D6CC
    *(0x20 + r28) = r29; // stw @ 0x8063D6D0
    *(0 + r28) = r4; // stw @ 0x8063D6D4
    /* stfs f2, 0x30(r28) */ // 0x8063D6D8
    /* stfs f2, 0x34(r28) */ // 0x8063D6DC
    /* stfs f1, 0x38(r28) */ // 0x8063D6E0
    /* stfs f0, 0x2c(r28) */ // 0x8063D6E4
    FUN_805E3430(); // bl 0x805E3430
}