/* Function at 0x805D64B4, size=44 bytes */
/* Stack frame: 0 bytes */

int FUN_805D64B4(int r3, int r4)
{
    /* addis r3, r3, 1 */ // 0x805D64B4
    /* slwi r0, r4, 1 */ // 0x805D64B8
    r4 = r3 + r0; // 0x805D64BC
    r4 = *(-0x6d36 + r4); // lhz @ 0x805D64C0
    /* lis r3, 1 */ // 0x805D64C4
    r0 = r3 + -1; // 0x805D64C8
    if (>=) goto 0x0x805d64d8;
    r0 = r4;
    /* clrlwi r3, r0, 0x10 */ // 0x805D64D8
    return;
}