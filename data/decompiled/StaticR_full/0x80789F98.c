/* Function at 0x80789F98, size=340 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80789F98(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80789FA8
    r31 = r31 + 0; // 0x80789FAC
    *(8 + r1) = r30; // stw @ 0x80789FB0
    r30 = r3;
    /* lfs f1, 0x68(r31) */ // 0x80789FB8
    *(0x50 + r3) = r4; // stw @ 0x80789FBC
    /* lfs f0, 8(r3) */ // 0x80789FC0
    r0 = *(0xdc + r4); // lwz @ 0x80789FC4
    *(0x54 + r3) = r0; // stw @ 0x80789FC8
    /* fcmpu cr0, f1, f0 */ // 0x80789FCC
    r0 = *(0x9c + r4); // lhz @ 0x80789FD0
    *(0 + r3) = r0; // stw @ 0x80789FD4
    if (!=) goto 0x0x8078a050;
    /* lis r4, 0 */ // 0x80789FDC
    /* lis r5, 0 */ // 0x80789FE0
    r6 = *(0 + r4); // lwz @ 0x80789FE4
    /* mulli r0, r0, 0xc */ // 0x80789FE8
    r5 = r5 + 0; // 0x80789FEC
    /* lfs f5, 0x6c(r31) */ // 0x80789FF0
    r7 = *(0xb6c + r6); // lwz @ 0x80789FF4
    r4 = r31 + 0; // 0x80789FF8
    r6 = r5 + r0; // 0x80789FFC
    /* lfs f0, 8(r6) */ // 0x8078A000
    /* slwi r0, r7, 2 */ // 0x8078A004
    /* lfsx f3, r4, r0 */ // 0x8078A008
    r5 = r31 + 0xc; // 0x8078A00C
    /* fsubs f4, f0, f5 */ // 0x8078A010
    r4 = r31 + 0x18; // 0x8078A014
    /* lfsx f2, r5, r0 */ // 0x8078A018
    /* lfsx f1, r4, r0 */ // 0x8078A01C
    /* fmuls f3, f4, f3 */ // 0x8078A020
    /* lfs f0, 0x70(r31) */ // 0x8078A024
    /* fmuls f2, f4, f2 */ // 0x8078A028
    /* fmuls f1, f4, f1 */ // 0x8078A02C
    /* fadds f3, f5, f3 */ // 0x8078A030
    /* fadds f2, f5, f2 */ // 0x8078A034
    /* fadds f1, f5, f1 */ // 0x8078A038
    /* stfs f3, 8(r3) */ // 0x8078A03C
    /* fmuls f0, f0, f3 */ // 0x8078A040
    /* stfs f2, 0xc(r3) */ // 0x8078A044
    /* stfs f1, 0x10(r3) */ // 0x8078A048
    /* stfs f0, 0x14(r3) */ // 0x8078A04C
    r3 = *(0x54 + r3); // lwz @ 0x8078A050
    FUN_8061E92C(); // bl 0x8061E92C
    /* lfs f3, 8(r30) */ // 0x8078A058
    /* li r0, 0 */ // 0x8078A05C
    /* lfs f4, 0x6c(r31) */ // 0x8078A060
    /* frsp f10, f1 */ // 0x8078A064
    /* lfs f2, 0xc(r30) */ // 0x8078A068
    /* lfs f0, 0x10(r30) */ // 0x8078A06C
    /* fsubs f3, f3, f4 */ // 0x8078A070
    /* fsubs f8, f2, f4 */ // 0x8078A074
    /* lfs f6, 0x74(r31) */ // 0x8078A078
    /* fsubs f7, f0, f4 */ // 0x8078A07C
    /* stfs f1, 0x40(r30) */ // 0x8078A080
    /* fdivs f9, f3, f10 */ // 0x8078A084
    /* lfs f2, 0x68(r31) */ // 0x8078A088
    /* lfs f5, 0x78(r31) */ // 0x8078A08C
    /* lfs f4, 0x7c(r31) */ // 0x8078A090
    /* lfs f3, 0x80(r31) */ // 0x8078A094
    /* lfs f0, 0x84(r31) */ // 0x8078A098
    /* fdivs f8, f8, f10 */ // 0x8078A09C
    /* stfs f9, 0x18(r30) */ // 0x8078A0A0
    /* stfs f6, 0x34(r30) */ // 0x8078A0A4
    /* stfs f6, 0x30(r30) */ // 0x8078A0A8
    /* stfs f5, 0x3c(r30) */ // 0x8078A0AC
    /* stfs f4, 0x38(r30) */ // 0x8078A0B0
    /* fdivs f1, f7, f10 */ // 0x8078A0B4
    /* stfs f8, 0x1c(r30) */ // 0x8078A0B8
    /* stfs f3, 0x24(r30) */ // 0x8078A0BC
    /* stfs f2, 0x28(r30) */ // 0x8078A0C0
    /* stfs f2, 0x2c(r30) */ // 0x8078A0C4
    *(0x4c + r30) = r0; // stb @ 0x8078A0C8
    /* stfs f1, 0x20(r30) */ // 0x8078A0CC
    /* stfs f0, 0x48(r30) */ // 0x8078A0D0
    r31 = *(0xc + r1); // lwz @ 0x8078A0D4
    r30 = *(8 + r1); // lwz @ 0x8078A0D8
    r0 = *(0x14 + r1); // lwz @ 0x8078A0DC
    return;
}