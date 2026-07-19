/* Function at 0x806888E0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806888E0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806888EC
    r31 = r3;
    FUN_808CB2B4(); // bl 0x808CB2B4
    /* lis r3, 0 */ // 0x806888F8
    /* li r0, 0 */ // 0x806888FC
    r3 = r3 + 0; // 0x80688900
    *(0 + r31) = r3; // stw @ 0x80688904
    r3 = r31;
    *(0x340 + r31) = r0; // stw @ 0x8068890C
    r31 = *(0xc + r1); // lwz @ 0x80688910
    r0 = *(0x14 + r1); // lwz @ 0x80688914
    return;
}