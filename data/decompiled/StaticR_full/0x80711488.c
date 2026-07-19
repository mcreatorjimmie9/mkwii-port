/* Function at 0x80711488, size=224 bytes */
/* Stack frame: 48 bytes */

void FUN_80711488(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* lis r4, 0 */ // 0x80711488
    /* lis r5, 0 */ // 0x8071148C
    /* lfd f2, 0(r4) */ // 0x80711490
    /* li r4, 0 */ // 0x80711494
    /* lis r8, 0x4330 */ // 0x8071149C
    /* lfs f0, 0(r5) */ // 0x807114A0
    /* b 0x80711550 */ // 0x807114A4
    /* li r12, 0 */ // 0x807114A8
    /* b 0x8071153c */ // 0x807114AC
    r7 = *(0xc0 + r3); // lwz @ 0x807114B0
    r0 = r0 * r4; // 0x807114B4
    r5 = *(0xe0 + r3); // lwz @ 0x807114B8
    r11 = *(0xc4 + r3); // lwz @ 0x807114BC
    /* srwi r6, r7, 0x1f */ // 0x807114C0
    r9 = *(0xe4 + r3); // lwz @ 0x807114C4
    r7 = r6 + r7; // 0x807114C8
    r6 = r5 * r12; // 0x807114CC
    /* srwi r10, r11, 0x1f */ // 0x807114D0
    r0 = r12 + r0; // 0x807114D4
    *(0x20 + r1) = r8; // stw @ 0x807114D8
    r10 = r10 + r11; // 0x807114DC
    r5 = *(0xac + r3); // lwz @ 0x807114E0
    r10 = r10 >> 1; // srawi
    *(0x18 + r1) = r8; // stw @ 0x807114E8
    r7 = r7 >> 1; // srawi
    /* subf r6, r7, r6 */ // 0x807114F4
    /* stfs f0, 0xc(r1) */ // 0x807114F8
    /* xoris r6, r6, 0x8000 */ // 0x807114FC
    *(0x24 + r1) = r6; // stw @ 0x80711500
    r9 = r9 * r4; // 0x80711504
    /* lfd f1, 0x20(r1) */ // 0x80711508
    /* fsubs f3, f1, f2 */ // 0x8071150C
    /* mulli r0, r0, 0xc */ // 0x80711510
    /* subf r6, r10, r9 */ // 0x80711514
    /* stfs f3, 8(r1) */ // 0x80711518
    /* xoris r6, r6, 0x8000 */ // 0x8071151C
    *(0x1c + r1) = r6; // stw @ 0x80711520
    /* lfd f1, 0x18(r1) */ // 0x80711524
    /* stfsux f3, r5, r0 */ // 0x80711528
    /* fsubs f1, f1, f2 */ // 0x8071152C
    /* stfs f0, 4(r5) */ // 0x80711530
    /* stfs f1, 0x10(r1) */ // 0x80711534
    /* stfs f1, 8(r5) */ // 0x80711538
    r5 = *(0xd8 + r3); // lwz @ 0x8071153C
    r0 = r5 + 1; // 0x80711540
    if (<) goto 0x0x807114b0;
    r4 = r4 + 1; // 0x8071154C
    r5 = *(0xdc + r3); // lwz @ 0x80711550
    r0 = r5 + 1; // 0x80711554
    if (<) goto 0x0x807114a8;
    return;
}