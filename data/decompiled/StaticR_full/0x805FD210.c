/* Function at 0x805FD210, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_805FD210(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805FD224
    r30 = r3;
    r12 = *(0xc + r3); // lwz @ 0x805FD22C
    r12 = *(0x40 + r12); // lwz @ 0x805FD230
    /* mtctr r12 */ // 0x805FD234
    /* bctrl  */ // 0x805FD238
    r12 = *(0x244 + r30); // lwz @ 0x805FD23C
    r3 = r30 + 0x238; // 0x805FD240
    r4 = r31;
    r12 = *(0xc + r12); // lwz @ 0x805FD248
    /* mtctr r12 */ // 0x805FD24C
    /* bctrl  */ // 0x805FD250
    r12 = *(0x2d8 + r30); // lwz @ 0x805FD254
    r3 = r30 + 0x2cc; // 0x805FD258
    r4 = r31;
    r12 = *(0xc + r12); // lwz @ 0x805FD260
    /* mtctr r12 */ // 0x805FD264
    /* bctrl  */ // 0x805FD268
    r0 = *(0x14 + r1); // lwz @ 0x805FD26C
    r31 = *(0xc + r1); // lwz @ 0x805FD270
    r30 = *(8 + r1); // lwz @ 0x805FD274
    return;
}