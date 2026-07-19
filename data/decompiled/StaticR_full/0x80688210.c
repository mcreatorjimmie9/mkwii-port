/* Function at 0x80688210, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80688210(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8068821C
    r31 = r3;
    FUN_808CB2B4(); // bl 0x808CB2B4
    /* lis r3, 0 */ // 0x80688228
    /* li r0, 0x451 */ // 0x8068822C
    r3 = r3 + 0; // 0x80688230
    *(0 + r31) = r3; // stw @ 0x80688234
    r3 = r31;
    *(0x340 + r31) = r0; // stw @ 0x8068823C
    r31 = *(0xc + r1); // lwz @ 0x80688240
    r0 = *(0x14 + r1); // lwz @ 0x80688244
    return;
}