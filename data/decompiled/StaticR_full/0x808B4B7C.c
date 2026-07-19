/* Function at 0x808B4B7C, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808B4B7C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x808B4B8C
    *(0x18 + r1) = r30; // stw @ 0x808B4B90
    /* li r30, 0 */ // 0x808B4B94
    *(0x14 + r1) = r29; // stw @ 0x808B4B98
    r29 = r3;
    /* b 0x808b4bf0 */ // 0x808B4BA0
    r0 = *(0x10 + r29); // lwz @ 0x808B4BA4
    if (!=) goto 0x0x808b4bc4;
    r0 = *(0x3e0 + r29); // lwz @ 0x808B4BB0
    r4 = *(0x3ec + r29); // lwz @ 0x808B4BB4
    r3 = r0 + r31; // 0x808B4BB8
    FUN_806CB65C(); // bl 0x806CB65C
    /* b 0x808b4be8 */ // 0x808B4BC0
    r12 = *(0 + r29); // lwz @ 0x808B4BC4
    r3 = r29;
    r12 = *(0x10 + r12); // lwz @ 0x808B4BCC
    /* mtctr r12 */ // 0x808B4BD0
    /* bctrl  */ // 0x808B4BD4
    r0 = *(0x3e0 + r29); // lwz @ 0x808B4BD8
    r4 = r3;
    r3 = r0 + r31; // 0x808B4BE0
    FUN_806CB65C(r4); // bl 0x806CB65C
    r31 = r31 + 0x180; // 0x808B4BE8
    r30 = r30 + 1; // 0x808B4BEC
    r0 = *(0x428 + r29); // lwz @ 0x808B4BF0
    if (<) goto 0x0x808b4ba4;
    r0 = *(0x24 + r1); // lwz @ 0x808B4BFC
    r31 = *(0x1c + r1); // lwz @ 0x808B4C00
    r30 = *(0x18 + r1); // lwz @ 0x808B4C04
    r29 = *(0x14 + r1); // lwz @ 0x808B4C08
    return;
}