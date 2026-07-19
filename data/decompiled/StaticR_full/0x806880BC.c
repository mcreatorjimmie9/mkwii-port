/* Function at 0x806880BC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806880BC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806880C8
    r31 = r3;
    FUN_808CB2B4(); // bl 0x808CB2B4
    /* lis r3, 0 */ // 0x806880D4
    /* li r0, 0 */ // 0x806880D8
    r3 = r3 + 0; // 0x806880DC
    *(0 + r31) = r3; // stw @ 0x806880E0
    r3 = r31;
    *(0x340 + r31) = r0; // stw @ 0x806880E8
    r31 = *(0xc + r1); // lwz @ 0x806880EC
    r0 = *(0x14 + r1); // lwz @ 0x806880F0
    return;
}