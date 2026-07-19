/* Function at 0x807A50CC, size=68 bytes */
/* Stack frame: 0 bytes */

int FUN_807A50CC(int r3, int r4, int r5, int r6)
{
    r0 = *(0x11 + r3); // lbz @ 0x807A50CC
    /* extsb r5, r4 */ // 0x807A50D0
    /* li r6, 0 */ // 0x807A50D4
    /* mtctr r0 */ // 0x807A50D8
    if (<=) goto 0x0x807a5108;
    r4 = r3 + r6; // 0x807A50E4
    r0 = *(0x12 + r4); // lbz @ 0x807A50E8
    /* extsb r0, r0 */ // 0x807A50EC
    if (!=) goto 0x0x807a5100;
    /* li r3, 1 */ // 0x807A50F8
    return;
    r6 = r6 + 1; // 0x807A5100
    if (counter-- != 0) goto 0x0x807a50e4;
    /* li r3, 0 */ // 0x807A5108
    return;
}