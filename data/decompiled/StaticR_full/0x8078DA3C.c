/* Function at 0x8078DA3C, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078DA3C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x8078DA44
    *(0x14 + r1) = r0; // stw @ 0x8078DA48
    *(0xc + r1) = r31; // stw @ 0x8078DA4C
    r31 = r3;
    r5 = r31 + 0x14; // 0x8078DA54
    /* lfs f0, 0(r4) */ // 0x8078DA58
    /* stfs f0, 0x14(r3) */ // 0x8078DA5C
    /* lfs f0, 4(r4) */ // 0x8078DA60
    /* stfs f0, 0x18(r3) */ // 0x8078DA64
    /* lfs f0, 8(r4) */ // 0x8078DA68
    /* stfs f0, 0x1c(r3) */ // 0x8078DA6C
    /* lfs f0, 0xc(r4) */ // 0x8078DA70
    /* stfs f0, 0x20(r3) */ // 0x8078DA74
    /* lfs f0, 0x10(r4) */ // 0x8078DA78
    /* stfs f0, 0x24(r3) */ // 0x8078DA7C
    r0 = *(0x14 + r4); // lwz @ 0x8078DA80
    *(0x28 + r3) = r0; // stw @ 0x8078DA84
    /* lfs f0, 0x18(r4) */ // 0x8078DA88
    /* stfs f0, 0x2c(r3) */ // 0x8078DA8C
    r0 = *(0x1c + r4); // lwz @ 0x8078DA90
    *(0x30 + r3) = r0; // stw @ 0x8078DA94
    /* lfs f0, 0x20(r4) */ // 0x8078DA98
    /* stfs f0, 0x34(r3) */ // 0x8078DA9C
    /* lfs f0, 0x24(r4) */ // 0x8078DAA0
    /* li r4, 0 */ // 0x8078DAA4
    /* stfs f0, 0x38(r3) */ // 0x8078DAA8
    r3 = *(0 + r6); // lwz @ 0x8078DAAC
    r3 = r3 + 0x84c; // 0x8078DAB0
    FUN_805E3430(r4, r3); // bl 0x805E3430
}