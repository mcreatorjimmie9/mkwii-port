/* Function at 0x80785D34, size=248 bytes */
/* Stack frame: 32 bytes */

void FUN_80785D34(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x80785D38
    r5 = r5 + 0; // 0x80785D3C
    r0 = *(0x404 + r3); // lwz @ 0x80785D40
    if (!=) goto 0x0x80785d98;
    r4 = *(0xbc + r3); // lwz @ 0x80785D4C
    /* lis r0, 0x4330 */ // 0x80785D50
    *(0xc + r1) = r4; // stw @ 0x80785D54
    /* lfd f1, 0x50(r5) */ // 0x80785D58
    *(8 + r1) = r0; // stw @ 0x80785D5C
    /* lfs f4, 0x418(r3) */ // 0x80785D60
    /* lfd f0, 8(r1) */ // 0x80785D64
    /* lfs f3, 0x414(r3) */ // 0x80785D68
    /* fsubs f5, f0, f1 */ // 0x80785D6C
    /* lfs f1, 0x3f8(r3) */ // 0x80785D70
    /* lfs f0, 0x41c(r3) */ // 0x80785D74
    /* lfs f2, 0x3f4(r3) */ // 0x80785D78
    /* fmuls f4, f4, f5 */ // 0x80785D7C
    /* fadds f0, f1, f0 */ // 0x80785D80
    /* fsubs f1, f3, f4 */ // 0x80785D84
    /* stfs f0, 0x3f8(r3) */ // 0x80785D88
    /* fsubs f0, f2, f1 */ // 0x80785D8C
    /* stfs f0, 0x3f4(r3) */ // 0x80785D90
    /* b 0x80785e24 */ // 0x80785D94
    /* lfs f2, 0x3f4(r3) */ // 0x80785D98
    /* lfs f0, 0x28(r5) */ // 0x80785D9C
    /* fabs f1, f2 */ // 0x80785DA0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80785DA4
    if (<=) goto 0x0x80785dfc;
    /* fctiwz f0, f2 */ // 0x80785DAC
    /* lis r4, -0x49f5 */ // 0x80785DB0
    /* lis r0, 0x4330 */ // 0x80785DB4
    *(0x10 + r1) = r0; // stw @ 0x80785DB8
    r4 = r4 + 0x60b7; // 0x80785DBC
    /* lfd f1, 0x38(r5) */ // 0x80785DC0
    /* stfd f0, 8(r1) */ // 0x80785DC4
    r0 = *(0xc + r1); // lwz @ 0x80785DC8
    /* mulhw r4, r4, r0 */ // 0x80785DCC
    r0 = r4 + r0; // 0x80785DD0
    r0 = r0 >> 8; // srawi
    /* srwi r4, r0, 0x1f */ // 0x80785DD8
    r0 = r0 + r4; // 0x80785DDC
    /* mulli r0, r0, 0x168 */ // 0x80785DE0
    /* xoris r0, r0, 0x8000 */ // 0x80785DE4
    *(0x14 + r1) = r0; // stw @ 0x80785DE8
    /* lfd f0, 0x10(r1) */ // 0x80785DEC
    /* fsubs f0, f0, f1 */ // 0x80785DF0
    /* fsubs f0, f2, f0 */ // 0x80785DF4
    /* stfs f0, 0x3f4(r3) */ // 0x80785DF8
    /* lfs f1, 0x4c(r5) */ // 0x80785DFC
    /* lfs f0, 0x41c(r3) */ // 0x80785E00
    /* lfs f3, 0x3f4(r3) */ // 0x80785E04
    /* fmuls f1, f1, f0 */ // 0x80785E08
    /* lfs f2, 0x48(r5) */ // 0x80785E0C
    /* lfs f0, 0x3f8(r3) */ // 0x80785E10
    /* fsubs f2, f3, f2 */ // 0x80785E14
    /* fsubs f0, f0, f1 */ // 0x80785E18
    /* stfs f2, 0x3f4(r3) */ // 0x80785E1C
    /* stfs f0, 0x3f8(r3) */ // 0x80785E20
    return;
}