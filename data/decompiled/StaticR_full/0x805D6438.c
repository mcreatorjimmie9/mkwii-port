/* Function at 0x805D6438, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_805D6438(int r3, int r4)
{
    /* addis r4, r3, 1 */ // 0x805D6438
    /* lis r3, 0 */ // 0x805D643C
    /* lfs f1, -0x6d3c(r4) */ // 0x805D6440
    /* lfs f0, 0(r3) */ // 0x805D6444
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805D6448
    /* bltlr  */ // 0x805D644C
    /* fmr f1, f0 */ // 0x805D6450
    return;
}