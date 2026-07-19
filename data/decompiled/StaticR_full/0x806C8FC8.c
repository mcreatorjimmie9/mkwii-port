/* Function at 0x806C8FC8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806C8FC8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0xce */ // 0x806C8FD4
    *(0xc + r1) = r31; // stw @ 0x806C8FD8
    r31 = r3;
    *(0x1134 + r3) = r0; // stw @ 0x806C8FE0
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x806C8FF0
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x806C8FF8
    r31 = *(0xc + r1); // lwz @ 0x806C8FFC
    return;
}