/* Function at 0x806166A0, size=412 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */

int FUN_806166A0(int r3, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r12, 0 */ // 0x806166A4
    /* lis r5, 0 */ // 0x806166AC
    *(0x1c + r1) = r31; // stw @ 0x806166B0
    r5 = r5 + 0; // 0x806166B4
    /* li r0, 3 */ // 0x806166B8
    /* lfs f1, 4(r12) */ // 0x806166BC
    *(0x18 + r1) = r30; // stw @ 0x806166C0
    r8 = r5 + 0x370; // 0x806166C4
    /* lfs f0, 0xc(r12) */ // 0x806166C8
    r7 = r5 + 0x388; // 0x806166CC
    *(0x14 + r1) = r29; // stw @ 0x806166D0
    r6 = r5 + 0x3b8; // 0x806166D4
    /* li r31, 0 */ // 0x806166D8
    /* li r30, 0 */ // 0x806166DC
    *(0x10 + r1) = r28; // stw @ 0x806166E0
    /* li r29, 0 */ // 0x806166E4
    /* li r28, 0 */ // 0x806166E8
    /* li r10, 1 */ // 0x806166EC
    /* stfs f1, 0x14(r3) */ // 0x806166F0
    /* stfs f1, 0x18(r3) */ // 0x806166F4
    /* stfs f0, 0x20(r3) */ // 0x806166F8
    /* mtctr r0 */ // 0x806166FC
    /* clrlwi r0, r28, 0x18 */ // 0x80616700
    r11 = r28 rlwinm 1; // rlwinm
    r0 = r10 << r0; // slw
    r5 = *(0x10 + r3); // lhz @ 0x8061670C
    /* clrlwi r9, r0, 0x10 */ // 0x80616710
    r11 = r3 + r11; // 0x80616714
    /* and. r0, r5, r9 */ // 0x80616718
    if (==) goto 0x0x8061676c;
    r0 = r28 rlwinm 2; // rlwinm
    /* lfsx f0, r8, r0 */ // 0x80616724
    /* fadds f0, f1, f0 */ // 0x80616728
    /* stfs f0, 0x14(r3) */ // 0x8061672C
    /* lfsx f0, r7, r0 */ // 0x80616730
    /* stfs f0, 0x18(r3) */ // 0x80616734
    /* lfsx f0, r6, r0 */ // 0x80616738
    /* stfs f0, 0x20(r3) */ // 0x8061673C
    r5 = *(4 + r11); // lha @ 0x80616740
    r0 = r5 + -1; // 0x80616744
    *(4 + r11) = r0; // sth @ 0x80616748
    /* extsh. r0, r0 */ // 0x8061674C
    if (>) goto 0x0x80616768;
    r0 = *(0x10 + r3); // lhz @ 0x80616754
    /* li r30, 1 */ // 0x80616758
    /* andc r0, r0, r9 */ // 0x8061675C
    *(0x10 + r3) = r0; // sth @ 0x80616760
    /* b 0x8061676c */ // 0x80616764
    /* li r29, 1 */ // 0x80616768
    r28 = r28 + 1; // 0x8061676C
    r5 = *(0x10 + r3); // lhz @ 0x80616770
    /* clrlwi r0, r28, 0x18 */ // 0x80616774
    r0 = r10 << r0; // slw
    r11 = r28 rlwinm 1; // rlwinm
    /* clrlwi r9, r0, 0x10 */ // 0x80616780
    /* and. r0, r5, r9 */ // 0x80616784
    r11 = r3 + r11; // 0x80616788
    if (==) goto 0x0x806167dc;
    r0 = r28 rlwinm 2; // rlwinm
    /* lfsx f0, r8, r0 */ // 0x80616794
    /* fadds f0, f1, f0 */ // 0x80616798
    /* stfs f0, 0x14(r3) */ // 0x8061679C
    /* lfsx f0, r7, r0 */ // 0x806167A0
    /* stfs f0, 0x18(r3) */ // 0x806167A4
    /* lfsx f0, r6, r0 */ // 0x806167A8
    /* stfs f0, 0x20(r3) */ // 0x806167AC
    r5 = *(4 + r11); // lha @ 0x806167B0
    r0 = r5 + -1; // 0x806167B4
    *(4 + r11) = r0; // sth @ 0x806167B8
    /* extsh. r0, r0 */ // 0x806167BC
    if (>) goto 0x0x806167d8;
    r0 = *(0x10 + r3); // lhz @ 0x806167C4
    /* li r30, 1 */ // 0x806167C8
    /* andc r0, r0, r9 */ // 0x806167CC
    *(0x10 + r3) = r0; // sth @ 0x806167D0
    /* b 0x806167dc */ // 0x806167D4
    /* li r29, 1 */ // 0x806167D8
    r28 = r28 + 1; // 0x806167DC
    if (counter-- != 0) goto 0x0x80616700;
    /* lfs f1, 0x14(r3) */ // 0x806167E4
    /* lfs f0, 4(r12) */ // 0x806167E8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806167EC
    if (>) goto 0x0x80616804;
    /* lfs f1, 0x20(r3) */ // 0x806167F4
    /* lfs f0, 0(r12) */ // 0x806167F8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806167FC
    if (<=) goto 0x0x80616808;
    /* li r31, 1 */ // 0x80616804
    if (==) goto 0x0x80616820;
    if (!=) goto 0x0x80616820;
    /* li r0, 1 */ // 0x80616818
    *(0 + r4) = r0; // stb @ 0x8061681C
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x80616824
    r30 = *(0x18 + r1); // lwz @ 0x80616828
    r29 = *(0x14 + r1); // lwz @ 0x8061682C
    r28 = *(0x10 + r1); // lwz @ 0x80616830
    return;
}