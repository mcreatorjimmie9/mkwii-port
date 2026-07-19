/* Function at 0x806466E0, size=328 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_806466E0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x98 + r1) = r30; // stw @ 0x806466F4
    /* lis r30, 0 */ // 0x806466F8
    r30 = r30 + 0; // 0x806466FC
    r0 = *(0x40 + r3); // lwz @ 0x80646700
    if (!=) goto 0x0x80646900;
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* lfs f1, 0x20(r3) */ // 0x80646710
    /* lfs f0, 0x50(r30) */ // 0x80646714
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80646718
    if (>=) goto 0x0x80646900;
    r3 = *(0x16 + r31); // lha @ 0x80646720
    r0 = *(0x20 + r30); // lha @ 0x80646724
    if (!=) goto 0x0x8064678c;
    r0 = *(0x22 + r30); // lha @ 0x80646730
    r4 = r31;
    *(0x54 + r31) = r0; // stw @ 0x80646738
    r5 = *(0x3d + r31); // lbz @ 0x80646740
    /* li r6, 0 */ // 0x80646744
    FUN_80645F8C(r4, r3, r6); // bl 0x80645F8C
    r3 = r31;
    FUN_8061DA88(r3, r6, r3); // bl 0x8061DA88
    r0 = *(4 + r3); // lwz @ 0x80646754
    *(0x78 + r1) = r0; // stw @ 0x80646758
    r4 = *(0 + r3); // lwz @ 0x8064675C
    /* lfs f1, 0x84(r1) */ // 0x80646760
    /* lfs f0, 0x78(r1) */ // 0x80646764
    r0 = *(8 + r3); // lwz @ 0x80646768
    /* fsubs f1, f1, f0 */ // 0x8064676C
    *(0x74 + r1) = r4; // stw @ 0x80646770
    /* stfs f1, 0x58(r31) */ // 0x80646774
    /* lfs f0, 0x48(r30) */ // 0x80646778
    *(0x7c + r1) = r0; // stw @ 0x8064677C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80646780
    if (>=) goto 0x0x8064678c;
    /* stfs f0, 0x58(r31) */ // 0x80646788
    r3 = *(0x16 + r31); // lha @ 0x8064678C
    r0 = *(0x24 + r30); // lha @ 0x80646790
    if (!=) goto 0x0x80646900;
    r0 = *(0x26 + r30); // lha @ 0x8064679C
    r4 = r31;
    *(0x5c + r31) = r0; // stw @ 0x806467A4
    /* li r5, 0 */ // 0x806467AC
    /* li r6, 0 */ // 0x806467B0
    FUN_80645F8C(r4, r3, r5, r6); // bl 0x80645F8C
    r4 = r31;
    /* li r5, 0 */ // 0x806467C0
    /* li r6, 0 */ // 0x806467C4
    FUN_80645EAC(r4, r3, r5, r6); // bl 0x80645EAC
    FUN_805A4498(r6, r3, r4, r5); // bl 0x805A4498
    r4 = r31;
    /* li r5, 0 */ // 0x806467E4
    /* li r6, 0 */ // 0x806467E8
    FUN_80645F8C(r4, r3, r5, r6); // bl 0x80645F8C
    r3 = r31;
    FUN_8061DA88(r3, r5, r6, r3); // bl 0x8061DA88
    r5 = r3;
    FUN_805A4498(r3, r5, r3, r4); // bl 0x805A4498
    /* lfs f1, 0x68(r1) */ // 0x80646808
    /* lis r4, 0 */ // 0x8064680C
    /* lfs f0, 0x6c(r1) */ // 0x80646810
    /* lis r3, 0 */ // 0x80646814
    /* fmuls f2, f1, f1 */ // 0x80646818
    /* lfs f4, 0(r4) */ // 0x8064681C
    /* fmuls f1, f0, f0 */ // 0x80646820
    /* lfs f3, 0x70(r1) */ // 0x80646824
}