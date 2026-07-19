/* Function at 0x805D654C, size=44 bytes */
/* Stack frame: 0 bytes */

int FUN_805D654C(int r3, int r4)
{
    /* addis r3, r3, 1 */ // 0x805D654C
    /* slwi r0, r4, 1 */ // 0x805D6550
    r4 = r3 + r0; // 0x805D6554
    r4 = *(-0x6cbc + r4); // lhz @ 0x805D6558
    /* lis r3, 1 */ // 0x805D655C
    r0 = r3 + -1; // 0x805D6560
    if (>=) goto 0x0x805d6570;
    r0 = r4;
    /* clrlwi r3, r0, 0x10 */ // 0x805D6570
    return;
}