/* Function at 0x8083B6E0, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8083B6E0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8083B6F0
    r31 = r31 + 0; // 0x8083B6F4
    *(0x18 + r1) = r30; // stw @ 0x8083B6F8
    r30 = r3;
    /* lfs f0, 0x5c(r31) */ // 0x8083B700
    /* lfs f1, 0x1d0(r3) */ // 0x8083B704
    /* lfs f4, 0x58(r31) */ // 0x8083B708
    /* fadds f0, f1, f0 */ // 0x8083B70C
    /* .byte 0xfc, 0x00, 0x20, 0x40 */ // 0x8083B710
    if (<=) goto 0x0x8083b71c;
    /* b 0x8083b720 */ // 0x8083B718
    /* fmr f4, f0 */ // 0x8083B71C
    /* frsp f1, f4 */ // 0x8083B720
    /* lfs f3, 0x1d4(r3) */ // 0x8083B724
    /* lfs f2, 0xcc(r3) */ // 0x8083B728
    /* lfs f0, 0x24(r31) */ // 0x8083B72C
    /* fadds f1, f3, f1 */ // 0x8083B730
    /* stfs f4, 0x1d0(r3) */ // 0x8083B734
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x8083B738
    /* stfs f1, 0x1d4(r3) */ // 0x8083B73C
    if (<=) goto 0x0x8083b770;
    r4 = r30 + 0xc8; // 0x8083B748
    FUN_8083F2B0(r3, r4); // bl 0x8083F2B0
    r3 = r30 + 0x10; // 0x8083B750
    /* lfs f1, 0x60(r31) */ // 0x8083B754
    r5 = r3;
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    r3 = r30 + 0x10; // 0x8083B764
    r4 = r3;
    FUN_805E3430(r5, r4, r3, r4); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x8083B770
    r31 = *(0x1c + r1); // lwz @ 0x8083B774
    r30 = *(0x18 + r1); // lwz @ 0x8083B778
}