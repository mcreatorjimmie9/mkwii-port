/* Function at 0x80687E14, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80687E14(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80687E20
    r31 = r3;
    FUN_808CB2B4(); // bl 0x808CB2B4
    /* lis r3, 0 */ // 0x80687E2C
    /* li r0, 0 */ // 0x80687E30
    r3 = r3 + 0; // 0x80687E34
    *(0 + r31) = r3; // stw @ 0x80687E38
    r3 = r31;
    *(0x340 + r31) = r0; // stw @ 0x80687E40
    r31 = *(0xc + r1); // lwz @ 0x80687E44
    r0 = *(0x14 + r1); // lwz @ 0x80687E48
    return;
}