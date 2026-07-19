/* Function at 0x808AF590, size=120 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_808AF590(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* lis r6, 0x4330 */ // 0x808AF598
    /* lis r7, 0 */ // 0x808AF59C
    *(0x24 + r1) = r0; // stw @ 0x808AF5A0
    /* lis r3, 0 */ // 0x808AF5A4
    /* lis r5, 0 */ // 0x808AF5A8
    /* lfd f4, 0(r7) */ // 0x808AF5AC
    r9 = *(0 + r3); // lha @ 0x808AF5B0
    /* lis r3, 0 */ // 0x808AF5B4
    *(8 + r1) = r6; // stw @ 0x808AF5B8
    r8 = r4 / r9; // 0x808AF5BC
    /* xoris r0, r9, 0x8000 */ // 0x808AF5C0
    *(0x14 + r1) = r0; // stw @ 0x808AF5C4
    /* lfs f2, 0(r5) */ // 0x808AF5C8
    *(0x10 + r1) = r6; // stw @ 0x808AF5CC
    /* lfs f0, 0(r3) */ // 0x808AF5D0
    r0 = r8 * r9; // 0x808AF5D4
    /* lfd f1, 0x10(r1) */ // 0x808AF5D8
    /* fsubs f1, f1, f4 */ // 0x808AF5DC
    /* subf r0, r0, r4 */ // 0x808AF5E0
    /* slwi r0, r0, 1 */ // 0x808AF5E4
    /* xoris r0, r0, 0x8000 */ // 0x808AF5E8
    *(0xc + r1) = r0; // stw @ 0x808AF5EC
    /* lfd f3, 8(r1) */ // 0x808AF5F0
    /* fsubs f3, f3, f4 */ // 0x808AF5F4
    /* fmuls f2, f2, f3 */ // 0x808AF5F8
    /* fdivs f1, f2, f1 */ // 0x808AF5FC
    /* fmuls f1, f0, f1 */ // 0x808AF600
    FUN_805E3430(); // bl 0x805E3430
}