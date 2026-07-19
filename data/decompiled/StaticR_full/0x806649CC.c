/* Function at 0x806649CC, size=60 bytes */
/* Stack frame: 16 bytes */

void FUN_806649CC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* extsh r3, r3 */ // 0x806649D0
    /* lis r0, 0x4330 */ // 0x806649D4
    /* lis r4, 0 */ // 0x806649D8
    /* xoris r3, r3, 0x8000 */ // 0x806649DC
    *(0xc + r1) = r3; // stw @ 0x806649E0
    /* lis r3, 0 */ // 0x806649E4
    /* lfd f2, 0(r4) */ // 0x806649E8
    *(8 + r1) = r0; // stw @ 0x806649EC
    /* lfs f0, 0(r3) */ // 0x806649F0
    /* lfd f1, 8(r1) */ // 0x806649F4
    /* fsubs f1, f1, f2 */ // 0x806649F8
    /* fmuls f1, f0, f1 */ // 0x806649FC
    return;
}