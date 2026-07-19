/* Function at 0x80864364, size=88 bytes */
/* Stack frame: 0 bytes */

void FUN_80864364(int r3, int r4, int r5)
{
    /* lfs f1, 0(r4) */ // 0x80864364
    /* lfs f0, 0x90(r3) */ // 0x80864368
    /* lfs f2, 0x9c(r3) */ // 0x8086436C
    /* fsubs f1, f1, f0 */ // 0x80864370
    /* lfs f3, 8(r4) */ // 0x80864374
    /* fsubs f0, f2, f0 */ // 0x80864378
    /* fdivs f4, f1, f0 */ // 0x8086437C
    /* stfs f4, 0(r5) */ // 0x80864380
    /* lfs f0, 0x98(r3) */ // 0x80864384
    /* lfs f2, 0xa4(r3) */ // 0x80864388
    /* fsubs f1, f3, f0 */ // 0x8086438C
    /* fsubs f0, f2, f0 */ // 0x80864390
    /* fdivs f0, f1, f0 */ // 0x80864394
    /* stfs f0, 4(r5) */ // 0x80864398
    r0 = *(0x14 + r3); // lbz @ 0x8086439C
    /* beqlr  */ // 0x808643A4
    /* lis r3, 0 */ // 0x808643A8
    /* lfs f0, 0(r3) */ // 0x808643AC
    /* fsubs f0, f0, f4 */ // 0x808643B0
    /* stfs f0, 0(r5) */ // 0x808643B4
    return;
}