/* Function at 0x805D6278, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_805D6278(int r3, int r4)
{
    /* addis r4, r3, 1 */ // 0x805D6278
    /* lis r3, 0 */ // 0x805D627C
    /* lfs f1, -0x6d44(r4) */ // 0x805D6280
    /* lfs f0, 0(r3) */ // 0x805D6284
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805D6288
    /* bltlr  */ // 0x805D628C
    /* fmr f1, f0 */ // 0x805D6290
    return;
}