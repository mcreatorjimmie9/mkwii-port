/* Function at 0x80637E04, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_80637E04(int r3, int r4, int r5)
{
    /* lfs f2, 0(r4) */ // 0x80637E04
    /* lfs f0, 0(r5) */ // 0x80637E08
    /* fsubs f0, f0, f2 */ // 0x80637E0C
    /* fmuls f0, f1, f0 */ // 0x80637E10
    /* fadds f0, f2, f0 */ // 0x80637E14
    /* stfs f0, 0(r3) */ // 0x80637E18
    return;
}