/* Function at 0x808C1B7C, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808C1B7C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808C1B84
    /* slwi r0, r3, 2 */ // 0x808C1B8C
    *(0xc + r1) = r31; // stw @ 0x808C1B90
    *(8 + r1) = r30; // stw @ 0x808C1B94
    r3 = *(0 + r4); // lwz @ 0x808C1B98
    r3 = *(0 + r3); // lwz @ 0x808C1B9C
    r3 = r3 + r0; // 0x808C1BA0
    r30 = *(8 + r3); // lwz @ 0x808C1BA4
    if (!=) goto 0x0x808c1bb8;
    /* li r30, 0 */ // 0x808C1BB0
    /* b 0x808c1c0c */ // 0x808C1BB4
    /* lis r31, 0 */ // 0x808C1BB8
    r31 = r31 + 0; // 0x808C1BBC
    if (==) goto 0x0x808c1c08;
    r12 = *(0 + r30); // lwz @ 0x808C1BC4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C1BCC
    /* mtctr r12 */ // 0x808C1BD0
    /* bctrl  */ // 0x808C1BD4
    /* b 0x808c1bf0 */ // 0x808C1BD8
    if (!=) goto 0x0x808c1bec;
    /* li r0, 1 */ // 0x808C1BE4
    /* b 0x808c1bfc */ // 0x808C1BE8
    r3 = *(0 + r3); // lwz @ 0x808C1BEC
    if (!=) goto 0x0x808c1bdc;
    /* li r0, 0 */ // 0x808C1BF8
    if (==) goto 0x0x808c1c08;
    /* b 0x808c1c0c */ // 0x808C1C04
    /* li r30, 0 */ // 0x808C1C08
    if (!=) goto 0x0x808c1c1c;
    /* li r30, 0 */ // 0x808C1C14
    /* b 0x808c1c70 */ // 0x808C1C18
    /* lis r31, 0 */ // 0x808C1C1C
    r31 = r31 + 0; // 0x808C1C20
    if (==) goto 0x0x808c1c6c;
    r12 = *(0 + r30); // lwz @ 0x808C1C28
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C1C30
    /* mtctr r12 */ // 0x808C1C34
    /* bctrl  */ // 0x808C1C38
    /* b 0x808c1c54 */ // 0x808C1C3C
    if (!=) goto 0x0x808c1c50;
    /* li r0, 1 */ // 0x808C1C48
    /* b 0x808c1c60 */ // 0x808C1C4C
    r3 = *(0 + r3); // lwz @ 0x808C1C50
    if (!=) goto 0x0x808c1c40;
    /* li r0, 0 */ // 0x808C1C5C
    if (==) goto 0x0x808c1c6c;
    /* b 0x808c1c70 */ // 0x808C1C68
    /* li r30, 0 */ // 0x808C1C6C
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808C1C74
    r30 = *(8 + r1); // lwz @ 0x808C1C78
    r0 = *(0x14 + r1); // lwz @ 0x808C1C7C
    return;
}