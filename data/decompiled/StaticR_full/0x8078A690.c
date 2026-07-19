/* Function at 0x8078A690, size=232 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8078A690(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* fabs f2, f1 */ // 0x8078A698
    *(0xc + r1) = r31; // stw @ 0x8078A6A0
    /* lis r31, 0 */ // 0x8078A6A4
    r31 = r31 + 0; // 0x8078A6A8
    *(8 + r1) = r30; // stw @ 0x8078A6AC
    r30 = r3;
    /* lfs f0, 0x1c(r3) */ // 0x8078A6B4
    /* fmuls f3, f0, f2 */ // 0x8078A6B8
    /* lfs f0, 0x6c(r31) */ // 0x8078A6BC
    /* fmr f2, f1 */ // 0x8078A6C0
    /* fadds f1, f0, f3 */ // 0x8078A6C4
    FUN_8078A778(); // bl 0x8078A778
    r3 = *(0x54 + r30); // lwz @ 0x8078A6CC
    FUN_8061E63C(); // bl 0x8061E63C
    /* lfs f0, 0x74(r31) */ // 0x8078A6D4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8078A6D8
    if (>=) goto 0x0x8078a708;
    r0 = *(0 + r30); // lwz @ 0x8078A6E0
    /* lis r3, 0 */ // 0x8078A6E4
    /* lfs f0, 0x6c(r31) */ // 0x8078A6E8
    r3 = r3 + 0; // 0x8078A6EC
    /* mulli r0, r0, 0xc */ // 0x8078A6F0
    /* stfs f0, 0x48(r30) */ // 0x8078A6F4
    /* lwzx r3, r3, r0 */ // 0x8078A6F8
    r0 = r3 + 5; // 0x8078A6FC
    *(0x44 + r30) = r0; // stw @ 0x8078A700
    /* b 0x8078a760 */ // 0x8078A704
    /* lfs f0, 0x98(r31) */ // 0x8078A708
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8078A70C
    if (>=) goto 0x0x8078a73c;
    r0 = *(0 + r30); // lwz @ 0x8078A714
    /* lis r3, 0 */ // 0x8078A718
    /* lfs f0, 0x9c(r31) */ // 0x8078A71C
    r3 = r3 + 0; // 0x8078A720
    /* mulli r0, r0, 0xc */ // 0x8078A724
    /* stfs f0, 0x48(r30) */ // 0x8078A728
    /* lwzx r3, r3, r0 */ // 0x8078A72C
    r0 = r3 + 4; // 0x8078A730
    *(0x44 + r30) = r0; // stw @ 0x8078A734
    /* b 0x8078a760 */ // 0x8078A738
    r0 = *(0 + r30); // lwz @ 0x8078A73C
    /* lis r3, 0 */ // 0x8078A740
    /* lfs f0, 0x9c(r31) */ // 0x8078A744
    r3 = r3 + 0; // 0x8078A748
    /* mulli r0, r0, 0xc */ // 0x8078A74C
    /* stfs f0, 0x48(r30) */ // 0x8078A750
    /* lwzx r3, r3, r0 */ // 0x8078A754
    r0 = r3 + 3; // 0x8078A758
    *(0x44 + r30) = r0; // stw @ 0x8078A75C
    r0 = *(0x14 + r1); // lwz @ 0x8078A760
    r31 = *(0xc + r1); // lwz @ 0x8078A764
    r30 = *(8 + r1); // lwz @ 0x8078A768
    return;
}