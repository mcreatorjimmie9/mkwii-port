/* Function at 0x805AE58C, size=136 bytes */
/* Stack frame: 16 bytes */

void FUN_805AE58C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x805AE590
    *(0x10 + r3) = r4; // stb @ 0x805AE594
    r5 = *(0 + r5); // lwz @ 0x805AE598
    r0 = *(0x4155 + r5); // lbz @ 0x805AE59C
    if (==) goto 0x0x805ae5dc;
    /* lis r0, 0x4330 */ // 0x805AE5A8
    *(0xc + r1) = r4; // stw @ 0x805AE5AC
    /* lis r5, 0 */ // 0x805AE5B0
    /* lis r4, 0 */ // 0x805AE5B4
    *(8 + r1) = r0; // stw @ 0x805AE5B8
    /* lfd f2, 0(r5) */ // 0x805AE5BC
    /* lfd f0, 8(r1) */ // 0x805AE5C0
    /* lfs f1, 0(r4) */ // 0x805AE5C4
    /* fsubs f0, f0, f2 */ // 0x805AE5C8
    /* fsubs f0, f0, f1 */ // 0x805AE5CC
    /* fdivs f0, f0, f1 */ // 0x805AE5D0
    /* fneg f0, f0 */ // 0x805AE5D4
    /* b 0x805ae608 */ // 0x805AE5D8
    /* lis r0, 0x4330 */ // 0x805AE5DC
    *(0xc + r1) = r4; // stw @ 0x805AE5E0
    /* lis r5, 0 */ // 0x805AE5E4
    /* lis r4, 0 */ // 0x805AE5E8
    *(8 + r1) = r0; // stw @ 0x805AE5EC
    /* lfd f2, 0(r5) */ // 0x805AE5F0
    /* lfd f0, 8(r1) */ // 0x805AE5F4
    /* lfs f1, 0(r4) */ // 0x805AE5F8
    /* fsubs f0, f0, f2 */ // 0x805AE5FC
    /* fsubs f0, f0, f1 */ // 0x805AE600
    /* fdivs f0, f0, f1 */ // 0x805AE604
    /* stfs f0, 8(r3) */ // 0x805AE608
    return;
}