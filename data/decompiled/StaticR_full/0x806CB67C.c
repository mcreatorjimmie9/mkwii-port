/* Function at 0x806CB67C, size=312 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806CB67C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806CB684
    /* li r0, 1 */ // 0x806CB68C
    *(0x3c + r1) = r31; // stw @ 0x806CB690
    *(0x38 + r1) = r30; // stw @ 0x806CB694
    *(0x34 + r1) = r29; // stw @ 0x806CB698
    r29 = r3;
    *(0x80 + r3) = r0; // stb @ 0x806CB6A0
    r3 = *(0 + r4); // lwz @ 0x806CB6A4
    r3 = *(0 + r3); // lwz @ 0x806CB6A8
    r30 = *(0x204 + r3); // lwz @ 0x806CB6AC
    if (!=) goto 0x0x806cb6c0;
    /* li r30, 0 */ // 0x806CB6B8
    /* b 0x806cb714 */ // 0x806CB6BC
    /* lis r31, 0 */ // 0x806CB6C0
    r31 = r31 + 0; // 0x806CB6C4
    if (==) goto 0x0x806cb710;
    r12 = *(0 + r30); // lwz @ 0x806CB6CC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806CB6D4
    /* mtctr r12 */ // 0x806CB6D8
    /* bctrl  */ // 0x806CB6DC
    /* b 0x806cb6f8 */ // 0x806CB6E0
    if (!=) goto 0x0x806cb6f4;
    /* li r0, 1 */ // 0x806CB6EC
    /* b 0x806cb704 */ // 0x806CB6F0
    r3 = *(0 + r3); // lwz @ 0x806CB6F4
    if (!=) goto 0x0x806cb6e4;
    /* li r0, 0 */ // 0x806CB700
    if (==) goto 0x0x806cb710;
    /* b 0x806cb714 */ // 0x806CB70C
    /* li r30, 0 */ // 0x806CB710
    if (==) goto 0x0x806cb798;
    r0 = *(0x174 + r29); // lbz @ 0x806CB71C
    r3 = r30 + 0x94; // 0x806CB720
    r5 = *(0x178 + r29); // lwz @ 0x806CB724
    /* li r6, 2 */ // 0x806CB728
    /* mulli r0, r0, 0xc */ // 0x806CB72C
    r4 = r30 + r0; // 0x806CB730
    r4 = *(0x54 + r4); // lwz @ 0x806CB734
    FUN_806CD160(r6); // bl 0x806CD160
    /* lis r4, 0 */ // 0x806CB73C
    r31 = r3;
    r4 = r4 + 0; // 0x806CB744
    r3 = r29 + 0xa8; // 0x806CB748
    r4 = r4 + 0xc1; // 0x806CB74C
    FUN_80665D1C(r4, r4, r3, r4); // bl 0x80665D1C
    /* lfs f2, 4(r31) */ // 0x806CB754
    /* lis r4, 0 */ // 0x806CB758
    /* lfs f3, 0(r31) */ // 0x806CB75C
    /* stfs f3, 0x2c(r3) */ // 0x806CB760
    /* lfs f0, 0(r4) */ // 0x806CB764
    /* stfs f2, 0x30(r3) */ // 0x806CB768
    /* stfs f0, 0x34(r3) */ // 0x806CB76C
    /* lfs f1, 8(r31) */ // 0x806CB770
    /* stfs f1, 0x44(r3) */ // 0x806CB774
    /* stfs f3, 8(r1) */ // 0x806CB778
    /* stfs f2, 0xc(r1) */ // 0x806CB77C
    /* stfs f3, 0x18(r1) */ // 0x806CB780
    /* stfs f2, 0x1c(r1) */ // 0x806CB784
    /* stfs f0, 0x20(r1) */ // 0x806CB788
    /* stfs f1, 0x10(r1) */ // 0x806CB78C
    /* stfs f1, 0x14(r1) */ // 0x806CB790
    /* stfs f1, 0x48(r3) */ // 0x806CB794
    r0 = *(0x44 + r1); // lwz @ 0x806CB798
    r31 = *(0x3c + r1); // lwz @ 0x806CB79C
    r30 = *(0x38 + r1); // lwz @ 0x806CB7A0
    r29 = *(0x34 + r1); // lwz @ 0x806CB7A4
    return;
}