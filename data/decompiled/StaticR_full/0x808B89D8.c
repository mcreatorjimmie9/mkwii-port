/* Function at 0x808B89D8, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808B89D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808B89E0
    /* slwi r0, r3, 2 */ // 0x808B89E8
    *(0xc + r1) = r31; // stw @ 0x808B89EC
    *(8 + r1) = r30; // stw @ 0x808B89F0
    r3 = *(0 + r4); // lwz @ 0x808B89F4
    r3 = *(0 + r3); // lwz @ 0x808B89F8
    r3 = r3 + r0; // 0x808B89FC
    r30 = *(8 + r3); // lwz @ 0x808B8A00
    if (!=) goto 0x0x808b8a14;
    /* li r30, 0 */ // 0x808B8A0C
    /* b 0x808b8a68 */ // 0x808B8A10
    /* lis r31, 0 */ // 0x808B8A14
    r31 = r31 + 0; // 0x808B8A18
    if (==) goto 0x0x808b8a64;
    r12 = *(0 + r30); // lwz @ 0x808B8A20
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B8A28
    /* mtctr r12 */ // 0x808B8A2C
    /* bctrl  */ // 0x808B8A30
    /* b 0x808b8a4c */ // 0x808B8A34
    if (!=) goto 0x0x808b8a48;
    /* li r0, 1 */ // 0x808B8A40
    /* b 0x808b8a58 */ // 0x808B8A44
    r3 = *(0 + r3); // lwz @ 0x808B8A48
    if (!=) goto 0x0x808b8a38;
    /* li r0, 0 */ // 0x808B8A54
    if (==) goto 0x0x808b8a64;
    /* b 0x808b8a68 */ // 0x808B8A60
    /* li r30, 0 */ // 0x808B8A64
    if (!=) goto 0x0x808b8a78;
    /* li r30, 0 */ // 0x808B8A70
    /* b 0x808b8acc */ // 0x808B8A74
    /* lis r31, 0 */ // 0x808B8A78
    r31 = r31 + 0; // 0x808B8A7C
    if (==) goto 0x0x808b8ac8;
    r12 = *(0 + r30); // lwz @ 0x808B8A84
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B8A8C
    /* mtctr r12 */ // 0x808B8A90
    /* bctrl  */ // 0x808B8A94
    /* b 0x808b8ab0 */ // 0x808B8A98
    if (!=) goto 0x0x808b8aac;
    /* li r0, 1 */ // 0x808B8AA4
    /* b 0x808b8abc */ // 0x808B8AA8
    r3 = *(0 + r3); // lwz @ 0x808B8AAC
    if (!=) goto 0x0x808b8a9c;
    /* li r0, 0 */ // 0x808B8AB8
    if (==) goto 0x0x808b8ac8;
    /* b 0x808b8acc */ // 0x808B8AC4
    /* li r30, 0 */ // 0x808B8AC8
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808B8AD0
    r30 = *(8 + r1); // lwz @ 0x808B8AD4
    r0 = *(0x14 + r1); // lwz @ 0x808B8AD8
    return;
}