/* Function at 0x807BCEBC, size=288 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_807BCEBC(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0 */ // 0x807BCEC8
    /* lis r31, 0 */ // 0x807BCED0
    r31 = r31 + 0; // 0x807BCED4
    *(0x28 + r1) = r30; // stw @ 0x807BCED8
    /* lfs f0, 0(r31) */ // 0x807BCEDC
    *(0x24 + r1) = r29; // stw @ 0x807BCEE0
    r29 = r3;
    r4 = *(0x140 + r3); // lwz @ 0x807BCEE8
    *(0xc + r4) = r0; // sth @ 0x807BCEEC
    /* stfs f0, 0x10(r4) */ // 0x807BCEF0
    r3 = *(0x150 + r3); // lwz @ 0x807BCEF4
    FUN_805AE488(); // bl 0x805AE488
    r3 = *(0x140 + r29); // lwz @ 0x807BCEFC
    r3 = *(0 + r3); // lwz @ 0x807BCF00
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* lfs f1, 0(r31) */ // 0x807BCF08
    /* lfs f0, 4(r31) */ // 0x807BCF0C
    /* stfs f1, 0x28c(r3) */ // 0x807BCF10
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x807BCF14
    if (<=) goto 0x0x807bcf24;
    /* stfs f0, 0x28c(r3) */ // 0x807BCF1C
    /* b 0x807bcf38 */ // 0x807BCF20
    /* lfs f1, 8(r31) */ // 0x807BCF24
    /* lfs f0, 0x28c(r3) */ // 0x807BCF28
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807BCF2C
    if (>=) goto 0x0x807bcf38;
    /* stfs f1, 0x28c(r3) */ // 0x807BCF34
    r3 = *(0x158 + r29); // lwz @ 0x807BCF38
    r12 = *(0x34 + r3); // lwz @ 0x807BCF3C
    r12 = *(0x1c + r12); // lwz @ 0x807BCF40
    /* mtctr r12 */ // 0x807BCF44
    /* bctrl  */ // 0x807BCF48
    r4 = *(0x140 + r29); // lwz @ 0x807BCF4C
    /* lis r3, 0 */ // 0x807BCF50
    /* lfs f2, 0(r3) */ // 0x807BCF54
    r30 = *(0 + r4); // lwz @ 0x807BCF58
    r3 = *(0x150 + r29); // lwz @ 0x807BCF5C
    /* fctiwz f1, f2 */ // 0x807BCF60
    r0 = *(0xc + r4); // lhz @ 0x807BCF64
    *(4 + r3) = r0; // sth @ 0x807BCF68
    /* lfs f0, 0x10(r4) */ // 0x807BCF6C
    /* stfd f1, 8(r1) */ // 0x807BCF70
    /* fmuls f0, f2, f0 */ // 0x807BCF74
    r3 = *(0x150 + r29); // lwz @ 0x807BCF78
    r4 = *(0xc + r1); // lwz @ 0x807BCF7C
    /* fctiwz f0, f0 */ // 0x807BCF80
    /* stfd f0, 0x10(r1) */ // 0x807BCF84
    r0 = *(0x14 + r1); // lwz @ 0x807BCF88
    r4 = r4 + r0; // 0x807BCF8C
    /* clrlwi r4, r4, 0x18 */ // 0x807BCF90
    FUN_805AE614(); // bl 0x805AE614
    r31 = *(0x150 + r29); // lwz @ 0x807BCF98
    r3 = r30;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BCFA4
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x807BCFAC
    r4 = r31;
    r3 = *(0xc + r3); // lwz @ 0x807BCFB4
    /* lwzx r3, r3, r0 */ // 0x807BCFB8
    FUN_805C4C70(r4); // bl 0x805C4C70
    r0 = *(0x34 + r1); // lwz @ 0x807BCFC0
    r31 = *(0x2c + r1); // lwz @ 0x807BCFC4
    r30 = *(0x28 + r1); // lwz @ 0x807BCFC8
    r29 = *(0x24 + r1); // lwz @ 0x807BCFCC
    return;
}