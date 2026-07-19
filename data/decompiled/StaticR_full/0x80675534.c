/* Function at 0x80675534, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80675534(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r6, -1 */ // 0x8067553C
    *(0xc + r1) = r31; // stw @ 0x80675544
    *(8 + r1) = r30; // stw @ 0x80675548
    r30 = r3;
    r5 = r30 + 0x210; // 0x80675550
    r3 = *(0x24c + r3); // lwz @ 0x80675554
    FUN_8066A36C(r5); // bl 0x8066A36C
    r3 = r30 + 0x98; // 0x8067555C
    /* li r4, 0 */ // 0x80675560
    FUN_8069F4A0(r5, r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80675568
    /* li r4, 2 */ // 0x8067556C
    /* lfs f1, 0(r31) */ // 0x80675570
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r5 = *(0x204 + r30); // lwz @ 0x80675578
    /* li r4, 1 */ // 0x8067557C
    r3 = *(0x294 + r30); // lwz @ 0x80675580
    /* mulli r0, r5, 0x17c */ // 0x80675584
    *(0x208 + r30) = r5; // stw @ 0x80675588
    r3 = r3 + r0; // 0x8067558C
    r3 = r3 + 0x98; // 0x80675590
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80675598
    /* li r4, 2 */ // 0x8067559C
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806755A4
    r31 = *(0xc + r1); // lwz @ 0x806755A8
    r30 = *(8 + r1); // lwz @ 0x806755AC
    return;
}