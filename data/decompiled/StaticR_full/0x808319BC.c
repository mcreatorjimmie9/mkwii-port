/* Function at 0x808319BC, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808319BC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808319C8
    r31 = r3;
    FUN_80828950(); // bl 0x80828950
    /* lis r3, 0 */ // 0x808319D4
    /* lis r4, 0 */ // 0x808319D8
    /* lfs f0, 0(r3) */ // 0x808319DC
    r4 = r4 + 0; // 0x808319E0
    *(0 + r31) = r4; // stw @ 0x808319E4
    r3 = r31;
    /* stfs f0, 0x18c(r31) */ // 0x808319EC
    /* stfs f0, 0x190(r31) */ // 0x808319F0
    /* stfs f0, 0x194(r31) */ // 0x808319F4
    r31 = *(0xc + r1); // lwz @ 0x808319F8
    r0 = *(0x14 + r1); // lwz @ 0x808319FC
    return;
}