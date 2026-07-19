/* Function at 0x808B4C20, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808B4C20(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x808B4C30
    *(0x18 + r1) = r30; // stw @ 0x808B4C34
    /* li r30, 0 */ // 0x808B4C38
    *(0x14 + r1) = r29; // stw @ 0x808B4C3C
    r29 = r3;
    /* b 0x808b4c94 */ // 0x808B4C44
    r0 = *(0x10 + r29); // lwz @ 0x808B4C48
    if (!=) goto 0x0x808b4c7c;
    r12 = *(0 + r29); // lwz @ 0x808B4C54
    r3 = r29;
    r12 = *(0x10 + r12); // lwz @ 0x808B4C5C
    /* mtctr r12 */ // 0x808B4C60
    /* bctrl  */ // 0x808B4C64
    r0 = *(0x3e0 + r29); // lwz @ 0x808B4C68
    r4 = r3;
    r3 = r0 + r31; // 0x808B4C70
    FUN_806CB65C(r4); // bl 0x806CB65C
    /* b 0x808b4c8c */ // 0x808B4C78
    r0 = *(0x3e0 + r29); // lwz @ 0x808B4C7C
    r4 = *(0x3ec + r29); // lwz @ 0x808B4C80
    r3 = r0 + r31; // 0x808B4C84
    FUN_806CB65C(); // bl 0x806CB65C
    r31 = r31 + 0x180; // 0x808B4C8C
    r30 = r30 + 1; // 0x808B4C90
    r0 = *(0x428 + r29); // lwz @ 0x808B4C94
    if (<) goto 0x0x808b4c48;
    r0 = *(0x24 + r1); // lwz @ 0x808B4CA0
    r31 = *(0x1c + r1); // lwz @ 0x808B4CA4
    r30 = *(0x18 + r1); // lwz @ 0x808B4CA8
    r29 = *(0x14 + r1); // lwz @ 0x808B4CAC
    return;
}