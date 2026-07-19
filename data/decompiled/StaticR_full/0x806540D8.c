/* Function at 0x806540D8, size=64 bytes */
/* Stack frame: 0 bytes */

void FUN_806540D8(int r3, int r4, int r5)
{
    r0 = *(0x1dc + r3); // lwz @ 0x806540D8
    /* li r5, 0 */ // 0x806540DC
    /* mtctr r0 */ // 0x806540E0
    if (<=) goto 0x0x80654110;
    r0 = *(0x270 + r3); // lwz @ 0x806540EC
    r4 = r0 + r5; // 0x806540F0
    r0 = *(0x174 + r4); // lwz @ 0x806540F4
    if (>=) goto 0x0x80654108;
    /* li r3, 0 */ // 0x80654100
    return;
    r5 = r5 + 0x178; // 0x80654108
    if (counter-- != 0) goto 0x0x806540ec;
    /* li r3, 1 */ // 0x80654110
    return;
}