/* Function at 0x80837CA8, size=56 bytes */
/* Stack frame: 0 bytes */

void FUN_80837CA8(int r3, int r4, int r5)
{
    r5 = *(0x280 + r3); // lwz @ 0x80837CA8
    /* li r4, 0 */ // 0x80837CAC
    if (==) goto 0x0x80837cc8;
    r0 = *(0x2a8 + r3); // lbz @ 0x80837CB8
    if (==) goto 0x0x80837cc8;
    /* li r4, 1 */ // 0x80837CC4
    if (==) goto 0x0x80837cd8;
    r3 = *(0x18 + r5); // lbz @ 0x80837CD0
    return;
    /* li r3, 0xc */ // 0x80837CD8
    return;
}