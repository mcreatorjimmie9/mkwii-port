/* Function at 0x8069EE90, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8069EE90(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8069EEA0
    *(8 + r1) = r30; // stw @ 0x8069EEA4
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x8069EEAC
    r3 = r3 + 0x34; // 0x8069EEB0
    FUN_8067FD2C(r3); // bl 0x8067FD2C
    r3 = *(0 + r31); // lwz @ 0x8069EEB8
    /* li r4, 0 */ // 0x8069EEBC
    r3 = r3 + 0x34; // 0x8069EEC0
    FUN_8067F750(r3, r4, r3); // bl 0x8067F750
    /* li r0, 0 */ // 0x8069EEC8
    *(0x54 + r30) = r0; // stb @ 0x8069EECC
    r31 = *(0xc + r1); // lwz @ 0x8069EED0
    r30 = *(8 + r1); // lwz @ 0x8069EED4
    r0 = *(0x14 + r1); // lwz @ 0x8069EED8
    return;
}