/* Function at 0x8063DA24, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8063DA24(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8063DA34
    r31 = r31 + 0; // 0x8063DA38
    *(0x18 + r1) = r30; // stw @ 0x8063DA3C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8063DA44
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x8063DA4C
    r28 = r3;
    FUN_805F4098(); // bl 0x805F4098
    /* lfs f2, 0(r31) */ // 0x8063DA58
    /* lis r4, 0 */ // 0x8063DA5C
    /* lfs f1, 8(r31) */ // 0x8063DA60
    r4 = r4 + 0; // 0x8063DA64
    /* lfs f0, 0xc(r31) */ // 0x8063DA68
    /* li r3, 0x88 */ // 0x8063DA6C
    *(0x20 + r28) = r29; // stw @ 0x8063DA70
    *(0 + r28) = r4; // stw @ 0x8063DA74
    /* stfs f2, 0x30(r28) */ // 0x8063DA78
    /* stfs f2, 0x34(r28) */ // 0x8063DA7C
    /* stfs f1, 0x38(r28) */ // 0x8063DA80
    /* stfs f0, 0x2c(r28) */ // 0x8063DA84
    FUN_805E3430(); // bl 0x805E3430
}