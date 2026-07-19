/* Function at 0x80627728, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_80627728(int r3)
{
    r3 = *(0x1c + r3); // lwz @ 0x80627728
    r0 = *(8 + r3); // lwz @ 0x8062772C
    /* clrlwi r3, r0, 0x1f */ // 0x80627730
    return;
}