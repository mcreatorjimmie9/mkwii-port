/* Function at 0x807856D8, size=164 bytes */
/* Stack frame: 32 bytes */

void FUN_807856D8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x807856DC
    r5 = r5 + 0; // 0x807856E0
    /* lfs f2, 0x3f4(r3) */ // 0x807856E4
    /* lfs f0, 0x28(r5) */ // 0x807856E8
    /* fabs f1, f2 */ // 0x807856EC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807856F0
    if (<=) goto 0x0x80785748;
    /* fctiwz f0, f2 */ // 0x807856F8
    /* lis r4, -0x49f5 */ // 0x807856FC
    /* lis r0, 0x4330 */ // 0x80785700
    *(0x10 + r1) = r0; // stw @ 0x80785704
    r4 = r4 + 0x60b7; // 0x80785708
    /* lfd f1, 0x38(r5) */ // 0x8078570C
    /* stfd f0, 8(r1) */ // 0x80785710
    r0 = *(0xc + r1); // lwz @ 0x80785714
    /* mulhw r4, r4, r0 */ // 0x80785718
    r0 = r4 + r0; // 0x8078571C
    r0 = r0 >> 8; // srawi
    /* srwi r4, r0, 0x1f */ // 0x80785724
    r0 = r0 + r4; // 0x80785728
    /* mulli r0, r0, 0x168 */ // 0x8078572C
    /* xoris r0, r0, 0x8000 */ // 0x80785730
    *(0x14 + r1) = r0; // stw @ 0x80785734
    /* lfd f0, 0x10(r1) */ // 0x80785738
    /* fsubs f0, f0, f1 */ // 0x8078573C
    /* fsubs f0, f2, f0 */ // 0x80785740
    /* stfs f0, 0x3f4(r3) */ // 0x80785744
    /* lfs f1, 0x3f4(r3) */ // 0x80785748
    /* lfs f0, 0x2c(r5) */ // 0x8078574C
    /* fabs f2, f1 */ // 0x80785750
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x80785754
    if (>=) goto 0x0x80785768;
    /* lfs f0, 0(r5) */ // 0x8078575C
    /* stfs f0, 0x3f4(r3) */ // 0x80785760
    /* b 0x80785774 */ // 0x80785764
    /* lfs f0, 0x30(r5) */ // 0x80785768
    /* fadds f0, f1, f0 */ // 0x8078576C
    /* stfs f0, 0x3f4(r3) */ // 0x80785770
    return;
}