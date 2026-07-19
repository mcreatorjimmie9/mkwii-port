/* Function at 0x806578A4, size=608 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_806578A4(int r3, int r4, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x806578BC
    *(0x10 + r1) = r28; // stw @ 0x806578C0
    r0 = *(0x522c + r3); // lbz @ 0x806578C4
    if (==) goto 0x0x80657ae4;
    r0 = *(0x5220 + r3); // lwz @ 0x806578D0
    if (<) goto 0x0x806578e4;
    FUN_80657BF4(); // bl 0x80657BF4
    /* b 0x80657ae4 */ // 0x806578E0
    r9 = *(0 + r4); // lhz @ 0x806578E4
    /* mulli r6, r0, 0x28 */ // 0x806578E8
    r7 = *(0x5228 + r3); // lwz @ 0x806578EC
    /* li r8, 0 */ // 0x806578F0
    r0 = r9 + 0x1000; // 0x806578F4
    /* mulli r7, r7, 0x1c */ // 0x806578F8
    /* clrlwi r0, r0, 0x10 */ // 0x806578FC
    r31 = r3 + r6; // 0x80657900
    r29 = r3 + r7; // 0x80657908
    if (>) goto 0x0x80657914;
    /* li r8, 1 */ // 0x80657910
    if (==) goto 0x0x80657924;
    r28 = r3 + 0x20; // 0x8065791C
    /* b 0x80657950 */ // 0x80657920
    r0 = r9 + 0xf00; // 0x80657924
    /* li r6, 0 */ // 0x80657928
    /* clrlwi r0, r0, 0x10 */ // 0x8065792C
    if (>) goto 0x0x8065793c;
    /* li r6, 1 */ // 0x80657938
    if (==) goto 0x0x8065794c;
    r28 = r3 + 0x34; // 0x80657944
    /* b 0x80657950 */ // 0x80657948
    r28 = r3 + 0xc; // 0x8065794C
    r7 = *(0 + r3); // lwz @ 0x80657950
    r6 = *(8 + r3); // lwz @ 0x80657954
    r0 = *(0x10 + r7); // lwz @ 0x80657958
    if (>=) goto 0x0x80657980;
    r6 = r6 + 1; // 0x80657964
    *(8 + r3) = r6; // stw @ 0x80657968
    r0 = r6 + -1; // 0x8065796C
    /* mulli r0, r0, 0x44 */ // 0x80657970
    r3 = *(0xc + r7); // lwz @ 0x80657974
    r3 = r3 + r0; // 0x80657978
    /* b 0x80657984 */ // 0x8065797C
    /* li r3, 0 */ // 0x80657980
    *(0x70 + r31) = r3; // stw @ 0x80657988
    if (==) goto 0x0x80657ae4;
    r0 = *(0 + r4); // lhz @ 0x80657990
    *(0x6c + r31) = r0; // sth @ 0x80657994
    r6 = *(0 + r28); // lwz @ 0x80657998
    r7 = *(0x5c + r30); // lwz @ 0x8065799C
    FUN_806566D4(); // bl 0x806566D4
    r0 = *(0 + r28); // lwz @ 0x806579A4
    *(0x74 + r31) = r0; // stw @ 0x806579A8
    /* lfs f0, 4(r28) */ // 0x806579AC
    /* stfs f0, 0x78(r31) */ // 0x806579B0
    /* lfs f0, 8(r28) */ // 0x806579B4
    /* stfs f0, 0x7c(r31) */ // 0x806579B8
    /* lfs f0, 0xc(r28) */ // 0x806579BC
    /* stfs f0, 0x80(r31) */ // 0x806579C0
    /* lfs f0, 0x10(r28) */ // 0x806579C4
    /* stfs f0, 0x84(r31) */ // 0x806579C8
    /* lfs f0, 0x50(r30) */ // 0x806579CC
    /* stfs f0, 0x68(r31) */ // 0x806579D0
    r3 = *(0 + r28); // lwz @ 0x806579D4
    r4 = *(0x6c + r31); // lhz @ 0x806579D8
    r12 = *(0 + r3); // lwz @ 0x806579DC
    r12 = *(0x48 + r12); // lwz @ 0x806579E0
    /* mtctr r12 */ // 0x806579E4
    /* bctrl  */ // 0x806579E8
    /* xoris r3, r3, 0x8000 */ // 0x806579EC
    /* lis r0, 0x4330 */ // 0x806579F0
    /* lis r4, 0 */ // 0x806579F4
    *(0xc + r1) = r3; // stw @ 0x806579F8
    /* lfd f3, 0(r4) */ // 0x806579FC
    *(8 + r1) = r0; // stw @ 0x80657A00
    /* lfs f1, 4(r28) */ // 0x80657A04
    /* lfd f2, 8(r1) */ // 0x80657A08
    /* lfs f0, 0x50(r30) */ // 0x80657A0C
    /* fsubs f2, f2, f3 */ // 0x80657A10
    /* fmuls f1, f2, f1 */ // 0x80657A14
    /* fmuls f0, f0, f1 */ // 0x80657A18
    /* stfs f0, 0x64(r31) */ // 0x80657A1C
    /* lfs f2, 0xc(r28) */ // 0x80657A20
    /* lfs f1, 0x50(r30) */ // 0x80657A24
    /* lfs f0, 0x5074(r29) */ // 0x80657A28
    /* fmuls f1, f2, f1 */ // 0x80657A2C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80657A30
    if (<=) goto 0x0x80657a3c;
    /* stfs f1, 0x5074(r29) */ // 0x80657A38
    /* lfs f2, 0x10(r28) */ // 0x80657A3C
    /* lfs f1, 0x50(r30) */ // 0x80657A40
    /* lfs f0, 0x5078(r29) */ // 0x80657A44
    /* fmuls f1, f2, f1 */ // 0x80657A48
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80657A4C
    if (<=) goto 0x0x80657a58;
    /* stfs f1, 0x5078(r29) */ // 0x80657A54
    /* lfs f1, 0x50(r30) */ // 0x80657A58
    /* lfs f0, 0x5070(r29) */ // 0x80657A5C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80657A60
    if (<=) goto 0x0x80657a6c;
    /* stfs f1, 0x5070(r29) */ // 0x80657A68
    r0 = *(0x5224 + r30); // lwz @ 0x80657A6C
    if (<=) goto 0x0x80657ab4;
    r3 = *(0x5220 + r30); // lwz @ 0x80657A78
    /* lfs f0, 0x68(r31) */ // 0x80657A7C
    r0 = r3 + -1; // 0x80657A80
    /* mulli r0, r0, 0x28 */ // 0x80657A84
    r3 = r30 + r0; // 0x80657A88
    /* lfs f2, 0x68(r3) */ // 0x80657A8C
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x80657A90
    if (<=) goto 0x0x80657a9c;
    /* b 0x80657aa0 */ // 0x80657A98
    /* fmr f2, f0 */ // 0x80657A9C
    /* lfs f1, 0x4c(r30) */ // 0x80657AA0
    /* lfs f0, 0x54(r30) */ // 0x80657AA4
    /* fmuls f1, f1, f2 */ // 0x80657AA8
    /* fadds f0, f0, f1 */ // 0x80657AAC
    /* stfs f0, 0x54(r30) */ // 0x80657AB0
    /* lfs f0, 0x54(r30) */ // 0x80657AB4
    /* stfs f0, 0x60(r31) */ // 0x80657AB8
    /* lfs f1, 0x54(r30) */ // 0x80657ABC
    /* lfs f0, 0x64(r31) */ // 0x80657AC0
    r4 = *(0x5220 + r30); // lwz @ 0x80657AC4
    /* fadds f0, f1, f0 */ // 0x80657AC8
    r3 = *(0x5224 + r30); // lwz @ 0x80657ACC
    r0 = r4 + 1; // 0x80657AD0
    *(0x5220 + r30) = r0; // stw @ 0x80657AD4
    r0 = r3 + 1; // 0x80657AD8
    /* stfs f0, 0x54(r30) */ // 0x80657ADC
    *(0x5224 + r30) = r0; // stw @ 0x80657AE0
    r0 = *(0x24 + r1); // lwz @ 0x80657AE4
    r31 = *(0x1c + r1); // lwz @ 0x80657AE8
    r30 = *(0x18 + r1); // lwz @ 0x80657AEC
    r29 = *(0x14 + r1); // lwz @ 0x80657AF0
    r28 = *(0x10 + r1); // lwz @ 0x80657AF4
    return;
}