/* Function at 0x8070AFE0, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8070AFE0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8070AFE8
    *(0x14 + r1) = r0; // stw @ 0x8070AFEC
    *(0xc + r1) = r31; // stw @ 0x8070AFF0
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x8070AFF8
    r0 = *(0xb68 + r4); // lwz @ 0x8070AFFC
    if (!=) goto 0x0x8070b04c;
    r3 = *(4 + r3); // lwz @ 0x8070B008
    r12 = *(0 + r3); // lwz @ 0x8070B00C
    r12 = *(0xc + r12); // lwz @ 0x8070B010
    /* mtctr r12 */ // 0x8070B014
    /* bctrl  */ // 0x8070B018
    r3 = *(4 + r31); // lwz @ 0x8070B01C
    /* lis r4, 0 */ // 0x8070B020
    r4 = r4 + 0; // 0x8070B024
    r12 = *(0 + r3); // lwz @ 0x8070B028
    r12 = *(0x74 + r12); // lwz @ 0x8070B02C
    /* mtctr r12 */ // 0x8070B030
    /* bctrl  */ // 0x8070B034
    r3 = *(4 + r31); // lwz @ 0x8070B038
    r12 = *(0 + r3); // lwz @ 0x8070B03C
    r12 = *(0x80 + r12); // lwz @ 0x8070B040
    /* mtctr r12 */ // 0x8070B044
    /* bctrl  */ // 0x8070B048
    r0 = *(0x14 + r1); // lwz @ 0x8070B04C
    r31 = *(0xc + r1); // lwz @ 0x8070B050
    return;
}