/* Function at 0x80753728, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80753728(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80753734
    r31 = r3;
    r4 = *(0x20 + r3); // lwz @ 0x8075373C
    /* lfs f0, 0x24(r4) */ // 0x80753740
    /* stfs f0, 0x120(r3) */ // 0x80753744
    /* lfs f0, 0x28(r4) */ // 0x80753748
    /* stfs f0, 0x124(r3) */ // 0x8075374C
    /* lfs f0, 0x2c(r4) */ // 0x80753750
    /* stfs f0, 0x128(r3) */ // 0x80753754
    r3 = r4;
    r12 = *(0 + r4); // lwz @ 0x8075375C
    r12 = *(0x14 + r12); // lwz @ 0x80753760
    /* mtctr r12 */ // 0x80753764
    /* bctrl  */ // 0x80753768
    if (!=) goto 0x0x80753788;
    r12 = *(0 + r31); // lwz @ 0x80753774
    r3 = r31;
    r12 = *(0xf8 + r12); // lwz @ 0x8075377C
    /* mtctr r12 */ // 0x80753780
    /* bctrl  */ // 0x80753784
    r0 = *(0x14 + r1); // lwz @ 0x80753788
    r31 = *(0xc + r1); // lwz @ 0x8075378C
    return;
}