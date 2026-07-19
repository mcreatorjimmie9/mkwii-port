/* Function at 0x8078355C, size=464 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8078355C(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8078356C
    r31 = r31 + 0; // 0x80783570
    *(0x28 + r1) = r30; // stw @ 0x80783574
    r30 = r3;
    r0 = *(0x400 + r3); // lbz @ 0x8078357C
    if (==) goto 0x0x807835d0;
    /* lis r3, 0 */ // 0x80783588
    /* lis r4, 0 */ // 0x8078358C
    /* lfs f1, 0(r3) */ // 0x80783590
    r4 = r4 + 0; // 0x80783598
    FUN_805A443C(r3, r4, r3, r4); // bl 0x805A443C
    /* lfs f1, 0x3c4(r30) */ // 0x807835A0
    /* lfs f0, 8(r1) */ // 0x807835A4
    /* lfs f2, 0x3c8(r30) */ // 0x807835A8
    /* fadds f0, f1, f0 */ // 0x807835AC
    /* lfs f1, 0x3cc(r30) */ // 0x807835B0
    /* stfs f0, 0x3c4(r30) */ // 0x807835B4
    /* lfs f0, 0xc(r1) */ // 0x807835B8
    /* fadds f0, f2, f0 */ // 0x807835BC
    /* stfs f0, 0x3c8(r30) */ // 0x807835C0
    /* lfs f0, 0x10(r1) */ // 0x807835C4
    /* fadds f0, f1, f0 */ // 0x807835C8
    /* stfs f0, 0x3cc(r30) */ // 0x807835CC
    /* lfs f2, 0x3f4(r30) */ // 0x807835D0
    /* lfs f0, 0x28(r31) */ // 0x807835D4
    /* fabs f1, f2 */ // 0x807835D8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807835DC
    if (<=) goto 0x0x80783634;
    /* fctiwz f0, f2 */ // 0x807835E4
    /* lis r3, -0x49f5 */ // 0x807835E8
    /* lis r0, 0x4330 */ // 0x807835EC
    *(0x20 + r1) = r0; // stw @ 0x807835F0
    r3 = r3 + 0x60b7; // 0x807835F4
    /* lfd f1, 0x38(r31) */ // 0x807835F8
    /* stfd f0, 0x18(r1) */ // 0x807835FC
    r0 = *(0x1c + r1); // lwz @ 0x80783600
    /* mulhw r3, r3, r0 */ // 0x80783604
    r0 = r3 + r0; // 0x80783608
    r0 = r0 >> 8; // srawi
    /* srwi r3, r0, 0x1f */ // 0x80783610
    r0 = r0 + r3; // 0x80783614
    /* mulli r0, r0, 0x168 */ // 0x80783618
    /* xoris r0, r0, 0x8000 */ // 0x8078361C
    *(0x24 + r1) = r0; // stw @ 0x80783620
    /* lfd f0, 0x20(r1) */ // 0x80783624
    /* fsubs f0, f0, f1 */ // 0x80783628
    /* fsubs f0, f2, f0 */ // 0x8078362C
    /* stfs f0, 0x3f4(r30) */ // 0x80783630
    /* lfs f1, 0x3f4(r30) */ // 0x80783634
    /* lfs f0, 0x2c(r31) */ // 0x80783638
    /* fabs f2, f1 */ // 0x8078363C
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x80783640
    if (>=) goto 0x0x80783654;
    /* lfs f0, 0(r31) */ // 0x80783648
    /* stfs f0, 0x3f4(r30) */ // 0x8078364C
    /* b 0x80783660 */ // 0x80783650
    /* lfs f0, 0x30(r31) */ // 0x80783654
    /* fadds f0, f1, f0 */ // 0x80783658
    /* stfs f0, 0x3f4(r30) */ // 0x8078365C
    /* lfs f2, 0x3f8(r30) */ // 0x80783660
    /* lfs f0, 0x28(r31) */ // 0x80783664
    /* fabs f1, f2 */ // 0x80783668
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8078366C
    if (<=) goto 0x0x807836c4;
    /* fctiwz f0, f2 */ // 0x80783674
    /* lis r3, -0x49f5 */ // 0x80783678
    /* lis r0, 0x4330 */ // 0x8078367C
    *(0x18 + r1) = r0; // stw @ 0x80783680
    r3 = r3 + 0x60b7; // 0x80783684
    /* lfd f1, 0x38(r31) */ // 0x80783688
    /* stfd f0, 0x20(r1) */ // 0x8078368C
    r0 = *(0x24 + r1); // lwz @ 0x80783690
    /* mulhw r3, r3, r0 */ // 0x80783694
    r0 = r3 + r0; // 0x80783698
    r0 = r0 >> 8; // srawi
    /* srwi r3, r0, 0x1f */ // 0x807836A0
    r0 = r0 + r3; // 0x807836A4
    /* mulli r0, r0, 0x168 */ // 0x807836A8
    /* xoris r0, r0, 0x8000 */ // 0x807836AC
    *(0x1c + r1) = r0; // stw @ 0x807836B0
    /* lfd f0, 0x18(r1) */ // 0x807836B4
    /* fsubs f0, f0, f1 */ // 0x807836B8
    /* fsubs f0, f2, f0 */ // 0x807836BC
    /* stfs f0, 0x3f8(r30) */ // 0x807836C0
    /* lfs f1, 0x3f8(r30) */ // 0x807836C4
    /* lfs f0, 0x34(r31) */ // 0x807836C8
    /* fabs f1, f1 */ // 0x807836CC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807836D0
    if (>=) goto 0x0x807836e0;
    /* lfs f0, 0(r31) */ // 0x807836D8
    /* stfs f0, 0x3f8(r30) */ // 0x807836DC
    /* lfs f1, 0x3f8(r30) */ // 0x807836E0
    /* lfs f0, 0(r31) */ // 0x807836E4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807836E8
    if (<=) goto 0x0x80783700;
    /* lfs f0, 0x24(r31) */ // 0x807836F0
    /* fsubs f0, f1, f0 */ // 0x807836F4
    /* stfs f0, 0x3f8(r30) */ // 0x807836F8
    /* b 0x8078370c */ // 0x807836FC
    /* lfs f0, 0x24(r31) */ // 0x80783700
    /* fadds f0, f1, f0 */ // 0x80783704
    /* stfs f0, 0x3f8(r30) */ // 0x80783708
    r3 = r30;
    FUN_807848D0(r3); // bl 0x807848D0
    r0 = *(0x34 + r1); // lwz @ 0x80783714
    r31 = *(0x2c + r1); // lwz @ 0x80783718
    r30 = *(0x28 + r1); // lwz @ 0x8078371C
    return;
}