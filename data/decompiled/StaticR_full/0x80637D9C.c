/* Function at 0x80637D9C, size=104 bytes */
/* Stack frame: 0 bytes */

void FUN_80637D9C(int r3, int r4, int r5, int r6)
{
    /* lfs f5, 0(r6) */ // 0x80637D9C
    /* lfs f4, 0(r5) */ // 0x80637DA0
    /* lfs f1, 4(r6) */ // 0x80637DA4
    /* lfs f3, 4(r5) */ // 0x80637DA8
    /* fmuls f2, f5, f4 */ // 0x80637DAC
    /* lfs f8, 8(r6) */ // 0x80637DB0
    /* fmuls f0, f1, f3 */ // 0x80637DB4
    /* lfs f7, 8(r5) */ // 0x80637DB8
    /* fmuls f6, f8, f7 */ // 0x80637DBC
    /* fadds f0, f2, f0 */ // 0x80637DC0
    /* fadds f6, f6, f0 */ // 0x80637DC4
    /* fmuls f2, f1, f6 */ // 0x80637DC8
    /* fmuls f0, f5, f6 */ // 0x80637DCC
    /* fmuls f1, f8, f6 */ // 0x80637DD0
    /* stfs f2, 4(r3) */ // 0x80637DD4
    /* stfs f0, 0(r3) */ // 0x80637DD8
    /* fsubs f0, f4, f0 */ // 0x80637DDC
    /* stfs f1, 8(r3) */ // 0x80637DE0
    /* stfs f0, 0(r4) */ // 0x80637DE4
    /* lfs f0, 4(r3) */ // 0x80637DE8
    /* fsubs f0, f3, f0 */ // 0x80637DEC
    /* stfs f0, 4(r4) */ // 0x80637DF0
    /* lfs f0, 8(r3) */ // 0x80637DF4
    /* fsubs f0, f7, f0 */ // 0x80637DF8
    /* stfs f0, 8(r4) */ // 0x80637DFC
    return;
}