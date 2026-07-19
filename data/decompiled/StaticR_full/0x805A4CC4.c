/* Function at 0x805A4CC4, size=72 bytes */
/* Stack frame: 16 bytes */

void FUN_805A4CC4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r0, 0x4330 */ // 0x805A4CC8
    r5 = *(1 + r4); // lbz @ 0x805A4CCC
    /* lis r6, 0 */ // 0x805A4CD0
    *(0xc + r1) = r5; // stw @ 0x805A4CD4
    /* lis r5, 0 */ // 0x805A4CD8
    /* li r7, -1 */ // 0x805A4CDC
    /* lfd f1, 0(r5) */ // 0x805A4CE0
    *(8 + r1) = r0; // stw @ 0x805A4CE4
    /* lfs f2, 0(r6) */ // 0x805A4CE8
    /* lfd f0, 8(r1) */ // 0x805A4CEC
    *(0 + r3) = r4; // stw @ 0x805A4CF0
    /* fsubs f0, f0, f1 */ // 0x805A4CF4
    *(4 + r3) = r7; // stb @ 0x805A4CF8
    /* fdivs f0, f2, f0 */ // 0x805A4CFC
    /* stfs f0, 8(r3) */ // 0x805A4D00
    return;
}