/* Function at 0x8081FDB0, size=320 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8081FDB0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r7, 0 */ // 0x8081FDB8
    r31 = r6;
    *(0x38 + r1) = r30; // stw @ 0x8081FDC8
    r30 = r5;
    *(0x34 + r1) = r29; // stw @ 0x8081FDD0
    r29 = r3;
    /* lfs f0, 0(r5) */ // 0x8081FDD8
    /* lfs f1, 8(r5) */ // 0x8081FDDC
    /* fmuls f2, f0, f0 */ // 0x8081FDE0
    /* lfs f0, 0(r7) */ // 0x8081FDE4
    /* fmuls f1, f1, f1 */ // 0x8081FDE8
    /* fadds f1, f2, f1 */ // 0x8081FDEC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8081FDF0
    if (>=) goto 0x0x8081fe10;
    /* lfs f0, 0x64(r3) */ // 0x8081FDF8
    /* stfs f0, 0(r5) */ // 0x8081FDFC
    /* lfs f0, 0x68(r3) */ // 0x8081FE00
    /* stfs f0, 4(r5) */ // 0x8081FE04
    /* lfs f0, 0x6c(r3) */ // 0x8081FE08
    /* stfs f0, 8(r5) */ // 0x8081FE0C
    if (!=) goto 0x0x8081fe2c;
    r4 = *(0 + r3); // lwz @ 0x8081FE18
    r4 = *(4 + r4); // lwz @ 0x8081FE1C
    r0 = *(4 + r4); // lwz @ 0x8081FE20
    /* rlwinm. r0, r0, 0, 0xf, 0xf */ // 0x8081FE24
    if (!=) goto 0x0x8081fe44;
    r5 = *(0xc + r3); // lwz @ 0x8081FE2C
    r3 = r30;
    r4 = r30;
    /* lfs f1, 0x40(r5) */ // 0x8081FE38
    FUN_80863110(r3, r4); // bl 0x80863110
    /* b 0x8081fedc */ // 0x8081FE40
    r3 = r29;
    FUN_8061DFF8(r4, r3); // bl 0x8061DFF8
    r6 = *(0x38 + r3); // lwz @ 0x8081FE4C
    /* lis r5, 0 */ // 0x8081FE50
    r0 = *(0x3c + r3); // lwz @ 0x8081FE54
    *(0x24 + r1) = r0; // stw @ 0x8081FE5C
    /* lfs f4, 0(r5) */ // 0x8081FE60
    *(0x20 + r1) = r6; // stw @ 0x8081FE64
    /* lfs f1, 0x24(r1) */ // 0x8081FE68
    r0 = *(0x40 + r3); // lwz @ 0x8081FE6C
    *(0x28 + r1) = r0; // stw @ 0x8081FE74
    /* lfs f2, 0x20(r1) */ // 0x8081FE78
    /* lfs f3, 0x70(r29) */ // 0x8081FE7C
    /* lfs f0, 0x28(r1) */ // 0x8081FE80
    /* fmuls f3, f3, f4 */ // 0x8081FE84
    /* fadds f2, f2, f3 */ // 0x8081FE88
    /* stfs f2, 0x20(r1) */ // 0x8081FE8C
    /* lfs f2, 0x74(r29) */ // 0x8081FE90
    r5 = *(0x20 + r1); // lwz @ 0x8081FE94
    /* fmuls f2, f2, f4 */ // 0x8081FE98
    /* fadds f1, f1, f2 */ // 0x8081FE9C
    /* stfs f1, 0x24(r1) */ // 0x8081FEA0
    /* lfs f1, 0x78(r29) */ // 0x8081FEA4
    r0 = *(0x24 + r1); // lwz @ 0x8081FEA8
    /* fmuls f1, f1, f4 */ // 0x8081FEAC
    *(0xc + r1) = r0; // stw @ 0x8081FEB0
    *(8 + r1) = r5; // stw @ 0x8081FEB4
    /* fadds f0, f0, f1 */ // 0x8081FEB8
    /* stfs f0, 0x28(r1) */ // 0x8081FEBC
    r0 = *(0x28 + r1); // lwz @ 0x8081FEC0
    *(0x10 + r1) = r0; // stw @ 0x8081FEC4
    FUN_80816F30(); // bl 0x80816F30
    r3 = r30;
    r5 = r30;
    FUN_808622D8(r3, r5, r4); // bl 0x808622D8
    r5 = *(0 + r30); // lwz @ 0x8081FEDC
    r3 = r31;
    r0 = *(4 + r30); // lwz @ 0x8081FEE4
    *(0x18 + r1) = r0; // stw @ 0x8081FEEC
}