/* Function at 0x80687FAC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80687FAC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80687FB8
    r31 = r3;
    FUN_808CB2B4(); // bl 0x808CB2B4
    /* lis r3, 0 */ // 0x80687FC4
    /* li r0, 0 */ // 0x80687FC8
    r3 = r3 + 0; // 0x80687FCC
    *(0 + r31) = r3; // stw @ 0x80687FD0
    r3 = r31;
    *(0x340 + r31) = r0; // stw @ 0x80687FD8
    r31 = *(0xc + r1); // lwz @ 0x80687FDC
    r0 = *(0x14 + r1); // lwz @ 0x80687FE0
    return;
}