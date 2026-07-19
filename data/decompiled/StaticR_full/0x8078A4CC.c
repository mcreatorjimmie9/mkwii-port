/* Function at 0x8078A4CC, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8078A4CC(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8078A4DC
    r31 = r31 + 0; // 0x8078A4E0
    *(0x18 + r1) = r30; // stw @ 0x8078A4E4
    r30 = r3;
    /* lfs f2, 0x20(r3) */ // 0x8078A4EC
    /* lfs f0, 0x10(r3) */ // 0x8078A4F0
    /* fmuls f2, f2, f1 */ // 0x8078A4F4
    /* lfs f1, 0x6c(r31) */ // 0x8078A4F8
    /* fadds f1, f1, f2 */ // 0x8078A4FC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8078A500
    if (<=) goto 0x0x8078a50c;
    /* fmr f1, f0 */ // 0x8078A508
    /* stfs f1, 0x24(r3) */ // 0x8078A50C
    r3 = *(0x54 + r3); // lwz @ 0x8078A510
    FUN_8061E63C(); // bl 0x8061E63C
    /* lfs f0, 0x94(r31) */ // 0x8078A518
    /* li r0, 0x10 */ // 0x8078A51C
    /* fmuls f0, f0, f1 */ // 0x8078A520
    /* fctiwz f0, f0 */ // 0x8078A524
    /* stfd f0, 8(r1) */ // 0x8078A528
    r3 = *(0xc + r1); // lwz @ 0x8078A52C
    if (>) goto 0x0x8078a53c;
    r0 = r3;
    /* slwi r0, r0, 2 */ // 0x8078A53C
    r3 = r31 + 0x24; // 0x8078A540
    /* lfsx f0, r3, r0 */ // 0x8078A544
    /* stfs f0, 0x48(r30) */ // 0x8078A548
    r3 = *(0x50 + r30); // lwz @ 0x8078A54C
    r12 = *(0 + r3); // lwz @ 0x8078A550
    r12 = *(0x130 + r12); // lwz @ 0x8078A554
    /* mtctr r12 */ // 0x8078A558
    /* bctrl  */ // 0x8078A55C
    *(0x44 + r30) = r3; // stw @ 0x8078A560
    r31 = *(0x1c + r1); // lwz @ 0x8078A564
    r30 = *(0x18 + r1); // lwz @ 0x8078A568
    r0 = *(0x24 + r1); // lwz @ 0x8078A56C
    return;
}