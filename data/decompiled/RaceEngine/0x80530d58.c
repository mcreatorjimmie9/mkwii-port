/**
 * updateRating__System10RaceConfigFUc
 * @addr 0x80530d58
 * @size 224 bytes
 * @frame 16 bytes
 */
void System10RaceConfig(void) {
    /* stb r0, 0x2dd(r4) */
    /* stb r0, 0x2de(r4) */
    /* stb r0, 0x3cd(r4) */
    /* stb r0, 0x3ce(r4) */
    /* stb r0, 0x4bd(r4) */
    /* stb r0, 0x4be(r4) */
    /* stb r0, 0xb64(r3) */
    /* stb r0, 0xb65(r3) */
    /* stb r0, 0xb66(r3) */
    /* stb r0, 0xb67(r3) */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80530d58: 98 04 02 dd              stb      r0, 0x2dd(r4) */
/* 0x80530d5c: 98 04 02 de              stb      r0, 0x2de(r4) */
/* 0x80530d60: 98 04 03 cd              stb      r0, 0x3cd(r4) */
/* 0x80530d64: 98 04 03 ce              stb      r0, 0x3ce(r4) */
/* 0x80530d68: 98 04 04 bd              stb      r0, 0x4bd(r4) */
/* 0x80530d6c: 98 04 04 be              stb      r0, 0x4be(r4) */
/* 0x80530d70: 98 03 0b 64              stb      r0, 0xb64(r3) */
/* 0x80530d74: 98 03 0b 65              stb      r0, 0xb65(r3) */
/* 0x80530d78: 98 03 0b 66              stb      r0, 0xb66(r3) */
/* 0x80530d7c: 98 03 0b 67              stb      r0, 0xb67(r3) */
/* 0x80530d80: 4e 80 00 20              blr       */
/* 0x80530d84: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80530d88: 38 00 00 00              li       r0, 0 */
/* 0x80530d8c: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x80530d90: 93 c1 00 08              stw      r30, 8(r1) */
/* 0x80530d94: 80 a3 0b 50              lwz      r5, 0xb50(r3) */
/* 0x80530d98: 2c 05 00 07              cmpwi    r5, 7 */
/* 0x80530d9c: 41 80 00 10              blt      0x80530dac */
/* 0x80530da0: 2c 05 00 0a              cmpwi    r5, 0xa */
/* 0x80530da4: 41 81 00 08              bgt      0x80530dac */
/* 0x80530da8: 38 00 00 01              li       r0, 1 */
/* 0x80530dac: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80530db0: 40 82 01 40              bne      0x80530ef0 */
/* 0x80530db4: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80530db8: 38 a0 00 00              li       r5, 0 */
/* 0x80530dbc: 41 82 01 34              beq      0x80530ef0 */
/* 0x80530dc0: 28 04 00 08              cmplwi   r4, 8 */
/* 0x80530dc4: 38 04 00 f8              addi     r0, r4, 0xf8 */
/* 0x80530dc8: 40 81 00 ec              ble      0x80530eb4 */
/* 0x80530dcc: 54 06 06 3e              clrlwi   r6, r0, 0x18 */
/* 0x80530dd0: 39 80 00 00              li       r12, 0 */
/* 0x80530dd4: 38 06 00 07              addi     r0, r6, 7 */
/* 0x80530dd8: 54 00 e8 fe              srwi     r0, r0, 3 */
/* 0x80530ddc: 7c 09 03 a6              mtctr    r0 */
/* 0x80530de0: 28 06 00 00              cmplwi   r6, 0 */
/* 0x80530de4: 40 81 00 d0              ble      0x80530eb4 */
/* 0x80530de8: 54 a8 06 3e              clrlwi   r8, r5, 0x18 */
/* 0x80530dec: 38 c5 00 01              addi     r6, r5, 1 */
/* 0x80530df0: 1c e8 00 f0              mulli    r7, r8, 0xf0 */
/* 0x80530df4: 38 05 00 02              addi     r0, r5, 2 */
/* 0x80530df8: 54 cb 06 3e              clrlwi   r11, r6, 0x18 */
/* 0x80530dfc: 54 0a 06 3e              clrlwi   r10, r0, 0x18 */
/* 0x80530e00: 7f e3 3a 14              add      r31, r3, r7 */
/* 0x80530e04: 38 05 00 03              addi     r0, r5, 3 */
/* 0x80530e08: b1 9f 00 e0              sth      r12, 0xe0(r31) */
/* 0x80530e0c: 54 09 06 3e              clrlwi   r9, r0, 0x18 */
/* 0x80530e10: 7f c8 20 50              subf     r30, r8, r4 */
/* 0x80530e14: 38 05 00 04              addi     r0, r5, 4 */
/* 0x80530e18: 9b df 00 e9              stb      r30, 0xe9(r31) */
/* 0x80530e1c: 54 08 06 3e              clrlwi   r8, r0, 0x18 */
/* 0x80530e20: 38 e5 00 05              addi     r7, r5, 5 */
/* 0x80530e24: 38 c5 00 06              addi     r6, r5, 6 */
/* 0x80530e28: 9b df 00 e8              stb      r30, 0xe8(r31) */
/* 0x80530e2c: 38 05 00 07              addi     r0, r5, 7 */
/* 0x80530e30: 54 e7 06 3e              clrlwi   r7, r7, 0x18 */
/* 0x80530e34: 54 c6 06 3e              clrlwi   r6, r6, 0x18 */
#endif


/* === DISASSEMBLY === */

; Function: updateRating__Q26System10RaceConfigFUc
; Demangled: updateRating__System10RaceConfigFUc
; Address: 0x80530d58  (.text+0x1e4bc)
; Size: 224 bytes

  0x80530d58:  stb      r0, 0x2dd(r4)
  0x80530d5c:  stb      r0, 0x2de(r4)
  0x80530d60:  stb      r0, 0x3cd(r4)
  0x80530d64:  stb      r0, 0x3ce(r4)
  0x80530d68:  stb      r0, 0x4bd(r4)
  0x80530d6c:  stb      r0, 0x4be(r4)
  0x80530d70:  stb      r0, 0xb64(r3)
  0x80530d74:  stb      r0, 0xb65(r3)
  0x80530d78:  stb      r0, 0xb66(r3)
  0x80530d7c:  stb      r0, 0xb67(r3)
  0x80530d80:  blr      
  0x80530d84:  stwu     r1, -0x10(r1)
  0x80530d88:  li       r0, 0
  0x80530d8c:  stw      r31, 0xc(r1)
  0x80530d90:  stw      r30, 8(r1)
  0x80530d94:  lwz      r5, 0xb50(r3)
  0x80530d98:  cmpwi    r5, 7
  0x80530d9c:  blt      0x80530dac
  0x80530da0:  cmpwi    r5, 0xa
  0x80530da4:  bgt      0x80530dac
  0x80530da8:  li       r0, 1
  0x80530dac:  cmpwi    r0, 0
  0x80530db0:  bne      0x80530ef0
  0x80530db4:  cmpwi    r4, 0
  0x80530db8:  li       r5, 0
  0x80530dbc:  beq      0x80530ef0
  0x80530dc0:  cmplwi   r4, 8
  0x80530dc4:  addi     r0, r4, 0xf8
  0x80530dc8:  ble      0x80530eb4
  0x80530dcc:  clrlwi   r6, r0, 0x18
  0x80530dd0:  li       r12, 0
  0x80530dd4:  addi     r0, r6, 7
  0x80530dd8:  srwi     r0, r0, 3
  0x80530ddc:  mtctr    r0
  0x80530de0:  cmplwi   r6, 0
  0x80530de4:  ble      0x80530eb4
  0x80530de8:  clrlwi   r8, r5, 0x18
  0x80530dec:  addi     r6, r5, 1
  0x80530df0:  mulli    r7, r8, 0xf0
  0x80530df4:  addi     r0, r5, 2
  0x80530df8:  clrlwi   r11, r6, 0x18
  0x80530dfc:  clrlwi   r10, r0, 0x18
  0x80530e00:  add      r31, r3, r7
  0x80530e04:  addi     r0, r5, 3
  0x80530e08:  sth      r12, 0xe0(r31)
  0x80530e0c:  clrlwi   r9, r0, 0x18
  0x80530e10:  subf     r30, r8, r4
  0x80530e14:  addi     r0, r5, 4
  0x80530e18:  stb      r30, 0xe9(r31)
  0x80530e1c:  clrlwi   r8, r0, 0x18
  0x80530e20:  addi     r7, r5, 5
  0x80530e24:  addi     r6, r5, 6
  0x80530e28:  stb      r30, 0xe8(r31)
  0x80530e2c:  addi     r0, r5, 7
  0x80530e30:  clrlwi   r7, r7, 0x18
  0x80530e34:  clrlwi   r6, r6, 0x18
