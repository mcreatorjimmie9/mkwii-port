/* Function at 0x805A4498, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_805A4498(int r3, int r4, int r5)
{
    /* lfs f1, 8(r4) */ // 0x805A4498
    /* lfs f0, 8(r5) */ // 0x805A449C
    /* lfs f3, 4(r4) */ // 0x805A44A0
    /* fsubs f4, f1, f0 */ // 0x805A44A4
    /* lfs f2, 4(r5) */ // 0x805A44A8
    /* lfs f1, 0(r4) */ // 0x805A44AC
    /* lfs f0, 0(r5) */ // 0x805A44B0
    /* fsubs f2, f3, f2 */ // 0x805A44B4
    /* stfs f4, 8(r3) */ // 0x805A44B8
    /* fsubs f0, f1, f0 */ // 0x805A44BC
    /* stfs f2, 4(r3) */ // 0x805A44C0
    /* stfs f0, 0(r3) */ // 0x805A44C4
    return;
}