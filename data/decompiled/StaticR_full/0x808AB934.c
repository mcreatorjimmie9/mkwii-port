/* Function at 0x808AB934, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_808AB934(int r3, int r4)
{
    r3 = *(0x58 + r3); // lwz @ 0x808AB934
    /* slwi r0, r4, 2 */ // 0x808AB938
    /* lwzx r3, r3, r0 */ // 0x808AB93C
    return;
}