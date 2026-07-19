/* Function at 0x805C7874, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_805C7874(int r4)
{
    *(4 + r3) = r4; // stw @ 0x805C7878
    if (==) goto 0x0x805c7890;
    r4 = *(0 + r4); // lwz @ 0x805C7880
    /* addis r0, r4, -0x524b */ // 0x805C7884
    /* beqlr  */ // 0x805C788C
    /* li r0, 0 */ // 0x805C7890
    *(4 + r3) = r0; // stw @ 0x805C7894
    return;
}