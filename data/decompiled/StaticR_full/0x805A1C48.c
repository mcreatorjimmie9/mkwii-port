/* Function at 0x805A1C48, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_805A1C48(int r3, int r4, int r5)
{
    /* lfs f3, 4(r4) */ // 0x805A1C48
    /* lfs f2, 4(r5) */ // 0x805A1C4C
    /* lfs f1, 0(r4) */ // 0x805A1C50
    /* lfs f0, 0(r5) */ // 0x805A1C54
    /* fsubs f2, f3, f2 */ // 0x805A1C58
    /* fsubs f0, f1, f0 */ // 0x805A1C5C
    /* stfs f2, 4(r3) */ // 0x805A1C60
    /* stfs f0, 0(r3) */ // 0x805A1C64
    return;
}