/* Function at 0x805F8278, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F8278(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r8, 0 */ // 0x805F8280
    *(0x14 + r1) = r0; // stw @ 0x805F8284
    r8 = r8 + 0; // 0x805F8288
    *(0xc + r1) = r31; // stw @ 0x805F828C
    /* li r31, 0 */ // 0x805F8290
    r0 = *(0x20 + r3); // lwz @ 0x805F8294
    if (<) goto 0x0x805f8328;
    /* lfs f4, 0xd0(r3) */ // 0x805F82A0
    /* lfs f0, 0x90(r8) */ // 0x805F82A4
    /* .byte 0xfc, 0x04, 0x00, 0x40 */ // 0x805F82A8
    /* cror cr0eq, cr0lt, cr0eq */ // 0x805F82AC
    if (!=) goto 0x0x805f8328;
    /* li r0, 0 */ // 0x805F82B4
    /* lfs f0, 0(r8) */ // 0x805F82B8
    /* mulli r4, r0, 0x18 */ // 0x805F82BC
    /* stfs f0, 0xd0(r3) */ // 0x805F82C0
    r0 = r8 + 8; // 0x805F82C4
    /* lfs f0, 4(r8) */ // 0x805F82C8
    /* li r7, 1 */ // 0x805F82CC
    r6 = *(0xcc + r3); // lhz @ 0x805F82D0
    r5 = r0 + r4; // 0x805F82D4
    r0 = r6 | 2; // 0x805F82D8
    /* lfs f3, 0x14(r5) */ // 0x805F82DC
    /* li r31, 1 */ // 0x805F82E0
    /* lfs f2, 0(r5) */ // 0x805F82E4
    /* lfs f1, 0xc(r5) */ // 0x805F82E8
    *(0x20 + r3) = r7; // stw @ 0x805F82EC
    r4 = *(0 + r3); // lwz @ 0x805F82F0
    *(0xcc + r3) = r0; // sth @ 0x805F82F4
    *(0xe4 + r3) = r5; // stw @ 0x805F82F8
    /* stfs f3, 0xe0(r3) */ // 0x805F82FC
    /* stfs f2, 0xd4(r3) */ // 0x805F8300
    /* stfs f1, 0xdc(r3) */ // 0x805F8304
    /* stfs f0, 0xd8(r3) */ // 0x805F8308
    /* stfs f4, 0xd0(r3) */ // 0x805F830C
    r4 = *(4 + r4); // lwz @ 0x805F8310
    r0 = *(0x14 + r4); // lwz @ 0x805F8314
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x805F8318
    if (==) goto 0x0x805f8328;
    /* li r4, 0 */ // 0x805F8320
    FUN_8061F070(r4); // bl 0x8061F070
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805F832C
    r0 = *(0x14 + r1); // lwz @ 0x805F8330
    return;
}