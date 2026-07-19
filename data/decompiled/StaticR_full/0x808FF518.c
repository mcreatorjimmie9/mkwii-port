/* Function at 0x808FF518, size=324 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_808FF518(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x808FF520
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x808FF530
    *(0x24 + r1) = r29; // stw @ 0x808FF534
    *(0x20 + r1) = r28; // stw @ 0x808FF538
    r0 = *(0x14c + r3); // lwz @ 0x808FF53C
    r4 = *(0 + r4); // lwz @ 0x808FF540
    if (>) goto 0x0x808ff5dc;
    r0 = *(0x54 + r3); // lbz @ 0x808FF54C
    if (==) goto 0x0x808ff560;
    r5 = r3 + 0x48; // 0x808FF558
    /* b 0x808ff590 */ // 0x808FF55C
    /* li r0, 1 */ // 0x808FF560
    *(0x54 + r3) = r0; // stb @ 0x808FF564
    r4 = r31 + 0x58; // 0x808FF56C
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x808FF574
    r5 = r31 + 0x48; // 0x808FF578
    /* stfs f0, 0x48(r31) */ // 0x808FF57C
    /* lfs f0, 0xc(r1) */ // 0x808FF580
    /* stfs f0, 0x4c(r31) */ // 0x808FF584
    /* lfs f0, 0x10(r1) */ // 0x808FF588
    /* stfs f0, 0x50(r31) */ // 0x808FF58C
    /* lis r3, 0 */ // 0x808FF590
    /* lis r4, 0 */ // 0x808FF594
    /* lfs f0, 0(r3) */ // 0x808FF598
    /* lis r0, 0x4330 */ // 0x808FF59C
    /* lfs f1, 4(r5) */ // 0x808FF5A0
    /* lis r3, 0 */ // 0x808FF5A4
    r28 = *(0 + r4); // lwz @ 0x808FF5A8
    /* fdivs f2, f1, f0 */ // 0x808FF5AC
    *(0x1c + r1) = r28; // stw @ 0x808FF5B0
    /* lfd f1, 0(r3) */ // 0x808FF5B4
    *(0x18 + r1) = r0; // stw @ 0x808FF5B8
    /* lfd f0, 0x18(r1) */ // 0x808FF5BC
    /* fsubs f0, f0, f1 */ // 0x808FF5C0
    /* fmuls f1, f2, f0 */ // 0x808FF5C4
    FUN_805E3430(); // bl 0x805E3430
    r0 = r3 u/ r28; // 0x808FF5CC
    r0 = r0 * r28; // 0x808FF5D0
    /* subf r0, r0, r3 */ // 0x808FF5D4
    *(0x14c + r31) = r0; // stw @ 0x808FF5D8
    r12 = *(0 + r31); // lwz @ 0x808FF5DC
    r3 = r31;
    /* li r4, 0 */ // 0x808FF5E4
    r12 = *(0x68 + r12); // lwz @ 0x808FF5E8
    /* mtctr r12 */ // 0x808FF5EC
    /* bctrl  */ // 0x808FF5F0
    /* li r29, 0 */ // 0x808FF5F4
    /* li r28, 0 */ // 0x808FF5F8
    /* li r30, 0 */ // 0x808FF5FC
    /* b 0x808ff638 */ // 0x808FF600
    r0 = *(0x314 + r31); // lwz @ 0x808FF604
    r3 = r0 + r28; // 0x808FF608
    *(8 + r3) = r30; // stw @ 0x808FF60C
    r3 = *(0x314 + r31); // lwz @ 0x808FF610
    /* lwzx r3, r3, r28 */ // 0x808FF614
    if (==) goto 0x0x808ff630;
    r12 = *(0 + r3); // lwz @ 0x808FF620
    r12 = *(0x10 + r12); // lwz @ 0x808FF624
    /* mtctr r12 */ // 0x808FF628
    /* bctrl  */ // 0x808FF62C
    r28 = r28 + 0x64; // 0x808FF630
    r29 = r29 + 1; // 0x808FF634
    r0 = *(0x310 + r31); // lwz @ 0x808FF638
    if (<) goto 0x0x808ff604;
    /* li r0, 0 */ // 0x808FF644
    *(0x308 + r31) = r0; // stw @ 0x808FF648
    r31 = *(0x2c + r1); // lwz @ 0x808FF64C
    r30 = *(0x28 + r1); // lwz @ 0x808FF650
    r29 = *(0x24 + r1); // lwz @ 0x808FF654
    r28 = *(0x20 + r1); // lwz @ 0x808FF658
}