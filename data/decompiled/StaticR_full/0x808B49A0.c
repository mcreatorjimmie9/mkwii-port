/* Function at 0x808B49A0, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_808B49A0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x808B49B0
    *(0x14 + r1) = r29; // stw @ 0x808B49B8
    /* li r29, 0 */ // 0x808B49BC
    *(0x10 + r1) = r28; // stw @ 0x808B49C0
    r28 = r3;
    r30 = r28;
    /* b 0x808b49f8 */ // 0x808B49CC
    r3 = *(0x2c0 + r30); // lwz @ 0x808B49D0
    r5 = r31;
    /* li r4, 1 */ // 0x808B49D8
    r12 = *(0 + r3); // lwz @ 0x808B49DC
    r12 = *(0xc + r12); // lwz @ 0x808B49E0
    /* mtctr r12 */ // 0x808B49E4
    /* bctrl  */ // 0x808B49E8
    r31 = r31 + 7; // 0x808B49EC
    r30 = r30 + 4; // 0x808B49F0
    r29 = r29 + 1; // 0x808B49F4
    r0 = *(0x310 + r28); // lwz @ 0x808B49F8
    if (<) goto 0x0x808b49d0;
    r0 = *(0x20 + r28); // lwz @ 0x808B4A04
    *(0x424 + r28) = r0; // stw @ 0x808B4A08
    r31 = *(0x1c + r1); // lwz @ 0x808B4A0C
    r30 = *(0x18 + r1); // lwz @ 0x808B4A10
    r29 = *(0x14 + r1); // lwz @ 0x808B4A14
    r28 = *(0x10 + r1); // lwz @ 0x808B4A18
    r0 = *(0x24 + r1); // lwz @ 0x808B4A1C
    return;
}