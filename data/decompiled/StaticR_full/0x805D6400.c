/* Function at 0x805D6400, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_805D6400(int r3, int r4)
{
    /* addis r4, r3, 1 */ // 0x805D6400
    /* lis r3, 0 */ // 0x805D6404
    /* lfs f1, -0x6d40(r4) */ // 0x805D6408
    /* lfs f0, 0(r3) */ // 0x805D640C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805D6410
    /* bltlr  */ // 0x805D6414
    /* fmr f1, f0 */ // 0x805D6418
    return;
}