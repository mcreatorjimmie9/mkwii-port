/* Function at 0x8070F09C, size=180 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_8070F09C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x8070F0A4
    /* lis r4, 0 */ // 0x8070F0A8
    *(0x24 + r1) = r0; // stw @ 0x8070F0AC
    /* lis r0, 0x4330 */ // 0x8070F0B0
    /* lfd f5, 0(r5) */ // 0x8070F0B4
    r7 = *(0x18c + r3); // lwz @ 0x8070F0B8
    r6 = *(0x1ac + r3); // lwz @ 0x8070F0BC
    *(0x18 + r1) = r0; // stw @ 0x8070F0C0
    /* subf r6, r7, r6 */ // 0x8070F0C4
    /* lfs f2, 0(r4) */ // 0x8070F0C8
    /* xoris r5, r6, 0x8000 */ // 0x8070F0CC
    *(0x1c + r1) = r5; // stw @ 0x8070F0D0
    /* lfs f1, 0x1bc(r3) */ // 0x8070F0D4
    /* lfd f0, 0x18(r1) */ // 0x8070F0D8
    /* fmuls f2, f2, f1 */ // 0x8070F0DC
    *(0xc + r1) = r5; // stw @ 0x8070F0E0
    /* fsubs f1, f0, f5 */ // 0x8070F0E4
    /* lfs f3, 0x1c0(r3) */ // 0x8070F0E8
    *(8 + r1) = r0; // stw @ 0x8070F0EC
    /* lfs f0, 0x1a8(r3) */ // 0x8070F0F0
    /* lfd f4, 8(r1) */ // 0x8070F0F4
    /* fmuls f1, f2, f1 */ // 0x8070F0F8
    *(0x14 + r1) = r5; // stw @ 0x8070F0FC
    /* fsubs f4, f4, f5 */ // 0x8070F100
    *(0x10 + r1) = r0; // stw @ 0x8070F104
    /* lfd f2, 0x10(r1) */ // 0x8070F108
    /* fmuls f3, f3, f4 */ // 0x8070F10C
    /* fsubs f2, f2, f5 */ // 0x8070F110
    /* fmuls f1, f2, f1 */ // 0x8070F114
    /* fsubs f1, f3, f1 */ // 0x8070F118
    /* stfs f1, 0x1b0(r3) */ // 0x8070F11C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8070F120
    if (<=) goto 0x0x8070f12c;
    /* stfs f0, 0x1b0(r3) */ // 0x8070F128
    /* lfs f1, 0x1b0(r3) */ // 0x8070F12C
    /* li r4, 0x1db */ // 0x8070F130
    /* lfs f0, 0x1a8(r3) */ // 0x8070F134
    /* fdivs f1, f1, f0 */ // 0x8070F138
    FUN_808A0AA8(r4); // bl 0x808A0AA8
    r0 = *(0x24 + r1); // lwz @ 0x8070F140
    return;
}