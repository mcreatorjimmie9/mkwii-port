/* Function at 0x8066497C, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8066497C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80664988
    r31 = r3;
    r0 = *(0x40c + r3); // lwz @ 0x80664990
    if (==) goto 0x0x806649b8;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x806649A0
    r12 = *(8 + r12); // lwz @ 0x806649A4
    /* mtctr r12 */ // 0x806649A8
    /* bctrl  */ // 0x806649AC
    /* li r0, 0 */ // 0x806649B0
    *(0x40c + r31) = r0; // stw @ 0x806649B4
    r0 = *(0x14 + r1); // lwz @ 0x806649B8
    r31 = *(0xc + r1); // lwz @ 0x806649BC
    return;
}