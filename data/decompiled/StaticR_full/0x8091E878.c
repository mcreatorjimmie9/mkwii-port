/* Function at 0x8091E878, size=496 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_8091E878(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r7, 0 */ // 0x8091E87C
    /* lis r6, 1 */ // 0x8091E880
    /* lfs f0, 0(r7) */ // 0x8091E884
    r7 = r6 + -1; // 0x8091E88C
    /* li r9, 0 */ // 0x8091E890
    *(0x28 + r1) = r30; // stw @ 0x8091E894
    *(0x24 + r1) = r29; // stw @ 0x8091E898
    *(0x20 + r1) = r28; // stw @ 0x8091E89C
    /* b 0x8091e8c0 */ // 0x8091E8A0
    r8 = *(0x2c + r3); // lwz @ 0x8091E8A4
    r6 = r9 rlwinm 2; // rlwinm
    r0 = r9 rlwinm 1; // rlwinm
    r9 = r9 + 1; // 0x8091E8B0
    /* stfsx f0, r8, r6 */ // 0x8091E8B4
    r6 = *(0x30 + r3); // lwz @ 0x8091E8B8
    /* sthx r7, r6, r0 */ // 0x8091E8BC
    r0 = *(0x10 + r3); // lhz @ 0x8091E8C0
    /* clrlwi r6, r9, 0x10 */ // 0x8091E8C4
    if (<) goto 0x0x8091e8a4;
    r7 = *(0x2c + r3); // lwz @ 0x8091E8D0
    r0 = r4 rlwinm 2; // rlwinm
    /* lfs f0, 0x20(r3) */ // 0x8091E8D8
    r8 = r4 rlwinm 1; // rlwinm
    /* stfsx f0, r7, r0 */ // 0x8091E8E0
    /* lis r6, 1 */ // 0x8091E8E4
    r0 = r6 + -1; // 0x8091E8E8
    /* lis r7, 0 */ // 0x8091E8EC
    r6 = *(0x30 + r3); // lwz @ 0x8091E8F0
    /* li r9, 0 */ // 0x8091E8F4
    /* lfs f3, 0(r7) */ // 0x8091E8F8
    /* li r4, 0 */ // 0x8091E8FC
    /* sthx r9, r6, r8 */ // 0x8091E900
    /* mtctr r0 */ // 0x8091E904
    /* clrlwi r9, r4, 0x10 */ // 0x8091E908
    /* li r29, 0 */ // 0x8091E90C
    /* li r6, 0 */ // 0x8091E914
    /* b 0x8091e9bc */ // 0x8091E918
    r7 = *(0x30 + r3); // lwz @ 0x8091E91C
    r0 = r6 rlwinm 1; // rlwinm
    /* lhzx r0, r7, r0 */ // 0x8091E924
    if (!=) goto 0x0x8091e9b8;
    /* clrlwi r0, r6, 0x10 */ // 0x8091E930
    r12 = r6 rlwinm 2; // rlwinm
    /* mulli r11, r0, 0x24 */ // 0x8091E938
    /* li r28, 0 */ // 0x8091E93C
    /* b 0x8091e9a0 */ // 0x8091E940
    r8 = r11 + r30; // 0x8091E944
    r31 = *(0x2c + r3); // lwz @ 0x8091E948
    r7 = *(0x20 + r8); // lwz @ 0x8091E94C
    r0 = r28 rlwinm 1; // rlwinm
    /* lfs f4, 0x14(r8) */ // 0x8091E954
    /* lhzx r8, r7, r0 */ // 0x8091E958
    /* lfsx f1, r12, r31 */ // 0x8091E95C
    /* mulli r7, r8, 0x24 */ // 0x8091E960
    /* slwi r0, r8, 2 */ // 0x8091E964
    /* lfsx f0, r31, r0 */ // 0x8091E968
    r7 = r30 + r7; // 0x8091E96C
    /* lfs f2, 0x14(r7) */ // 0x8091E970
    /* fadds f2, f4, f2 */ // 0x8091E974
    /* fmuls f2, f3, f2 */ // 0x8091E978
    /* fsubs f1, f1, f2 */ // 0x8091E97C
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8091E980
    if (>=) goto 0x0x8091e99c;
    /* stfsx f1, r31, r0 */ // 0x8091E988
    r0 = r8 rlwinm 1; // rlwinm
    /* li r29, 1 */ // 0x8091E990
    r7 = *(0x30 + r3); // lwz @ 0x8091E994
    /* sthx r10, r7, r0 */ // 0x8091E998
    r28 = r28 + 1; // 0x8091E99C
    r30 = *(0x14 + r3); // lwz @ 0x8091E9A0
    /* clrlwi r8, r28, 0x10 */ // 0x8091E9A4
    r7 = r11 + r30; // 0x8091E9A8
    r0 = *(0x1c + r7); // lhz @ 0x8091E9AC
    if (<) goto 0x0x8091e944;
    r6 = r6 + 1; // 0x8091E9B8
    r0 = *(0x10 + r3); // lhz @ 0x8091E9BC
    /* clrlwi r7, r6, 0x10 */ // 0x8091E9C0
    if (<) goto 0x0x8091e91c;
    if (==) goto 0x0x8091e9dc;
    r4 = r4 + 1; // 0x8091E9D4
    if (counter-- != 0) goto 0x0x8091e908;
    /* lis r4, 0 */ // 0x8091E9DC
    /* xoris r6, r5, 0x8000 */ // 0x8091E9E0
    /* lfd f2, 0(r4) */ // 0x8091E9E4
    /* li r9, 0 */ // 0x8091E9E8
    /* lis r5, 0x4330 */ // 0x8091E9EC
    /* b 0x8091ea40 */ // 0x8091E9F0
    r4 = *(0x2c + r3); // lwz @ 0x8091E9F4
    r8 = r9 rlwinm 2; // rlwinm
    /* lfs f1, 0x24(r3) */ // 0x8091E9FC
    r9 = r9 + 1; // 0x8091EA00
    /* lfsx f0, r4, r8 */ // 0x8091EA04
    *(0xc + r1) = r6; // stw @ 0x8091EA08
    /* fmuls f0, f1, f0 */ // 0x8091EA0C
    r7 = *(0x28 + r3); // lwz @ 0x8091EA10
    *(8 + r1) = r5; // stw @ 0x8091EA14
    /* lwzx r4, r7, r8 */ // 0x8091EA18
    /* lfd f1, 8(r1) */ // 0x8091EA1C
    /* fmuls f0, f0, f0 */ // 0x8091EA20
    /* fsubs f1, f1, f2 */ // 0x8091EA24
    /* fmuls f0, f1, f0 */ // 0x8091EA28
    /* fctiwz f0, f0 */ // 0x8091EA2C
    /* stfd f0, 0x10(r1) */ // 0x8091EA30
    r0 = *(0x14 + r1); // lwz @ 0x8091EA34
    r0 = r4 + r0; // 0x8091EA38
    /* stwx r0, r7, r8 */ // 0x8091EA3C
    r0 = *(0x10 + r3); // lhz @ 0x8091EA40
    /* clrlwi r4, r9, 0x10 */ // 0x8091EA44
    if (<) goto 0x0x8091e9f4;
    r31 = *(0x2c + r1); // lwz @ 0x8091EA50
    r30 = *(0x28 + r1); // lwz @ 0x8091EA54
    r29 = *(0x24 + r1); // lwz @ 0x8091EA58
    r28 = *(0x20 + r1); // lwz @ 0x8091EA5C
    return;
}