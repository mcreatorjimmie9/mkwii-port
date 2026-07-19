/* Function at 0x8081F5F0, size=312 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8081F5F0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8081F5F8
    /* li r5, 0 */ // 0x8081F5FC
    *(0x14 + r1) = r0; // stw @ 0x8081F600
    /* li r0, 0x258 */ // 0x8081F604
    /* lfs f0, 0(r4) */ // 0x8081F608
    /* li r6, 0 */ // 0x8081F60C
    *(0xc + r1) = r31; // stw @ 0x8081F610
    r31 = r3;
    *(0x156 + r3) = r5; // sth @ 0x8081F618
    *(0x17a + r3) = r5; // sth @ 0x8081F61C
    *(0x158 + r3) = r0; // sth @ 0x8081F620
    /* stfs f0, 0x15c(r3) */ // 0x8081F624
    /* stfs f0, 0x160(r3) */ // 0x8081F628
    /* stfs f0, 0x164(r3) */ // 0x8081F62C
    /* b 0x8081f644 */ // 0x8081F630
    r0 = r6 rlwinm 1; // rlwinm
    r4 = r3 + r0; // 0x8081F638
    *(0x174 + r4) = r6; // sth @ 0x8081F63C
    r6 = r6 + 1; // 0x8081F640
    r0 = *(0x50 + r3); // lwz @ 0x8081F644
    /* clrlwi r4, r6, 0x10 */ // 0x8081F648
    if (<) goto 0x0x8081f634;
    /* lfs f1, 0xdc(r3) */ // 0x8081F654
    r5 = r31;
    /* lfs f0, 0xb4(r3) */ // 0x8081F65C
    /* li r6, 0 */ // 0x8081F660
    /* lfs f2, 0x64(r3) */ // 0x8081F664
    /* fmuls f6, f1, f0 */ // 0x8081F668
    /* lfs f0, 0x68(r3) */ // 0x8081F66C
    /* lfs f1, 0x6c(r3) */ // 0x8081F670
    /* lfs f4, 0x7c(r3) */ // 0x8081F674
    /* fmuls f5, f2, f6 */ // 0x8081F678
    /* lfs f2, 0x80(r3) */ // 0x8081F67C
    /* fmuls f3, f0, f6 */ // 0x8081F680
    /* lfs f0, 0x84(r3) */ // 0x8081F684
    /* fmuls f1, f1, f6 */ // 0x8081F688
    /* fadds f4, f4, f5 */ // 0x8081F68C
    /* fadds f2, f2, f3 */ // 0x8081F690
    /* fadds f0, f0, f1 */ // 0x8081F694
    /* stfs f4, 0x168(r3) */ // 0x8081F698
    /* stfs f2, 0x16c(r3) */ // 0x8081F69C
    /* stfs f0, 0x170(r3) */ // 0x8081F6A0
    /* b 0x8081f6cc */ // 0x8081F6A4
    r4 = *(0x20 + r5); // lwz @ 0x8081F6A8
    r5 = r5 + 4; // 0x8081F6AC
    /* lfs f0, 0x7c(r3) */ // 0x8081F6B0
    r6 = r6 + 1; // 0x8081F6B4
    /* stfs f0, 0x44(r4) */ // 0x8081F6B8
    /* lfs f0, 0x80(r3) */ // 0x8081F6BC
    /* stfs f0, 0x48(r4) */ // 0x8081F6C0
    /* lfs f0, 0x84(r3) */ // 0x8081F6C4
    /* stfs f0, 0x4c(r4) */ // 0x8081F6C8
    r0 = *(0x50 + r3); // lwz @ 0x8081F6CC
    if (<) goto 0x0x8081f6a8;
    r3 = r31;
    FUN_8081F284(r3); // bl 0x8081F284
    r3 = r31;
    FUN_8061DECC(r3, r3); // bl 0x8061DECC
    if (==) goto 0x0x8081f714;
    r3 = r31;
    FUN_8061E010(r3, r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8081F6F8
    /* lis r4, 0 */ // 0x8081F6FC
    /* lfs f1, 0(r4) */ // 0x8081F700
    /* li r4, 0xf6 */ // 0x8081F704
    r12 = *(0xe0 + r12); // lwz @ 0x8081F708
    /* mtctr r12 */ // 0x8081F70C
    /* bctrl  */ // 0x8081F710
    r0 = *(0x14 + r1); // lwz @ 0x8081F714
    r31 = *(0xc + r1); // lwz @ 0x8081F718
    return;
}