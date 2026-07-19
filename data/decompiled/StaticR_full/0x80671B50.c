/* Function at 0x80671B50, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80671B50(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80671B60
    r30 = r3;
    r3 = *(0x38 + r3); // lwz @ 0x80671B68
    r12 = *(0 + r3); // lwz @ 0x80671B6C
    r12 = *(0x24 + r12); // lwz @ 0x80671B70
    /* mtctr r12 */ // 0x80671B74
    /* bctrl  */ // 0x80671B78
    r3 = *(0x38 + r30); // lwz @ 0x80671B7C
    if (==) goto 0x0x80671bbc;
    /* lis r31, 0 */ // 0x80671B88
    r31 = r31 + 0; // 0x80671B8C
    if (==) goto 0x0x80671bbc;
    r12 = *(0 + r3); // lwz @ 0x80671B94
    r12 = *(8 + r12); // lwz @ 0x80671B98
    /* mtctr r12 */ // 0x80671B9C
    /* bctrl  */ // 0x80671BA0
    /* b 0x80671bb4 */ // 0x80671BA4
    if (==) goto 0x0x80671bbc;
    r3 = *(0 + r3); // lwz @ 0x80671BB0
    if (!=) goto 0x0x80671ba8;
    r12 = *(0 + r30); // lwz @ 0x80671BBC
    r3 = r30;
    r12 = *(0x54 + r12); // lwz @ 0x80671BC4
    /* mtctr r12 */ // 0x80671BC8
    /* bctrl  */ // 0x80671BCC
    r0 = *(0x14 + r1); // lwz @ 0x80671BD0
    r31 = *(0xc + r1); // lwz @ 0x80671BD4
    r30 = *(8 + r1); // lwz @ 0x80671BD8
    return;
}