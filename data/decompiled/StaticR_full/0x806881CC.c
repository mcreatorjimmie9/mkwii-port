/* Function at 0x806881CC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806881CC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806881D8
    r31 = r3;
    FUN_808CB2B4(); // bl 0x808CB2B4
    /* lis r3, 0 */ // 0x806881E4
    /* li r0, 0x457 */ // 0x806881E8
    r3 = r3 + 0; // 0x806881EC
    *(0 + r31) = r3; // stw @ 0x806881F0
    r3 = r31;
    *(0x340 + r31) = r0; // stw @ 0x806881F8
    r31 = *(0xc + r1); // lwz @ 0x806881FC
    r0 = *(0x14 + r1); // lwz @ 0x80688200
    return;
}