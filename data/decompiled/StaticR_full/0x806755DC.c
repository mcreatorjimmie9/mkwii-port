/* Function at 0x806755DC, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806755DC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806755F4
    r29 = r3;
    r0 = *(0x204 + r3); // lwz @ 0x806755FC
    if (==) goto 0x0x80675658;
    /* mulli r0, r0, 0x17c */ // 0x80675608
    r3 = *(0x294 + r3); // lwz @ 0x8067560C
    /* li r4, 4 */ // 0x80675610
    r3 = r3 + r0; // 0x80675614
    r3 = r3 + 0x98; // 0x80675618
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80675620
    /* li r4, 0 */ // 0x80675624
    /* lfs f1, 0(r31) */ // 0x80675628
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    /* mulli r0, r30, 0x17c */ // 0x80675630
    r3 = *(0x294 + r29); // lwz @ 0x80675634
    *(0x204 + r29) = r30; // stw @ 0x80675638
    /* li r4, 4 */ // 0x8067563C
    r3 = r3 + r0; // 0x80675640
    r3 = r3 + 0x98; // 0x80675644
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8067564C
    /* li r4, 2 */ // 0x80675650
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r0 = *(0x24 + r1); // lwz @ 0x80675658
    r31 = *(0x1c + r1); // lwz @ 0x8067565C
    r30 = *(0x18 + r1); // lwz @ 0x80675660
    r29 = *(0x14 + r1); // lwz @ 0x80675664
    return;
}