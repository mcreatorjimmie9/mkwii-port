/* Function at 0x805D6500, size=44 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6500(int r3, int r4)
{
    /* addis r3, r3, 1 */ // 0x805D6500
    /* slwi r0, r4, 1 */ // 0x805D6504
    r4 = r3 + r0; // 0x805D6508
    r4 = *(-0x6d04 + r4); // lhz @ 0x805D650C
    /* lis r3, 1 */ // 0x805D6510
    r0 = r3 + -1; // 0x805D6514
    if (>=) goto 0x0x805d6524;
    r0 = r4;
    /* clrlwi r3, r0, 0x10 */ // 0x805D6524
    return;
}