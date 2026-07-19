/* Function at 0x808F5D80, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808F5D80(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808F5D8C
    r31 = r3;
    r0 = *(0x104 + r3); // lwz @ 0x808F5D94
    if (==) goto 0x0x808f5da8;
    r3 = r0;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x808F5DA8
    /* li r0, 0 */ // 0x808F5DAC
    /* lfs f0, 0(r3) */ // 0x808F5DB0
    /* li r3, -1 */ // 0x808F5DB4
    *(0x108 + r31) = r3; // stw @ 0x808F5DB8
    *(0x10c + r31) = r0; // stw @ 0x808F5DBC
    /* stfs f0, 0x110(r31) */ // 0x808F5DC0
    *(0x118 + r31) = r0; // stb @ 0x808F5DC4
    *(0x114 + r31) = r0; // stw @ 0x808F5DC8
    r31 = *(0xc + r1); // lwz @ 0x808F5DCC
    r0 = *(0x14 + r1); // lwz @ 0x808F5DD0
    return;
}