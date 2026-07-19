/* Function at 0x806528DC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806528DC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x806528E8
    *(0xc + r1) = r31; // stw @ 0x806528EC
    r31 = r3;
    *(0xc6c + r3) = r0; // stw @ 0x806528F4
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x80652904
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x8065290C
    r31 = *(0xc + r1); // lwz @ 0x80652910
    return;
}