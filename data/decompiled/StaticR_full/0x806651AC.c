/* Function at 0x806651AC, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_806651AC(int r3)
{
    r0 = *(0xbb + r3); // lbz @ 0x806651AC
    /* clrlwi r3, r0, 0x1f */ // 0x806651B0
    return;
}