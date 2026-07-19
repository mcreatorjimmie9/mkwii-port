/* Function at 0x807575D4, size=120 bytes */
/* Stack frame: 16 bytes */

void FUN_807575D4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* li r0, 1 */ // 0x807575D8
    /* li r6, 0 */ // 0x807575DC
    /* lis r7, 0 */ // 0x807575E0
    /* lfs f1, 0x10c(r3) */ // 0x807575E4
    /* lis r5, 0 */ // 0x807575E8
    /* lfs f3, 0x110(r3) */ // 0x807575EC
    /* lis r4, 0 */ // 0x807575F0
    /* lfs f0, 0x114(r3) */ // 0x807575F4
    *(0x152 + r3) = r0; // stb @ 0x807575F8
    /* lis r0, 0x4330 */ // 0x807575FC
    /* lfs f2, 0(r7) */ // 0x80757600
    *(0x154 + r3) = r6; // sth @ 0x80757604
    /* lis r6, 0 */ // 0x80757608
    /* stfs f1, 0x158(r3) */ // 0x8075760C
    /* lfd f1, 0(r4) */ // 0x80757610
    /* stfs f3, 0x15c(r3) */ // 0x80757614
    /* stfs f0, 0x160(r3) */ // 0x80757618
    r4 = *(0 + r5); // lwz @ 0x8075761C
    /* lfs f0, 0(r6) */ // 0x80757620
    /* xoris r4, r4, 0x8000 */ // 0x80757624
    *(0xc + r1) = r4; // stw @ 0x80757628
    /* fmuls f2, f2, f0 */ // 0x8075762C
    *(8 + r1) = r0; // stw @ 0x80757630
    /* lfd f0, 8(r1) */ // 0x80757634
    /* fsubs f0, f0, f1 */ // 0x80757638
    /* fdivs f0, f2, f0 */ // 0x8075763C
    /* stfs f0, 0x168(r3) */ // 0x80757640
    return;
}