/* Function at 0x80751BD0, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80751BD0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80751BE4
    r30 = r3;
    r0 = *(0x100 + r3); // lbz @ 0x80751BEC
    if (==) goto 0x0x80751c3c;
    r3 = *(0xec + r3); // lwz @ 0x80751BF8
    r12 = *(0 + r3); // lwz @ 0x80751BFC
    r12 = *(0xc + r12); // lwz @ 0x80751C00
    /* mtctr r12 */ // 0x80751C04
    /* bctrl  */ // 0x80751C08
    r3 = *(0xec + r30); // lwz @ 0x80751C0C
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x80751C14
    r12 = *(0x78 + r12); // lwz @ 0x80751C18
    /* mtctr r12 */ // 0x80751C1C
    /* bctrl  */ // 0x80751C20
    r3 = *(0xec + r30); // lwz @ 0x80751C24
    r12 = *(0 + r3); // lwz @ 0x80751C28
    r12 = *(0x80 + r12); // lwz @ 0x80751C2C
    /* mtctr r12 */ // 0x80751C30
    /* bctrl  */ // 0x80751C34
    /* b 0x80751c50 */ // 0x80751C38
    r3 = *(0xec + r3); // lwz @ 0x80751C3C
    r12 = *(0 + r3); // lwz @ 0x80751C40
    r12 = *(0x10 + r12); // lwz @ 0x80751C44
    /* mtctr r12 */ // 0x80751C48
    /* bctrl  */ // 0x80751C4C
    r0 = *(0x14 + r1); // lwz @ 0x80751C50
    r31 = *(0xc + r1); // lwz @ 0x80751C54
    r30 = *(8 + r1); // lwz @ 0x80751C58
    return;
}