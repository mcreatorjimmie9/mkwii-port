/**
 * Racedata_initAwards
 * @addr 0x80532d4c
 * @size 1704 bytes
 * @frame 64 bytes
 * @calls 1 function(s)
 */
void Racedata_initAwards(void) {
    /* r0 = r4+0xa6 */
    /* stb r0, 0xba(r3) */
    /* r0 = r4+0xa8 */
    /* r3+0xbc = r0 */
    /* r0 = r4+0xac */
    /* stb r0, 0xc0(r3) */
    /* r0 = r4+0xad */
    /* stb r0, 0xc1(r3) */
    /* r0 = r4+0xae */
    /* stb r0, 0xc2(r3) */
    /* r0 = r4+0xb0 */
    /* r3+0xc4 = r0 */
    /* r0 = r4+0xb4 */
    /* r3+0xc8 = r0 */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80532d4c: 88 04 00 a6              lbz      r0, 0xa6(r4) */
/* 0x80532d50: 98 03 00 ba              stb      r0, 0xba(r3) */
/* 0x80532d54: 80 04 00 a8              lwz      r0, 0xa8(r4) */
/* 0x80532d58: 90 03 00 bc              stw      r0, 0xbc(r3) */
/* 0x80532d5c: 88 04 00 ac              lbz      r0, 0xac(r4) */
/* 0x80532d60: 98 03 00 c0              stb      r0, 0xc0(r3) */
/* 0x80532d64: 88 04 00 ad              lbz      r0, 0xad(r4) */
/* 0x80532d68: 98 03 00 c1              stb      r0, 0xc1(r3) */
/* 0x80532d6c: 88 04 00 ae              lbz      r0, 0xae(r4) */
/* 0x80532d70: 98 03 00 c2              stb      r0, 0xc2(r3) */
/* 0x80532d74: 80 04 00 b0              lwz      r0, 0xb0(r4) */
/* 0x80532d78: 90 03 00 c4              stw      r0, 0xc4(r3) */
/* 0x80532d7c: 80 04 00 b4              lwz      r0, 0xb4(r4) */
/* 0x80532d80: 90 03 00 c8              stw      r0, 0xc8(r3) */
/* 0x80532d84: 4e 80 00 20              blr       */
/* 0x80532d88: 38 63 00 14              addi     r3, r3, 0x14 */
/* 0x80532d8c: 4e 80 00 20              blr       */
/* 0x80532d90: 94 21 ff c0              stwu     r1, -0x40(r1) */
/* 0x80532d94: 7c 08 02 a6              mflr     r0 */
/* 0x80532d98: 38 a3 0c 18              addi     r5, r3, 0xc18 */
/* 0x80532d9c: 38 83 18 08              addi     r4, r3, 0x1808 */
/* 0x80532da0: 90 01 00 44              stw      r0, 0x44(r1) */
/* 0x80532da4: 38 c3 17 58              addi     r6, r3, 0x1758 */
/* 0x80532da8: be a1 00 14              stmw     r21, 0x14(r1) */
/* 0x80532dac: 7c 7f 1b 78              mr       r31, r3 */
/* 0x80532db0: 88 03 18 04              lbz      r0, 0x1804(r3) */
/* 0x80532db4: 89 23 18 05              lbz      r9, 0x1805(r3) */
/* 0x80532db8: 89 03 18 06              lbz      r8, 0x1806(r3) */
/* 0x80532dbc: 88 e3 18 07              lbz      r7, 0x1807(r3) */
/* 0x80532dc0: 98 03 0c 14              stb      r0, 0xc14(r3) */
/* 0x80532dc4: 38 00 00 26              li       r0, 0x26 */
/* 0x80532dc8: 99 23 0c 15              stb      r9, 0xc15(r3) */
/* 0x80532dcc: 99 03 0c 16              stb      r8, 0xc16(r3) */
/* 0x80532dd0: 98 e3 0c 17              stb      r7, 0xc17(r3) */
/* 0x80532dd4: 88 e4 00 04              lbz      r7, 4(r4) */
/* 0x80532dd8: 39 45 00 23              addi     r10, r5, 0x23 */
/* 0x80532ddc: 98 e5 00 04              stb      r7, 4(r5) */
/* 0x80532de0: 39 24 00 23              addi     r9, r4, 0x23 */
/* 0x80532de4: 88 e4 00 05              lbz      r7, 5(r4) */
/* 0x80532de8: 98 e5 00 05              stb      r7, 5(r5) */
/* 0x80532dec: 88 e4 00 06              lbz      r7, 6(r4) */
/* 0x80532df0: 98 e5 00 06              stb      r7, 6(r5) */
/* 0x80532df4: 80 e4 00 08              lwz      r7, 8(r4) */
/* 0x80532df8: 90 e5 00 08              stw      r7, 8(r5) */
/* 0x80532dfc: 80 e4 00 0c              lwz      r7, 0xc(r4) */
/* 0x80532e00: 90 e5 00 0c              stw      r7, 0xc(r5) */
/* 0x80532e04: 80 e4 00 10              lwz      r7, 0x10(r4) */
/* 0x80532e08: 90 e5 00 10              stw      r7, 0x10(r5) */
/* 0x80532e0c: 80 e4 00 18              lwz      r7, 0x18(r4) */
/* 0x80532e10: 90 e5 00 18              stw      r7, 0x18(r5) */
/* 0x80532e14: 88 e4 00 1c              lbz      r7, 0x1c(r4) */
/* 0x80532e18: 98 e5 00 1c              stb      r7, 0x1c(r5) */
/* 0x80532e1c: 88 e4 00 1d              lbz      r7, 0x1d(r4) */
/* 0x80532e20: 98 e5 00 1d              stb      r7, 0x1d(r5) */
/* 0x80532e24: 80 e4 00 20              lwz      r7, 0x20(r4) */
/* 0x80532e28: 90 e5 00 20              stw      r7, 0x20(r5) */
/* 0x80532e2c: 7c 09 03 a6              mtctr    r0 */
/* 0x80532e30: 89 09 00 01              lbz      r8, 1(r9) */
/* 0x80532e34: 8c e9 00 02              lbzu     r7, 2(r9) */
/* 0x80532e38: 99 0a 00 01              stb      r8, 1(r10) */
/* 0x80532e3c: 9c ea 00 02              stbu     r7, 2(r10) */
/* 0x80532e40: 42 00 ff f0              bdnz     0x80532e30 */
/* 0x80532e44: 80 e4 00 70              lwz      r7, 0x70(r4) */
/* 0x80532e48: 90 e5 00 70              stw      r7, 0x70(r5) */
/* 0x80532e4c: 88 e4 00 74              lbz      r7, 0x74(r4) */
/* 0x80532e50: 98 e5 00 74              stb      r7, 0x74(r5) */
/* 0x80532e54: 88 e4 00 75              lbz      r7, 0x75(r4) */
/* 0x80532e58: 98 e5 00 75              stb      r7, 0x75(r5) */
/* 0x80532e5c: 88 e4 00 76              lbz      r7, 0x76(r4) */
/* 0x80532e60: 98 e5 00 76              stb      r7, 0x76(r5) */
/* 0x80532e64: 88 e4 00 77              lbz      r7, 0x77(r4) */
/* 0x80532e68: 98 e5 00 77              stb      r7, 0x77(r5) */
/* 0x80532e6c: 80 e4 00 78              lwz      r7, 0x78(r4) */
/* 0x80532e70: 90 e5 00 78              stw      r7, 0x78(r5) */
/* 0x80532e74: 80 e4 00 80              lwz      r7, 0x80(r4) */
/* 0x80532e78: 81 04 00 7c              lwz      r8, 0x7c(r4) */
/* 0x80532e7c: 91 05 00 7c              stw      r8, 0x7c(r5) */
/* 0x80532e80: 90 e5 00 80              stw      r7, 0x80(r5) */
/* 0x80532e84: 80 e4 00 88              lwz      r7, 0x88(r4) */
/* 0x80532e88: 81 04 00 84              lwz      r8, 0x84(r4) */
/* 0x80532e8c: 91 05 00 84              stw      r8, 0x84(r5) */
/* 0x80532e90: 90 e5 00 88              stw      r7, 0x88(r5) */
/* 0x80532e94: 80 e4 00 90              lwz      r7, 0x90(r4) */
/* 0x80532e98: 81 04 00 8c              lwz      r8, 0x8c(r4) */
/* 0x80532e9c: 91 05 00 8c              stw      r8, 0x8c(r5) */
/* 0x80532ea0: 90 e5 00 90              stw      r7, 0x90(r5) */
/* 0x80532ea4: 80 e4 00 98              lwz      r7, 0x98(r4) */
/* 0x80532ea8: 81 04 00 94              lwz      r8, 0x94(r4) */
/* 0x80532eac: 91 05 00 94              stw      r8, 0x94(r5) */
/* 0x80532eb0: 90 e5 00 98              stw      r7, 0x98(r5) */
/* 0x80532eb4: 80 e4 00 a0              lwz      r7, 0xa0(r4) */
/* 0x80532eb8: 81 04 00 9c              lwz      r8, 0x9c(r4) */
/* 0x80532ebc: 91 05 00 9c              stw      r8, 0x9c(r5) */
/* 0x80532ec0: 90 e5 00 a0              stw      r7, 0xa0(r5) */
/* 0x80532ec4: 80 e4 00 a8              lwz      r7, 0xa8(r4) */
/* 0x80532ec8: 81 04 00 a4              lwz      r8, 0xa4(r4) */
/* 0x80532ecc: 91 05 00 a4              stw      r8, 0xa4(r5) */
/* 0x80532ed0: 90 e5 00 a8              stw      r7, 0xa8(r5) */
/* 0x80532ed4: 80 e4 00 b0              lwz      r7, 0xb0(r4) */
/* 0x80532ed8: 81 04 00 ac              lwz      r8, 0xac(r4) */
/* 0x80532edc: 91 05 00 ac              stw      r8, 0xac(r5) */
/* 0x80532ee0: 90 e5 00 b0              stw      r7, 0xb0(r5) */
/* 0x80532ee4: 80 e4 00 b4              lwz      r7, 0xb4(r4) */
/* 0x80532ee8: 90 e5 00 b4              stw      r7, 0xb4(r5) */
/* 0x80532eec: 88 e4 00 b8              lbz      r7, 0xb8(r4) */
/* 0x80532ef0: 98 e5 00 b8              stb      r7, 0xb8(r5) */
/* 0x80532ef4: 88 e4 00 b9              lbz      r7, 0xb9(r4) */
/* 0x80532ef8: 98 e5 00 b9              stb      r7, 0xb9(r5) */
/* 0x80532efc: 88 e4 00 ba              lbz      r7, 0xba(r4) */
/* 0x80532f00: 98 e5 00 ba              stb      r7, 0xba(r5) */
/* 0x80532f04: 80 e4 00 bc              lwz      r7, 0xbc(r4) */
/* 0x80532f08: 90 e5 00 bc              stw      r7, 0xbc(r5) */
/* 0x80532f0c: 88 e4 00 c0              lbz      r7, 0xc0(r4) */
/* 0x80532f10: 98 e5 00 c0              stb      r7, 0xc0(r5) */
/* 0x80532f14: 88 e4 00 c1              lbz      r7, 0xc1(r4) */
/* 0x80532f18: 98 e5 00 c1              stb      r7, 0xc1(r5) */
/* 0x80532f1c: 88 e4 00 c2              lbz      r7, 0xc2(r4) */
/* 0x80532f20: 98 e5 00 c2              stb      r7, 0xc2(r5) */
/* 0x80532f24: 80 e4 00 c4              lwz      r7, 0xc4(r4) */
/* 0x80532f28: 90 e5 00 c4              stw      r7, 0xc4(r5) */
/* 0x80532f2c: 80 e4 00 c8              lwz      r7, 0xc8(r4) */
/* 0x80532f30: 90 e5 00 c8              stw      r7, 0xc8(r5) */
/* 0x80532f34: 80 e4 00 cc              lwz      r7, 0xcc(r4) */
/* 0x80532f38: 90 e5 00 cc              stw      r7, 0xcc(r5) */
/* 0x80532f3c: 80 e4 00 d0              lwz      r7, 0xd0(r4) */
/* 0x80532f40: 90 e5 00 d0              stw      r7, 0xd0(r5) */
/* 0x80532f44: 80 e4 00 d4              lwz      r7, 0xd4(r4) */
/* 0x80532f48: 90 e5 00 d4              stw      r7, 0xd4(r5) */
/* 0x80532f4c: a0 e4 00 d8              lhz      r7, 0xd8(r4) */
/* 0x80532f50: b0 e5 00 d8              sth      r7, 0xd8(r5) */
/* 0x80532f54: a0 e4 00 da              lhz      r7, 0xda(r4) */
/* 0x80532f58: b0 e5 00 da              sth      r7, 0xda(r5) */
/* 0x80532f5c: a0 e4 00 dc              lhz      r7, 0xdc(r4) */
/* 0x80532f60: b0 e5 00 dc              sth      r7, 0xdc(r5) */
/* 0x80532f64: a8 e4 00 de              lha      r7, 0xde(r4) */
/* 0x80532f68: b0 e5 00 de              sth      r7, 0xde(r5) */
/* 0x80532f6c: 88 e4 00 e0              lbz      r7, 0xe0(r4) */
/* 0x80532f70: 98 e5 00 e0              stb      r7, 0xe0(r5) */
/* 0x80532f74: 88 e4 00 e1              lbz      r7, 0xe1(r4) */
/* 0x80532f78: 98 e5 00 e1              stb      r7, 0xe1(r5) */
/* 0x80532f7c: 88 e4 00 e2              lbz      r7, 0xe2(r4) */
/* 0x80532f80: 98 e5 00 e2              stb      r7, 0xe2(r5) */
/* 0x80532f84: a0 e4 00 e8              lhz      r7, 0xe8(r4) */
/* 0x80532f88: b0 e5 00 e8              sth      r7, 0xe8(r5) */
/* 0x80532f8c: 88 e4 00 ec              lbz      r7, 0xec(r4) */
/* 0x80532f90: 38 84 00 f0              addi     r4, r4, 0xf0 */
/* 0x80532f94: 98 e5 00 ec              stb      r7, 0xec(r5) */
/* 0x80532f98: 38 a5 00 f0              addi     r5, r5, 0xf0 */
/* 0x80532f9c: 7c 05 30 40              cmplw    r5, r6 */
/* 0x80532fa0: 41 80 fe 34              blt      0x80532dd4 */
/* 0x80532fa4: 82 a3 23 48              lwz      r21, 0x2348(r3) */
/* 0x80532fa8: 38 00 00 0e              li       r0, 0xe */
/* 0x80532fac: 83 c3 23 4c              lwz      r30, 0x234c(r3) */
/* 0x80532fb0: 38 c3 17 88              addi     r6, r3, 0x1788 */
/* 0x80532fb4: 83 a3 23 50              lwz      r29, 0x2350(r3) */
/* 0x80532fb8: 38 a3 23 78              addi     r5, r3, 0x2378 */
/* 0x80532fbc: 83 83 23 54              lwz      r28, 0x2354(r3) */
/* 0x80532fc0: 83 63 23 58              lwz      r27, 0x2358(r3) */
/* 0x80532fc4: 83 43 23 5c              lwz      r26, 0x235c(r3) */
/* 0x80532fc8: 83 23 23 60              lwz      r25, 0x2360(r3) */
/* 0x80532fcc: 8b 03 23 64              lbz      r24, 0x2364(r3) */
/* 0x80532fd0: 8a e3 23 65              lbz      r23, 0x2365(r3) */
/* 0x80532fd4: 8a c3 23 66              lbz      r22, 0x2366(r3) */
/* 0x80532fd8: 89 83 23 67              lbz      r12, 0x2367(r3) */
/* 0x80532fdc: 81 63 23 68              lwz      r11, 0x2368(r3) */
/* 0x80532fe0: 89 43 23 6c              lbz      r10, 0x236c(r3) */
/* 0x80532fe4: 89 23 23 6d              lbz      r9, 0x236d(r3) */
/* 0x80532fe8: 81 03 23 70              lwz      r8, 0x2370(r3) */
/* 0x80532fec: 80 e3 23 74              lwz      r7, 0x2374(r3) */
/* 0x80532ff0: 80 83 23 78              lwz      r4, 0x2378(r3) */
/* 0x80532ff4: 92 a3 17 58              stw      r21, 0x1758(r3) */
/* 0x80532ff8: 93 c3 17 5c              stw      r30, 0x175c(r3) */
/* 0x80532ffc: 93 a3 17 60              stw      r29, 0x1760(r3) */
/* 0x80533000: 93 83 17 64              stw      r28, 0x1764(r3) */
/* 0x80533004: 93 63 17 68              stw      r27, 0x1768(r3) */
/* 0x80533008: 93 43 17 6c              stw      r26, 0x176c(r3) */
/* 0x8053300c: 93 23 17 70              stw      r25, 0x1770(r3) */
/* 0x80533010: 9b 03 17 74              stb      r24, 0x1774(r3) */
/* 0x80533014: 9a e3 17 75              stb      r23, 0x1775(r3) */
/* 0x80533018: 9a c3 17 76              stb      r22, 0x1776(r3) */
/* 0x8053301c: 99 83 17 77              stb      r12, 0x1777(r3) */
/* 0x80533020: 91 63 17 78              stw      r11, 0x1778(r3) */
/* 0x80533024: 99 43 17 7c              stb      r10, 0x177c(r3) */
/* 0x80533028: 99 23 17 7d              stb      r9, 0x177d(r3) */
/* 0x8053302c: 91 03 17 80              stw      r8, 0x1780(r3) */
/* 0x80533030: 90 e3 17 84              stw      r7, 0x1784(r3) */
/* 0x80533034: 90 83 17 88              stw      r4, 0x1788(r3) */
/* 0x80533038: 7c 09 03 a6              mtctr    r0 */
/* 0x8053303c: 80 85 00 04              lwz      r4, 4(r5) */
/* 0x80533040: 84 05 00 08              lwzu     r0, 8(r5) */
/* 0x80533044: 90 86 00 04              stw      r4, 4(r6) */
/* 0x80533048: 94 06 00 08              stwu     r0, 8(r6) */
/* 0x8053304c: 42 00 ff f0              bdnz     0x8053303c */
/* 0x80533050: 80 03 23 ec              lwz      r0, 0x23ec(r3) */
/* 0x80533054: 38 9f 00 20              addi     r4, r31, 0x20 */
/* 0x80533058: 90 03 17 fc              stw      r0, 0x17fc(r3) */
/* 0x8053305c: 38 63 0c 10              addi     r3, r3, 0xc10 */
/* 0x80533060: 4b ff e8 51              bl       0x805318b0 */
/* 0x80533064: 89 3f 0c 14              lbz      r9, 0xc14(r31) */
/* 0x80533068: 38 7f 00 28              addi     r3, r31, 0x28 */
/* 0x8053306c: 89 1f 0c 15              lbz      r8, 0xc15(r31) */
/* 0x80533070: 38 9f 0c 18              addi     r4, r31, 0xc18 */
/* 0x80533074: 88 ff 0c 16              lbz      r7, 0xc16(r31) */
/* 0x80533078: 38 bf 0b 68              addi     r5, r31, 0xb68 */
/* 0x8053307c: 88 df 0c 17              lbz      r6, 0xc17(r31) */
/* 0x80533080: 38 00 00 26              li       r0, 0x26 */
/* 0x80533084: 99 3f 00 24              stb      r9, 0x24(r31) */
/* 0x80533088: 99 1f 00 25              stb      r8, 0x25(r31) */
/* 0x8053308c: 98 ff 00 26              stb      r7, 0x26(r31) */
/* 0x80533090: 98 df 00 27              stb      r6, 0x27(r31) */
/* 0x80533094: 88 c4 00 04              lbz      r6, 4(r4) */
/* 0x80533098: 39 23 00 23              addi     r9, r3, 0x23 */
/* 0x8053309c: 98 c3 00 04              stb      r6, 4(r3) */
/* 0x805330a0: 39 04 00 23              addi     r8, r4, 0x23 */
/* 0x805330a4: 88 c4 00 05              lbz      r6, 5(r4) */
/* 0x805330a8: 98 c3 00 05              stb      r6, 5(r3) */
/* 0x805330ac: 88 c4 00 06              lbz      r6, 6(r4) */
/* 0x805330b0: 98 c3 00 06              stb      r6, 6(r3) */
/* 0x805330b4: 80 c4 00 08              lwz      r6, 8(r4) */
/* 0x805330b8: 90 c3 00 08              stw      r6, 8(r3) */
/* 0x805330bc: 80 c4 00 0c              lwz      r6, 0xc(r4) */
/* 0x805330c0: 90 c3 00 0c              stw      r6, 0xc(r3) */
/* 0x805330c4: 80 c4 00 10              lwz      r6, 0x10(r4) */
/* 0x805330c8: 90 c3 00 10              stw      r6, 0x10(r3) */
/* 0x805330cc: 80 c4 00 18              lwz      r6, 0x18(r4) */
/* 0x805330d0: 90 c3 00 18              stw      r6, 0x18(r3) */
/* 0x805330d4: 88 c4 00 1c              lbz      r6, 0x1c(r4) */
/* 0x805330d8: 98 c3 00 1c              stb      r6, 0x1c(r3) */
/* 0x805330dc: 88 c4 00 1d              lbz      r6, 0x1d(r4) */
/* 0x805330e0: 98 c3 00 1d              stb      r6, 0x1d(r3) */
/* 0x805330e4: 80 c4 00 20              lwz      r6, 0x20(r4) */
/* 0x805330e8: 90 c3 00 20              stw      r6, 0x20(r3) */
/* 0x805330ec: 7c 09 03 a6              mtctr    r0 */
/* 0x805330f0: 88 e8 00 01              lbz      r7, 1(r8) */
/* 0x805330f4: 8c c8 00 02              lbzu     r6, 2(r8) */
/* 0x805330f8: 98 e9 00 01              stb      r7, 1(r9) */
/* 0x805330fc: 9c c9 00 02              stbu     r6, 2(r9) */
/* 0x80533100: 42 00 ff f0              bdnz     0x805330f0 */
/* 0x80533104: 80 c4 00 70              lwz      r6, 0x70(r4) */
/* 0x80533108: 90 c3 00 70              stw      r6, 0x70(r3) */
/* 0x8053310c: 88 c4 00 74              lbz      r6, 0x74(r4) */
/* 0x80533110: 98 c3 00 74              stb      r6, 0x74(r3) */
/* 0x80533114: 88 c4 00 75              lbz      r6, 0x75(r4) */
/* 0x80533118: 98 c3 00 75              stb      r6, 0x75(r3) */
/* 0x8053311c: 88 c4 00 76              lbz      r6, 0x76(r4) */
/* 0x80533120: 98 c3 00 76              stb      r6, 0x76(r3) */
/* 0x80533124: 88 c4 00 77              lbz      r6, 0x77(r4) */
/* 0x80533128: 98 c3 00 77              stb      r6, 0x77(r3) */
/* 0x8053312c: 80 c4 00 78              lwz      r6, 0x78(r4) */
/* 0x80533130: 90 c3 00 78              stw      r6, 0x78(r3) */
/* 0x80533134: 80 c4 00 80              lwz      r6, 0x80(r4) */
/* 0x80533138: 80 e4 00 7c              lwz      r7, 0x7c(r4) */
/* 0x8053313c: 90 e3 00 7c              stw      r7, 0x7c(r3) */
/* 0x80533140: 90 c3 00 80              stw      r6, 0x80(r3) */
/* 0x80533144: 80 c4 00 88              lwz      r6, 0x88(r4) */
/* 0x80533148: 80 e4 00 84              lwz      r7, 0x84(r4) */
/* 0x8053314c: 90 e3 00 84              stw      r7, 0x84(r3) */
/* 0x80533150: 90 c3 00 88              stw      r6, 0x88(r3) */
/* 0x80533154: 80 c4 00 90              lwz      r6, 0x90(r4) */
/* 0x80533158: 80 e4 00 8c              lwz      r7, 0x8c(r4) */
/* 0x8053315c: 90 e3 00 8c              stw      r7, 0x8c(r3) */
/* 0x80533160: 90 c3 00 90              stw      r6, 0x90(r3) */
/* 0x80533164: 80 c4 00 98              lwz      r6, 0x98(r4) */
/* 0x80533168: 80 e4 00 94              lwz      r7, 0x94(r4) */
/* 0x8053316c: 90 e3 00 94              stw      r7, 0x94(r3) */
/* 0x80533170: 90 c3 00 98              stw      r6, 0x98(r3) */
/* 0x80533174: 80 c4 00 a0              lwz      r6, 0xa0(r4) */
/* 0x80533178: 80 e4 00 9c              lwz      r7, 0x9c(r4) */
/* 0x8053317c: 90 e3 00 9c              stw      r7, 0x9c(r3) */
/* 0x80533180: 90 c3 00 a0              stw      r6, 0xa0(r3) */
/* 0x80533184: 80 c4 00 a8              lwz      r6, 0xa8(r4) */
/* 0x80533188: 80 e4 00 a4              lwz      r7, 0xa4(r4) */
/* 0x8053318c: 90 e3 00 a4              stw      r7, 0xa4(r3) */
/* 0x80533190: 90 c3 00 a8              stw      r6, 0xa8(r3) */
/* 0x80533194: 80 c4 00 b0              lwz      r6, 0xb0(r4) */
/* 0x80533198: 80 e4 00 ac              lwz      r7, 0xac(r4) */
/* 0x8053319c: 90 e3 00 ac              stw      r7, 0xac(r3) */
/* 0x805331a0: 90 c3 00 b0              stw      r6, 0xb0(r3) */
/* 0x805331a4: 80 c4 00 b4              lwz      r6, 0xb4(r4) */
/* 0x805331a8: 90 c3 00 b4              stw      r6, 0xb4(r3) */
/* 0x805331ac: 88 c4 00 b8              lbz      r6, 0xb8(r4) */
/* 0x805331b0: 98 c3 00 b8              stb      r6, 0xb8(r3) */
/* 0x805331b4: 88 c4 00 b9              lbz      r6, 0xb9(r4) */
/* 0x805331b8: 98 c3 00 b9              stb      r6, 0xb9(r3) */
/* 0x805331bc: 88 c4 00 ba              lbz      r6, 0xba(r4) */
/* 0x805331c0: 98 c3 00 ba              stb      r6, 0xba(r3) */
/* 0x805331c4: 80 c4 00 bc              lwz      r6, 0xbc(r4) */
/* 0x805331c8: 90 c3 00 bc              stw      r6, 0xbc(r3) */
/* 0x805331cc: 88 c4 00 c0              lbz      r6, 0xc0(r4) */
/* 0x805331d0: 98 c3 00 c0              stb      r6, 0xc0(r3) */
/* 0x805331d4: 88 c4 00 c1              lbz      r6, 0xc1(r4) */
/* 0x805331d8: 98 c3 00 c1              stb      r6, 0xc1(r3) */
/* 0x805331dc: 88 c4 00 c2              lbz      r6, 0xc2(r4) */
/* 0x805331e0: 98 c3 00 c2              stb      r6, 0xc2(r3) */
/* 0x805331e4: 80 c4 00 c4              lwz      r6, 0xc4(r4) */
/* 0x805331e8: 90 c3 00 c4              stw      r6, 0xc4(r3) */
/* 0x805331ec: 80 c4 00 c8              lwz      r6, 0xc8(r4) */
/* 0x805331f0: 90 c3 00 c8              stw      r6, 0xc8(r3) */
/* 0x805331f4: 80 c4 00 cc              lwz      r6, 0xcc(r4) */
/* 0x805331f8: 90 c3 00 cc              stw      r6, 0xcc(r3) */
/* 0x805331fc: 80 c4 00 d0              lwz      r6, 0xd0(r4) */
/* 0x80533200: 90 c3 00 d0              stw      r6, 0xd0(r3) */
/* 0x80533204: 80 c4 00 d4              lwz      r6, 0xd4(r4) */
/* 0x80533208: 90 c3 00 d4              stw      r6, 0xd4(r3) */
/* 0x8053320c: a0 c4 00 d8              lhz      r6, 0xd8(r4) */
/* 0x80533210: b0 c3 00 d8              sth      r6, 0xd8(r3) */
/* 0x80533214: a0 c4 00 da              lhz      r6, 0xda(r4) */
/* 0x80533218: b0 c3 00 da              sth      r6, 0xda(r3) */
/* 0x8053321c: a0 c4 00 dc              lhz      r6, 0xdc(r4) */
/* 0x80533220: b0 c3 00 dc              sth      r6, 0xdc(r3) */
/* 0x80533224: a8 c4 00 de              lha      r6, 0xde(r4) */
/* 0x80533228: b0 c3 00 de              sth      r6, 0xde(r3) */
/* 0x8053322c: 88 c4 00 e0              lbz      r6, 0xe0(r4) */
/* 0x80533230: 98 c3 00 e0              stb      r6, 0xe0(r3) */
/* 0x80533234: 88 c4 00 e1              lbz      r6, 0xe1(r4) */
/* 0x80533238: 98 c3 00 e1              stb      r6, 0xe1(r3) */
/* 0x8053323c: 88 c4 00 e2              lbz      r6, 0xe2(r4) */
/* 0x80533240: 98 c3 00 e2              stb      r6, 0xe2(r3) */
/* 0x80533244: a0 c4 00 e8              lhz      r6, 0xe8(r4) */
/* 0x80533248: b0 c3 00 e8              sth      r6, 0xe8(r3) */
/* 0x8053324c: 88 c4 00 ec              lbz      r6, 0xec(r4) */
/* 0x80533250: 38 84 00 f0              addi     r4, r4, 0xf0 */
/* 0x80533254: 98 c3 00 ec              stb      r6, 0xec(r3) */
/* 0x80533258: 38 63 00 f0              addi     r3, r3, 0xf0 */
/* 0x8053325c: 7c 03 28 40              cmplw    r3, r5 */
/* 0x80533260: 41 80 fe 34              blt      0x80533094 */
/* 0x80533264: 83 df 17 58              lwz      r30, 0x1758(r31) */
/* 0x80533268: 38 00 00 0e              li       r0, 0xe */
/* 0x8053326c: 83 bf 17 5c              lwz      r29, 0x175c(r31) */
/* 0x80533270: 38 bf 0b 98              addi     r5, r31, 0xb98 */
/* 0x80533274: 83 9f 17 60              lwz      r28, 0x1760(r31) */
/* 0x80533278: 38 9f 17 88              addi     r4, r31, 0x1788 */
/* 0x8053327c: 83 7f 17 64              lwz      r27, 0x1764(r31) */
/* 0x80533280: 83 5f 17 68              lwz      r26, 0x1768(r31) */
/* 0x80533284: 83 3f 17 6c              lwz      r25, 0x176c(r31) */
/* 0x80533288: 83 1f 17 70              lwz      r24, 0x1770(r31) */
/* 0x8053328c: 8a ff 17 74              lbz      r23, 0x1774(r31) */
/* 0x80533290: 8a df 17 75              lbz      r22, 0x1775(r31) */
/* 0x80533294: 89 9f 17 76              lbz      r12, 0x1776(r31) */
/* 0x80533298: 89 7f 17 77              lbz      r11, 0x1777(r31) */
/* 0x8053329c: 81 5f 17 78              lwz      r10, 0x1778(r31) */
/* 0x805332a0: 89 3f 17 7c              lbz      r9, 0x177c(r31) */
/* 0x805332a4: 89 1f 17 7d              lbz      r8, 0x177d(r31) */
/* 0x805332a8: 80 ff 17 80              lwz      r7, 0x1780(r31) */
/* 0x805332ac: 80 df 17 84              lwz      r6, 0x1784(r31) */
/* 0x805332b0: 80 7f 17 88              lwz      r3, 0x1788(r31) */
/* 0x805332b4: 93 df 0b 68              stw      r30, 0xb68(r31) */
/* 0x805332b8: 93 bf 0b 6c              stw      r29, 0xb6c(r31) */
/* 0x805332bc: 93 9f 0b 70              stw      r28, 0xb70(r31) */
/* 0x805332c0: 93 7f 0b 74              stw      r27, 0xb74(r31) */
/* 0x805332c4: 93 5f 0b 78              stw      r26, 0xb78(r31) */
/* 0x805332c8: 93 3f 0b 7c              stw      r25, 0xb7c(r31) */
/* 0x805332cc: 93 1f 0b 80              stw      r24, 0xb80(r31) */
/* 0x805332d0: 9a ff 0b 84              stb      r23, 0xb84(r31) */
/* 0x805332d4: 9a df 0b 85              stb      r22, 0xb85(r31) */
/* 0x805332d8: 99 9f 0b 86              stb      r12, 0xb86(r31) */
/* 0x805332dc: 99 7f 0b 87              stb      r11, 0xb87(r31) */
/* 0x805332e0: 91 5f 0b 88              stw      r10, 0xb88(r31) */
/* 0x805332e4: 99 3f 0b 8c              stb      r9, 0xb8c(r31) */
/* 0x805332e8: 99 1f 0b 8d              stb      r8, 0xb8d(r31) */
/* 0x805332ec: 90 ff 0b 90              stw      r7, 0xb90(r31) */
/* 0x805332f0: 90 df 0b 94              stw      r6, 0xb94(r31) */
/* 0x805332f4: 90 7f 0b 98              stw      r3, 0xb98(r31) */
/* 0x805332f8: 7c 09 03 a6              mtctr    r0 */
/* 0x805332fc: 80 64 00 04              lwz      r3, 4(r4) */
/* 0x80533300: 84 04 00 08              lwzu     r0, 8(r4) */
/* 0x80533304: 90 65 00 04              stw      r3, 4(r5) */
/* 0x80533308: 94 05 00 08              stwu     r0, 8(r5) */
/* 0x8053330c: 42 00 ff f0              bdnz     0x805332fc */
/* 0x80533310: 80 bf 17 fc              lwz      r5, 0x17fc(r31) */
/* 0x80533314: 38 00 00 02              li       r0, 2 */
/* 0x80533318: 38 80 00 0c              li       r4, 0xc */
/* 0x8053331c: 38 60 00 3a              li       r3, 0x3a */
/* 0x80533320: 90 bf 0c 0c              stw      r5, 0xc0c(r31) */
/* 0x80533324: 39 60 00 00              li       r11, 0 */
/* 0x80533328: 39 00 00 05              li       r8, 5 */
/* 0x8053332c: 90 9f 17 60              stw      r4, 0x1760(r31) */
/* 0x80533330: 90 7f 17 58              stw      r3, 0x1758(r31) */
/* 0x80533334: 7c 09 03 a6              mtctr    r0 */
/* 0x80533338: 55 65 06 3e              clrlwi   r5, r11, 0x18 */
/* 0x8053333c: 38 0b 00 02              addi     r0, r11, 2 */
/* 0x80533340: 1c 85 00 f0              mulli    r4, r5, 0xf0 */
/* 0x80533344: 38 6b 00 01              addi     r3, r11, 1 */
/* 0x80533348: 54 06 06 3e              clrlwi   r6, r0, 0x18 */
/* 0x8053334c: 54 67 06 3e              clrlwi   r7, r3, 0x18 */
/* 0x80533350: 7d 3f 22 14              add      r9, r31, r4 */
/* 0x80533354: 38 6b 00 04              addi     r3, r11, 4 */
/* 0x80533358: 91 09 0c 28              stw      r8, 0xc28(r9) */
/* 0x8053335c: 39 45 00 01              addi     r10, r5, 1 */
/* 0x80533360: 38 0b 00 03              addi     r0, r11, 3 */
/* 0x80533364: 54 64 06 3e              clrlwi   r4, r3, 0x18 */
/* 0x80533368: 99 49 0c f9              stb      r10, 0xcf9(r9) */
/* 0x8053336c: 54 05 06 3e              clrlwi   r5, r0, 0x18 */
/* 0x80533370: 38 0b 00 05              addi     r0, r11, 5 */
/* 0x80533374: 38 c6 00 01              addi     r6, r6, 1 */
/* 0x80533378: 99 49 0c f8              stb      r10, 0xcf8(r9) */
/* 0x8053337c: 54 03 06 3e              clrlwi   r3, r0, 0x18 */
/* 0x80533380: 38 07 00 01              addi     r0, r7, 1 */
/* 0x80533384: 38 a5 00 01              addi     r5, r5, 1 */
/* 0x80533388: 91 09 0d 18              stw      r8, 0xd18(r9) */
/* 0x8053338c: 38 84 00 01              addi     r4, r4, 1 */
/* 0x80533390: 38 63 00 01              addi     r3, r3, 1 */
/* 0x80533394: 39 6b 00 06              addi     r11, r11, 6 */
/* 0x80533398: 98 09 0d e9              stb      r0, 0xde9(r9) */
/* 0x8053339c: 98 09 0d e8              stb      r0, 0xde8(r9) */
/* 0x805333a0: 91 09 0e 08              stw      r8, 0xe08(r9) */
/* 0x805333a4: 98 c9 0e d9              stb      r6, 0xed9(r9) */
/* 0x805333a8: 98 c9 0e d8              stb      r6, 0xed8(r9) */
/* 0x805333ac: 91 09 0e f8              stw      r8, 0xef8(r9) */
/* 0x805333b0: 98 a9 0f c9              stb      r5, 0xfc9(r9) */
/* 0x805333b4: 98 a9 0f c8              stb      r5, 0xfc8(r9) */
/* 0x805333b8: 91 09 0f e8              stw      r8, 0xfe8(r9) */
/* 0x805333bc: 98 89 10 b9              stb      r4, 0x10b9(r9) */
/* 0x805333c0: 98 89 10 b8              stb      r4, 0x10b8(r9) */
/* 0x805333c4: 91 09 10 d8              stw      r8, 0x10d8(r9) */
/* 0x805333c8: 98 69 11 a9              stb      r3, 0x11a9(r9) */
/* 0x805333cc: 98 69 11 a8              stb      r3, 0x11a8(r9) */
/* 0x805333d0: 42 00 ff 68              bdnz     0x80533338 */
/* 0x805333d4: 39 00 00 00              li       r8, 0 */
/* 0x805333d8: 38 e0 00 00              li       r7, 0 */
/* 0x805333dc: 38 60 00 01              li       r3, 1 */
/* 0x805333e0: 38 00 00 26              li       r0, 0x26 */
/* 0x805333e4: 3c c0 00 00              lis      r6, 0 */
/* 0x805333e8: 54 e5 06 3e              clrlwi   r5, r7, 0x18 */
/* 0x805333ec: 80 86 00 00              lwz      r4, 0(r6) */
/* 0x805333f0: 1c a5 00 f0              mulli    r5, r5, 0xf0 */
#endif


/* === DISASSEMBLY === */

; Function: Racedata_initAwards
; Demangled: Racedata_initAwards
; Address: 0x80532d4c  (.text+0x204b0)
; Size: 1704 bytes

  0x80532d4c:  lbz      r0, 0xa6(r4)
  0x80532d50:  stb      r0, 0xba(r3)
  0x80532d54:  lwz      r0, 0xa8(r4)
  0x80532d58:  stw      r0, 0xbc(r3)
  0x80532d5c:  lbz      r0, 0xac(r4)
  0x80532d60:  stb      r0, 0xc0(r3)
  0x80532d64:  lbz      r0, 0xad(r4)
  0x80532d68:  stb      r0, 0xc1(r3)
  0x80532d6c:  lbz      r0, 0xae(r4)
  0x80532d70:  stb      r0, 0xc2(r3)
  0x80532d74:  lwz      r0, 0xb0(r4)
  0x80532d78:  stw      r0, 0xc4(r3)
  0x80532d7c:  lwz      r0, 0xb4(r4)
  0x80532d80:  stw      r0, 0xc8(r3)
  0x80532d84:  blr      
  0x80532d88:  addi     r3, r3, 0x14
  0x80532d8c:  blr      
  0x80532d90:  stwu     r1, -0x40(r1)
  0x80532d94:  mflr     r0
  0x80532d98:  addi     r5, r3, 0xc18
  0x80532d9c:  addi     r4, r3, 0x1808
  0x80532da0:  stw      r0, 0x44(r1)
  0x80532da4:  addi     r6, r3, 0x1758
  0x80532da8:  stmw     r21, 0x14(r1)
  0x80532dac:  mr       r31, r3
  0x80532db0:  lbz      r0, 0x1804(r3)
  0x80532db4:  lbz      r9, 0x1805(r3)
  0x80532db8:  lbz      r8, 0x1806(r3)
  0x80532dbc:  lbz      r7, 0x1807(r3)
  0x80532dc0:  stb      r0, 0xc14(r3)
  0x80532dc4:  li       r0, 0x26
  0x80532dc8:  stb      r9, 0xc15(r3)
  0x80532dcc:  stb      r8, 0xc16(r3)
  0x80532dd0:  stb      r7, 0xc17(r3)
  0x80532dd4:  lbz      r7, 4(r4)
  0x80532dd8:  addi     r10, r5, 0x23
  0x80532ddc:  stb      r7, 4(r5)
  0x80532de0:  addi     r9, r4, 0x23
  0x80532de4:  lbz      r7, 5(r4)
  0x80532de8:  stb      r7, 5(r5)
  0x80532dec:  lbz      r7, 6(r4)
  0x80532df0:  stb      r7, 6(r5)
  0x80532df4:  lwz      r7, 8(r4)
  0x80532df8:  stw      r7, 8(r5)
  0x80532dfc:  lwz      r7, 0xc(r4)
  0x80532e00:  stw      r7, 0xc(r5)
  0x80532e04:  lwz      r7, 0x10(r4)
  0x80532e08:  stw      r7, 0x10(r5)
  0x80532e0c:  lwz      r7, 0x18(r4)
  0x80532e10:  stw      r7, 0x18(r5)
  0x80532e14:  lbz      r7, 0x1c(r4)
  0x80532e18:  stb      r7, 0x1c(r5)
  0x80532e1c:  lbz      r7, 0x1d(r4)
  0x80532e20:  stb      r7, 0x1d(r5)
  0x80532e24:  lwz      r7, 0x20(r4)
  0x80532e28:  stw      r7, 0x20(r5)
  0x80532e2c:  mtctr    r0
  0x80532e30:  lbz      r8, 1(r9)
  0x80532e34:  lbzu     r7, 2(r9)
  0x80532e38:  stb      r8, 1(r10)
  0x80532e3c:  stbu     r7, 2(r10)
  0x80532e40:  bdnz     0x80532e30
  0x80532e44:  lwz      r7, 0x70(r4)
  0x80532e48:  stw      r7, 0x70(r5)
  0x80532e4c:  lbz      r7, 0x74(r4)
  0x80532e50:  stb      r7, 0x74(r5)
  0x80532e54:  lbz      r7, 0x75(r4)
  0x80532e58:  stb      r7, 0x75(r5)
  0x80532e5c:  lbz      r7, 0x76(r4)
  0x80532e60:  stb      r7, 0x76(r5)
  0x80532e64:  lbz      r7, 0x77(r4)
  0x80532e68:  stb      r7, 0x77(r5)
  0x80532e6c:  lwz      r7, 0x78(r4)
  0x80532e70:  stw      r7, 0x78(r5)
  0x80532e74:  lwz      r7, 0x80(r4)
  0x80532e78:  lwz      r8, 0x7c(r4)
  0x80532e7c:  stw      r8, 0x7c(r5)
  0x80532e80:  stw      r7, 0x80(r5)
  0x80532e84:  lwz      r7, 0x88(r4)
  0x80532e88:  lwz      r8, 0x84(r4)
  0x80532e8c:  stw      r8, 0x84(r5)
  0x80532e90:  stw      r7, 0x88(r5)
  0x80532e94:  lwz      r7, 0x90(r4)
  0x80532e98:  lwz      r8, 0x8c(r4)
  0x80532e9c:  stw      r8, 0x8c(r5)
  0x80532ea0:  stw      r7, 0x90(r5)
  0x80532ea4:  lwz      r7, 0x98(r4)
  0x80532ea8:  lwz      r8, 0x94(r4)
  0x80532eac:  stw      r8, 0x94(r5)
  0x80532eb0:  stw      r7, 0x98(r5)
  0x80532eb4:  lwz      r7, 0xa0(r4)
  0x80532eb8:  lwz      r8, 0x9c(r4)
  0x80532ebc:  stw      r8, 0x9c(r5)
  0x80532ec0:  stw      r7, 0xa0(r5)
  0x80532ec4:  lwz      r7, 0xa8(r4)
  0x80532ec8:  lwz      r8, 0xa4(r4)
  0x80532ecc:  stw      r8, 0xa4(r5)
  0x80532ed0:  stw      r7, 0xa8(r5)
  0x80532ed4:  lwz      r7, 0xb0(r4)
  0x80532ed8:  lwz      r8, 0xac(r4)
  0x80532edc:  stw      r8, 0xac(r5)
  0x80532ee0:  stw      r7, 0xb0(r5)
  0x80532ee4:  lwz      r7, 0xb4(r4)
  0x80532ee8:  stw      r7, 0xb4(r5)
  0x80532eec:  lbz      r7, 0xb8(r4)
  0x80532ef0:  stb      r7, 0xb8(r5)
  0x80532ef4:  lbz      r7, 0xb9(r4)
  0x80532ef8:  stb      r7, 0xb9(r5)
  0x80532efc:  lbz      r7, 0xba(r4)
  0x80532f00:  stb      r7, 0xba(r5)
  0x80532f04:  lwz      r7, 0xbc(r4)
  0x80532f08:  stw      r7, 0xbc(r5)
  0x80532f0c:  lbz      r7, 0xc0(r4)
  0x80532f10:  stb      r7, 0xc0(r5)
  0x80532f14:  lbz      r7, 0xc1(r4)
  0x80532f18:  stb      r7, 0xc1(r5)
  0x80532f1c:  lbz      r7, 0xc2(r4)
  0x80532f20:  stb      r7, 0xc2(r5)
  0x80532f24:  lwz      r7, 0xc4(r4)
  0x80532f28:  stw      r7, 0xc4(r5)
  0x80532f2c:  lwz      r7, 0xc8(r4)
  0x80532f30:  stw      r7, 0xc8(r5)
  0x80532f34:  lwz      r7, 0xcc(r4)
  0x80532f38:  stw      r7, 0xcc(r5)
  0x80532f3c:  lwz      r7, 0xd0(r4)
  0x80532f40:  stw      r7, 0xd0(r5)
  0x80532f44:  lwz      r7, 0xd4(r4)
  0x80532f48:  stw      r7, 0xd4(r5)
  0x80532f4c:  lhz      r7, 0xd8(r4)
  0x80532f50:  sth      r7, 0xd8(r5)
  0x80532f54:  lhz      r7, 0xda(r4)
  0x80532f58:  sth      r7, 0xda(r5)
  0x80532f5c:  lhz      r7, 0xdc(r4)
  0x80532f60:  sth      r7, 0xdc(r5)
  0x80532f64:  lha      r7, 0xde(r4)
  0x80532f68:  sth      r7, 0xde(r5)
  0x80532f6c:  lbz      r7, 0xe0(r4)
  0x80532f70:  stb      r7, 0xe0(r5)
  0x80532f74:  lbz      r7, 0xe1(r4)
  0x80532f78:  stb      r7, 0xe1(r5)
  0x80532f7c:  lbz      r7, 0xe2(r4)
  0x80532f80:  stb      r7, 0xe2(r5)
  0x80532f84:  lhz      r7, 0xe8(r4)
  0x80532f88:  sth      r7, 0xe8(r5)
  0x80532f8c:  lbz      r7, 0xec(r4)
  0x80532f90:  addi     r4, r4, 0xf0
  0x80532f94:  stb      r7, 0xec(r5)
  0x80532f98:  addi     r5, r5, 0xf0
  0x80532f9c:  cmplw    r5, r6
  0x80532fa0:  blt      0x80532dd4
  0x80532fa4:  lwz      r21, 0x2348(r3)
  0x80532fa8:  li       r0, 0xe
  0x80532fac:  lwz      r30, 0x234c(r3)
  0x80532fb0:  addi     r6, r3, 0x1788
  0x80532fb4:  lwz      r29, 0x2350(r3)
  0x80532fb8:  addi     r5, r3, 0x2378
  0x80532fbc:  lwz      r28, 0x2354(r3)
  0x80532fc0:  lwz      r27, 0x2358(r3)
  0x80532fc4:  lwz      r26, 0x235c(r3)
  0x80532fc8:  lwz      r25, 0x2360(r3)
  0x80532fcc:  lbz      r24, 0x2364(r3)
  0x80532fd0:  lbz      r23, 0x2365(r3)
  0x80532fd4:  lbz      r22, 0x2366(r3)
  0x80532fd8:  lbz      r12, 0x2367(r3)
  0x80532fdc:  lwz      r11, 0x2368(r3)
  0x80532fe0:  lbz      r10, 0x236c(r3)
  0x80532fe4:  lbz      r9, 0x236d(r3)
  0x80532fe8:  lwz      r8, 0x2370(r3)
  0x80532fec:  lwz      r7, 0x2374(r3)
  0x80532ff0:  lwz      r4, 0x2378(r3)
  0x80532ff4:  stw      r21, 0x1758(r3)
  0x80532ff8:  stw      r30, 0x175c(r3)
  0x80532ffc:  stw      r29, 0x1760(r3)
  0x80533000:  stw      r28, 0x1764(r3)
  0x80533004:  stw      r27, 0x1768(r3)
  0x80533008:  stw      r26, 0x176c(r3)
  0x8053300c:  stw      r25, 0x1770(r3)
  0x80533010:  stb      r24, 0x1774(r3)
  0x80533014:  stb      r23, 0x1775(r3)
  0x80533018:  stb      r22, 0x1776(r3)
  0x8053301c:  stb      r12, 0x1777(r3)
  0x80533020:  stw      r11, 0x1778(r3)
  0x80533024:  stb      r10, 0x177c(r3)
  0x80533028:  stb      r9, 0x177d(r3)
  0x8053302c:  stw      r8, 0x1780(r3)
  0x80533030:  stw      r7, 0x1784(r3)
  0x80533034:  stw      r4, 0x1788(r3)
  0x80533038:  mtctr    r0
  0x8053303c:  lwz      r4, 4(r5)
  0x80533040:  lwzu     r0, 8(r5)
  0x80533044:  stw      r4, 4(r6)
  0x80533048:  stwu     r0, 8(r6)
  0x8053304c:  bdnz     0x8053303c
  0x80533050:  lwz      r0, 0x23ec(r3)
  0x80533054:  addi     r4, r31, 0x20
  0x80533058:  stw      r0, 0x17fc(r3)
  0x8053305c:  addi     r3, r3, 0xc10
  0x80533060:  bl       0x805318b0
  0x80533064:  lbz      r9, 0xc14(r31)
  0x80533068:  addi     r3, r31, 0x28
  0x8053306c:  lbz      r8, 0xc15(r31)
  0x80533070:  addi     r4, r31, 0xc18
  0x80533074:  lbz      r7, 0xc16(r31)
  0x80533078:  addi     r5, r31, 0xb68
  0x8053307c:  lbz      r6, 0xc17(r31)
  0x80533080:  li       r0, 0x26
  0x80533084:  stb      r9, 0x24(r31)
  0x80533088:  stb      r8, 0x25(r31)
  0x8053308c:  stb      r7, 0x26(r31)
  0x80533090:  stb      r6, 0x27(r31)
  0x80533094:  lbz      r6, 4(r4)
  0x80533098:  addi     r9, r3, 0x23
  0x8053309c:  stb      r6, 4(r3)
  0x805330a0:  addi     r8, r4, 0x23
  0x805330a4:  lbz      r6, 5(r4)
  0x805330a8:  stb      r6, 5(r3)
  0x805330ac:  lbz      r6, 6(r4)
  0x805330b0:  stb      r6, 6(r3)
  0x805330b4:  lwz      r6, 8(r4)
  0x805330b8:  stw      r6, 8(r3)
  0x805330bc:  lwz      r6, 0xc(r4)
  0x805330c0:  stw      r6, 0xc(r3)
  0x805330c4:  lwz      r6, 0x10(r4)
  0x805330c8:  stw      r6, 0x10(r3)
  0x805330cc:  lwz      r6, 0x18(r4)
  0x805330d0:  stw      r6, 0x18(r3)
  0x805330d4:  lbz      r6, 0x1c(r4)
  0x805330d8:  stb      r6, 0x1c(r3)
  0x805330dc:  lbz      r6, 0x1d(r4)
  0x805330e0:  stb      r6, 0x1d(r3)
  0x805330e4:  lwz      r6, 0x20(r4)
  0x805330e8:  stw      r6, 0x20(r3)
  0x805330ec:  mtctr    r0
  0x805330f0:  lbz      r7, 1(r8)
  0x805330f4:  lbzu     r6, 2(r8)
  0x805330f8:  stb      r7, 1(r9)
  0x805330fc:  stbu     r6, 2(r9)
  0x80533100:  bdnz     0x805330f0
  0x80533104:  lwz      r6, 0x70(r4)
  0x80533108:  stw      r6, 0x70(r3)
  0x8053310c:  lbz      r6, 0x74(r4)
  0x80533110:  stb      r6, 0x74(r3)
  0x80533114:  lbz      r6, 0x75(r4)
  0x80533118:  stb      r6, 0x75(r3)
  0x8053311c:  lbz      r6, 0x76(r4)
  0x80533120:  stb      r6, 0x76(r3)
  0x80533124:  lbz      r6, 0x77(r4)
  0x80533128:  stb      r6, 0x77(r3)
  0x8053312c:  lwz      r6, 0x78(r4)
  0x80533130:  stw      r6, 0x78(r3)
  0x80533134:  lwz      r6, 0x80(r4)
  0x80533138:  lwz      r7, 0x7c(r4)
  0x8053313c:  stw      r7, 0x7c(r3)
  0x80533140:  stw      r6, 0x80(r3)
  0x80533144:  lwz      r6, 0x88(r4)
  0x80533148:  lwz      r7, 0x84(r4)
  0x8053314c:  stw      r7, 0x84(r3)
  0x80533150:  stw      r6, 0x88(r3)
  0x80533154:  lwz      r6, 0x90(r4)
  0x80533158:  lwz      r7, 0x8c(r4)
  0x8053315c:  stw      r7, 0x8c(r3)
  0x80533160:  stw      r6, 0x90(r3)
  0x80533164:  lwz      r6, 0x98(r4)
  0x80533168:  lwz      r7, 0x94(r4)
  0x8053316c:  stw      r7, 0x94(r3)
  0x80533170:  stw      r6, 0x98(r3)
  0x80533174:  lwz      r6, 0xa0(r4)
  0x80533178:  lwz      r7, 0x9c(r4)
  0x8053317c:  stw      r7, 0x9c(r3)
  0x80533180:  stw      r6, 0xa0(r3)
  0x80533184:  lwz      r6, 0xa8(r4)
  0x80533188:  lwz      r7, 0xa4(r4)
  0x8053318c:  stw      r7, 0xa4(r3)
  0x80533190:  stw      r6, 0xa8(r3)
  0x80533194:  lwz      r6, 0xb0(r4)
  0x80533198:  lwz      r7, 0xac(r4)
  0x8053319c:  stw      r7, 0xac(r3)
  0x805331a0:  stw      r6, 0xb0(r3)
  0x805331a4:  lwz      r6, 0xb4(r4)
  0x805331a8:  stw      r6, 0xb4(r3)
  0x805331ac:  lbz      r6, 0xb8(r4)
  0x805331b0:  stb      r6, 0xb8(r3)
  0x805331b4:  lbz      r6, 0xb9(r4)
  0x805331b8:  stb      r6, 0xb9(r3)
  0x805331bc:  lbz      r6, 0xba(r4)
  0x805331c0:  stb      r6, 0xba(r3)
  0x805331c4:  lwz      r6, 0xbc(r4)
  0x805331c8:  stw      r6, 0xbc(r3)
  0x805331cc:  lbz      r6, 0xc0(r4)
  0x805331d0:  stb      r6, 0xc0(r3)
  0x805331d4:  lbz      r6, 0xc1(r4)
  0x805331d8:  stb      r6, 0xc1(r3)
  0x805331dc:  lbz      r6, 0xc2(r4)
  0x805331e0:  stb      r6, 0xc2(r3)
  0x805331e4:  lwz      r6, 0xc4(r4)
  0x805331e8:  stw      r6, 0xc4(r3)
  0x805331ec:  lwz      r6, 0xc8(r4)
  0x805331f0:  stw      r6, 0xc8(r3)
  0x805331f4:  lwz      r6, 0xcc(r4)
  0x805331f8:  stw      r6, 0xcc(r3)
  0x805331fc:  lwz      r6, 0xd0(r4)
  0x80533200:  stw      r6, 0xd0(r3)
  0x80533204:  lwz      r6, 0xd4(r4)
  0x80533208:  stw      r6, 0xd4(r3)
  0x8053320c:  lhz      r6, 0xd8(r4)
  0x80533210:  sth      r6, 0xd8(r3)
  0x80533214:  lhz      r6, 0xda(r4)
  0x80533218:  sth      r6, 0xda(r3)
  0x8053321c:  lhz      r6, 0xdc(r4)
  0x80533220:  sth      r6, 0xdc(r3)
  0x80533224:  lha      r6, 0xde(r4)
  0x80533228:  sth      r6, 0xde(r3)
  0x8053322c:  lbz      r6, 0xe0(r4)
  0x80533230:  stb      r6, 0xe0(r3)
  0x80533234:  lbz      r6, 0xe1(r4)
  0x80533238:  stb      r6, 0xe1(r3)
  0x8053323c:  lbz      r6, 0xe2(r4)
  0x80533240:  stb      r6, 0xe2(r3)
  0x80533244:  lhz      r6, 0xe8(r4)
  0x80533248:  sth      r6, 0xe8(r3)
  0x8053324c:  lbz      r6, 0xec(r4)
  0x80533250:  addi     r4, r4, 0xf0
  0x80533254:  stb      r6, 0xec(r3)
  0x80533258:  addi     r3, r3, 0xf0
  0x8053325c:  cmplw    r3, r5
  0x80533260:  blt      0x80533094
  0x80533264:  lwz      r30, 0x1758(r31)
  0x80533268:  li       r0, 0xe
  0x8053326c:  lwz      r29, 0x175c(r31)
  0x80533270:  addi     r5, r31, 0xb98
  0x80533274:  lwz      r28, 0x1760(r31)
  0x80533278:  addi     r4, r31, 0x1788
  0x8053327c:  lwz      r27, 0x1764(r31)
  0x80533280:  lwz      r26, 0x1768(r31)
  0x80533284:  lwz      r25, 0x176c(r31)
  0x80533288:  lwz      r24, 0x1770(r31)
  0x8053328c:  lbz      r23, 0x1774(r31)
  0x80533290:  lbz      r22, 0x1775(r31)
  0x80533294:  lbz      r12, 0x1776(r31)
  0x80533298:  lbz      r11, 0x1777(r31)
  0x8053329c:  lwz      r10, 0x1778(r31)
  0x805332a0:  lbz      r9, 0x177c(r31)
  0x805332a4:  lbz      r8, 0x177d(r31)
  0x805332a8:  lwz      r7, 0x1780(r31)
  0x805332ac:  lwz      r6, 0x1784(r31)
  0x805332b0:  lwz      r3, 0x1788(r31)
  0x805332b4:  stw      r30, 0xb68(r31)
  0x805332b8:  stw      r29, 0xb6c(r31)
  0x805332bc:  stw      r28, 0xb70(r31)
  0x805332c0:  stw      r27, 0xb74(r31)
  0x805332c4:  stw      r26, 0xb78(r31)
  0x805332c8:  stw      r25, 0xb7c(r31)
  0x805332cc:  stw      r24, 0xb80(r31)
  0x805332d0:  stb      r23, 0xb84(r31)
  0x805332d4:  stb      r22, 0xb85(r31)
  0x805332d8:  stb      r12, 0xb86(r31)
  0x805332dc:  stb      r11, 0xb87(r31)
  0x805332e0:  stw      r10, 0xb88(r31)
  0x805332e4:  stb      r9, 0xb8c(r31)
  0x805332e8:  stb      r8, 0xb8d(r31)
  0x805332ec:  stw      r7, 0xb90(r31)
  0x805332f0:  stw      r6, 0xb94(r31)
  0x805332f4:  stw      r3, 0xb98(r31)
  0x805332f8:  mtctr    r0
  0x805332fc:  lwz      r3, 4(r4)
  0x80533300:  lwzu     r0, 8(r4)
  0x80533304:  stw      r3, 4(r5)
  0x80533308:  stwu     r0, 8(r5)
  0x8053330c:  bdnz     0x805332fc
  0x80533310:  lwz      r5, 0x17fc(r31)
  0x80533314:  li       r0, 2
  0x80533318:  li       r4, 0xc
  0x8053331c:  li       r3, 0x3a
  0x80533320:  stw      r5, 0xc0c(r31)
  0x80533324:  li       r11, 0
  0x80533328:  li       r8, 5
  0x8053332c:  stw      r4, 0x1760(r31)
  0x80533330:  stw      r3, 0x1758(r31)
  0x80533334:  mtctr    r0
  0x80533338:  clrlwi   r5, r11, 0x18
  0x8053333c:  addi     r0, r11, 2
  0x80533340:  mulli    r4, r5, 0xf0
  0x80533344:  addi     r3, r11, 1
  0x80533348:  clrlwi   r6, r0, 0x18
  0x8053334c:  clrlwi   r7, r3, 0x18
  0x80533350:  add      r9, r31, r4
  0x80533354:  addi     r3, r11, 4
  0x80533358:  stw      r8, 0xc28(r9)
  0x8053335c:  addi     r10, r5, 1
  0x80533360:  addi     r0, r11, 3
  0x80533364:  clrlwi   r4, r3, 0x18
  0x80533368:  stb      r10, 0xcf9(r9)
  0x8053336c:  clrlwi   r5, r0, 0x18
  0x80533370:  addi     r0, r11, 5
  0x80533374:  addi     r6, r6, 1
  0x80533378:  stb      r10, 0xcf8(r9)
  0x8053337c:  clrlwi   r3, r0, 0x18
  0x80533380:  addi     r0, r7, 1
  0x80533384:  addi     r5, r5, 1
  0x80533388:  stw      r8, 0xd18(r9)
  0x8053338c:  addi     r4, r4, 1
  0x80533390:  addi     r3, r3, 1
  0x80533394:  addi     r11, r11, 6
  0x80533398:  stb      r0, 0xde9(r9)
  0x8053339c:  stb      r0, 0xde8(r9)
  0x805333a0:  stw      r8, 0xe08(r9)
  0x805333a4:  stb      r6, 0xed9(r9)
  0x805333a8:  stb      r6, 0xed8(r9)
  0x805333ac:  stw      r8, 0xef8(r9)
  0x805333b0:  stb      r5, 0xfc9(r9)
  0x805333b4:  stb      r5, 0xfc8(r9)
  0x805333b8:  stw      r8, 0xfe8(r9)
  0x805333bc:  stb      r4, 0x10b9(r9)
  0x805333c0:  stb      r4, 0x10b8(r9)
  0x805333c4:  stw      r8, 0x10d8(r9)
  0x805333c8:  stb      r3, 0x11a9(r9)
  0x805333cc:  stb      r3, 0x11a8(r9)
  0x805333d0:  bdnz     0x80533338
  0x805333d4:  li       r8, 0
  0x805333d8:  li       r7, 0
  0x805333dc:  li       r3, 1
  0x805333e0:  li       r0, 0x26
  0x805333e4:  lis      r6, 0
  0x805333e8:  clrlwi   r5, r7, 0x18
  0x805333ec:  lwz      r4, 0(r6)
  0x805333f0:  mulli    r5, r5, 0xf0
