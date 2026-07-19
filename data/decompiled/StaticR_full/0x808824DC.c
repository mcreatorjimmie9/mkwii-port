/* Function at 0x808824DC, size=100 bytes */
/* Stack frame: 16 bytes */

void FUN_808824DC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* xoris r3, r4, 0x8000 */ // 0x808824E0
    /* lis r4, 0 */ // 0x808824E4
    /* lis r0, 0x4330 */ // 0x808824E8
    *(0xc + r1) = r3; // stw @ 0x808824EC
    r4 = r4 + 0; // 0x808824F0
    /* lfd f1, 0x40(r4) */ // 0x808824F4
    *(8 + r1) = r0; // stw @ 0x808824F8
    /* lfs f3, 0x18(r4) */ // 0x808824FC
    /* lfd f0, 8(r1) */ // 0x80882500
    /* lfs f2, 0x1c(r4) */ // 0x80882504
    /* fsubs f4, f0, f1 */ // 0x80882508
    /* lfs f1, 0x20(r4) */ // 0x8088250C
    /* lfs f0, 0x24(r4) */ // 0x80882510
    /* fdivs f4, f4, f3 */ // 0x80882514
    /* fsubs f2, f4, f2 */ // 0x80882518
    /* fdivs f2, f2, f3 */ // 0x8088251C
    /* fmuls f2, f2, f2 */ // 0x80882520
    /* fadds f1, f1, f2 */ // 0x80882524
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80882528
    if (>=) goto 0x0x80882534;
    /* b 0x80882538 */ // 0x80882530
    /* fmr f1, f0 */ // 0x80882534
    return;
}