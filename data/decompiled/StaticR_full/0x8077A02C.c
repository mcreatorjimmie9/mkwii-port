/* Function at 0x8077A02C, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8077A02C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r7, 0x4330 */ // 0x8077A034
    /* lis r4, 0 */ // 0x8077A038
    *(0x24 + r1) = r0; // stw @ 0x8077A03C
    /* lis r5, 0 */ // 0x8077A040
    /* lfd f3, 0(r4) */ // 0x8077A044
    *(0x1c + r1) = r31; // stw @ 0x8077A048
    /* lis r31, 0 */ // 0x8077A04C
    r31 = r31 + 0; // 0x8077A050
    /* lfd f5, 0(r5) */ // 0x8077A054
    *(0x18 + r1) = r30; // stw @ 0x8077A058
    r30 = r3;
    r0 = *(0xe4 + r3); // lwz @ 0x8077A060
    r6 = *(0xbc + r3); // lwz @ 0x8077A064
    /* xoris r0, r0, 0x8000 */ // 0x8077A068
    *(0x14 + r1) = r0; // stw @ 0x8077A06C
    r0 = *(0xe8 + r3); // lwz @ 0x8077A070
    *(0x10 + r1) = r7; // stw @ 0x8077A074
    /* xoris r0, r0, 0x8000 */ // 0x8077A078
    /* lfd f0, 0x10(r1) */ // 0x8077A07C
    *(8 + r1) = r7; // stw @ 0x8077A080
    /* fsubs f1, f0, f3 */ // 0x8077A084
    /* lfs f0, 8(r31) */ // 0x8077A088
    *(0xc + r1) = r6; // stw @ 0x8077A08C
    /* fsubs f2, f1, f0 */ // 0x8077A090
    /* lfd f4, 8(r1) */ // 0x8077A094
    /* lfs f0, 0xc(r31) */ // 0x8077A098
    *(0xc + r1) = r0; // stw @ 0x8077A09C
    /* fsubs f4, f4, f5 */ // 0x8077A0A0
    /* fsubs f2, f2, f0 */ // 0x8077A0A4
    /* lfs f1, 0x10(r31) */ // 0x8077A0A8
    /* lfd f0, 8(r1) */ // 0x8077A0AC
    /* fsubs f1, f2, f1 */ // 0x8077A0B0
    /* fsubs f0, f0, f3 */ // 0x8077A0B4
    /* fsubs f0, f1, f0 */ // 0x8077A0B8
    /* .byte 0xfc, 0x04, 0x00, 0x40 */ // 0x8077A0BC
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8077A0C0
    if (!=) goto 0x0x8077a0d0;
    /* li r0, 3 */ // 0x8077A0C8
    *(0xb8 + r3) = r0; // stw @ 0x8077A0CC
    r0 = *(0xbc + r3); // lwz @ 0x8077A0D0
    /* lis r5, 0 */ // 0x8077A0D4
    *(0x14 + r1) = r0; // stw @ 0x8077A0D8
    /* lis r4, 0 */ // 0x8077A0DC
    /* lfd f1, 0(r5) */ // 0x8077A0E0
    /* lis r3, 0 */ // 0x8077A0E4
    /* lfd f0, 0x10(r1) */ // 0x8077A0E8
    /* lfs f2, 0(r4) */ // 0x8077A0EC
    /* fsubs f3, f0, f1 */ // 0x8077A0F0
    /* lfs f1, 4(r31) */ // 0x8077A0F4
    /* lfs f0, 0(r3) */ // 0x8077A0F8
    /* fmuls f2, f2, f3 */ // 0x8077A0FC
    /* fdivs f1, f2, f1 */ // 0x8077A100
    /* fmuls f1, f0, f1 */ // 0x8077A104
    FUN_805E3430(); // bl 0x805E3430
}