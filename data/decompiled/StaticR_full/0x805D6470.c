/* Function at 0x805D6470, size=36 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6470(int r3, int r4)
{
    /* addis r4, r3, 1 */ // 0x805D6470
    /* lis r3, 1 */ // 0x805D6474
    r4 = *(-0x6d38 + r4); // lhz @ 0x805D6478
    r0 = r3 + -1; // 0x805D647C
    if (>=) goto 0x0x805d648c;
    r0 = r4;
    /* clrlwi r3, r0, 0x10 */ // 0x805D648C
    return;
}