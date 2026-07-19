/* Function at 0x8061B890, size=240 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8061B890(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x48 + r1) = r30; // stw @ 0x8061B8A0
    r30 = r3;
    FUN_8061ED38(); // bl 0x8061ED38
    r5 = *(0 + r3); // lwz @ 0x8061B8AC
    /* lis r4, 0 */ // 0x8061B8B0
    r0 = *(4 + r3); // lwz @ 0x8061B8B4
    *(0xc + r1) = r0; // stw @ 0x8061B8B8
    /* lfs f0, 0(r4) */ // 0x8061B8BC
    *(8 + r1) = r5; // stw @ 0x8061B8C0
    /* lfs f1, 0xc(r1) */ // 0x8061B8C4
    r0 = *(8 + r3); // lwz @ 0x8061B8C8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8061B8CC
    *(0x10 + r1) = r0; // stw @ 0x8061B8D0
    if (>=) goto 0x0x8061b8dc;
    /* stfs f0, 0xc(r1) */ // 0x8061B8D8
    r3 = r30;
    FUN_8061DFE0(r3); // bl 0x8061DFE0
    /* lfs f1, 0x64(r3) */ // 0x8061B8E4
    r3 = r30;
    /* lfs f0, 0xc(r1) */ // 0x8061B8EC
    /* fmuls f0, f0, f1 */ // 0x8061B8F0
    /* stfs f0, 0xc(r1) */ // 0x8061B8F4
    FUN_8061E048(r3); // bl 0x8061E048
    r12 = *(0 + r3); // lwz @ 0x8061B8FC
    r12 = *(0x14 + r12); // lwz @ 0x8061B904
    /* mtctr r12 */ // 0x8061B908
    /* bctrl  */ // 0x8061B90C
    r3 = r30;
    FUN_8061DFE0(r4, r3); // bl 0x8061DFE0
    r4 = *(0x68 + r3); // lwz @ 0x8061B918
    r0 = *(0x6c + r3); // lwz @ 0x8061B91C
    *(0x1c + r1) = r0; // stw @ 0x8061B920
    *(0x18 + r1) = r4; // stw @ 0x8061B924
    r4 = *(0x70 + r3); // lwz @ 0x8061B928
    r0 = *(0x74 + r3); // lwz @ 0x8061B92C
    *(0x24 + r1) = r0; // stw @ 0x8061B930
    *(0x20 + r1) = r4; // stw @ 0x8061B934
    r4 = *(0x78 + r3); // lwz @ 0x8061B938
    r0 = *(0x7c + r3); // lwz @ 0x8061B93C
    *(0x2c + r1) = r0; // stw @ 0x8061B940
    *(0x28 + r1) = r4; // stw @ 0x8061B944
    r4 = *(0x80 + r3); // lwz @ 0x8061B948
    r0 = *(0x84 + r3); // lwz @ 0x8061B94C
    *(0x34 + r1) = r0; // stw @ 0x8061B950
    *(0x30 + r1) = r4; // stw @ 0x8061B954
    r4 = *(0x88 + r3); // lwz @ 0x8061B958
    r0 = *(0x8c + r3); // lwz @ 0x8061B95C
    *(0x3c + r1) = r0; // stw @ 0x8061B960
    *(0x38 + r1) = r4; // stw @ 0x8061B964
    r4 = *(0x90 + r3); // lwz @ 0x8061B968
    r0 = *(0x94 + r3); // lwz @ 0x8061B96C
    r3 = r30;
    *(0x44 + r1) = r0; // stw @ 0x8061B974
    *(0x40 + r1) = r4; // stw @ 0x8061B978
    FUN_8061DA88(r3); // bl 0x8061DA88
}