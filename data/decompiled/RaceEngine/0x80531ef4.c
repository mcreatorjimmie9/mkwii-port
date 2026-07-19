/**
 * initCompetitionSettings__System10RaceConfig8ScenarioFv
 * @addr 0x80531ef4
 * @size 388 bytes
 * @frame 48 bytes
 * @calls 7 function(s)
 */
void System10RaceConfig8Scenario(void* self) {
    /* r26+0xb68 = r31 */
    /* addi r3, r26, 0xb9c */
    /* li r4, 0 */
    /* r26+0xb70 = r28 */
    /* li r5, 0x70 */
    /* r26+0xb74 = r28 */
    /* r26+0xb88 = r28 */
    /* 0x80555bf8() */
    /* addi r0, r26, 0x23f0 */
    /* r26+0xc0c = r0 */
    /* addi r3, r26, 0xc18 */
    /* addi r4, r29, 0 */
    /* r26+0xc10 = r27 */
    /* addi r5, r30, 0 */
    /* li r6, 0xf0 */
    /* li r7, 0xc */
    /* stb r28, 0xc14(r26) */
    /* stb r28, 0xc15(r26) */
    /* 0x80555bf8() */
    /* r26+0x1758 = r31 */
    /* addi r3, r26, 0x178c */
    /* li r4, 0 */
    /* li r5, 0x70 */
    /* r26+0x1760 = r28 */
    /* r26+0x1764 = r28 */
    /* r26+0x1778 = r28 */
    /* 0x80555bf8() */
    /* addi r0, r26, 0x4bf0 */
    /* r26+0x17fc = r0 */
    /* addi r3, r26, 0x1808 */
    /* addi r4, r29, 0 */
    /* r26+0x1800 = r27 */
    /* addi r5, r30, 0 */
    /* li r6, 0xf0 */
    /* li r7, 0xc */
    /* stb r28, 0x1804(r26) */
    /* stb r28, 0x1805(r26) */
    /* 0x80555bf8() */
    /* r26+0x2348 = r31 */
    /* addi r3, r26, 0x237c */
    /* li r4, 0 */
    /* li r5, 0x70 */
    /* r26+0x2350 = r28 */
    /* r26+0x2354 = r28 */
    /* r26+0x2368 = r28 */
    /* 0x80555bf8() */
    /* r26+0x23ec = r28 */
    /* addi r27, r26, 0x23f0 */
    /* addi r31, r26, 0x73f0 */
    /* r3 = r27 */
    /* 0x8051e47c() */
    /* addi r27, r27, 0x2800 */
    /* cmplw r27, r31 */
    /* if (cr0 <) goto 0x80531fb8 */
    /* r3 = r26 */
    /* lmw r26, 8(r1) */
    /* r0 = stack[0x24] */
    /* mtlr r0 */
    /* addi r1, r1, 0x20 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80531ef4: 93 fa 0b 68              stw      r31, 0xb68(r26) */
/* 0x80531ef8: 38 7a 0b 9c              addi     r3, r26, 0xb9c */
/* 0x80531efc: 38 80 00 00              li       r4, 0 */
/* 0x80531f00: 93 9a 0b 70              stw      r28, 0xb70(r26) */
/* 0x80531f04: 38 a0 00 70              li       r5, 0x70 */
/* 0x80531f08: 93 9a 0b 74              stw      r28, 0xb74(r26) */
/* 0x80531f0c: 93 9a 0b 88              stw      r28, 0xb88(r26) */
/* 0x80531f10: 48 02 3c e9              bl       0x80555bf8 */
/* 0x80531f14: 38 1a 23 f0              addi     r0, r26, 0x23f0 */
/* 0x80531f18: 90 1a 0c 0c              stw      r0, 0xc0c(r26) */
/* 0x80531f1c: 38 7a 0c 18              addi     r3, r26, 0xc18 */
/* 0x80531f20: 38 9d 00 00              addi     r4, r29, 0 */
/* 0x80531f24: 93 7a 0c 10              stw      r27, 0xc10(r26) */
/* 0x80531f28: 38 be 00 00              addi     r5, r30, 0 */
/* 0x80531f2c: 38 c0 00 f0              li       r6, 0xf0 */
/* 0x80531f30: 38 e0 00 0c              li       r7, 0xc */
/* 0x80531f34: 9b 9a 0c 14              stb      r28, 0xc14(r26) */
/* 0x80531f38: 9b 9a 0c 15              stb      r28, 0xc15(r26) */
/* 0x80531f3c: 48 02 3c bd              bl       0x80555bf8 */
/* 0x80531f40: 93 fa 17 58              stw      r31, 0x1758(r26) */
/* 0x80531f44: 38 7a 17 8c              addi     r3, r26, 0x178c */
/* 0x80531f48: 38 80 00 00              li       r4, 0 */
/* 0x80531f4c: 38 a0 00 70              li       r5, 0x70 */
/* 0x80531f50: 93 9a 17 60              stw      r28, 0x1760(r26) */
/* 0x80531f54: 93 9a 17 64              stw      r28, 0x1764(r26) */
/* 0x80531f58: 93 9a 17 78              stw      r28, 0x1778(r26) */
/* 0x80531f5c: 48 02 3c 9d              bl       0x80555bf8 */
/* 0x80531f60: 38 1a 4b f0              addi     r0, r26, 0x4bf0 */
/* 0x80531f64: 90 1a 17 fc              stw      r0, 0x17fc(r26) */
/* 0x80531f68: 38 7a 18 08              addi     r3, r26, 0x1808 */
/* 0x80531f6c: 38 9d 00 00              addi     r4, r29, 0 */
/* 0x80531f70: 93 7a 18 00              stw      r27, 0x1800(r26) */
/* 0x80531f74: 38 be 00 00              addi     r5, r30, 0 */
/* 0x80531f78: 38 c0 00 f0              li       r6, 0xf0 */
/* 0x80531f7c: 38 e0 00 0c              li       r7, 0xc */
/* 0x80531f80: 9b 9a 18 04              stb      r28, 0x1804(r26) */
/* 0x80531f84: 9b 9a 18 05              stb      r28, 0x1805(r26) */
/* 0x80531f88: 48 02 3c 71              bl       0x80555bf8 */
/* 0x80531f8c: 93 fa 23 48              stw      r31, 0x2348(r26) */
/* 0x80531f90: 38 7a 23 7c              addi     r3, r26, 0x237c */
/* 0x80531f94: 38 80 00 00              li       r4, 0 */
/* 0x80531f98: 38 a0 00 70              li       r5, 0x70 */
/* 0x80531f9c: 93 9a 23 50              stw      r28, 0x2350(r26) */
/* 0x80531fa0: 93 9a 23 54              stw      r28, 0x2354(r26) */
/* 0x80531fa4: 93 9a 23 68              stw      r28, 0x2368(r26) */
/* 0x80531fa8: 48 02 3c 51              bl       0x80555bf8 */
/* 0x80531fac: 93 9a 23 ec              stw      r28, 0x23ec(r26) */
/* 0x80531fb0: 3b 7a 23 f0              addi     r27, r26, 0x23f0 */
/* 0x80531fb4: 3b fa 73 f0              addi     r31, r26, 0x73f0 */
/* 0x80531fb8: 7f 63 db 78              mr       r3, r27 */
/* 0x80531fbc: 4b fe c4 c1              bl       0x8051e47c */
/* 0x80531fc0: 3b 7b 28 00              addi     r27, r27, 0x2800 */
/* 0x80531fc4: 7c 1b f8 40              cmplw    r27, r31 */
/* 0x80531fc8: 41 80 ff f0              blt      0x80531fb8 */
/* 0x80531fcc: 7f 43 d3 78              mr       r3, r26 */
/* 0x80531fd0: bb 41 00 08              lmw      r26, 8(r1) */
/* 0x80531fd4: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x80531fd8: 7c 08 03 a6              mtlr     r0 */
/* 0x80531fdc: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x80531fe0: 4e 80 00 20              blr       */
/* 0x80531fe4: 94 21 ff d0              stwu     r1, -0x30(r1) */
/* 0x80531fe8: 7c 08 02 a6              mflr     r0 */
/* 0x80531fec: 90 01 00 34              stw      r0, 0x34(r1) */
/* 0x80531ff0: be c1 00 08              stmw     r22, 8(r1) */
/* 0x80531ff4: 7c 7f 1b 78              mr       r31, r3 */
/* 0x80531ff8: 38 63 0c 10              addi     r3, r3, 0xc10 */
/* 0x80531ffc: 38 9f 00 20              addi     r4, r31, 0x20 */
/* 0x80532000: 4b ff f8 b1              bl       0x805318b0 */
/* 0x80532004: 89 3f 0c 14              lbz      r9, 0xc14(r31) */
/* 0x80532008: 38 9f 00 28              addi     r4, r31, 0x28 */
/* 0x8053200c: 89 1f 0c 15              lbz      r8, 0xc15(r31) */
/* 0x80532010: 38 7f 0c 18              addi     r3, r31, 0xc18 */
/* 0x80532014: 88 ff 0c 16              lbz      r7, 0xc16(r31) */
/* 0x80532018: 38 bf 0b 68              addi     r5, r31, 0xb68 */
/* 0x8053201c: 88 df 0c 17              lbz      r6, 0xc17(r31) */
/* 0x80532020: 38 00 00 26              li       r0, 0x26 */
/* 0x80532024: 99 3f 00 24              stb      r9, 0x24(r31) */
/* 0x80532028: 99 1f 00 25              stb      r8, 0x25(r31) */
/* 0x8053202c: 98 ff 00 26              stb      r7, 0x26(r31) */
/* 0x80532030: 98 df 00 27              stb      r6, 0x27(r31) */
/* 0x80532034: 88 c3 00 04              lbz      r6, 4(r3) */
/* 0x80532038: 39 24 00 23              addi     r9, r4, 0x23 */
/* 0x8053203c: 98 c4 00 04              stb      r6, 4(r4) */
/* 0x80532040: 39 03 00 23              addi     r8, r3, 0x23 */
/* 0x80532044: 88 c3 00 05              lbz      r6, 5(r3) */
/* 0x80532048: 98 c4 00 05              stb      r6, 5(r4) */
/* 0x8053204c: 88 c3 00 06              lbz      r6, 6(r3) */
/* 0x80532050: 98 c4 00 06              stb      r6, 6(r4) */
/* 0x80532054: 80 c3 00 08              lwz      r6, 8(r3) */
/* 0x80532058: 90 c4 00 08              stw      r6, 8(r4) */
/* 0x8053205c: 80 c3 00 0c              lwz      r6, 0xc(r3) */
/* 0x80532060: 90 c4 00 0c              stw      r6, 0xc(r4) */
/* 0x80532064: 80 c3 00 10              lwz      r6, 0x10(r3) */
/* 0x80532068: 90 c4 00 10              stw      r6, 0x10(r4) */
/* 0x8053206c: 80 c3 00 18              lwz      r6, 0x18(r3) */
/* 0x80532070: 90 c4 00 18              stw      r6, 0x18(r4) */
/* 0x80532074: 88 c3 00 1c              lbz      r6, 0x1c(r3) */
#endif


/* === DISASSEMBLY === */

; Function: initCompetitionSettings__Q36System10RaceConfig8ScenarioFv
; Demangled: initCompetitionSettings__System10RaceConfig8ScenarioFv
; Address: 0x80531ef4  (.text+0x1f658)
; Size: 388 bytes

  0x80531ef4:  stw      r31, 0xb68(r26)
  0x80531ef8:  addi     r3, r26, 0xb9c
  0x80531efc:  li       r4, 0
  0x80531f00:  stw      r28, 0xb70(r26)
  0x80531f04:  li       r5, 0x70
  0x80531f08:  stw      r28, 0xb74(r26)
  0x80531f0c:  stw      r28, 0xb88(r26)
  0x80531f10:  bl       0x80555bf8
  0x80531f14:  addi     r0, r26, 0x23f0
  0x80531f18:  stw      r0, 0xc0c(r26)
  0x80531f1c:  addi     r3, r26, 0xc18
  0x80531f20:  addi     r4, r29, 0
  0x80531f24:  stw      r27, 0xc10(r26)
  0x80531f28:  addi     r5, r30, 0
  0x80531f2c:  li       r6, 0xf0
  0x80531f30:  li       r7, 0xc
  0x80531f34:  stb      r28, 0xc14(r26)
  0x80531f38:  stb      r28, 0xc15(r26)
  0x80531f3c:  bl       0x80555bf8
  0x80531f40:  stw      r31, 0x1758(r26)
  0x80531f44:  addi     r3, r26, 0x178c
  0x80531f48:  li       r4, 0
  0x80531f4c:  li       r5, 0x70
  0x80531f50:  stw      r28, 0x1760(r26)
  0x80531f54:  stw      r28, 0x1764(r26)
  0x80531f58:  stw      r28, 0x1778(r26)
  0x80531f5c:  bl       0x80555bf8
  0x80531f60:  addi     r0, r26, 0x4bf0
  0x80531f64:  stw      r0, 0x17fc(r26)
  0x80531f68:  addi     r3, r26, 0x1808
  0x80531f6c:  addi     r4, r29, 0
  0x80531f70:  stw      r27, 0x1800(r26)
  0x80531f74:  addi     r5, r30, 0
  0x80531f78:  li       r6, 0xf0
  0x80531f7c:  li       r7, 0xc
  0x80531f80:  stb      r28, 0x1804(r26)
  0x80531f84:  stb      r28, 0x1805(r26)
  0x80531f88:  bl       0x80555bf8
  0x80531f8c:  stw      r31, 0x2348(r26)
  0x80531f90:  addi     r3, r26, 0x237c
  0x80531f94:  li       r4, 0
  0x80531f98:  li       r5, 0x70
  0x80531f9c:  stw      r28, 0x2350(r26)
  0x80531fa0:  stw      r28, 0x2354(r26)
  0x80531fa4:  stw      r28, 0x2368(r26)
  0x80531fa8:  bl       0x80555bf8
  0x80531fac:  stw      r28, 0x23ec(r26)
  0x80531fb0:  addi     r27, r26, 0x23f0
  0x80531fb4:  addi     r31, r26, 0x73f0
  0x80531fb8:  mr       r3, r27
  0x80531fbc:  bl       0x8051e47c
  0x80531fc0:  addi     r27, r27, 0x2800
  0x80531fc4:  cmplw    r27, r31
  0x80531fc8:  blt      0x80531fb8
  0x80531fcc:  mr       r3, r26
  0x80531fd0:  lmw      r26, 8(r1)
  0x80531fd4:  lwz      r0, 0x24(r1)
  0x80531fd8:  mtlr     r0
  0x80531fdc:  addi     r1, r1, 0x20
  0x80531fe0:  blr      
  0x80531fe4:  stwu     r1, -0x30(r1)
  0x80531fe8:  mflr     r0
  0x80531fec:  stw      r0, 0x34(r1)
  0x80531ff0:  stmw     r22, 8(r1)
  0x80531ff4:  mr       r31, r3
  0x80531ff8:  addi     r3, r3, 0xc10
  0x80531ffc:  addi     r4, r31, 0x20
  0x80532000:  bl       0x805318b0
  0x80532004:  lbz      r9, 0xc14(r31)
  0x80532008:  addi     r4, r31, 0x28
  0x8053200c:  lbz      r8, 0xc15(r31)
  0x80532010:  addi     r3, r31, 0xc18
  0x80532014:  lbz      r7, 0xc16(r31)
  0x80532018:  addi     r5, r31, 0xb68
  0x8053201c:  lbz      r6, 0xc17(r31)
  0x80532020:  li       r0, 0x26
  0x80532024:  stb      r9, 0x24(r31)
  0x80532028:  stb      r8, 0x25(r31)
  0x8053202c:  stb      r7, 0x26(r31)
  0x80532030:  stb      r6, 0x27(r31)
  0x80532034:  lbz      r6, 4(r3)
  0x80532038:  addi     r9, r4, 0x23
  0x8053203c:  stb      r6, 4(r4)
  0x80532040:  addi     r8, r3, 0x23
  0x80532044:  lbz      r6, 5(r3)
  0x80532048:  stb      r6, 5(r4)
  0x8053204c:  lbz      r6, 6(r3)
  0x80532050:  stb      r6, 6(r4)
  0x80532054:  lwz      r6, 8(r3)
  0x80532058:  stw      r6, 8(r4)
  0x8053205c:  lwz      r6, 0xc(r3)
  0x80532060:  stw      r6, 0xc(r4)
  0x80532064:  lwz      r6, 0x10(r3)
  0x80532068:  stw      r6, 0x10(r4)
  0x8053206c:  lwz      r6, 0x18(r3)
  0x80532070:  stw      r6, 0x18(r4)
  0x80532074:  lbz      r6, 0x1c(r3)
