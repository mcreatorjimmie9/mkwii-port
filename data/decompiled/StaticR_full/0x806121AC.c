/* Function at 0x806121AC, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806121AC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806121B8
    r31 = r3;
    FUN_806118C0(); // bl 0x806118C0
    r3 = r31;
    FUN_8061E6A4(r3); // bl 0x8061E6A4
    r3 = r31;
    FUN_8061E2D8(r3, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x806121D4
    /* clrlwi r0, r3, 0x18 */ // 0x806121D8
    r3 = *(0 + r4); // lwz @ 0x806121DC
    /* mulli r0, r0, 0x248 */ // 0x806121E0
    /* li r4, 0 */ // 0x806121E4
    r3 = *(0x14 + r3); // lwz @ 0x806121E8
    r3 = r3 + r0; // 0x806121EC
    FUN_808238DC(r4); // bl 0x808238DC
    r0 = *(0x14 + r1); // lwz @ 0x806121F4
    r31 = *(0xc + r1); // lwz @ 0x806121F8
    return;
}