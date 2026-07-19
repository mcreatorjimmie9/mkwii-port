/* Function at 0x806BDFA8, size=100 bytes */
/* Stack frame: 32 bytes */

void FUN_806BDFA8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    r0 = r5 + -1; // 0x806BDFAC
    /* lis r6, 0x4330 */ // 0x806BDFB0
    /* lis r7, 0 */ // 0x806BDFB4
    /* xoris r0, r0, 0x8000 */ // 0x806BDFB8
    *(0xc + r1) = r0; // stw @ 0x806BDFBC
    /* xoris r0, r4, 0x8000 */ // 0x806BDFC0
    /* lis r5, 0 */ // 0x806BDFC4
    *(8 + r1) = r6; // stw @ 0x806BDFC8
    /* lis r4, 0 */ // 0x806BDFCC
    /* lfd f4, 0(r7) */ // 0x806BDFD0
    /* lfd f0, 8(r1) */ // 0x806BDFD4
    *(0x14 + r1) = r0; // stw @ 0x806BDFD8
    /* fsubs f3, f0, f4 */ // 0x806BDFDC
    /* lfs f2, 0(r5) */ // 0x806BDFE0
    *(0x10 + r1) = r6; // stw @ 0x806BDFE4
    /* lfs f0, 0(r4) */ // 0x806BDFE8
    /* lfd f1, 0x10(r1) */ // 0x806BDFEC
    /* fmuls f2, f2, f3 */ // 0x806BDFF0
    /* fsubs f1, f1, f4 */ // 0x806BDFF4
    /* fsubs f1, f1, f2 */ // 0x806BDFF8
    /* fmuls f0, f0, f1 */ // 0x806BDFFC
    /* stfs f0, 0x198(r3) */ // 0x806BE000
    return;
}