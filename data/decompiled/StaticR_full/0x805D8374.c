/* Function at 0x805D8374, size=104 bytes */
/* Stack frame: 0 bytes */

void FUN_805D8374(int r3, int r4, int r5)
{
    /* lis r5, 0 */ // 0x805D8374
    /* addis r4, r3, 1 */ // 0x805D8378
    r5 = r5 + 0; // 0x805D837C
    /* lfs f3, -0x6d40(r4) */ // 0x805D8380
    /* lfs f0, 0x20(r5) */ // 0x805D8384
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x805D8388
    if (>=) goto 0x0x805d8394;
    /* b 0x805d8398 */ // 0x805D8390
    /* fmr f3, f0 */ // 0x805D8394
    /* addis r3, r3, 1 */ // 0x805D8398
    /* lfs f0, 0x20(r5) */ // 0x805D839C
    /* lfs f4, -0x6d3c(r3) */ // 0x805D83A0
    /* .byte 0xfc, 0x04, 0x00, 0x40 */ // 0x805D83A4
    if (>=) goto 0x0x805d83b0;
    /* b 0x805d83b4 */ // 0x805D83AC
    /* fmr f4, f0 */ // 0x805D83B0
    /* lfs f1, 0(r5) */ // 0x805D83B4
    /* fcmpu cr0, f1, f4 */ // 0x805D83B8
    /* beqlr  */ // 0x805D83BC
    /* lfs f2, 0x24(r5) */ // 0x805D83C0
    /* fmuls f0, f2, f3 */ // 0x805D83C4
    /* fdivs f1, f0, f4 */ // 0x805D83C8
    /* .byte 0xfc, 0x01, 0x10, 0x40 */ // 0x805D83CC
    /* blelr  */ // 0x805D83D0
    /* fmr f1, f2 */ // 0x805D83D4
    return;
}