/* Function at 0x8090C470, size=360 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8090C470(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* lis r6, 0x4330 */ // 0x8090C478
    /* lis r5, 0 */ // 0x8090C47C
    *(0x54 + r1) = r0; // stw @ 0x8090C480
    *(0x4c + r1) = r31; // stw @ 0x8090C484
    r31 = r3;
    r5 = *(0 + r5); // lwz @ 0x8090C48C
    r7 = *(0x114 + r3); // lwz @ 0x8090C490
    r9 = *(0x20 + r5); // lwz @ 0x8090C494
    r5 = *(0x124 + r3); // lwz @ 0x8090C498
    /* subf r9, r4, r9 */ // 0x8090C49C
    r8 = *(0x118 + r3); // lwz @ 0x8090C4A0
    /* subfc r0, r7, r9 */ // 0x8090C4A4
    *(0x30 + r1) = r6; // stw @ 0x8090C4A8
    /* subfe r4, r0, r0 */ // 0x8090C4AC
    /* subf r0, r7, r9 */ // 0x8090C4B0
    *(0x38 + r1) = r6; // stw @ 0x8090C4B4
    /* andc r4, r0, r4 */ // 0x8090C4B8
    r0 = r4 u/ r5; // 0x8090C4BC
    r0 = r0 * r5; // 0x8090C4C0
    /* subf r5, r0, r4 */ // 0x8090C4C4
    if (>=) goto 0x0x8090c4dc;
    /* lis r4, 0 */ // 0x8090C4D0
    /* lfs f1, 0(r4) */ // 0x8090C4D4
    /* b 0x8090c568 */ // 0x8090C4D8
    r0 = *(0x11c + r3); // lwz @ 0x8090C4DC
    if (>=) goto 0x0x8090c518;
    r0 = *(0x110 + r3); // lwz @ 0x8090C4E8
    /* subf r4, r8, r5 */ // 0x8090C4EC
    *(0x34 + r1) = r4; // stw @ 0x8090C4F0
    /* lis r4, 0 */ // 0x8090C4F4
    /* lfd f2, 0(r4) */ // 0x8090C4F8
    *(0x3c + r1) = r0; // stw @ 0x8090C4FC
    /* lfd f1, 0x30(r1) */ // 0x8090C500
    /* lfd f0, 0x38(r1) */ // 0x8090C504
    /* fsubs f1, f1, f2 */ // 0x8090C508
    /* fsubs f0, f0, f2 */ // 0x8090C50C
    /* fdivs f1, f1, f0 */ // 0x8090C510
    /* b 0x8090c568 */ // 0x8090C514
    r4 = *(0x120 + r3); // lwz @ 0x8090C518
    if (>=) goto 0x0x8090c530;
    /* lis r4, 0 */ // 0x8090C524
    /* lfs f1, 0(r4) */ // 0x8090C528
    /* b 0x8090c568 */ // 0x8090C52C
    r0 = *(0x110 + r3); // lwz @ 0x8090C530
    /* subf r4, r4, r5 */ // 0x8090C534
    *(0x34 + r1) = r4; // stw @ 0x8090C538
    /* lis r5, 0 */ // 0x8090C53C
    /* lfd f3, 0(r5) */ // 0x8090C540
    /* lis r4, 0 */ // 0x8090C544
    *(0x3c + r1) = r0; // stw @ 0x8090C548
    /* lfd f0, 0x30(r1) */ // 0x8090C54C
    /* lfd f1, 0x38(r1) */ // 0x8090C550
    /* fsubs f2, f0, f3 */ // 0x8090C554
    /* lfs f0, 0(r4) */ // 0x8090C558
    /* fsubs f1, f1, f3 */ // 0x8090C55C
    /* fdivs f1, f2, f1 */ // 0x8090C560
    /* fsubs f1, f0, f1 */ // 0x8090C564
    r6 = *(0x128 + r3); // lwz @ 0x8090C568
    r0 = *(0x12c + r3); // lwz @ 0x8090C570
    *(0x24 + r1) = r0; // stw @ 0x8090C578
    *(0x20 + r1) = r6; // stw @ 0x8090C57C
    r0 = *(0x130 + r3); // lwz @ 0x8090C580
    *(0x28 + r1) = r0; // stw @ 0x8090C584
    r6 = *(0x134 + r3); // lwz @ 0x8090C588
    r0 = *(0x138 + r3); // lwz @ 0x8090C58C
    *(0x18 + r1) = r0; // stw @ 0x8090C590
    *(0x14 + r1) = r6; // stw @ 0x8090C594
    r0 = *(0x13c + r3); // lwz @ 0x8090C598
    *(0x1c + r1) = r0; // stw @ 0x8090C5A0
    FUN_808FC72C(r3); // bl 0x808FC72C
    /* lfs f0, 8(r1) */ // 0x8090C5A8
    r3 = r31 + 0x140; // 0x8090C5AC
    /* stfs f0, 0x14c(r31) */ // 0x8090C5B0
    /* lfs f0, 0xc(r1) */ // 0x8090C5B4
    /* stfs f0, 0x15c(r31) */ // 0x8090C5B8
    /* lfs f0, 0x10(r1) */ // 0x8090C5BC
    /* stfs f0, 0x16c(r31) */ // 0x8090C5C0
    r31 = *(0x4c + r1); // lwz @ 0x8090C5C4
    r0 = *(0x54 + r1); // lwz @ 0x8090C5C8
    return;
}