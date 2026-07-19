/* Function at 0x806AE720, size=364 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806AE720(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806AE728
    /* li r0, -1 */ // 0x806AE730
    /* lfs f1, 0(r4) */ // 0x806AE734
    *(0x1c + r1) = r31; // stw @ 0x806AE738
    *(0x18 + r1) = r30; // stw @ 0x806AE73C
    *(0x14 + r1) = r29; // stw @ 0x806AE740
    r29 = r3;
    *(0x1dc + r3) = r0; // stw @ 0x806AE748
    r3 = r3 + 0x1d0; // 0x806AE74C
    FUN_8064ED64(r3); // bl 0x8064ED64
    /* li r0, 1 */ // 0x806AE754
    *(0x1d4 + r29) = r0; // stb @ 0x806AE758
    /* lis r3, 0 */ // 0x806AE75C
    r3 = *(0 + r3); // lwz @ 0x806AE760
    r3 = *(0 + r3); // lwz @ 0x806AE764
    r30 = *(0x120 + r3); // lwz @ 0x806AE768
    if (!=) goto 0x0x806ae77c;
    /* li r30, 0 */ // 0x806AE774
    /* b 0x806ae7d0 */ // 0x806AE778
    /* lis r31, 0 */ // 0x806AE77C
    r31 = r31 + 0; // 0x806AE780
    if (==) goto 0x0x806ae7cc;
    r12 = *(0 + r30); // lwz @ 0x806AE788
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806AE790
    /* mtctr r12 */ // 0x806AE794
    /* bctrl  */ // 0x806AE798
    /* b 0x806ae7b4 */ // 0x806AE79C
    if (!=) goto 0x0x806ae7b0;
    /* li r0, 1 */ // 0x806AE7A8
    /* b 0x806ae7c0 */ // 0x806AE7AC
    r3 = *(0 + r3); // lwz @ 0x806AE7B0
    if (!=) goto 0x0x806ae7a0;
    /* li r0, 0 */ // 0x806AE7BC
    if (==) goto 0x0x806ae7cc;
    /* b 0x806ae7d0 */ // 0x806AE7C8
    /* li r30, 0 */ // 0x806AE7CC
    r0 = r29 + 0x1d0; // 0x806AE7D0
    *(0xb1c + r30) = r0; // stw @ 0x806AE7D4
    /* lis r3, 0 */ // 0x806AE7D8
    r3 = *(0 + r3); // lwz @ 0x806AE7DC
    r3 = *(0 + r3); // lwz @ 0x806AE7E0
    r30 = *(0x124 + r3); // lwz @ 0x806AE7E4
    if (!=) goto 0x0x806ae7f8;
    /* li r30, 0 */ // 0x806AE7F0
    /* b 0x806ae84c */ // 0x806AE7F4
    /* lis r31, 0 */ // 0x806AE7F8
    r31 = r31 + 0; // 0x806AE7FC
    if (==) goto 0x0x806ae848;
    r12 = *(0 + r30); // lwz @ 0x806AE804
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806AE80C
    /* mtctr r12 */ // 0x806AE810
    /* bctrl  */ // 0x806AE814
    /* b 0x806ae830 */ // 0x806AE818
    if (!=) goto 0x0x806ae82c;
    /* li r0, 1 */ // 0x806AE824
    /* b 0x806ae83c */ // 0x806AE828
    r3 = *(0 + r3); // lwz @ 0x806AE82C
    if (!=) goto 0x0x806ae81c;
    /* li r0, 0 */ // 0x806AE838
    if (==) goto 0x0x806ae848;
    /* b 0x806ae84c */ // 0x806AE844
    /* li r30, 0 */ // 0x806AE848
    r0 = r29 + 0x1d0; // 0x806AE84C
    *(0x8b8 + r30) = r0; // stw @ 0x806AE850
    r3 = r29;
    /* li r4, 0x46 */ // 0x806AE858
    r12 = *(0 + r29); // lwz @ 0x806AE85C
    /* li r5, 0 */ // 0x806AE860
    r12 = *(0x24 + r12); // lwz @ 0x806AE864
    /* mtctr r12 */ // 0x806AE868
    /* bctrl  */ // 0x806AE86C
    r0 = *(0x24 + r1); // lwz @ 0x806AE870
    r31 = *(0x1c + r1); // lwz @ 0x806AE874
    r30 = *(0x18 + r1); // lwz @ 0x806AE878
    r29 = *(0x14 + r1); // lwz @ 0x806AE87C
    return;
}