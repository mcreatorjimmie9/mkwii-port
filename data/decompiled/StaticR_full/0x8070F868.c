/* Function at 0x8070F868, size=420 bytes */
/* Stack frame: 32 bytes */

void FUN_8070F868(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r7, 0x4330 */ // 0x8070F86C
    /* lis r5, 0 */ // 0x8070F870
    /* lis r6, 0 */ // 0x8070F874
    r5 = *(0 + r5); // lwz @ 0x8070F878
    r8 = *(0x164 + r3); // lwz @ 0x8070F87C
    r0 = *(0x20 + r5); // lwz @ 0x8070F880
    *(8 + r1) = r7; // stw @ 0x8070F884
    /* subf r0, r4, r0 */ // 0x8070F888
    /* lfs f1, 0(r6) */ // 0x8070F88C
    *(0x10 + r1) = r7; // stw @ 0x8070F894
    if (<) goto 0x0x8070fa04;
    /* lis r4, 0 */ // 0x8070F89C
    /* subf r7, r8, r0 */ // 0x8070F8A0
    r5 = *(0x160 + r3); // lwz @ 0x8070F8A4
    r4 = *(0 + r4); // lwz @ 0x8070F8A8
    r0 = *(0x19c + r3); // lwz @ 0x8070F8AC
    r5 = r5 + r4; // 0x8070F8B0
    r4 = r7 / r5; // 0x8070F8B4
    r4 = r4 * r5; // 0x8070F8B8
    /* subf r7, r4, r7 */ // 0x8070F8BC
    if (<) goto 0x0x8070f8cc;
    /* b 0x8070fa04 */ // 0x8070F8C8
    r0 = *(0x198 + r3); // lwz @ 0x8070F8CC
    if (<) goto 0x0x8070f940;
    r5 = *(0x17c + r3); // lwz @ 0x8070F8D8
    /* lis r4, 0 */ // 0x8070F8DC
    /* lfd f5, 0(r4) */ // 0x8070F8E0
    /* subf r0, r0, r7 */ // 0x8070F8E4
    /* srwi r4, r5, 0x1f */ // 0x8070F8E8
    /* lfs f3, 0x1a0(r3) */ // 0x8070F8EC
    r4 = r4 + r5; // 0x8070F8F0
    /* xoris r0, r0, 0x8000 */ // 0x8070F8F4
    r4 = r4 >> 1; // srawi
    *(0x14 + r1) = r0; // stw @ 0x8070F8FC
    /* xoris r0, r4, 0x8000 */ // 0x8070F900
    /* lfs f2, 0x168(r3) */ // 0x8070F904
    *(0xc + r1) = r0; // stw @ 0x8070F908
    /* lfd f0, 0x10(r1) */ // 0x8070F90C
    /* lfd f4, 8(r1) */ // 0x8070F910
    /* fsubs f1, f0, f5 */ // 0x8070F914
    /* lfs f0, 0(r6) */ // 0x8070F918
    /* fsubs f4, f4, f5 */ // 0x8070F91C
    /* fmuls f1, f3, f1 */ // 0x8070F920
    /* fmuls f3, f3, f4 */ // 0x8070F924
    /* fsubs f2, f2, f3 */ // 0x8070F928
    /* fsubs f1, f2, f1 */ // 0x8070F92C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8070F930
    if (>=) goto 0x0x8070fa04;
    /* fmr f1, f0 */ // 0x8070F938
    /* b 0x8070fa04 */ // 0x8070F93C
    r0 = *(0x194 + r3); // lwz @ 0x8070F940
    if (<) goto 0x0x8070f9a0;
    r4 = *(0x17c + r3); // lwz @ 0x8070F94C
    /* subf r5, r0, r7 */ // 0x8070F950
    /* srwi r0, r4, 0x1f */ // 0x8070F954
    r0 = r0 + r4; // 0x8070F958
    r0 = r0 >> 1; // srawi
    if (<=) goto 0x0x8070f998;
    /* subf r0, r0, r5 */ // 0x8070F968
    /* lis r4, 0 */ // 0x8070F96C
    /* xoris r0, r0, 0x8000 */ // 0x8070F970
    *(0xc + r1) = r0; // stw @ 0x8070F974
    /* lfd f2, 0(r4) */ // 0x8070F978
    /* lfd f0, 8(r1) */ // 0x8070F97C
    /* lfs f1, 0x1a0(r3) */ // 0x8070F980
    /* fsubs f2, f0, f2 */ // 0x8070F984
    /* lfs f0, 0x168(r3) */ // 0x8070F988
    /* fmuls f1, f1, f2 */ // 0x8070F98C
    /* fsubs f1, f0, f1 */ // 0x8070F990
    /* b 0x8070fa04 */ // 0x8070F994
    /* lfs f1, 0x168(r3) */ // 0x8070F998
    /* b 0x8070fa04 */ // 0x8070F99C
    r0 = *(0x190 + r3); // lwz @ 0x8070F9A0
    if (<) goto 0x0x8070f9b4;
    /* lfs f1, 0x168(r3) */ // 0x8070F9AC
    /* b 0x8070fa04 */ // 0x8070F9B0
    r0 = *(0x18c + r3); // lwz @ 0x8070F9B4
    if (<) goto 0x0x8070f9c8;
    /* lfs f1, 0x168(r3) */ // 0x8070F9C0
    /* b 0x8070fa04 */ // 0x8070F9C4
    if (<) goto 0x0x8070fa04;
    /* xoris r0, r7, 0x8000 */ // 0x8070F9D0
    *(0x14 + r1) = r0; // stw @ 0x8070F9D4
    /* lis r4, 0 */ // 0x8070F9D8
    /* lfs f2, 0x1a0(r3) */ // 0x8070F9DC
    /* lfd f4, 0(r4) */ // 0x8070F9E0
    /* lfd f3, 0x10(r1) */ // 0x8070F9E4
    /* lfs f0, 0x168(r3) */ // 0x8070F9E8
    /* fsubs f3, f3, f4 */ // 0x8070F9EC
    /* fmuls f2, f2, f3 */ // 0x8070F9F0
    /* fadds f1, f1, f2 */ // 0x8070F9F4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8070F9F8
    if (<=) goto 0x0x8070fa04;
    /* fmr f1, f0 */ // 0x8070FA00
    return;
}