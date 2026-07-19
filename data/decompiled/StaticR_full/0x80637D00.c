/* Function at 0x80637D00, size=72 bytes */
/* Stack frame: 0 bytes */

void FUN_80637D00(int r3, int r4, int r5)
{
    /* lfs f3, 0(r5) */ // 0x80637D00
    /* lfs f2, 0(r4) */ // 0x80637D04
    /* lfs f1, 4(r5) */ // 0x80637D08
    /* lfs f0, 4(r4) */ // 0x80637D0C
    /* fmuls f2, f3, f2 */ // 0x80637D10
    /* lfs f5, 8(r5) */ // 0x80637D14
    /* fmuls f0, f1, f0 */ // 0x80637D18
    /* lfs f4, 8(r4) */ // 0x80637D1C
    /* fmuls f4, f5, f4 */ // 0x80637D20
    /* fadds f0, f2, f0 */ // 0x80637D24
    /* fadds f0, f4, f0 */ // 0x80637D28
    /* fmuls f2, f3, f0 */ // 0x80637D2C
    /* fmuls f1, f1, f0 */ // 0x80637D30
    /* fmuls f0, f5, f0 */ // 0x80637D34
    /* stfs f2, 0(r3) */ // 0x80637D38
    /* stfs f1, 4(r3) */ // 0x80637D3C
    /* stfs f0, 8(r3) */ // 0x80637D40
    return;
}