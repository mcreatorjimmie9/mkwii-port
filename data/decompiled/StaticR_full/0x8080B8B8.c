/* Function at 0x8080B8B8, size=192 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8080B8B8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x78 + r1) = r30; // stw @ 0x8080B8CC
    *(0x74 + r1) = r29; // stw @ 0x8080B8D0
    r3 = *(0x20 + r3); // lwz @ 0x8080B8D4
    r12 = *(0 + r3); // lwz @ 0x8080B8D8
    r12 = *(0x14 + r12); // lwz @ 0x8080B8DC
    /* mtctr r12 */ // 0x8080B8E0
    /* bctrl  */ // 0x8080B8E4
    r3 = *(0x20 + r31); // lwz @ 0x8080B8E8
    r0 = *(0x2c + r31); // lhz @ 0x8080B8EC
    /* lfs f2, 0x20(r3) */ // 0x8080B8F0
    /* lfs f1, 0x1c(r3) */ // 0x8080B8F4
    r0 = r0 | 1; // 0x8080B8F8
    /* lfs f0, 0x18(r3) */ // 0x8080B8FC
    /* stfs f0, 0x30(r31) */ // 0x8080B900
    *(0x2c + r31) = r0; // sth @ 0x8080B904
    /* stfs f1, 0x34(r31) */ // 0x8080B908
    /* stfs f2, 0x38(r31) */ // 0x8080B90C
    FUN_808AB978(); // bl 0x808AB978
    r0 = *(0x2c + r31); // lhz @ 0x8080B914
    /* lis r5, 0 */ // 0x8080B918
    /* stfs f1, 0x34(r31) */ // 0x8080B91C
    r0 = r0 | 1; // 0x8080B924
    r7 = *(0x20 + r31); // lwz @ 0x8080B928
    *(0x2c + r31) = r0; // sth @ 0x8080B92C
    r4 = r31 + 0xb4; // 0x8080B930
    /* lfs f1, 0(r5) */ // 0x8080B934
    r6 = *(0x24 + r7); // lwz @ 0x8080B93C
    r0 = *(0x28 + r7); // lwz @ 0x8080B940
    *(0x28 + r1) = r0; // stw @ 0x8080B944
    *(0x24 + r1) = r6; // stw @ 0x8080B948
    r0 = *(0x2c + r7); // lwz @ 0x8080B94C
    *(0x2c + r1) = r0; // stw @ 0x8080B950
    FUN_8080BC28(); // bl 0x8080BC28
    /* lfs f0, 0x30(r1) */ // 0x8080B958
    r3 = r31 + 0xb4; // 0x8080B95C
    /* stfs f0, 0xb4(r31) */ // 0x8080B960
    /* lfs f0, 0x34(r1) */ // 0x8080B964
    /* stfs f0, 0xb8(r31) */ // 0x8080B968
    /* lfs f0, 0x38(r1) */ // 0x8080B96C
    /* stfs f0, 0xbc(r31) */ // 0x8080B970
    FUN_805E3430(); // bl 0x805E3430
}