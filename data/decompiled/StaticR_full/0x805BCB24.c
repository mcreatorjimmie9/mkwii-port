/* Function at 0x805BCB24, size=276 bytes */
/* Stack frame: 16 bytes */

int FUN_805BCB24(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x805BCB24
    /* li r0, 9 */ // 0x805BCB28
    r5 = r5 + 0; // 0x805BCB2C
    /* lfs f10, 0xc(r5) */ // 0x805BCB34
    r3 = r5 + 0; // 0x805BCB38
    /* lfd f9, 0x28(r5) */ // 0x805BCB3C
    /* li r6, -2 */ // 0x805BCB40
    /* fmr f8, f10 */ // 0x805BCB44
    /* lfs f7, 0x10(r5) */ // 0x805BCB48
    /* lfs f2, 0x1c(r5) */ // 0x805BCB4C
    /* lis r4, 0x4330 */ // 0x805BCB50
    /* lfs f3, 0x20(r5) */ // 0x805BCB54
    /* lfs f6, 0x18(r5) */ // 0x805BCB58
    /* lfs f4, 0x14(r5) */ // 0x805BCB5C
    /* mtctr r0 */ // 0x805BCB60
    r7 = r6;
    if (>=) goto 0x0x805bcb74;
    /* li r7, 0 */ // 0x805BCB70
    if (<=) goto 0x0x805bcb80;
    /* li r7, 4 */ // 0x805BCB7C
    /* xoris r0, r6, 0x8000 */ // 0x805BCB80
    *(0xc + r1) = r0; // stw @ 0x805BCB84
    *(8 + r1) = r4; // stw @ 0x805BCB88
    /* lfd f0, 8(r1) */ // 0x805BCB8C
    /* fsubs f0, f0, f9 */ // 0x805BCB90
    /* fsubs f11, f1, f0 */ // 0x805BCB94
    /* .byte 0xfc, 0x0b, 0x40, 0x40 */ // 0x805BCB98
    if (>=) goto 0x0x805bcba4;
    /* fneg f11, f11 */ // 0x805BCBA0
    /* lfs f5, 0xc(r5) */ // 0x805BCBA4
    /* .byte 0xfc, 0x0b, 0x28, 0x40 */ // 0x805BCBA8
    /* cror cr0eq, cr0gt, cr0eq */ // 0x805BCBAC
    if (!=) goto 0x0x805bcc00;
    /* .byte 0xfc, 0x0b, 0x38, 0x40 */ // 0x805BCBB4
    if (>=) goto 0x0x805bcbe0;
    /* fmuls f5, f6, f11 */ // 0x805BCBBC
    /* fmuls f0, f2, f11 */ // 0x805BCBC0
    /* fmuls f5, f5, f11 */ // 0x805BCBC4
    /* fmuls f0, f0, f11 */ // 0x805BCBC8
    /* fmuls f5, f11, f5 */ // 0x805BCBCC
    /* fsubs f0, f5, f0 */ // 0x805BCBD0
    /* fadds f0, f4, f0 */ // 0x805BCBD4
    /* fdivs f5, f0, f2 */ // 0x805BCBD8
    /* b 0x805bcc00 */ // 0x805BCBDC
    /* .byte 0xfc, 0x0b, 0x18, 0x40 */ // 0x805BCBE0
    /* cror cr0eq, cr0lt, cr0eq */ // 0x805BCBE4
    if (!=) goto 0x0x805bcc00;
    /* fsubs f5, f11, f3 */ // 0x805BCBEC
    /* fneg f0, f5 */ // 0x805BCBF0
    /* fmuls f0, f0, f5 */ // 0x805BCBF4
    /* fmuls f0, f5, f0 */ // 0x805BCBF8
    /* fdivs f5, f0, f2 */ // 0x805BCBFC
    /* slwi r0, r7, 1 */ // 0x805BCC00
    *(8 + r1) = r4; // stw @ 0x805BCC04
    /* lhax r0, r3, r0 */ // 0x805BCC08
    r6 = r6 + 1; // 0x805BCC0C
    /* xoris r0, r0, 0x8000 */ // 0x805BCC10
    *(0xc + r1) = r0; // stw @ 0x805BCC14
    /* lfd f0, 8(r1) */ // 0x805BCC18
    /* fsubs f0, f0, f9 */ // 0x805BCC1C
    /* fmuls f0, f5, f0 */ // 0x805BCC20
    /* fadds f10, f10, f0 */ // 0x805BCC24
    if (counter-- != 0) goto 0x0x805bcb64;
    /* fmr f1, f10 */ // 0x805BCC2C
    return;
}