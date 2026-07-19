/**
 * initRng__System10RaceConfig8ScenarioFv
 * @addr 0x80531e0c
 * @size 232 bytes
 * @frame 32 bytes
 * @calls 4 function(s)
 */
void System10RaceConfig8Scenario(void* self) {
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80531e0c: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80531e10: 4e 80 00 20              blr       */
/* 0x80531e14: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80531e18: 7c 08 02 a6              mflr     r0 */
/* 0x80531e1c: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80531e20: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x80531e24: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x80531e28: 7c 9f 23 78              mr       r31, r4 */
/* 0x80531e2c: 93 c1 00 08              stw      r30, 8(r1) */
/* 0x80531e30: 7c 7e 1b 78              mr       r30, r3 */
/* 0x80531e34: 41 82 00 2c              beq      0x80531e60 */
/* 0x80531e38: 3c 80 00 00              lis      r4, 0 */
/* 0x80531e3c: 38 a0 00 f0              li       r5, 0xf0 */
/* 0x80531e40: 38 84 00 00              addi     r4, r4, 0 */
/* 0x80531e44: 38 c0 00 0c              li       r6, 0xc */
/* 0x80531e48: 38 63 00 08              addi     r3, r3, 8 */
/* 0x80531e4c: 48 02 3d ad              bl       0x80555bf8 */
/* 0x80531e50: 2c 1f 00 00              cmpwi    r31, 0 */
/* 0x80531e54: 40 81 00 0c              ble      0x80531e60 */
/* 0x80531e58: 7f c3 f3 78              mr       r3, r30 */
/* 0x80531e5c: 48 02 3d 9d              bl       0x80555bf8 */
/* 0x80531e60: 7f c3 f3 78              mr       r3, r30 */
/* 0x80531e64: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x80531e68: 83 c1 00 08              lwz      r30, 8(r1) */
/* 0x80531e6c: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80531e70: 7c 08 03 a6              mtlr     r0 */
/* 0x80531e74: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80531e78: 4e 80 00 20              blr       */
/* 0x80531e7c: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x80531e80: 7c 08 02 a6              mflr     r0 */
/* 0x80531e84: 3c 80 00 00              lis      r4, 0 */
/* 0x80531e88: 38 a0 00 00              li       r5, 0 */
/* 0x80531e8c: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x80531e90: 38 84 00 00              addi     r4, r4, 0 */
/* 0x80531e94: 38 84 00 12              addi     r4, r4, 0x12 */
/* 0x80531e98: bf 41 00 08              stmw     r26, 8(r1) */
/* 0x80531e9c: 7c 7a 1b 78              mr       r26, r3 */
/* 0x80531ea0: 48 02 3d 59              bl       0x80555bf8 */
/* 0x80531ea4: 3c 60 00 00              lis      r3, 0 */
/* 0x80531ea8: 3b 80 00 00              li       r28, 0 */
/* 0x80531eac: 38 63 00 00              addi     r3, r3, 0 */
/* 0x80531eb0: 3f 60 00 00              lis      r27, 0 */
/* 0x80531eb4: 38 03 00 08              addi     r0, r3, 8 */
/* 0x80531eb8: 3f a0 00 00              lis      r29, 0 */
/* 0x80531ebc: 3b 7b 00 00              addi     r27, r27, 0 */
/* 0x80531ec0: 3f c0 00 00              lis      r30, 0 */
/* 0x80531ec4: 90 7a 00 1c              stw      r3, 0x1c(r26) */
/* 0x80531ec8: 38 7a 00 28              addi     r3, r26, 0x28 */
/* 0x80531ecc: 38 9d 00 00              addi     r4, r29, 0 */
/* 0x80531ed0: 38 be 00 00              addi     r5, r30, 0 */
/* 0x80531ed4: 90 1a 00 00              stw      r0, 0(r26) */
/* 0x80531ed8: 38 c0 00 f0              li       r6, 0xf0 */
/* 0x80531edc: 38 e0 00 0c              li       r7, 0xc */
/* 0x80531ee0: 93 7a 00 20              stw      r27, 0x20(r26) */
/* 0x80531ee4: 9b 9a 00 24              stb      r28, 0x24(r26) */
/* 0x80531ee8: 9b 9a 00 25              stb      r28, 0x25(r26) */
/* 0x80531eec: 48 02 3d 0d              bl       0x80555bf8 */
/* 0x80531ef0: 3b e0 00 11              li       r31, 0x11 */
#endif


/* === DISASSEMBLY === */

; Function: initRng__Q36System10RaceConfig8ScenarioFv
; Demangled: initRng__System10RaceConfig8ScenarioFv
; Address: 0x80531e0c  (.text+0x1f570)
; Size: 232 bytes

  0x80531e0c:  addi     r1, r1, 0x10
  0x80531e10:  blr      
  0x80531e14:  stwu     r1, -0x10(r1)
  0x80531e18:  mflr     r0
  0x80531e1c:  cmpwi    r3, 0
  0x80531e20:  stw      r0, 0x14(r1)
  0x80531e24:  stw      r31, 0xc(r1)
  0x80531e28:  mr       r31, r4
  0x80531e2c:  stw      r30, 8(r1)
  0x80531e30:  mr       r30, r3
  0x80531e34:  beq      0x80531e60
  0x80531e38:  lis      r4, 0
  0x80531e3c:  li       r5, 0xf0
  0x80531e40:  addi     r4, r4, 0
  0x80531e44:  li       r6, 0xc
  0x80531e48:  addi     r3, r3, 8
  0x80531e4c:  bl       0x80555bf8
  0x80531e50:  cmpwi    r31, 0
  0x80531e54:  ble      0x80531e60
  0x80531e58:  mr       r3, r30
  0x80531e5c:  bl       0x80555bf8
  0x80531e60:  mr       r3, r30
  0x80531e64:  lwz      r31, 0xc(r1)
  0x80531e68:  lwz      r30, 8(r1)
  0x80531e6c:  lwz      r0, 0x14(r1)
  0x80531e70:  mtlr     r0
  0x80531e74:  addi     r1, r1, 0x10
  0x80531e78:  blr      
  0x80531e7c:  stwu     r1, -0x20(r1)
  0x80531e80:  mflr     r0
  0x80531e84:  lis      r4, 0
  0x80531e88:  li       r5, 0
  0x80531e8c:  stw      r0, 0x24(r1)
  0x80531e90:  addi     r4, r4, 0
  0x80531e94:  addi     r4, r4, 0x12
  0x80531e98:  stmw     r26, 8(r1)
  0x80531e9c:  mr       r26, r3
  0x80531ea0:  bl       0x80555bf8
  0x80531ea4:  lis      r3, 0
  0x80531ea8:  li       r28, 0
  0x80531eac:  addi     r3, r3, 0
  0x80531eb0:  lis      r27, 0
  0x80531eb4:  addi     r0, r3, 8
  0x80531eb8:  lis      r29, 0
  0x80531ebc:  addi     r27, r27, 0
  0x80531ec0:  lis      r30, 0
  0x80531ec4:  stw      r3, 0x1c(r26)
  0x80531ec8:  addi     r3, r26, 0x28
  0x80531ecc:  addi     r4, r29, 0
  0x80531ed0:  addi     r5, r30, 0
  0x80531ed4:  stw      r0, 0(r26)
  0x80531ed8:  li       r6, 0xf0
  0x80531edc:  li       r7, 0xc
  0x80531ee0:  stw      r27, 0x20(r26)
  0x80531ee4:  stb      r28, 0x24(r26)
  0x80531ee8:  stb      r28, 0x25(r26)
  0x80531eec:  bl       0x80555bf8
  0x80531ef0:  li       r31, 0x11
