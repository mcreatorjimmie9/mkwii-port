/* Function at 0x807BC7C8, size=396 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_807BC7C8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807BC7D0
    /* li r0, 0 */ // 0x807BC7D8
    /* lfs f0, 0(r4) */ // 0x807BC7DC
    *(0x1c + r1) = r31; // stw @ 0x807BC7E0
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x807BC7E8
    r5 = *(0x140 + r3); // lwz @ 0x807BC7EC
    r30 = *(0 + r5); // lwz @ 0x807BC7F0
    *(0xc + r5) = r0; // sth @ 0x807BC7F4
    /* stfs f0, 0x10(r5) */ // 0x807BC7F8
    r3 = *(0x150 + r3); // lwz @ 0x807BC7FC
    FUN_805AE488(); // bl 0x805AE488
    r3 = r30;
    FUN_807B5EBC(r3); // bl 0x807B5EBC
    if (==) goto 0x0x807bc884;
    r3 = *(0x144 + r31); // lwz @ 0x807BC814
    r12 = *(0x34 + r3); // lwz @ 0x807BC818
    r12 = *(0x44 + r12); // lwz @ 0x807BC81C
    /* mtctr r12 */ // 0x807BC820
    /* bctrl  */ // 0x807BC824
    r12 = *(0 + r3); // lwz @ 0x807BC828
    r12 = *(0x18 + r12); // lwz @ 0x807BC82C
    /* mtctr r12 */ // 0x807BC830
    /* bctrl  */ // 0x807BC834
    /* lis r4, 0 */ // 0x807BC838
    r0 = r3 + 1; // 0x807BC83C
    r4 = *(0 + r4); // lwz @ 0x807BC840
    /* lis r3, 0 */ // 0x807BC844
    /* slwi r0, r0, 1 */ // 0x807BC848
    r3 = r3 + 0; // 0x807BC84C
    r4 = *(0x20 + r4); // lwz @ 0x807BC850
    /* lhax r0, r3, r0 */ // 0x807BC854
    if (<=) goto 0x0x807bc870;
    r3 = *(0x140 + r31); // lwz @ 0x807BC860
    r0 = *(0xc + r3); // lhz @ 0x807BC864
    r0 = r0 | 1; // 0x807BC868
    *(0xc + r3) = r0; // sth @ 0x807BC86C
    r3 = *(0x144 + r31); // lwz @ 0x807BC870
    r12 = *(0x34 + r3); // lwz @ 0x807BC874
    r12 = *(0x20 + r12); // lwz @ 0x807BC878
    /* mtctr r12 */ // 0x807BC87C
    /* bctrl  */ // 0x807BC880
    /* lis r3, 0 */ // 0x807BC884
    /* li r4, 2 */ // 0x807BC888
    r3 = *(0 + r3); // lwz @ 0x807BC88C
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (==) goto 0x0x807bc8c8;
    r3 = r30;
    FUN_807B5EBC(r3); // bl 0x807B5EBC
    if (==) goto 0x0x807bc8bc;
    r3 = r31;
    r4 = r31 + 0x64; // 0x807BC8B0
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807bc8c8 */ // 0x807BC8B8
    r3 = r31;
    r4 = r31 + 0x90; // 0x807BC8C0
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    r4 = *(0x140 + r31); // lwz @ 0x807BC8C8
    /* lis r3, 0 */ // 0x807BC8CC
    /* lfs f2, 0(r3) */ // 0x807BC8D0
    r30 = *(0 + r4); // lwz @ 0x807BC8D4
    r3 = *(0x150 + r31); // lwz @ 0x807BC8D8
    /* fctiwz f1, f2 */ // 0x807BC8DC
    r0 = *(0xc + r4); // lhz @ 0x807BC8E0
    *(4 + r3) = r0; // sth @ 0x807BC8E4
    /* lfs f0, 0x10(r4) */ // 0x807BC8E8
    /* stfd f1, 8(r1) */ // 0x807BC8EC
    /* fmuls f0, f2, f0 */ // 0x807BC8F0
    r3 = *(0x150 + r31); // lwz @ 0x807BC8F4
    r4 = *(0xc + r1); // lwz @ 0x807BC8F8
    /* fctiwz f0, f0 */ // 0x807BC8FC
    /* stfd f0, 0x10(r1) */ // 0x807BC900
    r0 = *(0x14 + r1); // lwz @ 0x807BC904
    r4 = r4 + r0; // 0x807BC908
    /* clrlwi r4, r4, 0x18 */ // 0x807BC90C
    FUN_805AE614(); // bl 0x805AE614
    r31 = *(0x150 + r31); // lwz @ 0x807BC914
    r3 = r30;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BC920
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x807BC928
    r4 = r31;
    r3 = *(0xc + r3); // lwz @ 0x807BC930
    /* lwzx r3, r3, r0 */ // 0x807BC934
    FUN_805C4C70(r4); // bl 0x805C4C70
    r0 = *(0x24 + r1); // lwz @ 0x807BC93C
    r31 = *(0x1c + r1); // lwz @ 0x807BC940
    r30 = *(0x18 + r1); // lwz @ 0x807BC944
    return;
}