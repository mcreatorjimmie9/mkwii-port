/**
 * update__System10RaceConfig8ScenarioFv
 * @addr 0x80530c58
 * @size 256 bytes
 * @frame 0 bytes
 * @calls 3 function(s)
 */
void System10RaceConfig8Scenario(void* self) {
    /* addi r3, r1, 8 */
    /* 0x8051eb84() */
    /* r3 = stack[0xc0] */
    /* r0 = r28+0xb48 */
    /* cmpw r3, r0 */
    /* if (cr0 !=) goto 0x80530cb8 */
    /* extsb. r0, r30 */
    /* if (cr0 <) goto 0x80530c90 */
    /* r3, 0  (load upper immediate) */
    /* r5 = stack[0xdc] */
    /* r3 = r3+0x0 */
    /* clrlwi r4, r30, 0x18 */
    /* r6 = stack[0xd0] */
    /* 0x80526930() */
    /* mulli r3, r29, 0xf0 */
    /* r0 = stack[0xb8] */
    /* li r31, 1 */
    /* add r3, r28, r3 */
    /* r3+0x14 = r0 */
    /* r0 = stack[0xbc] */
    /* r3+0x10 = r0 */
    /* stb r30, 0xe(r3) */
    /* r0 = stack[0xc4] */
    /* r3+0xd8 = r0 */
    /* r4, 0  (load upper immediate) */
    /* addi r3, r1, 0x70 */
    /* addi r4, r4, 0 */
    /* li r5, 0xc */
    /* li r6, 5 */
    /* 0x80555bf8() */
    /* r3 = r31 */
    /* r31 = stack[0xec] */
    /* r30 = stack[0xe8] */
    /* r29 = stack[0xe4] */
    /* r28 = stack[0xe0] */
    /* r0 = stack[0xf4] */
    /* mtlr r0 */
    /* addi r1, r1, 0xf0 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80530c58: 38 61 00 08              addi     r3, r1, 8 */
/* 0x80530c5c: 4b fe df 29              bl       0x8051eb84 */
/* 0x80530c60: 80 61 00 c0              lwz      r3, 0xc0(r1) */
/* 0x80530c64: 80 1c 0b 48              lwz      r0, 0xb48(r28) */
/* 0x80530c68: 7c 03 00 00              cmpw     r3, r0 */
/* 0x80530c6c: 40 82 00 4c              bne      0x80530cb8 */
/* 0x80530c70: 7f c0 07 75              extsb.   r0, r30 */
/* 0x80530c74: 41 80 00 1c              blt      0x80530c90 */
/* 0x80530c78: 3c 60 00 00              lis      r3, 0 */
/* 0x80530c7c: 80 a1 00 dc              lwz      r5, 0xdc(r1) */
/* 0x80530c80: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80530c84: 57 c4 06 3e              clrlwi   r4, r30, 0x18 */
/* 0x80530c88: 88 c1 00 d0              lbz      r6, 0xd0(r1) */
/* 0x80530c8c: 4b ff 5c a5              bl       0x80526930 */
/* 0x80530c90: 1c 7d 00 f0              mulli    r3, r29, 0xf0 */
/* 0x80530c94: 80 01 00 b8              lwz      r0, 0xb8(r1) */
/* 0x80530c98: 3b e0 00 01              li       r31, 1 */
/* 0x80530c9c: 7c 7c 1a 14              add      r3, r28, r3 */
/* 0x80530ca0: 90 03 00 14              stw      r0, 0x14(r3) */
/* 0x80530ca4: 80 01 00 bc              lwz      r0, 0xbc(r1) */
/* 0x80530ca8: 90 03 00 10              stw      r0, 0x10(r3) */
/* 0x80530cac: 9b c3 00 0e              stb      r30, 0xe(r3) */
/* 0x80530cb0: 80 01 00 c4              lwz      r0, 0xc4(r1) */
/* 0x80530cb4: 90 03 00 d8              stw      r0, 0xd8(r3) */
/* 0x80530cb8: 3c 80 00 00              lis      r4, 0 */
/* 0x80530cbc: 38 61 00 70              addi     r3, r1, 0x70 */
/* 0x80530cc0: 38 84 00 00              addi     r4, r4, 0 */
/* 0x80530cc4: 38 a0 00 0c              li       r5, 0xc */
/* 0x80530cc8: 38 c0 00 05              li       r6, 5 */
/* 0x80530ccc: 48 02 4f 2d              bl       0x80555bf8 */
/* 0x80530cd0: 7f e3 fb 78              mr       r3, r31 */
/* 0x80530cd4: 83 e1 00 ec              lwz      r31, 0xec(r1) */
/* 0x80530cd8: 83 c1 00 e8              lwz      r30, 0xe8(r1) */
/* 0x80530cdc: 83 a1 00 e4              lwz      r29, 0xe4(r1) */
/* 0x80530ce0: 83 81 00 e0              lwz      r28, 0xe0(r1) */
/* 0x80530ce4: 80 01 00 f4              lwz      r0, 0xf4(r1) */
/* 0x80530ce8: 7c 08 03 a6              mtlr     r0 */
/* 0x80530cec: 38 21 00 f0              addi     r1, r1, 0xf0 */
/* 0x80530cf0: 4e 80 00 20              blr       */
/* 0x80530cf4: 38 c0 00 00              li       r6, 0 */
/* 0x80530cf8: 38 00 ff ff              li       r0, -1 */
/* 0x80530cfc: 1c a6 00 f0              mulli    r5, r6, 0xf0 */
/* 0x80530d00: 38 c0 00 06              li       r6, 6 */
/* 0x80530d04: 7c 83 2a 14              add      r4, r3, r5 */
/* 0x80530d08: 98 04 00 0d              stb      r0, 0xd(r4) */
/* 0x80530d0c: 1c a6 00 f0              mulli    r5, r6, 0xf0 */
/* 0x80530d10: 98 04 00 0e              stb      r0, 0xe(r4) */
/* 0x80530d14: 98 04 00 fd              stb      r0, 0xfd(r4) */
/* 0x80530d18: 98 04 00 fe              stb      r0, 0xfe(r4) */
/* 0x80530d1c: 98 04 01 ed              stb      r0, 0x1ed(r4) */
/* 0x80530d20: 98 04 01 ee              stb      r0, 0x1ee(r4) */
/* 0x80530d24: 98 04 02 dd              stb      r0, 0x2dd(r4) */
/* 0x80530d28: 98 04 02 de              stb      r0, 0x2de(r4) */
/* 0x80530d2c: 98 04 03 cd              stb      r0, 0x3cd(r4) */
/* 0x80530d30: 98 04 03 ce              stb      r0, 0x3ce(r4) */
/* 0x80530d34: 98 04 04 bd              stb      r0, 0x4bd(r4) */
/* 0x80530d38: 98 04 04 be              stb      r0, 0x4be(r4) */
/* 0x80530d3c: 7c 83 2a 14              add      r4, r3, r5 */
/* 0x80530d40: 98 04 00 0d              stb      r0, 0xd(r4) */
/* 0x80530d44: 98 04 00 0e              stb      r0, 0xe(r4) */
/* 0x80530d48: 98 04 00 fd              stb      r0, 0xfd(r4) */
/* 0x80530d4c: 98 04 00 fe              stb      r0, 0xfe(r4) */
/* 0x80530d50: 98 04 01 ed              stb      r0, 0x1ed(r4) */
/* 0x80530d54: 98 04 01 ee              stb      r0, 0x1ee(r4) */
#endif


/* === DISASSEMBLY === */

; Function: update__Q36System10RaceConfig8ScenarioFv
; Demangled: update__System10RaceConfig8ScenarioFv
; Address: 0x80530c58  (.text+0x1e3bc)
; Size: 256 bytes

  0x80530c58:  addi     r3, r1, 8
  0x80530c5c:  bl       0x8051eb84
  0x80530c60:  lwz      r3, 0xc0(r1)
  0x80530c64:  lwz      r0, 0xb48(r28)
  0x80530c68:  cmpw     r3, r0
  0x80530c6c:  bne      0x80530cb8
  0x80530c70:  extsb.   r0, r30
  0x80530c74:  blt      0x80530c90
  0x80530c78:  lis      r3, 0
  0x80530c7c:  lwz      r5, 0xdc(r1)
  0x80530c80:  lwz      r3, 0(r3)
  0x80530c84:  clrlwi   r4, r30, 0x18
  0x80530c88:  lbz      r6, 0xd0(r1)
  0x80530c8c:  bl       0x80526930
  0x80530c90:  mulli    r3, r29, 0xf0
  0x80530c94:  lwz      r0, 0xb8(r1)
  0x80530c98:  li       r31, 1
  0x80530c9c:  add      r3, r28, r3
  0x80530ca0:  stw      r0, 0x14(r3)
  0x80530ca4:  lwz      r0, 0xbc(r1)
  0x80530ca8:  stw      r0, 0x10(r3)
  0x80530cac:  stb      r30, 0xe(r3)
  0x80530cb0:  lwz      r0, 0xc4(r1)
  0x80530cb4:  stw      r0, 0xd8(r3)
  0x80530cb8:  lis      r4, 0
  0x80530cbc:  addi     r3, r1, 0x70
  0x80530cc0:  addi     r4, r4, 0
  0x80530cc4:  li       r5, 0xc
  0x80530cc8:  li       r6, 5
  0x80530ccc:  bl       0x80555bf8
  0x80530cd0:  mr       r3, r31
  0x80530cd4:  lwz      r31, 0xec(r1)
  0x80530cd8:  lwz      r30, 0xe8(r1)
  0x80530cdc:  lwz      r29, 0xe4(r1)
  0x80530ce0:  lwz      r28, 0xe0(r1)
  0x80530ce4:  lwz      r0, 0xf4(r1)
  0x80530ce8:  mtlr     r0
  0x80530cec:  addi     r1, r1, 0xf0
  0x80530cf0:  blr      
  0x80530cf4:  li       r6, 0
  0x80530cf8:  li       r0, -1
  0x80530cfc:  mulli    r5, r6, 0xf0
  0x80530d00:  li       r6, 6
  0x80530d04:  add      r4, r3, r5
  0x80530d08:  stb      r0, 0xd(r4)
  0x80530d0c:  mulli    r5, r6, 0xf0
  0x80530d10:  stb      r0, 0xe(r4)
  0x80530d14:  stb      r0, 0xfd(r4)
  0x80530d18:  stb      r0, 0xfe(r4)
  0x80530d1c:  stb      r0, 0x1ed(r4)
  0x80530d20:  stb      r0, 0x1ee(r4)
  0x80530d24:  stb      r0, 0x2dd(r4)
  0x80530d28:  stb      r0, 0x2de(r4)
  0x80530d2c:  stb      r0, 0x3cd(r4)
  0x80530d30:  stb      r0, 0x3ce(r4)
  0x80530d34:  stb      r0, 0x4bd(r4)
  0x80530d38:  stb      r0, 0x4be(r4)
  0x80530d3c:  add      r4, r3, r5
  0x80530d40:  stb      r0, 0xd(r4)
  0x80530d44:  stb      r0, 0xe(r4)
  0x80530d48:  stb      r0, 0xfd(r4)
  0x80530d4c:  stb      r0, 0xfe(r4)
  0x80530d50:  stb      r0, 0x1ed(r4)
  0x80530d54:  stb      r0, 0x1ee(r4)
