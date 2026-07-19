/* Function at 0x806B1B68, size=72 bytes */
/* Stack frame: 0 bytes */

int FUN_806B1B68(int r3, int r4, int r5, int r6)
{
    r0 = *(0x284 + r3); // lwz @ 0x806B1B68
    /* li r6, 0 */ // 0x806B1B6C
    /* mtctr r0 */ // 0x806B1B70
    if (<=) goto 0x0x806b1ba8;
    r0 = *(0x1f4 + r3); // lbz @ 0x806B1B7C
    if (!=) goto 0x0x806b1b9c;
    r0 = *(0x1f5 + r3); // lbz @ 0x806B1B88
    if (!=) goto 0x0x806b1b9c;
    r3 = r6;
    return;
    r3 = r3 + 0xc; // 0x806B1B9C
    r6 = r6 + 1; // 0x806B1BA0
    if (counter-- != 0) goto 0x0x806b1b7c;
    /* li r3, -1 */ // 0x806B1BA8
    return;
}