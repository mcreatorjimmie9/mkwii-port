/* Function at 0x80633908, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80633908(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80633914
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8063391C
    r12 = *(0x14 + r12); // lwz @ 0x80633920
    /* mtctr r12 */ // 0x80633924
    /* bctrl  */ // 0x80633928
    if (==) goto 0x0x80633940;
    r3 = *(0 + r3); // lwz @ 0x80633934
    /* lfs f0, 0x24(r3) */ // 0x80633938
    /* stfs f0, 0x34(r31) */ // 0x8063393C
    r0 = *(0x14 + r1); // lwz @ 0x80633940
    r31 = *(0xc + r1); // lwz @ 0x80633944
    return;
}