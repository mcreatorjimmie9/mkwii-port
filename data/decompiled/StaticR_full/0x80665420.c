/* Function at 0x80665420, size=64 bytes */
/* Stack frame: 0 bytes */

int FUN_80665420(int r3, int r4)
{
    /* li r0, 8 */ // 0x80665420
    r3 = r3 + 0xcd; // 0x80665424
    /* mtctr r0 */ // 0x80665428
    r0 = *(0 + r3); // lbz @ 0x8066542C
    /* extsb. r0, r0 */ // 0x80665430
    if (!=) goto 0x0x80665440;
    /* li r3, 0 */ // 0x80665438
    return;
    if (!=) goto 0x0x80665450;
    /* li r3, 1 */ // 0x80665448
    return;
    r3 = r3 + 1; // 0x80665450
    if (counter-- != 0) goto 0x0x8066542c;
    /* li r3, 0 */ // 0x80665458
    return;
}