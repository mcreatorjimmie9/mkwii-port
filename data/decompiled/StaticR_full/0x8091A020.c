/* Function at 0x8091A020, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8091A020(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x8091A028
    r5 = r5 + 0; // 0x8091A030
    *(0xc + r1) = r31; // stw @ 0x8091A034
    *(8 + r1) = r30; // stw @ 0x8091A038
    r30 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x8091A044
    /* lis r3, 0 */ // 0x8091A048
    r4 = r4 + 0; // 0x8091A04C
    /* lfs f0, 0(r3) */ // 0x8091A050
    /* lfs f2, 0x3c(r30) */ // 0x8091A054
    /* lis r31, 0 */ // 0x8091A058
    *(0 + r30) = r4; // stw @ 0x8091A05C
    /* lis r3, 0 */ // 0x8091A060
    /* lfs f1, 0(r3) */ // 0x8091A064
    /* fmuls f0, f0, f2 */ // 0x8091A068
    r4 = *(0 + r31); // lwz @ 0x8091A06C
    /* li r0, 0 */ // 0x8091A070
    *(0xb0 + r30) = r4; // stw @ 0x8091A074
    r3 = r30;
    /* stfs f1, 0x11c(r30) */ // 0x8091A07C
    /* stfs f1, 0x120(r30) */ // 0x8091A080
    /* stfs f1, 0x124(r30) */ // 0x8091A084
    /* stfs f1, 0x128(r30) */ // 0x8091A088
    /* stfs f1, 0x12c(r30) */ // 0x8091A08C
    /* stfs f1, 0x130(r30) */ // 0x8091A090
    *(0x174 + r30) = r0; // stw @ 0x8091A094
    /* stfs f0, 0xb4(r30) */ // 0x8091A098
    r12 = *(0 + r30); // lwz @ 0x8091A09C
    r12 = *(0x54 + r12); // lwz @ 0x8091A0A0
    /* mtctr r12 */ // 0x8091A0A4
    /* bctrl  */ // 0x8091A0A8
    /* li r0, 1 */ // 0x8091A0AC
    *(0x194 + r30) = r0; // stb @ 0x8091A0B0
    r3 = r30;
    r4 = *(0 + r31); // lwz @ 0x8091A0B8
    r0 = r4 + 1; // 0x8091A0BC
    *(0 + r31) = r0; // stw @ 0x8091A0C0
    r31 = *(0xc + r1); // lwz @ 0x8091A0C4
    r30 = *(8 + r1); // lwz @ 0x8091A0C8
    r0 = *(0x14 + r1); // lwz @ 0x8091A0CC
    return;
}