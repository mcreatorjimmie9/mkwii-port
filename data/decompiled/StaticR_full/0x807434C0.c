/* Function at 0x807434C0, size=88 bytes */
/* Stack frame: 32 bytes */

void FUN_807434C0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* lfs f4, 8(r3) */ // 0x807434C4
    /* lfs f6, 8(r4) */ // 0x807434C8
    /* lfs f8, 8(r5) */ // 0x807434CC
    /* lfs f3, 0(r3) */ // 0x807434D0
    /* fsubs f2, f4, f6 */ // 0x807434D4
    /* lfs f5, 0(r4) */ // 0x807434D8
    /* fsubs f0, f8, f6 */ // 0x807434DC
    /* lfs f7, 0(r5) */ // 0x807434E0
    /* fsubs f1, f3, f5 */ // 0x807434E4
    /* stfs f3, 0x18(r1) */ // 0x807434E8
    /* fsubs f3, f7, f5 */ // 0x807434EC
    /* stfs f4, 0x1c(r1) */ // 0x807434F0
    /* fmuls f0, f1, f0 */ // 0x807434F4
    /* fmuls f1, f3, f2 */ // 0x807434F8
    /* stfs f5, 0x10(r1) */ // 0x807434FC
    /* stfs f6, 0x14(r1) */ // 0x80743500
    /* fsubs f1, f1, f0 */ // 0x80743504
    /* stfs f7, 8(r1) */ // 0x80743508
    /* stfs f8, 0xc(r1) */ // 0x8074350C
    return;
}