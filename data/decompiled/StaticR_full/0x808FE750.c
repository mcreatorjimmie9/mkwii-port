/* Function at 0x808FE750, size=348 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808FE750(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x24 + r1) = r29; // stw @ 0x808FE768
    *(0x20 + r1) = r28; // stw @ 0x808FE76C
    r0 = *(0x148 + r3); // lwz @ 0x808FE770
    if (==) goto 0x0x808fe784;
    r3 = r0;
    FUN_80842DF4(r3); // bl 0x80842DF4
    /* lis r3, 0 */ // 0x808FE784
    r0 = *(0x14c + r31); // lwz @ 0x808FE788
    r3 = *(0 + r3); // lwz @ 0x808FE78C
    if (>) goto 0x0x808fe828;
    r0 = *(0x54 + r31); // lbz @ 0x808FE798
    if (==) goto 0x0x808fe7ac;
    r5 = r31 + 0x48; // 0x808FE7A4
    /* b 0x808fe7dc */ // 0x808FE7A8
    /* li r0, 1 */ // 0x808FE7AC
    *(0x54 + r31) = r0; // stb @ 0x808FE7B0
    r4 = r31 + 0x58; // 0x808FE7B8
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x808FE7C0
    r5 = r31 + 0x48; // 0x808FE7C4
    /* stfs f0, 0x48(r31) */ // 0x808FE7C8
    /* lfs f0, 0xc(r1) */ // 0x808FE7CC
    /* stfs f0, 0x4c(r31) */ // 0x808FE7D0
    /* lfs f0, 0x10(r1) */ // 0x808FE7D4
    /* stfs f0, 0x50(r31) */ // 0x808FE7D8
    /* lis r3, 0 */ // 0x808FE7DC
    /* lis r4, 0 */ // 0x808FE7E0
    /* lfs f0, 0(r3) */ // 0x808FE7E4
    /* lis r0, 0x4330 */ // 0x808FE7E8
    /* lfs f1, 4(r5) */ // 0x808FE7EC
    /* lis r3, 0 */ // 0x808FE7F0
    r28 = *(0 + r4); // lwz @ 0x808FE7F4
    /* fdivs f2, f1, f0 */ // 0x808FE7F8
    *(0x1c + r1) = r28; // stw @ 0x808FE7FC
    /* lfd f1, 0(r3) */ // 0x808FE800
    *(0x18 + r1) = r0; // stw @ 0x808FE804
    /* lfd f0, 0x18(r1) */ // 0x808FE808
    /* fsubs f0, f0, f1 */ // 0x808FE80C
    /* fmuls f1, f2, f0 */ // 0x808FE810
    FUN_805E3430(); // bl 0x805E3430
    r0 = r3 u/ r28; // 0x808FE818
    r0 = r0 * r28; // 0x808FE81C
    /* subf r0, r0, r3 */ // 0x808FE820
    *(0x14c + r31) = r0; // stw @ 0x808FE824
    r12 = *(0 + r31); // lwz @ 0x808FE828
    r3 = r31;
    /* li r4, 0 */ // 0x808FE830
    r12 = *(0x68 + r12); // lwz @ 0x808FE834
    /* mtctr r12 */ // 0x808FE838
    /* bctrl  */ // 0x808FE83C
    /* li r29, 0 */ // 0x808FE840
    /* li r28, 0 */ // 0x808FE844
    /* li r30, 0 */ // 0x808FE848
    /* b 0x808fe884 */ // 0x808FE84C
    r0 = *(0x314 + r31); // lwz @ 0x808FE850
    r3 = r0 + r28; // 0x808FE854
    *(8 + r3) = r30; // stw @ 0x808FE858
    r3 = *(0x314 + r31); // lwz @ 0x808FE85C
    /* lwzx r3, r3, r28 */ // 0x808FE860
    if (==) goto 0x0x808fe87c;
    r12 = *(0 + r3); // lwz @ 0x808FE86C
    r12 = *(0x10 + r12); // lwz @ 0x808FE870
    /* mtctr r12 */ // 0x808FE874
    /* bctrl  */ // 0x808FE878
    r28 = r28 + 0x64; // 0x808FE87C
    r29 = r29 + 1; // 0x808FE880
    r0 = *(0x310 + r31); // lwz @ 0x808FE884
    if (<) goto 0x0x808fe850;
    /* li r0, 0 */ // 0x808FE890
    *(0x308 + r31) = r0; // stw @ 0x808FE894
    *(0x30c + r31) = r0; // stw @ 0x808FE898
    r31 = *(0x2c + r1); // lwz @ 0x808FE89C
    r30 = *(0x28 + r1); // lwz @ 0x808FE8A0
    r29 = *(0x24 + r1); // lwz @ 0x808FE8A4
    r28 = *(0x20 + r1); // lwz @ 0x808FE8A8
}