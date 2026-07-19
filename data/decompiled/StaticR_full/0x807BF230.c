/* Function at 0x807BF230, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807BF230(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BF23C
    r31 = r3;
    r4 = *(4 + r3); // lwz @ 0x807BF244
    r3 = *(0 + r4); // lwz @ 0x807BF248
    r3 = *(0x10 + r3); // lwz @ 0x807BF24C
    r3 = *(0x144 + r3); // lwz @ 0x807BF250
    r12 = *(0x34 + r3); // lwz @ 0x807BF254
    r12 = *(0x44 + r12); // lwz @ 0x807BF258
    /* mtctr r12 */ // 0x807BF25C
    /* bctrl  */ // 0x807BF260
    r4 = *(4 + r31); // lwz @ 0x807BF264
    r4 = *(0 + r4); // lwz @ 0x807BF268
    r4 = *(0 + r4); // lwz @ 0x807BF26C
    r4 = *(4 + r4); // lwz @ 0x807BF270
    r5 = *(4 + r4); // lwz @ 0x807BF274
    /* rlwinm. r0, r5, 0, 8, 8 */ // 0x807BF278
    if (==) goto 0x0x807bf29c;
    /* rlwinm. r0, r5, 0, 1, 1 */ // 0x807BF280
    if (!=) goto 0x0x807bf29c;
    r0 = *(8 + r4); // lwz @ 0x807BF288
    /* clrlwi. r0, r0, 0x1f */ // 0x807BF28C
    if (!=) goto 0x0x807bf29c;
    /* li r0, 1 */ // 0x807BF294
    /* b 0x807bf2a0 */ // 0x807BF298
    /* li r0, 0 */ // 0x807BF29C
    if (==) goto 0x0x807bf2c8;
    r12 = *(0 + r3); // lwz @ 0x807BF2A8
    r12 = *(0x24 + r12); // lwz @ 0x807BF2AC
    /* mtctr r12 */ // 0x807BF2B0
    /* bctrl  */ // 0x807BF2B4
    if (==) goto 0x0x807bf2c8;
    /* li r3, 1 */ // 0x807BF2C0
    /* b 0x807bf2cc */ // 0x807BF2C4
    /* li r3, 0 */ // 0x807BF2C8
    r0 = *(0x14 + r1); // lwz @ 0x807BF2CC
    r31 = *(0xc + r1); // lwz @ 0x807BF2D0
    return;
}