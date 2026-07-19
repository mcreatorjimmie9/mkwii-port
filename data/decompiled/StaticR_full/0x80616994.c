/* Function at 0x80616994, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80616994(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806169A8
    r30 = r3;
    r12 = *(0xc + r3); // lwz @ 0x806169B0
    r12 = *(0x10 + r12); // lwz @ 0x806169B4
    /* mtctr r12 */ // 0x806169B8
    /* bctrl  */ // 0x806169BC
    if (==) goto 0x0x80616a24;
    r12 = *(0xc + r30); // lwz @ 0x806169C8
    r3 = r30;
    r12 = *(0x20 + r12); // lwz @ 0x806169D0
    /* mtctr r12 */ // 0x806169D4
    /* bctrl  */ // 0x806169D8
    r12 = *(0xc + r30); // lwz @ 0x806169DC
    r3 = r30;
    r4 = r31;
    r12 = *(0x28 + r12); // lwz @ 0x806169E8
    /* mtctr r12 */ // 0x806169EC
    /* bctrl  */ // 0x806169F0
    if (==) goto 0x0x80616a24;
    r12 = *(0xc + r30); // lwz @ 0x806169FC
    r3 = r30;
    r12 = *(0x24 + r12); // lwz @ 0x80616A04
    /* mtctr r12 */ // 0x80616A08
    /* bctrl  */ // 0x80616A0C
    r12 = *(0xc + r30); // lwz @ 0x80616A10
    r3 = r30;
    r12 = *(0x14 + r12); // lwz @ 0x80616A18
    /* mtctr r12 */ // 0x80616A1C
    /* bctrl  */ // 0x80616A20
    r0 = *(0x14 + r1); // lwz @ 0x80616A24
    r31 = *(0xc + r1); // lwz @ 0x80616A28
    r30 = *(8 + r1); // lwz @ 0x80616A2C
    return;
}