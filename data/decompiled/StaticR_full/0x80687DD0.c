/* Function at 0x80687DD0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80687DD0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80687DDC
    r31 = r3;
    FUN_808CB2B4(); // bl 0x808CB2B4
    /* lis r3, 0 */ // 0x80687DE8
    /* li r0, 0 */ // 0x80687DEC
    r3 = r3 + 0; // 0x80687DF0
    *(0 + r31) = r3; // stw @ 0x80687DF4
    r3 = r31;
    *(0x340 + r31) = r0; // stw @ 0x80687DFC
    r31 = *(0xc + r1); // lwz @ 0x80687E00
    r0 = *(0x14 + r1); // lwz @ 0x80687E04
    return;
}