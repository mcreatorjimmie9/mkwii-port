/* Function at 0x8069DA64, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8069DA64(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8069DA74
    r30 = r3;
    FUN_805AAFA0(); // bl 0x805AAFA0
    /* li r0, -1 */ // 0x8069DA80
    *(0x340 + r30) = r0; // stw @ 0x8069DA84
    /* lis r31, 0 */ // 0x8069DA88
    r3 = *(0 + r31); // lwz @ 0x8069DA8C
    r3 = r3 + 0x34; // 0x8069DA90
    FUN_8067FD2C(r3); // bl 0x8067FD2C
    r3 = *(0 + r31); // lwz @ 0x8069DA98
    /* li r4, 0 */ // 0x8069DA9C
    r3 = r3 + 0x34; // 0x8069DAA0
    FUN_8067F750(r3, r4, r3); // bl 0x8067F750
    /* li r0, 0 */ // 0x8069DAA8
    *(0x33c + r30) = r0; // stb @ 0x8069DAAC
    r3 = *(0 + r31); // lwz @ 0x8069DAB0
    r3 = *(0x98 + r3); // lwz @ 0x8069DAB4
    FUN_806614E8(); // bl 0x806614E8
    r4 = *(0x348 + r30); // lbz @ 0x8069DABC
    r3 = r30 + 0x1c8; // 0x8069DAC0
    r5 = *(0x34c + r30); // lwz @ 0x8069DAC4
    FUN_8069D5D4(r3); // bl 0x8069D5D4
    r0 = *(0x14 + r1); // lwz @ 0x8069DACC
    r31 = *(0xc + r1); // lwz @ 0x8069DAD0
    r30 = *(8 + r1); // lwz @ 0x8069DAD4
    return;
}