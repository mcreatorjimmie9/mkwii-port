/* Function at 0x8078577C, size=192 bytes */
/* Stack frame: 32 bytes */

void FUN_8078577C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x80785780
    r5 = r5 + 0; // 0x80785784
    /* lfs f2, 0x3f8(r3) */ // 0x80785788
    /* lfs f0, 0x28(r5) */ // 0x8078578C
    /* fabs f1, f2 */ // 0x80785790
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80785794
    if (<=) goto 0x0x807857ec;
    /* fctiwz f0, f2 */ // 0x8078579C
    /* lis r4, -0x49f5 */ // 0x807857A0
    /* lis r0, 0x4330 */ // 0x807857A4
    *(0x10 + r1) = r0; // stw @ 0x807857A8
    r4 = r4 + 0x60b7; // 0x807857AC
    /* lfd f1, 0x38(r5) */ // 0x807857B0
    /* stfd f0, 8(r1) */ // 0x807857B4
    r0 = *(0xc + r1); // lwz @ 0x807857B8
    /* mulhw r4, r4, r0 */ // 0x807857BC
    r0 = r4 + r0; // 0x807857C0
    r0 = r0 >> 8; // srawi
    /* srwi r4, r0, 0x1f */ // 0x807857C8
    r0 = r0 + r4; // 0x807857CC
    /* mulli r0, r0, 0x168 */ // 0x807857D0
    /* xoris r0, r0, 0x8000 */ // 0x807857D4
    *(0x14 + r1) = r0; // stw @ 0x807857D8
    /* lfd f0, 0x10(r1) */ // 0x807857DC
    /* fsubs f0, f0, f1 */ // 0x807857E0
    /* fsubs f0, f2, f0 */ // 0x807857E4
    /* stfs f0, 0x3f8(r3) */ // 0x807857E8
    /* lfs f1, 0x3f8(r3) */ // 0x807857EC
    /* lfs f0, 0x34(r5) */ // 0x807857F0
    /* fabs f1, f1 */ // 0x807857F4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807857F8
    if (>=) goto 0x0x80785808;
    /* lfs f0, 0(r5) */ // 0x80785800
    /* stfs f0, 0x3f8(r3) */ // 0x80785804
    /* lfs f1, 0x3f8(r3) */ // 0x80785808
    /* lfs f0, 0(r5) */ // 0x8078580C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80785810
    if (<=) goto 0x0x80785828;
    /* lfs f0, 0x24(r5) */ // 0x80785818
    /* fsubs f0, f1, f0 */ // 0x8078581C
    /* stfs f0, 0x3f8(r3) */ // 0x80785820
    /* b 0x80785834 */ // 0x80785824
    /* lfs f0, 0x24(r5) */ // 0x80785828
    /* fadds f0, f1, f0 */ // 0x8078582C
    /* stfs f0, 0x3f8(r3) */ // 0x80785830
    return;
}