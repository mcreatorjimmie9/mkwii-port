/* Function at 0x808B5A74, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808B5A74(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808B5A7C
    /* slwi r0, r3, 2 */ // 0x808B5A84
    *(0xc + r1) = r31; // stw @ 0x808B5A88
    *(8 + r1) = r30; // stw @ 0x808B5A8C
    r3 = *(0 + r4); // lwz @ 0x808B5A90
    r3 = *(0 + r3); // lwz @ 0x808B5A94
    r3 = r3 + r0; // 0x808B5A98
    r30 = *(8 + r3); // lwz @ 0x808B5A9C
    if (!=) goto 0x0x808b5ab0;
    /* li r30, 0 */ // 0x808B5AA8
    /* b 0x808b5b04 */ // 0x808B5AAC
    /* lis r31, 0 */ // 0x808B5AB0
    r31 = r31 + 0; // 0x808B5AB4
    if (==) goto 0x0x808b5b00;
    r12 = *(0 + r30); // lwz @ 0x808B5ABC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B5AC4
    /* mtctr r12 */ // 0x808B5AC8
    /* bctrl  */ // 0x808B5ACC
    /* b 0x808b5ae8 */ // 0x808B5AD0
    if (!=) goto 0x0x808b5ae4;
    /* li r0, 1 */ // 0x808B5ADC
    /* b 0x808b5af4 */ // 0x808B5AE0
    r3 = *(0 + r3); // lwz @ 0x808B5AE4
    if (!=) goto 0x0x808b5ad4;
    /* li r0, 0 */ // 0x808B5AF0
    if (==) goto 0x0x808b5b00;
    /* b 0x808b5b04 */ // 0x808B5AFC
    /* li r30, 0 */ // 0x808B5B00
    if (!=) goto 0x0x808b5b14;
    /* li r30, 0 */ // 0x808B5B0C
    /* b 0x808b5b68 */ // 0x808B5B10
    /* lis r31, 0 */ // 0x808B5B14
    r31 = r31 + 0; // 0x808B5B18
    if (==) goto 0x0x808b5b64;
    r12 = *(0 + r30); // lwz @ 0x808B5B20
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B5B28
    /* mtctr r12 */ // 0x808B5B2C
    /* bctrl  */ // 0x808B5B30
    /* b 0x808b5b4c */ // 0x808B5B34
    if (!=) goto 0x0x808b5b48;
    /* li r0, 1 */ // 0x808B5B40
    /* b 0x808b5b58 */ // 0x808B5B44
    r3 = *(0 + r3); // lwz @ 0x808B5B48
    if (!=) goto 0x0x808b5b38;
    /* li r0, 0 */ // 0x808B5B54
    if (==) goto 0x0x808b5b64;
    /* b 0x808b5b68 */ // 0x808B5B60
    /* li r30, 0 */ // 0x808B5B64
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808B5B6C
    r30 = *(8 + r1); // lwz @ 0x808B5B70
    r0 = *(0x14 + r1); // lwz @ 0x808B5B74
    return;
}