/* Function at 0x8076A4F0, size=256 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8076A4F0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8076A4F8
    /* lis r5, 0 */ // 0x8076A4FC
    *(0x24 + r1) = r0; // stw @ 0x8076A500
    r4 = r4 + 0; // 0x8076A504
    /* lfs f0, 0x4c(r4) */ // 0x8076A508
    r5 = r5 + 0; // 0x8076A50C
    *(0x1c + r1) = r31; // stw @ 0x8076A510
    r31 = r3;
    /* lfs f2, 0x110(r3) */ // 0x8076A518
    /* fabs f1, f2 */ // 0x8076A51C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8076A520
    if (<=) goto 0x0x8076a53c;
    /* lfs f1, 0x90(r5) */ // 0x8076A528
    /* lfs f0, 0x7c(r5) */ // 0x8076A52C
    /* fdivs f0, f1, f0 */ // 0x8076A530
    /* fadds f0, f2, f0 */ // 0x8076A534
    /* stfs f0, 0x110(r3) */ // 0x8076A538
    /* lfs f1, 0x4ec(r3) */ // 0x8076A53C
    /* lfs f3, 0x10c(r3) */ // 0x8076A540
    /* lfs f0, 0x4f4(r3) */ // 0x8076A544
    /* fmuls f1, f1, f3 */ // 0x8076A548
    /* lfs f2, 0xd8(r4) */ // 0x8076A54C
    /* fmuls f0, f0, f3 */ // 0x8076A550
    r0 = *(0x48c + r3); // lbz @ 0x8076A554
    /* fmuls f1, f2, f1 */ // 0x8076A558
    /* fmuls f0, f2, f0 */ // 0x8076A560
    /* stfs f1, 0xf4(r3) */ // 0x8076A564
    /* stfs f0, 0xfc(r3) */ // 0x8076A568
    if (==) goto 0x0x8076a5c0;
    /* lfs f0, 4(r4) */ // 0x8076A570
    /* lis r4, 0 */ // 0x8076A574
    /* stfs f0, 0xf8(r3) */ // 0x8076A578
    r4 = r4 + 0; // 0x8076A580
    /* lfs f1, 0xc(r5) */ // 0x8076A584
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    /* lfs f1, 0x100(r31) */ // 0x8076A58C
    /* lfs f0, 8(r1) */ // 0x8076A590
    /* lfs f2, 0x104(r31) */ // 0x8076A594
    /* fadds f0, f1, f0 */ // 0x8076A598
    /* lfs f1, 0x108(r31) */ // 0x8076A59C
    /* stfs f0, 0x100(r31) */ // 0x8076A5A0
    /* lfs f0, 0xc(r1) */ // 0x8076A5A4
    /* fadds f0, f2, f0 */ // 0x8076A5A8
    /* stfs f0, 0x104(r31) */ // 0x8076A5AC
    /* lfs f0, 0x10(r1) */ // 0x8076A5B0
    /* fadds f0, f1, f0 */ // 0x8076A5B4
    /* stfs f0, 0x108(r31) */ // 0x8076A5B8
    /* b 0x8076a5c8 */ // 0x8076A5BC
    /* lfs f0, 4(r4) */ // 0x8076A5C0
    /* stfs f0, 0x104(r3) */ // 0x8076A5C4
    r0 = *(0xbc + r31); // lwz @ 0x8076A5C8
    if (<=) goto 0x0x8076a5dc;
    /* li r0, 0 */ // 0x8076A5D4
    *(0xb8 + r31) = r0; // stw @ 0x8076A5D8
    r0 = *(0x24 + r1); // lwz @ 0x8076A5DC
    r31 = *(0x1c + r1); // lwz @ 0x8076A5E0
    return;
}