/* Function at 0x806C9050, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806C9050(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0x68 */ // 0x806C905C
    *(0xc + r1) = r31; // stw @ 0x806C9060
    r31 = r3;
    *(0x1134 + r3) = r0; // stw @ 0x806C9068
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x806C9078
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x806C9080
    r31 = *(0xc + r1); // lwz @ 0x806C9084
    return;
}