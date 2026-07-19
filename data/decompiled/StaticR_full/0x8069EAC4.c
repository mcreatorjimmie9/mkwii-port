/* Function at 0x8069EAC4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8069EAC4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8069EAD0
    /* lis r31, 0 */ // 0x8069EAD4
    r3 = *(0 + r31); // lwz @ 0x8069EAD8
    r3 = r3 + 0x34; // 0x8069EADC
    FUN_8067FD2C(r3); // bl 0x8067FD2C
    r3 = *(0 + r31); // lwz @ 0x8069EAE4
    r3 = *(0 + r3); // lwz @ 0x8069EAE8
    r3 = *(0x400 + r3); // lwz @ 0x8069EAEC
    FUN_806708F0(r3); // bl 0x806708F0
    r0 = *(0x14 + r1); // lwz @ 0x8069EAF4
    r31 = *(0xc + r1); // lwz @ 0x8069EAF8
    return;
}