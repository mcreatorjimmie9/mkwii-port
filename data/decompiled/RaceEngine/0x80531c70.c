/**
 * computePlayerCounts__System10RaceConfig8ScenarioFRUcRUcRUc
 * @addr 0x80531c70
 * @size 412 bytes
 * @frame 16 bytes
 * @calls 9 function(s)
 */
s32 System10RaceConfig8ScenarioFRUcRUcRUc(void) {
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
    /* if (cr0 <) goto 0x80531cd0 */
    /* r3, 0  (load upper immediate) */
    /* r3+0x0 = r26 */
    /* lmw r26, 8(r1) */
    /* r3, 0  (load upper immediate) */
    /* r0 = stack[0x24] */
    /* r3 = r3+0x0 */
    /* mtlr r0 */
    /* addi r1, r1, 0x20 */
    /* Epilogue: restore stack */
    return /* r3 */;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80531c70: 93 9a 17 78              stw      r28, 0x1778(r26) */
/* 0x80531c74: 48 02 3f 85              bl       0x80555bf8 */
/* 0x80531c78: 38 1a 4b f0              addi     r0, r26, 0x4bf0 */
/* 0x80531c7c: 90 1a 17 fc              stw      r0, 0x17fc(r26) */
/* 0x80531c80: 38 7a 18 08              addi     r3, r26, 0x1808 */
/* 0x80531c84: 38 9d 00 00              addi     r4, r29, 0 */
/* 0x80531c88: 93 7a 18 00              stw      r27, 0x1800(r26) */
/* 0x80531c8c: 38 be 00 00              addi     r5, r30, 0 */
/* 0x80531c90: 38 c0 00 f0              li       r6, 0xf0 */
/* 0x80531c94: 38 e0 00 0c              li       r7, 0xc */
/* 0x80531c98: 9b 9a 18 04              stb      r28, 0x1804(r26) */
/* 0x80531c9c: 9b 9a 18 05              stb      r28, 0x1805(r26) */
/* 0x80531ca0: 48 02 3f 59              bl       0x80555bf8 */
/* 0x80531ca4: 93 fa 23 48              stw      r31, 0x2348(r26) */
/* 0x80531ca8: 38 7a 23 7c              addi     r3, r26, 0x237c */
/* 0x80531cac: 38 80 00 00              li       r4, 0 */
/* 0x80531cb0: 38 a0 00 70              li       r5, 0x70 */
/* 0x80531cb4: 93 9a 23 50              stw      r28, 0x2350(r26) */
/* 0x80531cb8: 93 9a 23 54              stw      r28, 0x2354(r26) */
/* 0x80531cbc: 93 9a 23 68              stw      r28, 0x2368(r26) */
/* 0x80531cc0: 48 02 3f 39              bl       0x80555bf8 */
/* 0x80531cc4: 93 9a 23 ec              stw      r28, 0x23ec(r26) */
/* 0x80531cc8: 3b 7a 23 f0              addi     r27, r26, 0x23f0 */
/* 0x80531ccc: 3b fa 73 f0              addi     r31, r26, 0x73f0 */
/* 0x80531cd0: 7f 63 db 78              mr       r3, r27 */
/* 0x80531cd4: 4b fe c7 a9              bl       0x8051e47c */
/* 0x80531cd8: 3b 7b 28 00              addi     r27, r27, 0x2800 */
/* 0x80531cdc: 7c 1b f8 40              cmplw    r27, r31 */
/* 0x80531ce0: 41 80 ff f0              blt      0x80531cd0 */
/* 0x80531ce4: 3c 60 00 00              lis      r3, 0 */
/* 0x80531ce8: 93 43 00 00              stw      r26, 0(r3) */
/* 0x80531cec: bb 41 00 08              lmw      r26, 8(r1) */
/* 0x80531cf0: 3c 60 00 00              lis      r3, 0 */
/* 0x80531cf4: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x80531cf8: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80531cfc: 7c 08 03 a6              mtlr     r0 */
/* 0x80531d00: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x80531d04: 4e 80 00 20              blr       */
/* 0x80531d08: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80531d0c: 7c 08 02 a6              mflr     r0 */
/* 0x80531d10: 3c 60 00 00              lis      r3, 0 */
/* 0x80531d14: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x80531d18: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80531d1c: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80531d20: 41 82 00 1c              beq      0x80531d3c */
/* 0x80531d24: 41 82 00 18              beq      0x80531d3c */
/* 0x80531d28: 81 83 00 1c              lwz      r12, 0x1c(r3) */
/* 0x80531d2c: 38 80 00 01              li       r4, 1 */
/* 0x80531d30: 81 8c 00 24              lwz      r12, 0x24(r12) */
/* 0x80531d34: 7d 89 03 a6              mtctr    r12 */
/* 0x80531d38: 4e 80 04 21              bctrl     */
/* 0x80531d3c: 3c 60 00 00              lis      r3, 0 */
/* 0x80531d40: 38 00 00 00              li       r0, 0 */
/* 0x80531d44: 90 03 00 00              stw      r0, 0(r3) */
/* 0x80531d48: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80531d4c: 7c 08 03 a6              mtlr     r0 */
/* 0x80531d50: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80531d54: 4e 80 00 20              blr       */
/* 0x80531d58: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80531d5c: 7c 08 02 a6              mflr     r0 */
/* 0x80531d60: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80531d64: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x80531d68: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x80531d6c: 7c 9f 23 78              mr       r31, r4 */
/* 0x80531d70: 93 c1 00 08              stw      r30, 8(r1) */
/* 0x80531d74: 7c 7e 1b 78              mr       r30, r3 */
/* 0x80531d78: 41 82 00 80              beq      0x80531df8 */
/* 0x80531d7c: 34 63 18 00              addic.   r3, r3, 0x1800 */
/* 0x80531d80: 41 82 00 1c              beq      0x80531d9c */
/* 0x80531d84: 3c 80 00 00              lis      r4, 0 */
/* 0x80531d88: 38 63 00 08              addi     r3, r3, 8 */
/* 0x80531d8c: 38 84 00 00              addi     r4, r4, 0 */
/* 0x80531d90: 38 a0 00 f0              li       r5, 0xf0 */
/* 0x80531d94: 38 c0 00 0c              li       r6, 0xc */
/* 0x80531d98: 48 02 3e 61              bl       0x80555bf8 */
/* 0x80531d9c: 34 7e 0c 10              addic.   r3, r30, 0xc10 */
/* 0x80531da0: 41 82 00 1c              beq      0x80531dbc */
/* 0x80531da4: 3c 80 00 00              lis      r4, 0 */
/* 0x80531da8: 38 63 00 08              addi     r3, r3, 8 */
/* 0x80531dac: 38 84 00 00              addi     r4, r4, 0 */
/* 0x80531db0: 38 a0 00 f0              li       r5, 0xf0 */
/* 0x80531db4: 38 c0 00 0c              li       r6, 0xc */
/* 0x80531db8: 48 02 3e 41              bl       0x80555bf8 */
/* 0x80531dbc: 34 7e 00 20              addic.   r3, r30, 0x20 */
/* 0x80531dc0: 41 82 00 1c              beq      0x80531ddc */
/* 0x80531dc4: 3c 80 00 00              lis      r4, 0 */
/* 0x80531dc8: 38 63 00 08              addi     r3, r3, 8 */
/* 0x80531dcc: 38 84 00 00              addi     r4, r4, 0 */
/* 0x80531dd0: 38 a0 00 f0              li       r5, 0xf0 */
/* 0x80531dd4: 38 c0 00 0c              li       r6, 0xc */
/* 0x80531dd8: 48 02 3e 21              bl       0x80555bf8 */
/* 0x80531ddc: 7f c3 f3 78              mr       r3, r30 */
/* 0x80531de0: 38 80 00 00              li       r4, 0 */
/* 0x80531de4: 48 02 3e 15              bl       0x80555bf8 */
/* 0x80531de8: 2c 1f 00 00              cmpwi    r31, 0 */
/* 0x80531dec: 40 81 00 0c              ble      0x80531df8 */
/* 0x80531df0: 7f c3 f3 78              mr       r3, r30 */
/* 0x80531df4: 48 02 3e 05              bl       0x80555bf8 */
/* 0x80531df8: 7f c3 f3 78              mr       r3, r30 */
/* 0x80531dfc: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x80531e00: 83 c1 00 08              lwz      r30, 8(r1) */
/* 0x80531e04: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80531e08: 7c 08 03 a6              mtlr     r0 */
#endif


/* === DISASSEMBLY === */

; Function: computePlayerCounts__Q36System10RaceConfig8ScenarioFRUcRUcRUc
; Demangled: computePlayerCounts__System10RaceConfig8ScenarioFRUcRUcRUc
; Address: 0x80531c70  (.text+0x1f3d4)
; Size: 412 bytes

  0x80531c70:  stw      r28, 0x1778(r26)
  0x80531c74:  bl       0x80555bf8
  0x80531c78:  addi     r0, r26, 0x4bf0
  0x80531c7c:  stw      r0, 0x17fc(r26)
  0x80531c80:  addi     r3, r26, 0x1808
  0x80531c84:  addi     r4, r29, 0
  0x80531c88:  stw      r27, 0x1800(r26)
  0x80531c8c:  addi     r5, r30, 0
  0x80531c90:  li       r6, 0xf0
  0x80531c94:  li       r7, 0xc
  0x80531c98:  stb      r28, 0x1804(r26)
  0x80531c9c:  stb      r28, 0x1805(r26)
  0x80531ca0:  bl       0x80555bf8
  0x80531ca4:  stw      r31, 0x2348(r26)
  0x80531ca8:  addi     r3, r26, 0x237c
  0x80531cac:  li       r4, 0
  0x80531cb0:  li       r5, 0x70
  0x80531cb4:  stw      r28, 0x2350(r26)
  0x80531cb8:  stw      r28, 0x2354(r26)
  0x80531cbc:  stw      r28, 0x2368(r26)
  0x80531cc0:  bl       0x80555bf8
  0x80531cc4:  stw      r28, 0x23ec(r26)
  0x80531cc8:  addi     r27, r26, 0x23f0
  0x80531ccc:  addi     r31, r26, 0x73f0
  0x80531cd0:  mr       r3, r27
  0x80531cd4:  bl       0x8051e47c
  0x80531cd8:  addi     r27, r27, 0x2800
  0x80531cdc:  cmplw    r27, r31
  0x80531ce0:  blt      0x80531cd0
  0x80531ce4:  lis      r3, 0
  0x80531ce8:  stw      r26, 0(r3)
  0x80531cec:  lmw      r26, 8(r1)
  0x80531cf0:  lis      r3, 0
  0x80531cf4:  lwz      r0, 0x24(r1)
  0x80531cf8:  lwz      r3, 0(r3)
  0x80531cfc:  mtlr     r0
  0x80531d00:  addi     r1, r1, 0x20
  0x80531d04:  blr      
  0x80531d08:  stwu     r1, -0x10(r1)
  0x80531d0c:  mflr     r0
  0x80531d10:  lis      r3, 0
  0x80531d14:  stw      r0, 0x14(r1)
  0x80531d18:  lwz      r3, 0(r3)
  0x80531d1c:  cmpwi    r3, 0
  0x80531d20:  beq      0x80531d3c
  0x80531d24:  beq      0x80531d3c
  0x80531d28:  lwz      r12, 0x1c(r3)
  0x80531d2c:  li       r4, 1
  0x80531d30:  lwz      r12, 0x24(r12)
  0x80531d34:  mtctr    r12
  0x80531d38:  bctrl    
  0x80531d3c:  lis      r3, 0
  0x80531d40:  li       r0, 0
  0x80531d44:  stw      r0, 0(r3)
  0x80531d48:  lwz      r0, 0x14(r1)
  0x80531d4c:  mtlr     r0
  0x80531d50:  addi     r1, r1, 0x10
  0x80531d54:  blr      
  0x80531d58:  stwu     r1, -0x10(r1)
  0x80531d5c:  mflr     r0
  0x80531d60:  cmpwi    r3, 0
  0x80531d64:  stw      r0, 0x14(r1)
  0x80531d68:  stw      r31, 0xc(r1)
  0x80531d6c:  mr       r31, r4
  0x80531d70:  stw      r30, 8(r1)
  0x80531d74:  mr       r30, r3
  0x80531d78:  beq      0x80531df8
  0x80531d7c:  addic.   r3, r3, 0x1800
  0x80531d80:  beq      0x80531d9c
  0x80531d84:  lis      r4, 0
  0x80531d88:  addi     r3, r3, 8
  0x80531d8c:  addi     r4, r4, 0
  0x80531d90:  li       r5, 0xf0
  0x80531d94:  li       r6, 0xc
  0x80531d98:  bl       0x80555bf8
  0x80531d9c:  addic.   r3, r30, 0xc10
  0x80531da0:  beq      0x80531dbc
  0x80531da4:  lis      r4, 0
  0x80531da8:  addi     r3, r3, 8
  0x80531dac:  addi     r4, r4, 0
  0x80531db0:  li       r5, 0xf0
  0x80531db4:  li       r6, 0xc
  0x80531db8:  bl       0x80555bf8
  0x80531dbc:  addic.   r3, r30, 0x20
  0x80531dc0:  beq      0x80531ddc
  0x80531dc4:  lis      r4, 0
  0x80531dc8:  addi     r3, r3, 8
  0x80531dcc:  addi     r4, r4, 0
  0x80531dd0:  li       r5, 0xf0
  0x80531dd4:  li       r6, 0xc
  0x80531dd8:  bl       0x80555bf8
  0x80531ddc:  mr       r3, r30
  0x80531de0:  li       r4, 0
  0x80531de4:  bl       0x80555bf8
  0x80531de8:  cmpwi    r31, 0
  0x80531dec:  ble      0x80531df8
  0x80531df0:  mr       r3, r30
  0x80531df4:  bl       0x80555bf8
  0x80531df8:  mr       r3, r30
  0x80531dfc:  lwz      r31, 0xc(r1)
  0x80531e00:  lwz      r30, 8(r1)
  0x80531e04:  lwz      r0, 0x14(r1)
  0x80531e08:  mtlr     r0
