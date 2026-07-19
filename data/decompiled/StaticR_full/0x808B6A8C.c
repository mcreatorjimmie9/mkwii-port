/* Function at 0x808B6A8C, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808B6A8C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808B6A94
    /* slwi r0, r3, 2 */ // 0x808B6A9C
    *(0xc + r1) = r31; // stw @ 0x808B6AA0
    *(8 + r1) = r30; // stw @ 0x808B6AA4
    r3 = *(0 + r4); // lwz @ 0x808B6AA8
    r3 = *(0 + r3); // lwz @ 0x808B6AAC
    r3 = r3 + r0; // 0x808B6AB0
    r30 = *(8 + r3); // lwz @ 0x808B6AB4
    if (!=) goto 0x0x808b6ac8;
    /* li r30, 0 */ // 0x808B6AC0
    /* b 0x808b6b1c */ // 0x808B6AC4
    /* lis r31, 0 */ // 0x808B6AC8
    r31 = r31 + 0; // 0x808B6ACC
    if (==) goto 0x0x808b6b18;
    r12 = *(0 + r30); // lwz @ 0x808B6AD4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B6ADC
    /* mtctr r12 */ // 0x808B6AE0
    /* bctrl  */ // 0x808B6AE4
    /* b 0x808b6b00 */ // 0x808B6AE8
    if (!=) goto 0x0x808b6afc;
    /* li r0, 1 */ // 0x808B6AF4
    /* b 0x808b6b0c */ // 0x808B6AF8
    r3 = *(0 + r3); // lwz @ 0x808B6AFC
    if (!=) goto 0x0x808b6aec;
    /* li r0, 0 */ // 0x808B6B08
    if (==) goto 0x0x808b6b18;
    /* b 0x808b6b1c */ // 0x808B6B14
    /* li r30, 0 */ // 0x808B6B18
    if (!=) goto 0x0x808b6b2c;
    /* li r30, 0 */ // 0x808B6B24
    /* b 0x808b6b80 */ // 0x808B6B28
    /* lis r31, 0 */ // 0x808B6B2C
    r31 = r31 + 0; // 0x808B6B30
    if (==) goto 0x0x808b6b7c;
    r12 = *(0 + r30); // lwz @ 0x808B6B38
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B6B40
    /* mtctr r12 */ // 0x808B6B44
    /* bctrl  */ // 0x808B6B48
    /* b 0x808b6b64 */ // 0x808B6B4C
    if (!=) goto 0x0x808b6b60;
    /* li r0, 1 */ // 0x808B6B58
    /* b 0x808b6b70 */ // 0x808B6B5C
    r3 = *(0 + r3); // lwz @ 0x808B6B60
    if (!=) goto 0x0x808b6b50;
    /* li r0, 0 */ // 0x808B6B6C
    if (==) goto 0x0x808b6b7c;
    /* b 0x808b6b80 */ // 0x808B6B78
    /* li r30, 0 */ // 0x808B6B7C
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808B6B84
    r30 = *(8 + r1); // lwz @ 0x808B6B88
    r0 = *(0x14 + r1); // lwz @ 0x808B6B8C
    return;
}