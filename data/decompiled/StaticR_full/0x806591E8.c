/* Function at 0x806591E8, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_806591E8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806591F4
    r31 = r3;
    r0 = *(0x3758 + r3); // lbz @ 0x806591FC
    if (==) goto 0x0x80659218;
    r12 = *(0x3750 + r3); // lwzu @ 0x80659208
    r12 = *(0xc + r12); // lwz @ 0x8065920C
    /* mtctr r12 */ // 0x80659210
    /* bctrl  */ // 0x80659214
    r0 = *(0x3858 + r31); // lbz @ 0x80659218
    if (==) goto 0x0x80659238;
    r12 = *(0x3850 + r31); // lwz @ 0x80659224
    r3 = r31 + 0x3850; // 0x80659228
    r12 = *(0xc + r12); // lwz @ 0x8065922C
    /* mtctr r12 */ // 0x80659230
    /* bctrl  */ // 0x80659234
    r0 = *(0x14 + r1); // lwz @ 0x80659238
    r31 = *(0xc + r1); // lwz @ 0x8065923C
    return;
}