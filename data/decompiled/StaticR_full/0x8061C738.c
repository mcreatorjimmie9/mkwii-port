/* Function at 0x8061C738, size=268 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_8061C738(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x48 + r1) = r30; // stw @ 0x8061C748
    r30 = r3;
    r3 = *(0x10 + r3); // lwz @ 0x8061C750
    FUN_80624578(); // bl 0x80624578
    r3 = *(0x10 + r30); // lwz @ 0x8061C758
    FUN_806250B8(); // bl 0x806250B8
    r3 = *(0x18 + r30); // lwz @ 0x8061C760
    FUN_808509A0(); // bl 0x808509A0
    r3 = r30;
    FUN_8061ED38(r3); // bl 0x8061ED38
    r5 = *(0 + r3); // lwz @ 0x8061C770
    /* lis r4, 0 */ // 0x8061C774
    r0 = *(4 + r3); // lwz @ 0x8061C778
    *(0xc + r1) = r0; // stw @ 0x8061C77C
    /* lfs f0, 0(r4) */ // 0x8061C780
    *(8 + r1) = r5; // stw @ 0x8061C784
    /* lfs f1, 0xc(r1) */ // 0x8061C788
    r0 = *(8 + r3); // lwz @ 0x8061C78C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8061C790
    *(0x10 + r1) = r0; // stw @ 0x8061C794
    if (>=) goto 0x0x8061c7a0;
    /* stfs f0, 0xc(r1) */ // 0x8061C79C
    r3 = r30;
    FUN_8061DFE0(r3); // bl 0x8061DFE0
    /* lfs f1, 0x64(r3) */ // 0x8061C7A8
    r3 = r30;
    /* lfs f0, 0xc(r1) */ // 0x8061C7B0
    /* fmuls f0, f0, f1 */ // 0x8061C7B4
    /* stfs f0, 0xc(r1) */ // 0x8061C7B8
    FUN_8061E048(r3); // bl 0x8061E048
    r12 = *(0 + r3); // lwz @ 0x8061C7C0
    r12 = *(0x14 + r12); // lwz @ 0x8061C7C8
    /* mtctr r12 */ // 0x8061C7CC
    /* bctrl  */ // 0x8061C7D0
    r3 = r30;
    FUN_8061DFE0(r4, r3); // bl 0x8061DFE0
    r4 = *(0x68 + r3); // lwz @ 0x8061C7DC
    r0 = *(0x6c + r3); // lwz @ 0x8061C7E0
    *(0x1c + r1) = r0; // stw @ 0x8061C7E4
    *(0x18 + r1) = r4; // stw @ 0x8061C7E8
    r4 = *(0x70 + r3); // lwz @ 0x8061C7EC
    r0 = *(0x74 + r3); // lwz @ 0x8061C7F0
    *(0x24 + r1) = r0; // stw @ 0x8061C7F4
    *(0x20 + r1) = r4; // stw @ 0x8061C7F8
    r4 = *(0x78 + r3); // lwz @ 0x8061C7FC
    r0 = *(0x7c + r3); // lwz @ 0x8061C800
    *(0x2c + r1) = r0; // stw @ 0x8061C804
    *(0x28 + r1) = r4; // stw @ 0x8061C808
    r4 = *(0x80 + r3); // lwz @ 0x8061C80C
    r0 = *(0x84 + r3); // lwz @ 0x8061C810
    *(0x34 + r1) = r0; // stw @ 0x8061C814
    *(0x30 + r1) = r4; // stw @ 0x8061C818
    r4 = *(0x88 + r3); // lwz @ 0x8061C81C
    r0 = *(0x8c + r3); // lwz @ 0x8061C820
    *(0x3c + r1) = r0; // stw @ 0x8061C824
    *(0x38 + r1) = r4; // stw @ 0x8061C828
    r4 = *(0x90 + r3); // lwz @ 0x8061C82C
    r0 = *(0x94 + r3); // lwz @ 0x8061C830
    r3 = r30;
    *(0x44 + r1) = r0; // stw @ 0x8061C838
    *(0x40 + r1) = r4; // stw @ 0x8061C83C
    FUN_8061DA88(r3); // bl 0x8061DA88
}