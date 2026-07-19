/* Function at 0x8089A408, size=744 bytes */
/* Stack frame: 32 bytes */

int FUN_8089A408(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r0, 0x4330 */ // 0x8089A40C
    r8 = *(0x130 + r3); // lwz @ 0x8089A410
    *(8 + r1) = r0; // stw @ 0x8089A414
    /* lfs f1, 0x118(r3) */ // 0x8089A41C
    *(0x10 + r1) = r0; // stw @ 0x8089A420
    if (>=) goto 0x0x8089a430;
    /* li r6, 0 */ // 0x8089A428
    /* b 0x8089a474 */ // 0x8089A42C
    r0 = *(0x134 + r3); // lwz @ 0x8089A430
    if (>=) goto 0x0x8089a444;
    /* li r6, 1 */ // 0x8089A43C
    /* b 0x8089a474 */ // 0x8089A440
    r7 = *(0x138 + r3); // lwz @ 0x8089A444
    if (>=) goto 0x0x8089a458;
    /* li r6, 2 */ // 0x8089A450
    /* b 0x8089a474 */ // 0x8089A454
    /* lis r5, 0 */ // 0x8089A458
    /* li r6, 4 */ // 0x8089A45C
    r0 = *(0 + r5); // lwz @ 0x8089A460
    r0 = r7 + r0; // 0x8089A464
    if (>=) goto 0x0x8089a474;
    /* li r6, 3 */ // 0x8089A470
    if (==) goto 0x0x8089a490;
    if (==) goto 0x0x8089a5b8;
    if (==) goto 0x0x8089a6bc;
    /* b 0x8089a6e8 */ // 0x8089A48C
    if (>=) goto 0x0x8089a4b4;
    /* xoris r0, r4, 0x8000 */ // 0x8089A498
    *(0xc + r1) = r0; // stw @ 0x8089A49C
    /* lis r3, 0 */ // 0x8089A4A0
    /* lfd f2, 0(r3) */ // 0x8089A4A4
    /* lfd f0, 8(r1) */ // 0x8089A4A8
    /* fsubs f0, f0, f2 */ // 0x8089A4AC
    /* b 0x8089a560 */ // 0x8089A4B0
    r0 = *(0x134 + r3); // lwz @ 0x8089A4B4
    if (>=) goto 0x0x8089a4e0;
    /* subf r0, r8, r4 */ // 0x8089A4C0
    /* lis r3, 0 */ // 0x8089A4C4
    /* xoris r0, r0, 0x8000 */ // 0x8089A4C8
    *(0x14 + r1) = r0; // stw @ 0x8089A4CC
    /* lfd f2, 0(r3) */ // 0x8089A4D0
    /* lfd f0, 0x10(r1) */ // 0x8089A4D4
    /* fsubs f0, f0, f2 */ // 0x8089A4D8
    /* b 0x8089a560 */ // 0x8089A4DC
    r5 = *(0x138 + r3); // lwz @ 0x8089A4E0
    if (>=) goto 0x0x8089a50c;
    /* subf r0, r0, r4 */ // 0x8089A4EC
    /* lis r3, 0 */ // 0x8089A4F0
    /* xoris r0, r0, 0x8000 */ // 0x8089A4F4
    *(0xc + r1) = r0; // stw @ 0x8089A4F8
    /* lfd f2, 0(r3) */ // 0x8089A4FC
    /* lfd f0, 8(r1) */ // 0x8089A500
    /* fsubs f0, f0, f2 */ // 0x8089A504
    /* b 0x8089a560 */ // 0x8089A508
    /* lis r3, 0 */ // 0x8089A50C
    r6 = *(0 + r3); // lwz @ 0x8089A510
    r0 = r5 + r6; // 0x8089A514
    if (>=) goto 0x0x8089a540;
    /* subf r0, r5, r4 */ // 0x8089A520
    /* lis r3, 0 */ // 0x8089A524
    /* xoris r0, r0, 0x8000 */ // 0x8089A528
    *(0x14 + r1) = r0; // stw @ 0x8089A52C
    /* lfd f2, 0(r3) */ // 0x8089A530
    /* lfd f0, 0x10(r1) */ // 0x8089A534
    /* fsubs f0, f0, f2 */ // 0x8089A538
    /* b 0x8089a560 */ // 0x8089A53C
    /* subf r0, r5, r4 */ // 0x8089A540
    /* lis r3, 0 */ // 0x8089A544
    /* subf r0, r6, r0 */ // 0x8089A548
    /* lfd f2, 0(r3) */ // 0x8089A54C
    /* xoris r0, r0, 0x8000 */ // 0x8089A550
    *(0xc + r1) = r0; // stw @ 0x8089A554
    /* lfd f0, 8(r1) */ // 0x8089A558
    /* fsubs f0, f0, f2 */ // 0x8089A55C
    /* fctiwz f0, f0 */ // 0x8089A560
    /* stfd f0, 0x18(r1) */ // 0x8089A564
    r3 = *(0x1c + r1); // lwz @ 0x8089A568
    /* slwi r0, r3, 0x1d */ // 0x8089A56C
    /* srwi r3, r3, 0x1f */ // 0x8089A570
    /* subf r0, r3, r0 */ // 0x8089A574
    /* rotlwi r0, r0, 3 */ // 0x8089A578
    r3 = r0 + r3; // 0x8089A57C
    r4 = r3 + 1; // 0x8089A580
    if (<=) goto 0x0x8089a590;
    /* subfic r4, r4, 4 */ // 0x8089A58C
    /* slwi r0, r4, 2 */ // 0x8089A590
    /* lis r3, 0 */ // 0x8089A594
    r0 = r0 + r4; // 0x8089A598
    /* lfd f2, 0(r3) */ // 0x8089A59C
    /* xoris r0, r0, 0x8000 */ // 0x8089A5A0
    *(0x14 + r1) = r0; // stw @ 0x8089A5A4
    /* lfd f0, 0x10(r1) */ // 0x8089A5A8
    /* fsubs f0, f0, f2 */ // 0x8089A5AC
    /* fadds f1, f1, f0 */ // 0x8089A5B0
    /* b 0x8089a6e8 */ // 0x8089A5B4
    if (>=) goto 0x0x8089a5dc;
    /* xoris r0, r4, 0x8000 */ // 0x8089A5C0
    *(0xc + r1) = r0; // stw @ 0x8089A5C4
    /* lis r4, 0 */ // 0x8089A5C8
    /* lfd f2, 0(r4) */ // 0x8089A5CC
    /* lfd f0, 8(r1) */ // 0x8089A5D0
    /* fsubs f0, f0, f2 */ // 0x8089A5D4
    /* b 0x8089a688 */ // 0x8089A5D8
    r0 = *(0x134 + r3); // lwz @ 0x8089A5DC
    if (>=) goto 0x0x8089a608;
    /* subf r0, r8, r4 */ // 0x8089A5E8
    /* lis r4, 0 */ // 0x8089A5EC
    /* xoris r0, r0, 0x8000 */ // 0x8089A5F0
    *(0x14 + r1) = r0; // stw @ 0x8089A5F4
    /* lfd f2, 0(r4) */ // 0x8089A5F8
    /* lfd f0, 0x10(r1) */ // 0x8089A5FC
    /* fsubs f0, f0, f2 */ // 0x8089A600
    /* b 0x8089a688 */ // 0x8089A604
    r6 = *(0x138 + r3); // lwz @ 0x8089A608
    if (>=) goto 0x0x8089a634;
    /* subf r0, r0, r4 */ // 0x8089A614
    /* lis r4, 0 */ // 0x8089A618
    /* xoris r0, r0, 0x8000 */ // 0x8089A61C
    *(0xc + r1) = r0; // stw @ 0x8089A620
    /* lfd f2, 0(r4) */ // 0x8089A624
    /* lfd f0, 8(r1) */ // 0x8089A628
    /* fsubs f0, f0, f2 */ // 0x8089A62C
    /* b 0x8089a688 */ // 0x8089A630
    /* lis r5, 0 */ // 0x8089A634
    r5 = *(0 + r5); // lwz @ 0x8089A638
    r0 = r6 + r5; // 0x8089A63C
    if (>=) goto 0x0x8089a668;
    /* subf r0, r6, r4 */ // 0x8089A648
    /* lis r4, 0 */ // 0x8089A64C
    /* xoris r0, r0, 0x8000 */ // 0x8089A650
    *(0x14 + r1) = r0; // stw @ 0x8089A654
    /* lfd f2, 0(r4) */ // 0x8089A658
    /* lfd f0, 0x10(r1) */ // 0x8089A65C
    /* fsubs f0, f0, f2 */ // 0x8089A660
    /* b 0x8089a688 */ // 0x8089A664
    /* subf r0, r6, r4 */ // 0x8089A668
    /* lis r4, 0 */ // 0x8089A66C
    /* subf r0, r5, r0 */ // 0x8089A670
    /* lfd f2, 0(r4) */ // 0x8089A674
    /* xoris r0, r0, 0x8000 */ // 0x8089A678
    *(0xc + r1) = r0; // stw @ 0x8089A67C
    /* lfd f0, 8(r1) */ // 0x8089A680
    /* fsubs f0, f0, f2 */ // 0x8089A684
    /* fctiwz f0, f0 */ // 0x8089A688
    /* lis r4, 0 */ // 0x8089A68C
    /* lfd f3, 0(r4) */ // 0x8089A690
    /* stfd f0, 0x18(r1) */ // 0x8089A694
    /* lfs f0, 0x12c(r3) */ // 0x8089A698
    r0 = *(0x1c + r1); // lwz @ 0x8089A69C
    /* xoris r0, r0, 0x8000 */ // 0x8089A6A0
    *(0x14 + r1) = r0; // stw @ 0x8089A6A4
    /* lfd f2, 0x10(r1) */ // 0x8089A6A8
    /* fsubs f2, f2, f3 */ // 0x8089A6AC
    /* fmuls f0, f0, f2 */ // 0x8089A6B0
    /* fsubs f1, f1, f0 */ // 0x8089A6B4
    /* b 0x8089a6e8 */ // 0x8089A6B8
    /* lis r5, 0 */ // 0x8089A6BC
    /* lis r4, 0 */ // 0x8089A6C0
    r0 = *(0 + r5); // lwz @ 0x8089A6C4
    /* lfd f3, 0(r4) */ // 0x8089A6C8
    /* xoris r0, r0, 0x8000 */ // 0x8089A6CC
    *(0xc + r1) = r0; // stw @ 0x8089A6D0
    /* lfs f0, 0x12c(r3) */ // 0x8089A6D4
    /* lfd f2, 8(r1) */ // 0x8089A6D8
    /* fsubs f2, f2, f3 */ // 0x8089A6DC
    /* fmuls f0, f0, f2 */ // 0x8089A6E0
    /* fsubs f1, f1, f0 */ // 0x8089A6E4
    return;
}