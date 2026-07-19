/* Function at 0x805FB374, size=256 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805FB374(int r3, int r4, int r5)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x88 + r1) = r30; // stw @ 0x805FB388
    /* lis r30, 0 */ // 0x805FB38C
    r30 = r30 + 0; // 0x805FB390
    *(0x84 + r1) = r29; // stw @ 0x805FB394
    r0 = *(0x8c + r3); // lbz @ 0x805FB398
    if (==) goto 0x0x805fb5c8;
    FUN_8061ED38(); // bl 0x8061ED38
    r4 = *(0x90 + r31); // lwz @ 0x805FB3A8
    /* lfs f0, 0(r3) */ // 0x805FB3AC
    /* lfs f1, 0(r4) */ // 0x805FB3B0
    /* fmuls f0, f1, f0 */ // 0x805FB3B4
    /* stfs f0, 0x44(r1) */ // 0x805FB3B8
    /* lfs f1, 4(r4) */ // 0x805FB3BC
    /* lfs f0, 4(r3) */ // 0x805FB3C0
    /* fmuls f0, f1, f0 */ // 0x805FB3C4
    /* stfs f0, 0x48(r1) */ // 0x805FB3C8
    /* lfs f1, 8(r4) */ // 0x805FB3CC
    /* lfs f0, 8(r3) */ // 0x805FB3D0
    /* fmuls f0, f1, f0 */ // 0x805FB3D4
    /* stfs f0, 0x4c(r1) */ // 0x805FB3D8
    r0 = *(0x94 + r31); // lwz @ 0x805FB3DC
    /* srwi r3, r0, 0x1f */ // 0x805FB3E0
    /* clrlwi r0, r0, 0x1f */ // 0x805FB3E4
    r0 = r0 ^ r3; // 0x805FB3E8
    /* subf r0, r3, r0 */ // 0x805FB3EC
    /* cntlzw r0, r0 */ // 0x805FB3F0
    /* rlwinm. r29, r0, 0x1b, 5, 0x1f */ // 0x805FB3F4
    if (==) goto 0x0x805fb404;
    /* lfs f1, 4(r30) */ // 0x805FB3FC
    /* b 0x805fb408 */ // 0x805FB400
    /* lfs f1, 8(r30) */ // 0x805FB404
    /* lfs f0, 0x44(r1) */ // 0x805FB408
    /* fmuls f0, f0, f1 */ // 0x805FB40C
    /* stfs f0, 0x44(r1) */ // 0x805FB410
    r5 = *(0x90 + r31); // lwz @ 0x805FB414
    r0 = *(0x98 + r31); // lbz @ 0x805FB418
    r4 = *(0xc + r5); // lwz @ 0x805FB41C
    r3 = *(0x10 + r5); // lwz @ 0x805FB420
    r0 = *(0x14 + r5); // lwz @ 0x805FB428
    *(0x38 + r1) = r4; // stw @ 0x805FB42C
    *(0x3c + r1) = r3; // stw @ 0x805FB430
    *(0x40 + r1) = r0; // stw @ 0x805FB434
    if (==) goto 0x0x805fb44c;
    /* lfs f1, 0x3c(r1) */ // 0x805FB43C
    /* lfs f0, 0xc(r30) */ // 0x805FB440
    /* fadds f0, f1, f0 */ // 0x805FB444
    /* stfs f0, 0x3c(r1) */ // 0x805FB448
    r3 = r31 + 0x4c; // 0x805FB44C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r31 + 0x1c; // 0x805FB458
    r4 = r31 + 0x4c; // 0x805FB45C
    r5 = r3;
    FUN_805E3430(r4, r3, r4, r5); // bl 0x805E3430
    /* lfs f0, 0x28(r31) */ // 0x805FB468
    r3 = r31;
    /* lfs f1, 0x38(r31) */ // 0x805FB470
}