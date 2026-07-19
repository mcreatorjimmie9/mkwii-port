/* Function at 0x80881008, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80881008(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80881010
    *(0x14 + r1) = r0; // stw @ 0x80881014
    /* li r0, 0 */ // 0x80881018
    *(0xc + r1) = r31; // stw @ 0x8088101C
    r31 = r3;
    *(0x198 + r3) = r0; // stb @ 0x80881024
    r3 = r3 + 0x98; // 0x80881028
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80881030
    /* li r4, 0 */ // 0x80881034
    /* lfs f1, 0(r5) */ // 0x80881038
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r3 = r31;
    FUN_80876EDC(r5, r4, r3); // bl 0x80876EDC
    r0 = *(0x14 + r1); // lwz @ 0x80881048
    r31 = *(0xc + r1); // lwz @ 0x8088104C
    return;
}