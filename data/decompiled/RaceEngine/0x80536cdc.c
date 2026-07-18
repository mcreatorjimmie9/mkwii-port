/**
 * RaceinfoPlayer_endRace
 * @addr 0x80536cdc
 * @size 320 bytes
 * @frame 0 bytes
 * @calls 1 function(s)
 */
void RaceinfoPlayer_endRace(void) {
    /* 0x805366d8() */
    /* goto 0x80536efc */
    /* cmpwi r31, -1 */
    /* if (cr0 ==) goto 0x80536dfc */
    /* r5 = r26+0x28 */
    /* extsb r0, r5 */
    /* cmpw r31, r0 */
    /* if (cr0 <=) goto 0x80536d04 */
    /* stb r31, 0x28(r26) */
    /* goto 0x80536df8 */
    /* r6 = r25+0x0 */
    /* r4 = r6+0x20 */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x80536d1c */
    /* r4 = r4+0x4 */
    /* goto 0x80536d20 */
    /* li r4, 0 */
    /* neg r0, r4 */
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */
    /* if (cr0 ==) goto 0x80536d54 */
    /* r4 = r6+0x1c */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x80536d44 */
    /* r4 = r4+0x4 */
    /* goto 0x80536d48 */
    /* li r4, 0 */
    /* neg r0, r4 */
    /* srwi r0, r0, 0x1f */
    /* cmpwi r0, 0 */
    /* extsb r5, r5 */
    /* if (cr0 ==) goto 0x80536d6c */
    /* r4 = r6+0x20 */
    /* r0 = r4+0xc */
    /* goto 0x80536d70 */
    /* li r0, -1 */
    /* extsb r0, r0 */
    /* cmpw r5, r0 */
    /* if (cr0 !=) goto 0x80536df8 */
    /* cmpwi r31, 0 */
    /* if (cr0 !=) goto 0x80536de0 */
    /* r7 = r3+0x4 */
    /* r6 = r28 */
    /* clrlwi r4, r27, 0x10 */
    /* li r5, 0 */
    /* mtctr r7 */
    /* cmpwi r7, 0 */
    /* if (cr0 <=) goto 0x80536dd4 */
    /* cmpw r5, r7 */
    /* if (cr0 >=) goto 0x80536db0 */
    /* r3 = r6+0x38 */
    /* goto 0x80536db4 */
    /* li r3, 0 */
    /* r0 = r3+0x1a */
    /* cmplw r4, r0 */
    /* if (cr0 !=) goto 0x80536dc8 */
    /* li r0, 1 */
    /* goto 0x80536dd8 */
    /* addi r6, r6, 0x18 */
    /* addi r5, r5, 1 */
    /* bdnz 0x80536da0 */
    /* li r0, 0 */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x80536df0 */
    /* r3, 0  (load upper immediate) */
    /* f0 = *(f32*)(r3+0x0) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80536cdc: 4b ff f9 fd              bl       0x805366d8 */
/* 0x80536ce0: 48 00 02 1c              b        0x80536efc */
/* 0x80536ce4: 2c 1f ff ff              cmpwi    r31, -1 */
/* 0x80536ce8: 41 82 01 14              beq      0x80536dfc */
/* 0x80536cec: 88 ba 00 28              lbz      r5, 0x28(r26) */
/* 0x80536cf0: 7c a0 07 74              extsb    r0, r5 */
/* 0x80536cf4: 7c 1f 00 00              cmpw     r31, r0 */
/* 0x80536cf8: 40 81 00 0c              ble      0x80536d04 */
/* 0x80536cfc: 9b fa 00 28              stb      r31, 0x28(r26) */
/* 0x80536d00: 48 00 00 f8              b        0x80536df8 */
/* 0x80536d04: 80 d9 00 00              lwz      r6, 0(r25) */
/* 0x80536d08: 80 86 00 20              lwz      r4, 0x20(r6) */
/* 0x80536d0c: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80536d10: 41 82 00 0c              beq      0x80536d1c */
/* 0x80536d14: a0 84 00 04              lhz      r4, 4(r4) */
/* 0x80536d18: 48 00 00 08              b        0x80536d20 */
/* 0x80536d1c: 38 80 00 00              li       r4, 0 */
/* 0x80536d20: 7c 04 00 d0              neg      r0, r4 */
/* 0x80536d24: 7c 00 23 78              or       r0, r0, r4 */
/* 0x80536d28: 54 00 0f ff              rlwinm.  r0, r0, 1, 0x1f, 0x1f */
/* 0x80536d2c: 41 82 00 28              beq      0x80536d54 */
/* 0x80536d30: 80 86 00 1c              lwz      r4, 0x1c(r6) */
/* 0x80536d34: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80536d38: 41 82 00 0c              beq      0x80536d44 */
/* 0x80536d3c: a0 84 00 04              lhz      r4, 4(r4) */
/* 0x80536d40: 48 00 00 08              b        0x80536d48 */
/* 0x80536d44: 38 80 00 00              li       r4, 0 */
/* 0x80536d48: 7c 04 00 d0              neg      r0, r4 */
/* 0x80536d4c: 7c 00 23 78              or       r0, r0, r4 */
/* 0x80536d50: 54 00 0f fe              srwi     r0, r0, 0x1f */
/* 0x80536d54: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80536d58: 7c a5 07 74              extsb    r5, r5 */
/* 0x80536d5c: 41 82 00 10              beq      0x80536d6c */
/* 0x80536d60: 80 86 00 20              lwz      r4, 0x20(r6) */
/* 0x80536d64: 88 04 00 0c              lbz      r0, 0xc(r4) */
/* 0x80536d68: 48 00 00 08              b        0x80536d70 */
/* 0x80536d6c: 38 00 ff ff              li       r0, -1 */
/* 0x80536d70: 7c 00 07 74              extsb    r0, r0 */
/* 0x80536d74: 7c 05 00 00              cmpw     r5, r0 */
/* 0x80536d78: 40 82 00 80              bne      0x80536df8 */
/* 0x80536d7c: 2c 1f 00 00              cmpwi    r31, 0 */
/* 0x80536d80: 40 82 00 60              bne      0x80536de0 */
/* 0x80536d84: a0 e3 00 04              lhz      r7, 4(r3) */
/* 0x80536d88: 7f 86 e3 78              mr       r6, r28 */
/* 0x80536d8c: 57 64 04 3e              clrlwi   r4, r27, 0x10 */
/* 0x80536d90: 38 a0 00 00              li       r5, 0 */
/* 0x80536d94: 7c e9 03 a6              mtctr    r7 */
/* 0x80536d98: 2c 07 00 00              cmpwi    r7, 0 */
/* 0x80536d9c: 40 81 00 38              ble      0x80536dd4 */
/* 0x80536da0: 7c 05 38 00              cmpw     r5, r7 */
/* 0x80536da4: 40 80 00 0c              bge      0x80536db0 */
/* 0x80536da8: 80 66 00 38              lwz      r3, 0x38(r6) */
/* 0x80536dac: 48 00 00 08              b        0x80536db4 */
/* 0x80536db0: 38 60 00 00              li       r3, 0 */
/* 0x80536db4: a0 03 00 1a              lhz      r0, 0x1a(r3) */
/* 0x80536db8: 7c 04 00 40              cmplw    r4, r0 */
/* 0x80536dbc: 40 82 00 0c              bne      0x80536dc8 */
/* 0x80536dc0: 38 00 00 01              li       r0, 1 */
/* 0x80536dc4: 48 00 00 14              b        0x80536dd8 */
/* 0x80536dc8: 38 c6 00 18              addi     r6, r6, 0x18 */
/* 0x80536dcc: 38 a5 00 01              addi     r5, r5, 1 */
/* 0x80536dd0: 42 00 ff d0              bdnz     0x80536da0 */
/* 0x80536dd4: 38 00 00 00              li       r0, 0 */
/* 0x80536dd8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80536ddc: 40 82 00 14              bne      0x80536df0 */
/* 0x80536de0: 3c 60 00 00              lis      r3, 0 */
/* 0x80536de4: c0 03 00 00              lfs      f0, 0(r3) */
#endif


/* === DISASSEMBLY === */

; Function: RaceinfoPlayer_endRace
; Demangled: RaceinfoPlayer_endRace
; Address: 0x80536cdc  (.text+0x24440)
; Size: 320 bytes

  0x80536cdc:  bl       0x805366d8
  0x80536ce0:  b        0x80536efc
  0x80536ce4:  cmpwi    r31, -1
  0x80536ce8:  beq      0x80536dfc
  0x80536cec:  lbz      r5, 0x28(r26)
  0x80536cf0:  extsb    r0, r5
  0x80536cf4:  cmpw     r31, r0
  0x80536cf8:  ble      0x80536d04
  0x80536cfc:  stb      r31, 0x28(r26)
  0x80536d00:  b        0x80536df8
  0x80536d04:  lwz      r6, 0(r25)
  0x80536d08:  lwz      r4, 0x20(r6)
  0x80536d0c:  cmpwi    r4, 0
  0x80536d10:  beq      0x80536d1c
  0x80536d14:  lhz      r4, 4(r4)
  0x80536d18:  b        0x80536d20
  0x80536d1c:  li       r4, 0
  0x80536d20:  neg      r0, r4
  0x80536d24:  or       r0, r0, r4
  0x80536d28:  rlwinm.  r0, r0, 1, 0x1f, 0x1f
  0x80536d2c:  beq      0x80536d54
  0x80536d30:  lwz      r4, 0x1c(r6)
  0x80536d34:  cmpwi    r4, 0
  0x80536d38:  beq      0x80536d44
  0x80536d3c:  lhz      r4, 4(r4)
  0x80536d40:  b        0x80536d48
  0x80536d44:  li       r4, 0
  0x80536d48:  neg      r0, r4
  0x80536d4c:  or       r0, r0, r4
  0x80536d50:  srwi     r0, r0, 0x1f
  0x80536d54:  cmpwi    r0, 0
  0x80536d58:  extsb    r5, r5
  0x80536d5c:  beq      0x80536d6c
  0x80536d60:  lwz      r4, 0x20(r6)
  0x80536d64:  lbz      r0, 0xc(r4)
  0x80536d68:  b        0x80536d70
  0x80536d6c:  li       r0, -1
  0x80536d70:  extsb    r0, r0
  0x80536d74:  cmpw     r5, r0
  0x80536d78:  bne      0x80536df8
  0x80536d7c:  cmpwi    r31, 0
  0x80536d80:  bne      0x80536de0
  0x80536d84:  lhz      r7, 4(r3)
  0x80536d88:  mr       r6, r28
  0x80536d8c:  clrlwi   r4, r27, 0x10
  0x80536d90:  li       r5, 0
  0x80536d94:  mtctr    r7
  0x80536d98:  cmpwi    r7, 0
  0x80536d9c:  ble      0x80536dd4
  0x80536da0:  cmpw     r5, r7
  0x80536da4:  bge      0x80536db0
  0x80536da8:  lwz      r3, 0x38(r6)
  0x80536dac:  b        0x80536db4
  0x80536db0:  li       r3, 0
  0x80536db4:  lhz      r0, 0x1a(r3)
  0x80536db8:  cmplw    r4, r0
  0x80536dbc:  bne      0x80536dc8
  0x80536dc0:  li       r0, 1
  0x80536dc4:  b        0x80536dd8
  0x80536dc8:  addi     r6, r6, 0x18
  0x80536dcc:  addi     r5, r5, 1
  0x80536dd0:  bdnz     0x80536da0
  0x80536dd4:  li       r0, 0
  0x80536dd8:  cmpwi    r0, 0
  0x80536ddc:  bne      0x80536df0
  0x80536de0:  lis      r3, 0
  0x80536de4:  lfs      f0, 0(r3)
