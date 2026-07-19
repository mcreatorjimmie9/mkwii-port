/* Function at 0x805A4464, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_805A4464(int r3, int r4, int r5)
{
    /* lfs f1, 8(r4) */ // 0x805A4464
    /* lfs f0, 8(r5) */ // 0x805A4468
    /* lfs f3, 4(r4) */ // 0x805A446C
    /* fadds f4, f1, f0 */ // 0x805A4470
    /* lfs f2, 4(r5) */ // 0x805A4474
    /* lfs f1, 0(r4) */ // 0x805A4478
    /* lfs f0, 0(r5) */ // 0x805A447C
    /* fadds f2, f3, f2 */ // 0x805A4480
    /* stfs f4, 8(r3) */ // 0x805A4484
    /* fadds f0, f1, f0 */ // 0x805A4488
    /* stfs f2, 4(r3) */ // 0x805A448C
    /* stfs f0, 0(r3) */ // 0x805A4490
    return;
}