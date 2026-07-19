/* Function at 0x80900F5C, size=396 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_80900F5C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x44 + r1) = r29; // stw @ 0x80900F74
    *(0x40 + r1) = r28; // stw @ 0x80900F78
    r0 = *(0x164 + r3); // lwz @ 0x80900F7C
    r4 = *(0x148 + r3); // lwz @ 0x80900F80
    r3 = *(0x160 + r3); // lwz @ 0x80900F84
    /* slwi r0, r0, 4 */ // 0x80900F88
    r3 = r3 + r0; // 0x80900F90
    r28 = *(4 + r3); // lwz @ 0x80900F94
    if (==) goto 0x0x80900fa4;
    r3 = r4;
    FUN_80842DF4(r3); // bl 0x80842DF4
    /* lis r4, 0 */ // 0x80900FA4
    r0 = *(0x2c + r31); // lhz @ 0x80900FA8
    r6 = *(0 + r4); // lwz @ 0x80900FAC
    r3 = r31;
    r7 = *(0xb0 + r31); // lbz @ 0x80900FB4
    r0 = r0 | 1; // 0x80900FB8
    /* lfs f0, 0xe4(r31) */ // 0x80900FBC
    /* li r4, 1 */ // 0x80900FC0
    r5 = r7 u/ r6; // 0x80900FC4
    r5 = r5 * r6; // 0x80900FC8
    /* subf r5, r5, r7 */ // 0x80900FCC
    *(0x14c + r31) = r5; // stw @ 0x80900FD0
    /* lfs f6, 0xc(r28) */ // 0x80900FD4
    /* lfs f5, 0x10(r28) */ // 0x80900FD8
    /* lfs f4, 0x14(r28) */ // 0x80900FDC
    /* stfs f4, 0xc8(r31) */ // 0x80900FE0
    /* stfs f6, 0xc0(r31) */ // 0x80900FE4
    /* stfs f5, 0xc4(r31) */ // 0x80900FE8
    /* lfs f2, 4(r28) */ // 0x80900FEC
    /* lfs f3, 0(r28) */ // 0x80900FF0
    /* lfs f1, 8(r28) */ // 0x80900FF4
    /* fadds f0, f2, f0 */ // 0x80900FF8
    /* stfs f1, 0xd4(r31) */ // 0x80900FFC
    /* stfs f3, 0xcc(r31) */ // 0x80901000
    /* stfs f2, 0xd0(r31) */ // 0x80901004
    *(0x2c + r31) = r0; // sth @ 0x80901008
    /* stfs f3, 0x30(r31) */ // 0x8090100C
    /* stfs f0, 0x34(r31) */ // 0x80901010
    /* stfs f1, 0x38(r31) */ // 0x80901014
    r12 = *(0 + r31); // lwz @ 0x80901018
    /* stfs f6, 0x2c(r1) */ // 0x8090101C
    r12 = *(0x68 + r12); // lwz @ 0x80901020
    /* stfs f5, 0x30(r1) */ // 0x80901024
    /* stfs f4, 0x34(r1) */ // 0x80901028
    /* stfs f6, 0x20(r1) */ // 0x8090102C
    /* stfs f5, 0x24(r1) */ // 0x80901030
    /* stfs f4, 0x28(r1) */ // 0x80901034
    /* stfs f3, 0x14(r1) */ // 0x80901038
    /* stfs f2, 0x18(r1) */ // 0x8090103C
    /* stfs f1, 0x1c(r1) */ // 0x80901040
    /* stfs f3, 8(r1) */ // 0x80901044
    /* stfs f2, 0xc(r1) */ // 0x80901048
    /* stfs f1, 0x10(r1) */ // 0x8090104C
    /* mtctr r12 */ // 0x80901050
    /* bctrl  */ // 0x80901054
    r12 = *(0 + r31); // lwz @ 0x80901058
    r3 = r31;
    /* li r4, 1 */ // 0x80901060
    r12 = *(0xf0 + r12); // lwz @ 0x80901064
    /* mtctr r12 */ // 0x80901068
    /* bctrl  */ // 0x8090106C
    /* li r29, 0 */ // 0x80901070
    /* li r28, 0 */ // 0x80901074
    /* li r30, 0 */ // 0x80901078
    /* b 0x809010b4 */ // 0x8090107C
    r0 = *(0x314 + r31); // lwz @ 0x80901080
    r3 = r0 + r28; // 0x80901084
    *(8 + r3) = r30; // stw @ 0x80901088
    r3 = *(0x314 + r31); // lwz @ 0x8090108C
    /* lwzx r3, r3, r28 */ // 0x80901090
    if (==) goto 0x0x809010ac;
    r12 = *(0 + r3); // lwz @ 0x8090109C
    r12 = *(0x10 + r12); // lwz @ 0x809010A0
    /* mtctr r12 */ // 0x809010A4
    /* bctrl  */ // 0x809010A8
    r28 = r28 + 0x64; // 0x809010AC
    r29 = r29 + 1; // 0x809010B0
    r0 = *(0x310 + r31); // lwz @ 0x809010B4
    if (<) goto 0x0x80901080;
    /* li r0, 0 */ // 0x809010C0
    *(0x308 + r31) = r0; // stw @ 0x809010C4
    r31 = *(0x4c + r1); // lwz @ 0x809010C8
    r30 = *(0x48 + r1); // lwz @ 0x809010CC
    r29 = *(0x44 + r1); // lwz @ 0x809010D0
    r28 = *(0x40 + r1); // lwz @ 0x809010D4
    r0 = *(0x54 + r1); // lwz @ 0x809010D8
    return;
}