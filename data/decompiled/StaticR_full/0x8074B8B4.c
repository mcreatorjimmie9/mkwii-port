/* Function at 0x8074B8B4, size=320 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */

int FUN_8074B8B4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x8074B8C0
    r31 = r3;
    r3 = *(0xd0 + r3); // lwz @ 0x8074B8C8
    r12 = *(0 + r3); // lwz @ 0x8074B8CC
    r12 = *(0xc + r12); // lwz @ 0x8074B8D0
    /* mtctr r12 */ // 0x8074B8D4
    /* bctrl  */ // 0x8074B8D8
    r3 = *(0xd0 + r31); // lwz @ 0x8074B8DC
    r4 = r31 + 0x12c; // 0x8074B8E0
    r12 = *(0 + r3); // lwz @ 0x8074B8E4
    r12 = *(0x78 + r12); // lwz @ 0x8074B8E8
    /* mtctr r12 */ // 0x8074B8EC
    /* bctrl  */ // 0x8074B8F0
    r3 = *(0xd0 + r31); // lwz @ 0x8074B8F4
    r12 = *(0 + r3); // lwz @ 0x8074B8F8
    r12 = *(0x80 + r12); // lwz @ 0x8074B8FC
    /* mtctr r12 */ // 0x8074B900
    /* bctrl  */ // 0x8074B904
    r3 = *(0x20 + r31); // lwz @ 0x8074B908
    r12 = *(0 + r3); // lwz @ 0x8074B90C
    r12 = *(0x20 + r12); // lwz @ 0x8074B910
    /* mtctr r12 */ // 0x8074B914
    /* bctrl  */ // 0x8074B918
    /* lis r3, 0 */ // 0x8074B91C
    /* lfs f0, 0(r3) */ // 0x8074B920
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074B924
    if (>=) goto 0x0x8074b934;
    r3 = *(0x20 + r31); // lwz @ 0x8074B92C
    /* lfs f1, 0x30(r3) */ // 0x8074B930
    /* lis r4, 0 */ // 0x8074B934
    r3 = *(0xd4 + r31); // lwz @ 0x8074B938
    /* lfs f0, 0(r4) */ // 0x8074B93C
    /* fdivs f0, f0, f1 */ // 0x8074B940
    /* fctiwz f0, f0 */ // 0x8074B944
    /* stfd f0, 8(r1) */ // 0x8074B948
    r0 = *(0xc + r1); // lwz @ 0x8074B94C
    *(0x182 + r31) = r0; // sth @ 0x8074B950
    r12 = *(0 + r3); // lwz @ 0x8074B954
    r12 = *(0xc + r12); // lwz @ 0x8074B958
    /* mtctr r12 */ // 0x8074B95C
    /* bctrl  */ // 0x8074B960
    r3 = *(0xd4 + r31); // lwz @ 0x8074B964
    r4 = r31 + 0x12c; // 0x8074B968
    r12 = *(0 + r3); // lwz @ 0x8074B96C
    r12 = *(0x78 + r12); // lwz @ 0x8074B970
    /* mtctr r12 */ // 0x8074B974
    /* bctrl  */ // 0x8074B978
    r3 = *(0x182 + r31); // lhz @ 0x8074B97C
    /* lis r0, 0x4330 */ // 0x8074B980
    *(0x14 + r1) = r3; // stw @ 0x8074B984
    /* lis r5, 0 */ // 0x8074B988
    /* lis r4, 0 */ // 0x8074B98C
    r3 = *(0xd4 + r31); // lwz @ 0x8074B990
    *(0x10 + r1) = r0; // stw @ 0x8074B994
    /* lfd f2, 0(r5) */ // 0x8074B998
    /* lfd f1, 0x10(r1) */ // 0x8074B99C
    /* lfs f0, 0(r4) */ // 0x8074B9A0
    /* fsubs f1, f1, f2 */ // 0x8074B9A4
    r12 = *(0 + r3); // lwz @ 0x8074B9A8
    r12 = *(0x28 + r12); // lwz @ 0x8074B9AC
    /* fmuls f0, f0, f1 */ // 0x8074B9B0
    /* fctiwz f0, f0 */ // 0x8074B9B4
    /* stfd f0, 0x18(r1) */ // 0x8074B9B8
    r4 = *(0x1c + r1); // lwz @ 0x8074B9BC
    /* clrlwi r4, r4, 0x10 */ // 0x8074B9C0
    /* mtctr r12 */ // 0x8074B9C4
    /* bctrl  */ // 0x8074B9C8
    r3 = *(0xd4 + r31); // lwz @ 0x8074B9CC
    r12 = *(0 + r3); // lwz @ 0x8074B9D0
    r12 = *(0x80 + r12); // lwz @ 0x8074B9D4
    /* mtctr r12 */ // 0x8074B9D8
    /* bctrl  */ // 0x8074B9DC
    r0 = *(0x34 + r1); // lwz @ 0x8074B9E0
    r31 = *(0x2c + r1); // lwz @ 0x8074B9E4
    return;
}