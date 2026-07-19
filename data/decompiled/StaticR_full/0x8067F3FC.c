/* Function at 0x8067F3FC, size=52 bytes */
/* Stack frame: 0 bytes */

int FUN_8067F3FC(int r3, int r4)
{
    /* slwi r0, r4, 4 */ // 0x8067F3FC
    r4 = r3 + r0; // 0x8067F400
    r0 = *(0xc + r4); // lwz @ 0x8067F404
    if (!=) goto 0x0x8067f428;
    r3 = *(4 + r4); // lwz @ 0x8067F410
    r0 = *(8 + r4); // lwz @ 0x8067F414
    if (!=) goto 0x0x8067f428;
    r3 = *(0x10 + r4); // lwz @ 0x8067F420
    return;
    /* li r3, 0 */ // 0x8067F428
    return;
}