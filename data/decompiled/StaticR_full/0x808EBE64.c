/* Function at 0x808EBE64, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808EBE64(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 1 */ // 0x808EBE70
    *(0xc + r1) = r31; // stw @ 0x808EBE74
    r31 = r3;
    *(0x6bc + r3) = r0; // stw @ 0x808EBE7C
    *(0x6c0 + r3) = r0; // stw @ 0x808EBE80
    r12 = *(0 + r3); // lwz @ 0x808EBE84
    r12 = *(0x70 + r12); // lwz @ 0x808EBE88
    /* mtctr r12 */ // 0x808EBE8C
    /* bctrl  */ // 0x808EBE90
    /* li r4, 2 */ // 0x808EBE94
    FUN_8066A380(r4); // bl 0x8066A380
    r3 = r31;
    FUN_808B2D44(r4, r3); // bl 0x808B2D44
    r0 = *(0x14 + r1); // lwz @ 0x808EBEA4
    r31 = *(0xc + r1); // lwz @ 0x808EBEA8
    return;
}