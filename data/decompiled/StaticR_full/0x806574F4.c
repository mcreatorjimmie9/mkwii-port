/* Function at 0x806574F4, size=316 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_806574F4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r7, 0x4330 */ // 0x806574FC
    /* lis r5, 0 */ // 0x80657500
    /* slwi r0, r4, 2 */ // 0x80657508
    *(0x2c + r1) = r31; // stw @ 0x8065750C
    *(0x28 + r1) = r30; // stw @ 0x80657510
    *(0x24 + r1) = r29; // stw @ 0x80657514
    *(0x20 + r1) = r28; // stw @ 0x80657518
    r28 = r3;
    r6 = *(0 + r3); // lwz @ 0x80657520
    r5 = *(0 + r5); // lwz @ 0x80657524
    r30 = *(0 + r6); // lwz @ 0x80657528
    /* lwzx r29, r5, r0 */ // 0x8065752C
    *(0xc + r3) = r29; // stw @ 0x80657530
    r3 = r29;
    r12 = *(0 + r29); // lwz @ 0x80657538
    *(8 + r1) = r7; // stw @ 0x8065753C
    r12 = *(0xc + r12); // lwz @ 0x80657540
    *(0x10 + r1) = r7; // stw @ 0x80657544
    /* mtctr r12 */ // 0x80657548
    /* bctrl  */ // 0x8065754C
    /* xoris r0, r3, 0x8000 */ // 0x80657550
    *(0xc + r1) = r0; // stw @ 0x80657554
    /* lis r31, 0 */ // 0x80657558
    /* lfs f0, 0xe8(r30) */ // 0x8065755C
    /* lfd f2, 0(r31) */ // 0x80657560
    r3 = r29;
    /* lfd f1, 8(r1) */ // 0x80657568
    /* fsubs f1, f1, f2 */ // 0x8065756C
    /* fdivs f0, f0, f1 */ // 0x80657570
    /* stfs f0, 0x10(r28) */ // 0x80657574
    r12 = *(0 + r29); // lwz @ 0x80657578
    r12 = *(0x10 + r12); // lwz @ 0x8065757C
    /* mtctr r12 */ // 0x80657580
    /* bctrl  */ // 0x80657584
    /* xoris r0, r3, 0x8000 */ // 0x80657588
    *(0x14 + r1) = r0; // stw @ 0x8065758C
    /* lfd f2, 0(r31) */ // 0x80657590
    r3 = r29;
    /* lfd f1, 0x10(r1) */ // 0x80657598
    /* lfs f0, 0xec(r30) */ // 0x8065759C
    /* fsubs f1, f1, f2 */ // 0x806575A0
    /* fdivs f0, f0, f1 */ // 0x806575A4
    /* stfs f0, 0x14(r28) */ // 0x806575A8
    r12 = *(0 + r29); // lwz @ 0x806575AC
    r12 = *(0x14 + r12); // lwz @ 0x806575B0
    /* mtctr r12 */ // 0x806575B4
    /* bctrl  */ // 0x806575B8
    /* xoris r0, r3, 0x8000 */ // 0x806575BC
    *(0xc + r1) = r0; // stw @ 0x806575C0
    /* lfd f2, 0(r31) */ // 0x806575C4
    r3 = r29;
    /* lfd f1, 8(r1) */ // 0x806575CC
    /* lfs f0, 0x14(r28) */ // 0x806575D0
    /* fsubs f1, f1, f2 */ // 0x806575D4
    /* fmuls f0, f0, f1 */ // 0x806575D8
    /* stfs f0, 0x18(r28) */ // 0x806575DC
    r12 = *(0 + r29); // lwz @ 0x806575E0
    r12 = *(0x18 + r12); // lwz @ 0x806575E4
    /* mtctr r12 */ // 0x806575E8
    /* bctrl  */ // 0x806575EC
    /* xoris r0, r3, 0x8000 */ // 0x806575F0
    *(0x14 + r1) = r0; // stw @ 0x806575F4
    /* lfd f2, 0(r31) */ // 0x806575F8
    /* lfd f1, 0x10(r1) */ // 0x806575FC
    /* lfs f0, 0x14(r28) */ // 0x80657600
    /* fsubs f1, f1, f2 */ // 0x80657604
    /* fmuls f0, f0, f1 */ // 0x80657608
    /* stfs f0, 0x1c(r28) */ // 0x8065760C
    r31 = *(0x2c + r1); // lwz @ 0x80657610
    r30 = *(0x28 + r1); // lwz @ 0x80657614
    r29 = *(0x24 + r1); // lwz @ 0x80657618
    r28 = *(0x20 + r1); // lwz @ 0x8065761C
    r0 = *(0x34 + r1); // lwz @ 0x80657620
    return;
}