/* Function at 0x80630738, size=76 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

int FUN_80630738(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* lis r4, 0 */ // 0x80630740
    r6 = r3 + 0xa0; // 0x80630744
    *(0x24 + r1) = r0; // stw @ 0x80630748
    /* lfs f3, 0(r4) */ // 0x80630750
    r4 = r3 + 0x88; // 0x80630754
    /* lfs f2, 0x9c(r3) */ // 0x80630758
    /* lfs f1, 0x98(r3) */ // 0x8063075C
    /* lfs f0, 0x94(r3) */ // 0x80630760
    /* fmuls f2, f3, f2 */ // 0x80630764
    /* fmuls f1, f3, f1 */ // 0x80630768
    r3 = r3 + 0xc; // 0x8063076C
    /* fmuls f0, f3, f0 */ // 0x80630770
    /* stfs f2, 0x10(r1) */ // 0x80630774
    /* stfs f0, 8(r1) */ // 0x80630778
    /* stfs f1, 0xc(r1) */ // 0x8063077C
    FUN_805E3430(r3); // bl 0x805E3430
}