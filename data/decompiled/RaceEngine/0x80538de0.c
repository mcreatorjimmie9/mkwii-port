/**
 * updateGpRankScore__System17RaceManagerPlayerFv
 * @addr 0x80538de0
 * @size 908 bytes
 * @frame 32 bytes
 * @calls 9 function(s)
 */
void System17RaceManagerPlayer(void* self) {
    /* r0 = stack[0x18] */
    /* cmplw r4, r3 */
    /* if (cr0 >=) goto 0x80538e14 */
    /* add r5, r4, r0 */
    /* li r4, 0 */
    /* subfc r0, r5, r3 */
    /* subfe r0, r4, r4 */
    /* subfe r0, r3, r3 */
    /* neg. r0, r0 */
    /* if (cr0 ==) goto 0x80538e0c */
    /* r5 = r3 */
    /* addis r3, r28, 1 */
    /* r3+0x-6d4c = r5 */
    /* r0 = r27+0x8 */
    /* r3, 0  (load upper immediate) */
    /* r3 = r3+0x0 */
    /* mulli r0, r0, 0xf0 */
    /* add r3, r3, r0 */
    /* r29 = r3+0x34 */
    /* r3 = r29 */
    /* 0x805299e0() */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x80538e40 */
    /* li r29, 0x18 */
    /* addis r3, r28, 1 */
    /* slwi r0, r29, 1 */
    /* add r4, r3, r0 */
    /* r3 = r4+0x-6d36 */
    /* cmplwi r3, 0xffff */
    /* if (cr0 >=) goto 0x80538e60 */
    /* addi r0, r3, 1 */
    /* sth r0, -0x6d36(r4) */
    /* r0 = r27+0x8 */
    /* r3, 0  (load upper immediate) */
    /* r4 = r3+0x0 */
    /* addis r3, r28, 1 */
    /* mulli r0, r0, 0xf0 */
    /* add r4, r4, r0 */
    /* r0 = r4+0x30 */
    /* slwi r0, r0, 1 */
    /* add r4, r3, r0 */
    /* r3 = r4+0x-6d04 */
    /* cmplwi r3, 0xffff */
    /* if (cr0 >=) goto 0x80538e98 */
    /* addi r0, r3, 1 */
    /* sth r0, -0x6d04(r4) */
    /* addi r11, r1, 0x50 */
    /* 0x80555bf8() */
    /* r0 = stack[0x54] */
    /* mtlr r0 */
    /* addi r1, r1, 0x50 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80538de0: 80 01 00 18              lwz      r0, 0x18(r1) */
/* 0x80538de4: 7c 04 18 40              cmplw    r4, r3 */
/* 0x80538de8: 40 80 00 2c              bge      0x80538e14 */
/* 0x80538dec: 7c a4 02 14              add      r5, r4, r0 */
/* 0x80538df0: 38 80 00 00              li       r4, 0 */
/* 0x80538df4: 7c 05 18 10              subfc    r0, r5, r3 */
/* 0x80538df8: 7c 04 21 10              subfe    r0, r4, r4 */
/* 0x80538dfc: 7c 03 19 10              subfe    r0, r3, r3 */
/* 0x80538e00: 7c 00 00 d1              neg.     r0, r0 */
/* 0x80538e04: 41 82 00 08              beq      0x80538e0c */
/* 0x80538e08: 7c 65 1b 78              mr       r5, r3 */
/* 0x80538e0c: 3c 7c 00 01              addis    r3, r28, 1 */
/* 0x80538e10: 90 a3 92 b4              stw      r5, -0x6d4c(r3) */
/* 0x80538e14: 88 1b 00 08              lbz      r0, 8(r27) */
/* 0x80538e18: 3c 60 00 00              lis      r3, 0 */
/* 0x80538e1c: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80538e20: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x80538e24: 7c 63 02 14              add      r3, r3, r0 */
/* 0x80538e28: 83 a3 00 34              lwz      r29, 0x34(r3) */
/* 0x80538e2c: 7f a3 eb 78              mr       r3, r29 */
/* 0x80538e30: 4b ff 0b b1              bl       0x805299e0 */
/* 0x80538e34: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80538e38: 41 82 00 08              beq      0x80538e40 */
/* 0x80538e3c: 3b a0 00 18              li       r29, 0x18 */
/* 0x80538e40: 3c 7c 00 01              addis    r3, r28, 1 */
/* 0x80538e44: 57 a0 08 3c              slwi     r0, r29, 1 */
/* 0x80538e48: 7c 83 02 14              add      r4, r3, r0 */
/* 0x80538e4c: a0 64 92 ca              lhz      r3, -0x6d36(r4) */
/* 0x80538e50: 28 03 ff ff              cmplwi   r3, 0xffff */
/* 0x80538e54: 40 80 00 0c              bge      0x80538e60 */
/* 0x80538e58: 38 03 00 01              addi     r0, r3, 1 */
/* 0x80538e5c: b0 04 92 ca              sth      r0, -0x6d36(r4) */
/* 0x80538e60: 88 1b 00 08              lbz      r0, 8(r27) */
/* 0x80538e64: 3c 60 00 00              lis      r3, 0 */
/* 0x80538e68: 80 83 00 00              lwz      r4, 0(r3) */
/* 0x80538e6c: 3c 7c 00 01              addis    r3, r28, 1 */
/* 0x80538e70: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x80538e74: 7c 84 02 14              add      r4, r4, r0 */
/* 0x80538e78: 80 04 00 30              lwz      r0, 0x30(r4) */
/* 0x80538e7c: 54 00 08 3c              slwi     r0, r0, 1 */
/* 0x80538e80: 7c 83 02 14              add      r4, r3, r0 */
/* 0x80538e84: a0 64 92 fc              lhz      r3, -0x6d04(r4) */
/* 0x80538e88: 28 03 ff ff              cmplwi   r3, 0xffff */
/* 0x80538e8c: 40 80 00 0c              bge      0x80538e98 */
/* 0x80538e90: 38 03 00 01              addi     r0, r3, 1 */
/* 0x80538e94: b0 04 92 fc              sth      r0, -0x6d04(r4) */
/* 0x80538e98: 39 61 00 50              addi     r11, r1, 0x50 */
/* 0x80538e9c: 48 01 cd 5d              bl       0x80555bf8 */
/* 0x80538ea0: 80 01 00 54              lwz      r0, 0x54(r1) */
/* 0x80538ea4: 7c 08 03 a6              mtlr     r0 */
/* 0x80538ea8: 38 21 00 50              addi     r1, r1, 0x50 */
/* 0x80538eac: 4e 80 00 20              blr       */
/* 0x80538eb0: 80 63 00 10              lwz      r3, 0x10(r3) */
/* 0x80538eb4: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x80538eb8: 81 8c 00 28              lwz      r12, 0x28(r12) */
/* 0x80538ebc: 7d 89 03 a6              mtctr    r12 */
/* 0x80538ec0: 4e 80 04 20              bctr      */
/* 0x80538ec4: 4e 80 00 20              blr       */
/* 0x80538ec8: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80538ecc: 7c 08 02 a6              mflr     r0 */
/* 0x80538ed0: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80538ed4: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x80538ed8: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x80538edc: 7c 7f 1b 78              mr       r31, r3 */
/* 0x80538ee0: 41 82 00 10              beq      0x80538ef0 */
/* 0x80538ee4: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80538ee8: 40 81 00 08              ble      0x80538ef0 */
/* 0x80538eec: 48 01 cd 0d              bl       0x80555bf8 */
/* 0x80538ef0: 7f e3 fb 78              mr       r3, r31 */
/* 0x80538ef4: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x80538ef8: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80538efc: 7c 08 03 a6              mtlr     r0 */
/* 0x80538f00: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80538f04: 4e 80 00 20              blr       */
/* 0x80538f08: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x80538f0c: 7c 08 02 a6              mflr     r0 */
/* 0x80538f10: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x80538f14: 93 e1 00 1c              stw      r31, 0x1c(r1) */
/* 0x80538f18: 7c bf 2b 78              mr       r31, r5 */
/* 0x80538f1c: 93 c1 00 18              stw      r30, 0x18(r1) */
/* 0x80538f20: 7c 9e 23 78              mr       r30, r4 */
/* 0x80538f24: a0 03 00 04              lhz      r0, 4(r3) */
/* 0x80538f28: b0 01 00 08              sth      r0, 8(r1) */
/* 0x80538f2c: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x80538f30: 81 8c 00 14              lwz      r12, 0x14(r12) */
/* 0x80538f34: 7d 89 03 a6              mtctr    r12 */
/* 0x80538f38: 4e 80 04 21              bctrl     */
/* 0x80538f3c: 7c 64 1b 78              mr       r4, r3 */
/* 0x80538f40: 7f c5 f3 78              mr       r5, r30 */
/* 0x80538f44: 7f e6 fb 78              mr       r6, r31 */
/* 0x80538f48: 38 61 00 08              addi     r3, r1, 8 */
/* 0x80538f4c: 38 e0 00 02              li       r7, 2 */
/* 0x80538f50: 4b ff 60 11              bl       0x8052ef60 */
/* 0x80538f54: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x80538f58: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x80538f5c: 83 c1 00 18              lwz      r30, 0x18(r1) */
/* 0x80538f60: 7c 08 03 a6              mtlr     r0 */
/* 0x80538f64: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x80538f68: 4e 80 00 20              blr       */
/* 0x80538f6c: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x80538f70: 7c 08 02 a6              mflr     r0 */
/* 0x80538f74: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x80538f78: 93 e1 00 1c              stw      r31, 0x1c(r1) */
/* 0x80538f7c: 7c bf 2b 78              mr       r31, r5 */
/* 0x80538f80: 93 c1 00 18              stw      r30, 0x18(r1) */
/* 0x80538f84: 7c 9e 23 78              mr       r30, r4 */
/* 0x80538f88: 93 a1 00 14              stw      r29, 0x14(r1) */
/* 0x80538f8c: 7c 7d 1b 78              mr       r29, r3 */
/* 0x80538f90: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x80538f94: 81 8c 00 14              lwz      r12, 0x14(r12) */
/* 0x80538f98: 7d 89 03 a6              mtctr    r12 */
/* 0x80538f9c: 4e 80 04 21              bctrl     */
/* 0x80538fa0: 7c 64 1b 78              mr       r4, r3 */
/* 0x80538fa4: 7f c5 f3 78              mr       r5, r30 */
/* 0x80538fa8: 7f e6 fb 78              mr       r6, r31 */
/* 0x80538fac: 38 7d 00 04              addi     r3, r29, 4 */
/* 0x80538fb0: 38 e0 00 02              li       r7, 2 */
/* 0x80538fb4: 4b ff 60 e5              bl       0x8052f098 */
/* 0x80538fb8: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x80538fbc: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x80538fc0: 83 c1 00 18              lwz      r30, 0x18(r1) */
/* 0x80538fc4: 83 a1 00 14              lwz      r29, 0x14(r1) */
/* 0x80538fc8: 7c 08 03 a6              mtlr     r0 */
/* 0x80538fcc: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x80538fd0: 4e 80 00 20              blr       */
/* 0x80538fd4: 38 60 00 0d              li       r3, 0xd */
/* 0x80538fd8: 4e 80 00 20              blr       */
/* 0x80538fdc: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x80538fe0: 7c 08 02 a6              mflr     r0 */
/* 0x80538fe4: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x80538fe8: 93 e1 00 1c              stw      r31, 0x1c(r1) */
/* 0x80538fec: 7c bf 2b 78              mr       r31, r5 */
/* 0x80538ff0: 93 c1 00 18              stw      r30, 0x18(r1) */
/* 0x80538ff4: 7c 9e 23 78              mr       r30, r4 */
/* 0x80538ff8: a0 03 00 04              lhz      r0, 4(r3) */
/* 0x80538ffc: b0 01 00 08              sth      r0, 8(r1) */
/* 0x80539000: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x80539004: 81 8c 00 14              lwz      r12, 0x14(r12) */
/* 0x80539008: 7d 89 03 a6              mtctr    r12 */
/* 0x8053900c: 4e 80 04 21              bctrl     */
/* 0x80539010: 7c 64 1b 78              mr       r4, r3 */
/* 0x80539014: 7f c5 f3 78              mr       r5, r30 */
/* 0x80539018: 7f e6 fb 78              mr       r6, r31 */
/* 0x8053901c: 38 61 00 08              addi     r3, r1, 8 */
/* 0x80539020: 38 e0 00 02              li       r7, 2 */
/* 0x80539024: 4b ff 5f 3d              bl       0x8052ef60 */
/* 0x80539028: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x8053902c: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x80539030: 83 c1 00 18              lwz      r30, 0x18(r1) */
/* 0x80539034: 7c 08 03 a6              mtlr     r0 */
/* 0x80539038: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x8053903c: 4e 80 00 20              blr       */
/* 0x80539040: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x80539044: 7c 08 02 a6              mflr     r0 */
/* 0x80539048: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x8053904c: 93 e1 00 1c              stw      r31, 0x1c(r1) */
/* 0x80539050: 7c bf 2b 78              mr       r31, r5 */
/* 0x80539054: 93 c1 00 18              stw      r30, 0x18(r1) */
/* 0x80539058: 7c 9e 23 78              mr       r30, r4 */
/* 0x8053905c: 93 a1 00 14              stw      r29, 0x14(r1) */
/* 0x80539060: 7c 7d 1b 78              mr       r29, r3 */
/* 0x80539064: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x80539068: 81 8c 00 14              lwz      r12, 0x14(r12) */
/* 0x8053906c: 7d 89 03 a6              mtctr    r12 */
/* 0x80539070: 4e 80 04 21              bctrl     */
/* 0x80539074: 7c 64 1b 78              mr       r4, r3 */
/* 0x80539078: 7f c5 f3 78              mr       r5, r30 */
/* 0x8053907c: 7f e6 fb 78              mr       r6, r31 */
/* 0x80539080: 38 7d 00 04              addi     r3, r29, 4 */
/* 0x80539084: 38 e0 00 02              li       r7, 2 */
/* 0x80539088: 4b ff 60 11              bl       0x8052f098 */
/* 0x8053908c: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x80539090: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x80539094: 83 c1 00 18              lwz      r30, 0x18(r1) */
/* 0x80539098: 83 a1 00 14              lwz      r29, 0x14(r1) */
/* 0x8053909c: 7c 08 03 a6              mtlr     r0 */
/* 0x805390a0: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x805390a4: 4e 80 00 20              blr       */
/* 0x805390a8: 38 60 00 0a              li       r3, 0xa */
/* 0x805390ac: 4e 80 00 20              blr       */
/* 0x805390b0: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x805390b4: 7c 08 02 a6              mflr     r0 */
/* 0x805390b8: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x805390bc: 93 e1 00 1c              stw      r31, 0x1c(r1) */
/* 0x805390c0: 7c bf 2b 78              mr       r31, r5 */
/* 0x805390c4: 93 c1 00 18              stw      r30, 0x18(r1) */
/* 0x805390c8: 7c 9e 23 78              mr       r30, r4 */
/* 0x805390cc: 88 03 00 04              lbz      r0, 4(r3) */
/* 0x805390d0: 98 01 00 08              stb      r0, 8(r1) */
/* 0x805390d4: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x805390d8: 81 8c 00 14              lwz      r12, 0x14(r12) */
/* 0x805390dc: 7d 89 03 a6              mtctr    r12 */
/* 0x805390e0: 4e 80 04 21              bctrl     */
/* 0x805390e4: 7c 64 1b 78              mr       r4, r3 */
/* 0x805390e8: 7f c5 f3 78              mr       r5, r30 */
/* 0x805390ec: 7f e6 fb 78              mr       r6, r31 */
/* 0x805390f0: 38 61 00 08              addi     r3, r1, 8 */
/* 0x805390f4: 38 e0 00 01              li       r7, 1 */
/* 0x805390f8: 4b ff 5e 69              bl       0x8052ef60 */
/* 0x805390fc: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x80539100: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x80539104: 83 c1 00 18              lwz      r30, 0x18(r1) */
/* 0x80539108: 7c 08 03 a6              mtlr     r0 */
/* 0x8053910c: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x80539110: 4e 80 00 20              blr       */
/* 0x80539114: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x80539118: 7c 08 02 a6              mflr     r0 */
/* 0x8053911c: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x80539120: 93 e1 00 1c              stw      r31, 0x1c(r1) */
/* 0x80539124: 7c bf 2b 78              mr       r31, r5 */
/* 0x80539128: 93 c1 00 18              stw      r30, 0x18(r1) */
/* 0x8053912c: 7c 9e 23 78              mr       r30, r4 */
/* 0x80539130: 93 a1 00 14              stw      r29, 0x14(r1) */
/* 0x80539134: 7c 7d 1b 78              mr       r29, r3 */
/* 0x80539138: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x8053913c: 81 8c 00 14              lwz      r12, 0x14(r12) */
/* 0x80539140: 7d 89 03 a6              mtctr    r12 */
/* 0x80539144: 4e 80 04 21              bctrl     */
/* 0x80539148: 7c 64 1b 78              mr       r4, r3 */
/* 0x8053914c: 7f c5 f3 78              mr       r5, r30 */
/* 0x80539150: 7f e6 fb 78              mr       r6, r31 */
/* 0x80539154: 38 7d 00 04              addi     r3, r29, 4 */
/* 0x80539158: 38 e0 00 01              li       r7, 1 */
/* 0x8053915c: 4b ff 5f 3d              bl       0x8052f098 */
/* 0x80539160: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x80539164: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x80539168: 83 c1 00 18              lwz      r30, 0x18(r1) */
#endif


/* === DISASSEMBLY === */

; Function: updateGpRankScore__Q26System17RaceManagerPlayerFv
; Demangled: updateGpRankScore__System17RaceManagerPlayerFv
; Address: 0x80538de0  (.text+0x26544)
; Size: 908 bytes

  0x80538de0:  lwz      r0, 0x18(r1)
  0x80538de4:  cmplw    r4, r3
  0x80538de8:  bge      0x80538e14
  0x80538dec:  add      r5, r4, r0
  0x80538df0:  li       r4, 0
  0x80538df4:  subfc    r0, r5, r3
  0x80538df8:  subfe    r0, r4, r4
  0x80538dfc:  subfe    r0, r3, r3
  0x80538e00:  neg.     r0, r0
  0x80538e04:  beq      0x80538e0c
  0x80538e08:  mr       r5, r3
  0x80538e0c:  addis    r3, r28, 1
  0x80538e10:  stw      r5, -0x6d4c(r3)
  0x80538e14:  lbz      r0, 8(r27)
  0x80538e18:  lis      r3, 0
  0x80538e1c:  lwz      r3, 0(r3)
  0x80538e20:  mulli    r0, r0, 0xf0
  0x80538e24:  add      r3, r3, r0
  0x80538e28:  lwz      r29, 0x34(r3)
  0x80538e2c:  mr       r3, r29
  0x80538e30:  bl       0x805299e0
  0x80538e34:  cmpwi    r3, 0
  0x80538e38:  beq      0x80538e40
  0x80538e3c:  li       r29, 0x18
  0x80538e40:  addis    r3, r28, 1
  0x80538e44:  slwi     r0, r29, 1
  0x80538e48:  add      r4, r3, r0
  0x80538e4c:  lhz      r3, -0x6d36(r4)
  0x80538e50:  cmplwi   r3, 0xffff
  0x80538e54:  bge      0x80538e60
  0x80538e58:  addi     r0, r3, 1
  0x80538e5c:  sth      r0, -0x6d36(r4)
  0x80538e60:  lbz      r0, 8(r27)
  0x80538e64:  lis      r3, 0
  0x80538e68:  lwz      r4, 0(r3)
  0x80538e6c:  addis    r3, r28, 1
  0x80538e70:  mulli    r0, r0, 0xf0
  0x80538e74:  add      r4, r4, r0
  0x80538e78:  lwz      r0, 0x30(r4)
  0x80538e7c:  slwi     r0, r0, 1
  0x80538e80:  add      r4, r3, r0
  0x80538e84:  lhz      r3, -0x6d04(r4)
  0x80538e88:  cmplwi   r3, 0xffff
  0x80538e8c:  bge      0x80538e98
  0x80538e90:  addi     r0, r3, 1
  0x80538e94:  sth      r0, -0x6d04(r4)
  0x80538e98:  addi     r11, r1, 0x50
  0x80538e9c:  bl       0x80555bf8
  0x80538ea0:  lwz      r0, 0x54(r1)
  0x80538ea4:  mtlr     r0
  0x80538ea8:  addi     r1, r1, 0x50
  0x80538eac:  blr      
  0x80538eb0:  lwz      r3, 0x10(r3)
  0x80538eb4:  lwz      r12, 0(r3)
  0x80538eb8:  lwz      r12, 0x28(r12)
  0x80538ebc:  mtctr    r12
  0x80538ec0:  bctr     
  0x80538ec4:  blr      
  0x80538ec8:  stwu     r1, -0x10(r1)
  0x80538ecc:  mflr     r0
  0x80538ed0:  cmpwi    r3, 0
  0x80538ed4:  stw      r0, 0x14(r1)
  0x80538ed8:  stw      r31, 0xc(r1)
  0x80538edc:  mr       r31, r3
  0x80538ee0:  beq      0x80538ef0
  0x80538ee4:  cmpwi    r4, 0
  0x80538ee8:  ble      0x80538ef0
  0x80538eec:  bl       0x80555bf8
  0x80538ef0:  mr       r3, r31
  0x80538ef4:  lwz      r31, 0xc(r1)
  0x80538ef8:  lwz      r0, 0x14(r1)
  0x80538efc:  mtlr     r0
  0x80538f00:  addi     r1, r1, 0x10
  0x80538f04:  blr      
  0x80538f08:  stwu     r1, -0x20(r1)
  0x80538f0c:  mflr     r0
  0x80538f10:  stw      r0, 0x24(r1)
  0x80538f14:  stw      r31, 0x1c(r1)
  0x80538f18:  mr       r31, r5
  0x80538f1c:  stw      r30, 0x18(r1)
  0x80538f20:  mr       r30, r4
  0x80538f24:  lhz      r0, 4(r3)
  0x80538f28:  sth      r0, 8(r1)
  0x80538f2c:  lwz      r12, 0(r3)
  0x80538f30:  lwz      r12, 0x14(r12)
  0x80538f34:  mtctr    r12
  0x80538f38:  bctrl    
  0x80538f3c:  mr       r4, r3
  0x80538f40:  mr       r5, r30
  0x80538f44:  mr       r6, r31
  0x80538f48:  addi     r3, r1, 8
  0x80538f4c:  li       r7, 2
  0x80538f50:  bl       0x8052ef60
  0x80538f54:  lwz      r0, 0x24(r1)
  0x80538f58:  lwz      r31, 0x1c(r1)
  0x80538f5c:  lwz      r30, 0x18(r1)
  0x80538f60:  mtlr     r0
  0x80538f64:  addi     r1, r1, 0x20
  0x80538f68:  blr      
  0x80538f6c:  stwu     r1, -0x20(r1)
  0x80538f70:  mflr     r0
  0x80538f74:  stw      r0, 0x24(r1)
  0x80538f78:  stw      r31, 0x1c(r1)
  0x80538f7c:  mr       r31, r5
  0x80538f80:  stw      r30, 0x18(r1)
  0x80538f84:  mr       r30, r4
  0x80538f88:  stw      r29, 0x14(r1)
  0x80538f8c:  mr       r29, r3
  0x80538f90:  lwz      r12, 0(r3)
  0x80538f94:  lwz      r12, 0x14(r12)
  0x80538f98:  mtctr    r12
  0x80538f9c:  bctrl    
  0x80538fa0:  mr       r4, r3
  0x80538fa4:  mr       r5, r30
  0x80538fa8:  mr       r6, r31
  0x80538fac:  addi     r3, r29, 4
  0x80538fb0:  li       r7, 2
  0x80538fb4:  bl       0x8052f098
  0x80538fb8:  lwz      r0, 0x24(r1)
  0x80538fbc:  lwz      r31, 0x1c(r1)
  0x80538fc0:  lwz      r30, 0x18(r1)
  0x80538fc4:  lwz      r29, 0x14(r1)
  0x80538fc8:  mtlr     r0
  0x80538fcc:  addi     r1, r1, 0x20
  0x80538fd0:  blr      
  0x80538fd4:  li       r3, 0xd
  0x80538fd8:  blr      
  0x80538fdc:  stwu     r1, -0x20(r1)
  0x80538fe0:  mflr     r0
  0x80538fe4:  stw      r0, 0x24(r1)
  0x80538fe8:  stw      r31, 0x1c(r1)
  0x80538fec:  mr       r31, r5
  0x80538ff0:  stw      r30, 0x18(r1)
  0x80538ff4:  mr       r30, r4
  0x80538ff8:  lhz      r0, 4(r3)
  0x80538ffc:  sth      r0, 8(r1)
  0x80539000:  lwz      r12, 0(r3)
  0x80539004:  lwz      r12, 0x14(r12)
  0x80539008:  mtctr    r12
  0x8053900c:  bctrl    
  0x80539010:  mr       r4, r3
  0x80539014:  mr       r5, r30
  0x80539018:  mr       r6, r31
  0x8053901c:  addi     r3, r1, 8
  0x80539020:  li       r7, 2
  0x80539024:  bl       0x8052ef60
  0x80539028:  lwz      r0, 0x24(r1)
  0x8053902c:  lwz      r31, 0x1c(r1)
  0x80539030:  lwz      r30, 0x18(r1)
  0x80539034:  mtlr     r0
  0x80539038:  addi     r1, r1, 0x20
  0x8053903c:  blr      
  0x80539040:  stwu     r1, -0x20(r1)
  0x80539044:  mflr     r0
  0x80539048:  stw      r0, 0x24(r1)
  0x8053904c:  stw      r31, 0x1c(r1)
  0x80539050:  mr       r31, r5
  0x80539054:  stw      r30, 0x18(r1)
  0x80539058:  mr       r30, r4
  0x8053905c:  stw      r29, 0x14(r1)
  0x80539060:  mr       r29, r3
  0x80539064:  lwz      r12, 0(r3)
  0x80539068:  lwz      r12, 0x14(r12)
  0x8053906c:  mtctr    r12
  0x80539070:  bctrl    
  0x80539074:  mr       r4, r3
  0x80539078:  mr       r5, r30
  0x8053907c:  mr       r6, r31
  0x80539080:  addi     r3, r29, 4
  0x80539084:  li       r7, 2
  0x80539088:  bl       0x8052f098
  0x8053908c:  lwz      r0, 0x24(r1)
  0x80539090:  lwz      r31, 0x1c(r1)
  0x80539094:  lwz      r30, 0x18(r1)
  0x80539098:  lwz      r29, 0x14(r1)
  0x8053909c:  mtlr     r0
  0x805390a0:  addi     r1, r1, 0x20
  0x805390a4:  blr      
  0x805390a8:  li       r3, 0xa
  0x805390ac:  blr      
  0x805390b0:  stwu     r1, -0x20(r1)
  0x805390b4:  mflr     r0
  0x805390b8:  stw      r0, 0x24(r1)
  0x805390bc:  stw      r31, 0x1c(r1)
  0x805390c0:  mr       r31, r5
  0x805390c4:  stw      r30, 0x18(r1)
  0x805390c8:  mr       r30, r4
  0x805390cc:  lbz      r0, 4(r3)
  0x805390d0:  stb      r0, 8(r1)
  0x805390d4:  lwz      r12, 0(r3)
  0x805390d8:  lwz      r12, 0x14(r12)
  0x805390dc:  mtctr    r12
  0x805390e0:  bctrl    
  0x805390e4:  mr       r4, r3
  0x805390e8:  mr       r5, r30
  0x805390ec:  mr       r6, r31
  0x805390f0:  addi     r3, r1, 8
  0x805390f4:  li       r7, 1
  0x805390f8:  bl       0x8052ef60
  0x805390fc:  lwz      r0, 0x24(r1)
  0x80539100:  lwz      r31, 0x1c(r1)
  0x80539104:  lwz      r30, 0x18(r1)
  0x80539108:  mtlr     r0
  0x8053910c:  addi     r1, r1, 0x20
  0x80539110:  blr      
  0x80539114:  stwu     r1, -0x20(r1)
  0x80539118:  mflr     r0
  0x8053911c:  stw      r0, 0x24(r1)
  0x80539120:  stw      r31, 0x1c(r1)
  0x80539124:  mr       r31, r5
  0x80539128:  stw      r30, 0x18(r1)
  0x8053912c:  mr       r30, r4
  0x80539130:  stw      r29, 0x14(r1)
  0x80539134:  mr       r29, r3
  0x80539138:  lwz      r12, 0(r3)
  0x8053913c:  lwz      r12, 0x14(r12)
  0x80539140:  mtctr    r12
  0x80539144:  bctrl    
  0x80539148:  mr       r4, r3
  0x8053914c:  mr       r5, r30
  0x80539150:  mr       r6, r31
  0x80539154:  addi     r3, r29, 4
  0x80539158:  li       r7, 1
  0x8053915c:  bl       0x8052f098
  0x80539160:  lwz      r0, 0x24(r1)
  0x80539164:  lwz      r31, 0x1c(r1)
  0x80539168:  lwz      r30, 0x18(r1)
