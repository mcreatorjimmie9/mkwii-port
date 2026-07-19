/* Function at 0x80658388, size=300 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_80658388(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r0, 0x4330 */ // 0x80658394
    r30 = r5;
    *(0x24 + r1) = r29; // stw @ 0x806583A4
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x806583AC
    r28 = r3;
    *(0 + r3) = r4; // stw @ 0x806583B4
    r3 = r29;
    r12 = *(0 + r29); // lwz @ 0x806583BC
    *(8 + r1) = r0; // stw @ 0x806583C0
    r12 = *(0xc + r12); // lwz @ 0x806583C4
    *(0x10 + r1) = r0; // stw @ 0x806583C8
    /* mtctr r12 */ // 0x806583CC
    /* bctrl  */ // 0x806583D0
    /* xoris r0, r3, 0x8000 */ // 0x806583D4
    *(0xc + r1) = r0; // stw @ 0x806583D8
    /* lis r31, 0 */ // 0x806583DC
    /* lfs f0, 0xe8(r30) */ // 0x806583E0
    /* lfd f2, 0(r31) */ // 0x806583E4
    r3 = r29;
    /* lfd f1, 8(r1) */ // 0x806583EC
    /* fsubs f1, f1, f2 */ // 0x806583F0
    /* fdivs f0, f0, f1 */ // 0x806583F4
    /* stfs f0, 4(r28) */ // 0x806583F8
    r12 = *(0 + r29); // lwz @ 0x806583FC
    r12 = *(0x10 + r12); // lwz @ 0x80658400
    /* mtctr r12 */ // 0x80658404
    /* bctrl  */ // 0x80658408
    /* xoris r0, r3, 0x8000 */ // 0x8065840C
    *(0x14 + r1) = r0; // stw @ 0x80658410
    /* lfd f2, 0(r31) */ // 0x80658414
    r3 = r29;
    /* lfd f1, 0x10(r1) */ // 0x8065841C
    /* lfs f0, 0xec(r30) */ // 0x80658420
    /* fsubs f1, f1, f2 */ // 0x80658424
    /* fdivs f0, f0, f1 */ // 0x80658428
    /* stfs f0, 8(r28) */ // 0x8065842C
    r12 = *(0 + r29); // lwz @ 0x80658430
    r12 = *(0x14 + r12); // lwz @ 0x80658434
    /* mtctr r12 */ // 0x80658438
    /* bctrl  */ // 0x8065843C
    /* xoris r0, r3, 0x8000 */ // 0x80658440
    *(0xc + r1) = r0; // stw @ 0x80658444
    /* lfd f2, 0(r31) */ // 0x80658448
    r3 = r29;
    /* lfd f1, 8(r1) */ // 0x80658450
    /* lfs f0, 8(r28) */ // 0x80658454
    /* fsubs f1, f1, f2 */ // 0x80658458
    /* fmuls f0, f0, f1 */ // 0x8065845C
    /* stfs f0, 0xc(r28) */ // 0x80658460
    r12 = *(0 + r29); // lwz @ 0x80658464
    r12 = *(0x18 + r12); // lwz @ 0x80658468
    /* mtctr r12 */ // 0x8065846C
    /* bctrl  */ // 0x80658470
    /* xoris r0, r3, 0x8000 */ // 0x80658474
    *(0x14 + r1) = r0; // stw @ 0x80658478
    /* lfd f2, 0(r31) */ // 0x8065847C
    /* lfd f1, 0x10(r1) */ // 0x80658480
    /* lfs f0, 8(r28) */ // 0x80658484
    /* fsubs f1, f1, f2 */ // 0x80658488
    /* fmuls f0, f0, f1 */ // 0x8065848C
    /* stfs f0, 0x10(r28) */ // 0x80658490
    r31 = *(0x2c + r1); // lwz @ 0x80658494
    r30 = *(0x28 + r1); // lwz @ 0x80658498
    r29 = *(0x24 + r1); // lwz @ 0x8065849C
    r28 = *(0x20 + r1); // lwz @ 0x806584A0
    r0 = *(0x34 + r1); // lwz @ 0x806584A4
    return;
}