/* Function at 0x807F1048, size=560 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807F1048(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x807F1050
    /* lfs f1, 0(r5) */ // 0x807F1058
    *(0x5c + r1) = r31; // stw @ 0x807F105C
    r31 = r3;
    *(0x58 + r1) = r30; // stw @ 0x807F1064
    /* lfs f0, 0(r4) */ // 0x807F1068
    /* fcmpu cr0, f1, f0 */ // 0x807F106C
    if (!=) goto 0x0x807f1098;
    /* lfs f0, 8(r4) */ // 0x807F1074
    /* fcmpu cr0, f1, f0 */ // 0x807F1078
    if (!=) goto 0x0x807f1098;
    /* lis r3, 0 */ // 0x807F1080
    /* stfs f1, 0xc(r1) */ // 0x807F1084
    /* lfs f0, 0(r3) */ // 0x807F1088
    /* stfs f0, 8(r1) */ // 0x807F108C
    /* stfs f1, 0x10(r1) */ // 0x807F1090
    /* b 0x807f10b8 */ // 0x807F1094
    /* lfs f0, 8(r4) */ // 0x807F1098
    /* lis r3, 0 */ // 0x807F109C
    /* lfs f2, 0(r4) */ // 0x807F10A0
    /* fneg f1, f0 */ // 0x807F10A4
    /* lfs f0, 0(r3) */ // 0x807F10A8
    /* stfs f0, 0xc(r1) */ // 0x807F10AC
    /* stfs f1, 8(r1) */ // 0x807F10B0
    /* stfs f2, 0x10(r1) */ // 0x807F10B4
    r3 = r4;
    FUN_80743DF8(r3, r4, r5); // bl 0x80743DF8
    /* lfs f0, 0x30(r31) */ // 0x807F10C8
    r3 = r31;
    /* stfs f0, 0x24(r1) */ // 0x807F10D0
    /* li r30, 0 */ // 0x807F10D4
    /* lfs f0, 0x34(r31) */ // 0x807F10D8
    /* stfs f0, 0x34(r1) */ // 0x807F10DC
    /* lfs f0, 0x38(r31) */ // 0x807F10E0
    /* stfs f0, 0x44(r1) */ // 0x807F10E4
    r12 = *(0 + r31); // lwz @ 0x807F10E8
    r12 = *(0x30 + r12); // lwz @ 0x807F10EC
    /* mtctr r12 */ // 0x807F10F0
    /* bctrl  */ // 0x807F10F4
    /* lis r4, 0x101 */ // 0x807F10F8
    r0 = *(0x20 + r3); // lwz @ 0x807F10FC
    r3 = r4 + 0x101; // 0x807F1100
    /* andc. r0, r3, r0 */ // 0x807F1104
    if (!=) goto 0x0x807f1124;
    /* lis r3, 0 */ // 0x807F110C
    r3 = *(0 + r3); // lwz @ 0x807F1110
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807f1124;
    /* li r30, 1 */ // 0x807F1120
    if (!=) goto 0x0x807f1184;
    r3 = *(0xd0 + r31); // lwz @ 0x807F112C
    r12 = *(0 + r3); // lwz @ 0x807F1130
    r12 = *(0xc + r12); // lwz @ 0x807F1134
    /* mtctr r12 */ // 0x807F1138
    /* bctrl  */ // 0x807F113C
    r3 = *(0xd0 + r31); // lwz @ 0x807F1140
    /* lfs f1, 0x3c(r31) */ // 0x807F1144
    r12 = *(0 + r3); // lwz @ 0x807F1148
    r12 = *(0x6c + r12); // lwz @ 0x807F114C
    /* mtctr r12 */ // 0x807F1150
    /* bctrl  */ // 0x807F1154
    r3 = *(0xd0 + r31); // lwz @ 0x807F1158
    r12 = *(0 + r3); // lwz @ 0x807F1160
    r12 = *(0x78 + r12); // lwz @ 0x807F1164
    /* mtctr r12 */ // 0x807F1168
    /* bctrl  */ // 0x807F116C
    r3 = *(0xd0 + r31); // lwz @ 0x807F1170
    r12 = *(0 + r3); // lwz @ 0x807F1174
    r12 = *(0x80 + r12); // lwz @ 0x807F1178
    /* mtctr r12 */ // 0x807F117C
    /* bctrl  */ // 0x807F1180
    /* li r0, 1 */ // 0x807F1184
    *(0xb0 + r31) = r0; // stw @ 0x807F1188
    r3 = *(0x20 + r31); // lwz @ 0x807F118C
    /* lis r4, 0 */ // 0x807F1190
    /* lfs f1, 0(r4) */ // 0x807F1194
    /* li r4, 0 */ // 0x807F1198
    r12 = *(0 + r3); // lwz @ 0x807F119C
    r12 = *(0x10 + r12); // lwz @ 0x807F11A0
    /* mtctr r12 */ // 0x807F11A4
    /* bctrl  */ // 0x807F11A8
    r5 = *(0xa0 + r31); // lwz @ 0x807F11AC
    /* lis r0, 0x4330 */ // 0x807F11B0
    r3 = *(0x20 + r31); // lwz @ 0x807F11B4
    /* lis r4, 0 */ // 0x807F11B8
    r5 = *(0 + r5); // lwz @ 0x807F11BC
    r12 = *(0 + r3); // lwz @ 0x807F11C0
    r5 = *(0x2e + r5); // lha @ 0x807F11C4
    *(0x48 + r1) = r0; // stw @ 0x807F11C8
    /* xoris r0, r5, 0x8000 */ // 0x807F11CC
    /* lfd f1, 0(r4) */ // 0x807F11D0
    *(0x4c + r1) = r0; // stw @ 0x807F11D4
    r12 = *(0x18 + r12); // lwz @ 0x807F11D8
    /* lfd f0, 0x48(r1) */ // 0x807F11DC
    /* fsubs f1, f0, f1 */ // 0x807F11E0
    /* mtctr r12 */ // 0x807F11E4
    /* bctrl  */ // 0x807F11E8
    r0 = *(0x2c + r31); // lhz @ 0x807F11EC
    r3 = r31;
    /* lfs f0, 0xb4(r31) */ // 0x807F11F4
    /* li r4, 0 */ // 0x807F11F8
    r0 = r0 | 1; // 0x807F11FC
    *(0x2c + r31) = r0; // sth @ 0x807F1200
    /* stfs f0, 0x34(r31) */ // 0x807F1204
    r12 = *(0 + r31); // lwz @ 0x807F1208
    r12 = *(0x68 + r12); // lwz @ 0x807F120C
    /* mtctr r12 */ // 0x807F1210
    /* bctrl  */ // 0x807F1214
    r12 = *(0 + r31); // lwz @ 0x807F1218
    r3 = r31;
    r12 = *(0x90 + r12); // lwz @ 0x807F1220
    /* mtctr r12 */ // 0x807F1224
    /* bctrl  */ // 0x807F1228
    /* lfs f1, 0x3c(r31) */ // 0x807F122C
    r3 = r31;
    /* li r4, 0x375 */ // 0x807F1234
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r3 = *(0xa0 + r31); // lwz @ 0x807F123C
    r3 = *(0 + r3); // lwz @ 0x807F1240
    r0 = *(0x32 + r3); // lha @ 0x807F1244
    if (!=) goto 0x0x807f1260;
    /* lfs f1, 0x3c(r31) */ // 0x807F1250
    r3 = r31;
    /* li r4, 0x374 */ // 0x807F1258
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r0 = *(0x64 + r1); // lwz @ 0x807F1260
    r31 = *(0x5c + r1); // lwz @ 0x807F1264
    r30 = *(0x58 + r1); // lwz @ 0x807F1268
    return;
}