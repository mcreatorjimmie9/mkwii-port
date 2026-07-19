/* Function at 0x8063FEC0, size=252 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8063FEC0(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lfs f5, 0(r6) */ // 0x8063FEC8
    /* lfs f3, 4(r6) */ // 0x8063FED0
    *(0x4c + r1) = r31; // stw @ 0x8063FED4
    r31 = r5;
    /* lfs f1, 8(r6) */ // 0x8063FEDC
    *(0x48 + r1) = r30; // stw @ 0x8063FEE0
    r30 = r4;
    /* lfs f0, 0x68(r4) */ // 0x8063FEE8
    /* lfs f2, 0x6c(r4) */ // 0x8063FEEC
    /* fadds f4, f0, f5 */ // 0x8063FEF0
    /* lfs f0, 0x70(r4) */ // 0x8063FEF4
    /* fadds f2, f2, f3 */ // 0x8063FEF8
    /* fadds f0, f0, f1 */ // 0x8063FEFC
    /* stfs f4, 0x68(r4) */ // 0x8063FF00
    /* stfs f2, 0x6c(r4) */ // 0x8063FF04
    /* stfs f0, 0x70(r4) */ // 0x8063FF08
    r3 = *(0 + r5); // lwz @ 0x8063FF0C
    /* clrlwi. r0, r3, 0x1f */ // 0x8063FF10
    if (!=) goto 0x0x8063ff2c;
    /* andi. r0, r3, 0x42 */ // 0x8063FF18
    if (==) goto 0x0x8063ff2c;
    /* stfs f5, 0x4c(r5) */ // 0x8063FF20
    /* stfs f3, 0x50(r5) */ // 0x8063FF24
    /* stfs f1, 0x54(r5) */ // 0x8063FF28
    /* lis r0, 0x4330 */ // 0x8063FF2C
    *(0x3c + r1) = r8; // stw @ 0x8063FF30
    /* lis r8, 0 */ // 0x8063FF34
    /* lis r6, 0 */ // 0x8063FF38
    *(0x38 + r1) = r0; // stw @ 0x8063FF3C
    r3 = r4 + 0xf0; // 0x8063FF40
    /* lfd f1, 0(r8) */ // 0x8063FF44
    /* lfd f0, 0x38(r1) */ // 0x8063FF48
    /* lfs f3, 0(r6) */ // 0x8063FF4C
    /* fsubs f4, f0, f1 */ // 0x8063FF50
    /* lfs f2, 0(r7) */ // 0x8063FF54
    /* lfs f1, 4(r7) */ // 0x8063FF58
    /* lfs f0, 8(r7) */ // 0x8063FF5C
    /* fdivs f3, f3, f4 */ // 0x8063FF60
    /* fmuls f2, f3, f2 */ // 0x8063FF64
    /* fmuls f1, f3, f1 */ // 0x8063FF68
    /* fmuls f0, f3, f0 */ // 0x8063FF6C
    /* stfs f2, 0x2c(r1) */ // 0x8063FF70
    /* stfs f1, 0x30(r1) */ // 0x8063FF74
    /* stfs f0, 0x34(r1) */ // 0x8063FF78
    /* lfs f0, 0x68(r5) */ // 0x8063FF7C
    /* fmuls f0, f3, f0 */ // 0x8063FF80
    /* stfs f0, 0x68(r5) */ // 0x8063FF84
    /* lfs f3, 0x64(r4) */ // 0x8063FF8C
    /* lfs f2, 0xa4(r4) */ // 0x8063FF90
    /* lfs f1, 0xa8(r4) */ // 0x8063FF94
    /* lfs f0, 0xac(r4) */ // 0x8063FF98
    /* fmuls f2, f3, f2 */ // 0x8063FF9C
    /* fmuls f1, f3, f1 */ // 0x8063FFA0
    /* fmuls f0, f3, f0 */ // 0x8063FFA8
    /* stfs f2, 0x14(r1) */ // 0x8063FFAC
    /* stfs f1, 0x18(r1) */ // 0x8063FFB0
    /* stfs f0, 0x1c(r1) */ // 0x8063FFB4
    FUN_805E3430(r4); // bl 0x805E3430
}