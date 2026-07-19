/* Function at 0x808B5118, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808B5118(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 1 */ // 0x808B5124
    *(0xc + r1) = r31; // stw @ 0x808B5128
    r31 = r3;
    *(0x6bc + r3) = r0; // stw @ 0x808B5130
    *(0x6c0 + r3) = r0; // stw @ 0x808B5134
    r12 = *(0 + r3); // lwz @ 0x808B5138
    r12 = *(0x70 + r12); // lwz @ 0x808B513C
    /* mtctr r12 */ // 0x808B5140
    /* bctrl  */ // 0x808B5144
    /* li r4, 2 */ // 0x808B5148
    FUN_8066A380(r4); // bl 0x8066A380
    r3 = r31;
    FUN_808B2D44(r4, r3); // bl 0x808B2D44
    r0 = *(0x14 + r1); // lwz @ 0x808B5158
    r31 = *(0xc + r1); // lwz @ 0x808B515C
    return;
}