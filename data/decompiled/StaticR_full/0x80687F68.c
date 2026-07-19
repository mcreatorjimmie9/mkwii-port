/* Function at 0x80687F68, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80687F68(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80687F74
    r31 = r3;
    FUN_808CB2B4(); // bl 0x808CB2B4
    /* lis r3, 0 */ // 0x80687F80
    /* li r0, 0 */ // 0x80687F84
    r3 = r3 + 0; // 0x80687F88
    *(0 + r31) = r3; // stw @ 0x80687F8C
    r3 = r31;
    *(0x340 + r31) = r0; // stw @ 0x80687F94
    r31 = *(0xc + r1); // lwz @ 0x80687F98
    r0 = *(0x14 + r1); // lwz @ 0x80687F9C
    return;
}