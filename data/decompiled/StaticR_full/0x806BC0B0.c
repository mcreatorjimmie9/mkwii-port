/* Function at 0x806BC0B0, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806BC0B0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 3 */ // 0x806BC0B8
    *(0xc + r1) = r31; // stw @ 0x806BC0C0
    *(8 + r1) = r30; // stw @ 0x806BC0C4
    r30 = r3;
    r3 = r3 + 0x98; // 0x806BC0CC
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806BC0D4
    /* li r4, 0 */ // 0x806BC0D8
    /* lfs f1, 0(r31) */ // 0x806BC0DC
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806BC0E4
    /* li r4, 4 */ // 0x806BC0E8
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806BC0F0
    /* li r4, 0 */ // 0x806BC0F4
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806BC0FC
    r31 = *(0xc + r1); // lwz @ 0x806BC100
    r30 = *(8 + r1); // lwz @ 0x806BC104
    return;
}