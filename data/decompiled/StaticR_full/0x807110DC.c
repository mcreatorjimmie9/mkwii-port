/* Function at 0x807110DC, size=68 bytes */
/* Stack frame: 16 bytes */

void FUN_807110DC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r0, 0x4330 */ // 0x807110E0
    /* lis r4, 0 */ // 0x807110E4
    r5 = *(0xa0 + r3); // lwz @ 0x807110E8
    /* lis r3, 0 */ // 0x807110EC
    *(8 + r1) = r0; // stw @ 0x807110F0
    r5 = *(0 + r5); // lwz @ 0x807110F4
    /* lfd f2, 0(r4) */ // 0x807110F8
    r0 = *(0x2e + r5); // lha @ 0x807110FC
    /* lfs f0, 0(r3) */ // 0x80711100
    /* xoris r0, r0, 0x8000 */ // 0x80711104
    *(0xc + r1) = r0; // stw @ 0x80711108
    /* lfd f1, 8(r1) */ // 0x8071110C
    /* fsubs f1, f1, f2 */ // 0x80711110
    /* fmuls f1, f0, f1 */ // 0x80711114
    return;
}