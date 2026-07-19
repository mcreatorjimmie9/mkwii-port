/* Function at 0x805C6D88, size=76 bytes */
/* Stack frame: 0 bytes */

void FUN_805C6D88(int r3, int r4, int r5)
{
    /* lfs f0, 4(r4) */ // 0x805C6D88
    /* lfs f7, 8(r5) */ // 0x805C6D8C
    /* lfs f2, 0(r5) */ // 0x805C6D90
    /* lfs f4, 8(r4) */ // 0x805C6D94
    /* fmuls f6, f0, f7 */ // 0x805C6D98
    /* lfs f5, 4(r5) */ // 0x805C6D9C
    /* fmuls f0, f0, f2 */ // 0x805C6DA0
    /* fmuls f3, f4, f2 */ // 0x805C6DA4
    /* lfs f1, 0(r4) */ // 0x805C6DA8
    /* fmuls f4, f4, f5 */ // 0x805C6DAC
    /* fmuls f2, f1, f7 */ // 0x805C6DB0
    /* fmuls f1, f1, f5 */ // 0x805C6DB4
    /* fsubs f4, f6, f4 */ // 0x805C6DB8
    /* fsubs f2, f3, f2 */ // 0x805C6DBC
    /* fsubs f0, f1, f0 */ // 0x805C6DC0
    /* stfs f4, 0(r3) */ // 0x805C6DC4
    /* stfs f2, 4(r3) */ // 0x805C6DC8
    /* stfs f0, 8(r3) */ // 0x805C6DCC
    return;
}