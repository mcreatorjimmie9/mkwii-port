/* Function at 0x808A01F4, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_808A01F4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808A0200
    r31 = r3;
    r0 = *(0x18 + r3); // lwz @ 0x808A0208
    if (==) goto 0x0x808a0264;
    r12 = *(0 + r3); // lwz @ 0x808A0214
    r12 = *(0x24 + r12); // lwz @ 0x808A0218
    /* mtctr r12 */ // 0x808A021C
    /* bctrl  */ // 0x808A0220
    /* clrlwi r0, r3, 0x10 */ // 0x808A0224
    if (==) goto 0x0x808a0264;
    r12 = *(0 + r31); // lwz @ 0x808A0230
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x808A0238
    /* mtctr r12 */ // 0x808A023C
    /* bctrl  */ // 0x808A0240
    r0 = r3;
    r3 = *(0x18 + r31); // lwz @ 0x808A0248
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x808A0250
    /* clrlwi r5, r0, 0x10 */ // 0x808A0254
    r12 = *(8 + r12); // lwz @ 0x808A0258
    /* mtctr r12 */ // 0x808A025C
    /* bctrl  */ // 0x808A0260
    r0 = *(0x14 + r1); // lwz @ 0x808A0264
    r31 = *(0xc + r1); // lwz @ 0x808A0268
    return;
}