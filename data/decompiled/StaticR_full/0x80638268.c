/* Function at 0x80638268, size=88 bytes */
/* Stack frame: 0 bytes */

int FUN_80638268(int r3, int r4, int r5)
{
    /* lfs f3, 4(r3) */ // 0x80638268
    /* lis r5, 0 */ // 0x8063826C
    /* lfs f2, 0(r4) */ // 0x80638270
    /* li r0, 0 */ // 0x80638274
    /* lfs f1, 8(r3) */ // 0x80638278
    /* lfs f0, 4(r4) */ // 0x8063827C
    /* fmuls f3, f3, f2 */ // 0x80638280
    /* lfs f4, 0xc(r3) */ // 0x80638284
    /* fmuls f2, f1, f0 */ // 0x80638288
    /* lfs f0, 8(r4) */ // 0x8063828C
    /* lfs f1, 0x10(r3) */ // 0x80638290
    /* fmuls f4, f4, f0 */ // 0x80638294
    /* lfs f0, 0(r5) */ // 0x80638298
    /* fadds f2, f3, f2 */ // 0x8063829C
    /* fadds f2, f4, f2 */ // 0x806382A0
    /* fadds f1, f1, f2 */ // 0x806382A4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806382A8
    /* cror cr0eq, cr0lt, cr0eq */ // 0x806382AC
    if (!=) goto 0x0x806382b8;
    /* li r0, 1 */ // 0x806382B4
    r3 = r0;
    return;
}