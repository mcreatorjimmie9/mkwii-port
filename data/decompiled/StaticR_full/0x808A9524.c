/* Function at 0x808A9524, size=220 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808A9524(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x808A952C
    *(0x34 + r1) = r0; // stw @ 0x808A9530
    /* lfs f1, 0(r5) */ // 0x808A9534
    *(0x2c + r1) = r31; // stw @ 0x808A9538
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x808A9540
    r4 = *(0xc8 + r31); // lha @ 0x808A9544
    r12 = *(0 + r3); // lwz @ 0x808A9548
    r12 = *(0x10 + r12); // lwz @ 0x808A954C
    /* mtctr r12 */ // 0x808A9550
    /* bctrl  */ // 0x808A9554
    r3 = *(0x20 + r31); // lwz @ 0x808A9558
    r0 = *(0x46 + r3); // lha @ 0x808A955C
    r4 = *(8 + r3); // lwz @ 0x808A9560
    /* slwi r0, r0, 4 */ // 0x808A9564
    r4 = r4 + r0; // 0x808A9568
    r5 = *(0xc + r4); // lhz @ 0x808A956C
    if (==) goto 0x0x808a95a4;
    /* lis r0, 0x4330 */ // 0x808A9578
    *(0x1c + r1) = r5; // stw @ 0x808A957C
    r12 = *(0 + r3); // lwz @ 0x808A9580
    /* lis r4, 0 */ // 0x808A9584
    *(0x18 + r1) = r0; // stw @ 0x808A9588
    /* lfd f1, 0(r4) */ // 0x808A958C
    /* lfd f0, 0x18(r1) */ // 0x808A9590
    r12 = *(0x18 + r12); // lwz @ 0x808A9594
    /* fsubs f1, f0, f1 */ // 0x808A9598
    /* mtctr r12 */ // 0x808A959C
    /* bctrl  */ // 0x808A95A0
    r4 = *(0x20 + r31); // lwz @ 0x808A95A4
    /* lis r5, 0 */ // 0x808A95A8
    r4 = r4 + 0x18; // 0x808A95B0
    r5 = r5 + 0; // 0x808A95B4
    FUN_805A4464(r5, r3, r4, r5); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x808A95BC
    r3 = r31;
    /* lfs f0, 0x10(r1) */ // 0x808A95C4
    /* li r4, 0 */ // 0x808A95C8
    /* lfs f1, 0xc(r1) */ // 0x808A95CC
    r0 = r0 | 1; // 0x808A95D0
    /* lfs f2, 8(r1) */ // 0x808A95D4
    /* stfs f2, 0x30(r31) */ // 0x808A95D8
    *(0x2c + r31) = r0; // sth @ 0x808A95DC
    /* stfs f1, 0x34(r31) */ // 0x808A95E0
    /* stfs f0, 0x38(r31) */ // 0x808A95E4
    FUN_808A0A44(); // bl 0x808A0A44
    r0 = *(0x34 + r1); // lwz @ 0x808A95EC
    r31 = *(0x2c + r1); // lwz @ 0x808A95F0
    return;
}