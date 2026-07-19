/* Function at 0x807371E4, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807371E4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807371F4
    r30 = r3;
    r31 = *(0x270 + r3); // lwz @ 0x807371FC
    if (==) goto 0x0x80737240;
    r12 = *(0 + r31); // lwz @ 0x80737208
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80737210
    /* mtctr r12 */ // 0x80737214
    /* bctrl  */ // 0x80737218
    r0 = *(0xb0 + r30); // lbz @ 0x8073721C
    if (==) goto 0x0x80737240;
    r12 = *(0 + r31); // lwz @ 0x80737228
    r3 = r31;
    r4 = r30 + 0x72c; // 0x80737230
    r12 = *(0x70 + r12); // lwz @ 0x80737234
    /* mtctr r12 */ // 0x80737238
    /* bctrl  */ // 0x8073723C
    r0 = *(0x14 + r1); // lwz @ 0x80737240
    r31 = *(0xc + r1); // lwz @ 0x80737244
    r30 = *(8 + r1); // lwz @ 0x80737248
    return;
}